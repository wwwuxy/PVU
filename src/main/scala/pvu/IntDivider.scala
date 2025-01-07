package  pvu

import chisel3._
import chisel3.util._

// 整数除法模块：将除数转换为倒数，然后与被除数相乘
// 输出为2*WIDTH位Q定点数，具有WIDTH个小数位

class IntDivider(val WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val dividend = Input(UInt(WIDTH.W))
    val divisor  = Input(UInt(WIDTH.W))
    
    val quotient = Output(UInt((2*WIDTH).W)) // Q定点数，2*WIDTH位宽，WIDTH个小数位
  })

  // 1. 求倒数
  val reciprocalMod = Module(new IntReciprocal(WIDTH))
  reciprocalMod.io.num_i := io.divisor
  val reciprocal = reciprocalMod.io.reciprocal_o // 2*WIDTH位，WIDTH小数位

  // 2. 将dividend左移WIDTH位，得到相同Q格式（2*WIDTH位，WIDTH小数位）
  val dividend_fixed = (io.dividend << WIDTH)((2*WIDTH)-1,0)

  // 3. 使用radix4BoothMultiplier进行乘法
  // 两个操作数均为2*WIDTH位，结果为4*WIDTH位
  val boothMult = Module(new Radix4BoothMultiplier(2*WIDTH, 2*WIDTH))
  boothMult.io.operand_a := dividend_fixed
  boothMult.io.operand_b := reciprocal

  val product = boothMult.io.sum_o + boothMult.io.carry_o // 4*WIDTH位结果

  // 4. 右移WIDTH位，缩回到2*WIDTH位Q定点格式
  val quotient = (product >> WIDTH)((2*WIDTH)-1,0)

  io.quotient := quotient << WIDTH - 1
}
