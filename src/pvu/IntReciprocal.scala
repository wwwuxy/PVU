package pvu

import chisel3._
import chisel3.util._

// 整数倒数模块
class IntReciprocal(val FRAC_WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val num_i = Input(UInt(FRAC_WIDTH.W))        // 输入整数，位宽为FRAC_WIDTH
    val reciprocal_o = Output(UInt((2*FRAC_WIDTH).W)) // 输出倒数，Q(1+FRAC_WIDTH).FRAC_WIDTH格式
  })

  val num = io.num_i
  // 初始近似值 x0 = (1 << FRAC_WIDTH) / num
  // (1 << FRAC_WIDTH) 表示定点中的1.0
  val one_fixed = (BigInt(1) << FRAC_WIDTH).U((2*FRAC_WIDTH).W)
  val x0 = (one_fixed / num).asUInt // Q(1+FRAC_WIDTH).FRAC_WIDTH格式的初始值

  def nrIter(x: UInt, num: UInt): UInt = {
    // 定点格式：
    // x是Q(1+FRAC_WIDTH).FRAC_WIDTH，宽度=2*FRAC_WIDTH
    // num是整数(FRAC_WIDTH位)，可视为Q(FRAC_WIDTH).0，即整数部分为FRAC_WIDTH位，无小数位。

    // num * x:
    // num是U(FRAC_WIDTH)
    // x是Q(1+FRAC_WIDTH).FRAC_WIDTH（2*FRAC_WIDTH位, 低FRAC_WIDTH位为小数）
    // num*x的结果仍为Q(1+FRAC_WIDTH).FRAC_WIDTH格式(2*FRAC_WIDTH位)
    val num_x = (num * x)((2*FRAC_WIDTH)-1,0)

    // two = 2.0 = 2 << FRAC_WIDTH (Q(1+FRAC_WIDTH).FRAC_WIDTH格式下的2.0)
    val two = (2.U << FRAC_WIDTH)((2*FRAC_WIDTH)-1,0)

    // diff = (2 - num*x)
    val diff = two - num_x

    // x*(2 - num*x)
    // x和diff都是Q(1+FRAC_WIDTH).FRAC_WIDTH格式
    // 相乘后为Q(2*(1+FRAC_WIDTH)).(2*FRAC_WIDTH)=Q(2+2*FRAC_WIDTH)
    // 实际需要64位存储，但由于这里FRAC_WIDTH自定义，建议使用64位足够大(当FRAC_WIDTH <= 32)
    val x_new_full = (x * diff)
    // 相乘结果相对于x和diff都是Q(1+FRAC_WIDTH).FRAC_WIDTH,两个加起来小数位总共2*FRAC_WIDTH, 
    // 右移FRAC_WIDTH即可回到Q(1+FRAC_WIDTH).FRAC_WIDTH格式
    val x_new = (x_new_full >> FRAC_WIDTH)((2*FRAC_WIDTH)-1,0)
    x_new
  }

  // 迭代次数可根据需要调整
  // 一般2~4次迭代可达到较高精度
  val x1 = nrIter(x0, num)
  val x2 = nrIter(x1, num)
  val x3 = nrIter(x2, num)

  // 使用x3作为最终倒数近似值
  io.reciprocal_o := x3
}


