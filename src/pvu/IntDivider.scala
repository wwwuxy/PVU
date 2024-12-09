package  pvu

import chisel3._
import chisel3.util._

// 整数除法模块：
// dividend, divisor都是FRAC_WIDTH位整数
// 输出为2*FRAC_WIDTH位Q定点数，具有FRAC_WIDTH个小数位
class IntDivider(val FRAC_WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val dividend = Input(UInt(FRAC_WIDTH.W))
    val divisor  = Input(UInt(FRAC_WIDTH.W))
    val quotient = Output(UInt((2*FRAC_WIDTH).W)) // Q定点数，2*FRAC_WIDTH位宽，FRAC_WIDTH个小数位
  })

  // 1. 求倒数
  val reciprocalMod = Module(new IntReciprocal(FRAC_WIDTH))
  reciprocalMod.io.num_i := io.divisor
  val reciprocal = reciprocalMod.io.reciprocal_o // 2*FRAC_WIDTH位，FRAC_WIDTH小数位

  // 2. 将dividend左移FRAC_WIDTH位，得到相同Q格式（2*FRAC_WIDTH位，FRAC_WIDTH小数位）
  val dividend_fixed = (io.dividend << FRAC_WIDTH)((2*FRAC_WIDTH)-1,0)

  // 3. 使用radix4BoothMultiplier进行乘法
  // 两个操作数均为2*FRAC_WIDTH位，结果为4*FRAC_WIDTH位
  val boothMult = Module(new Radix4BoothMultiplier(2*FRAC_WIDTH, 2*FRAC_WIDTH, 2*(2*FRAC_WIDTH)))
  boothMult.io.operand_a := dividend_fixed
  boothMult.io.operand_b := reciprocal

  val product = boothMult.io.sum_o + boothMult.io.carry_o // 4*FRAC_WIDTH位结果

  // 4. 右移FRAC_WIDTH位，缩回到2*FRAC_WIDTH位Q定点格式
  val quotient = (product >> FRAC_WIDTH)((2*FRAC_WIDTH)-1,0)

  io.quotient := quotient
}
