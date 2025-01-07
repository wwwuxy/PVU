package pvu

import chisel3._
import chisel3.util._

// 整数倒数模块
class IntReciprocal(val WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val num_i = Input(UInt(WIDTH.W))        // 输入整数，位宽为WIDTH

    val reciprocal_o = Output(UInt((2*WIDTH).W)) // 输出倒数，Q(1+WIDTH).WIDTH格式
  })

  // printf("num_i = %d\n", io.num_i)

  val num = io.num_i
  // 初始近似值 x0 = (1 << WIDTH) / num
  // (1 << WIDTH) 表示定点中的1.0
  val one_fixed = (BigInt(1) << WIDTH).U((2*WIDTH).W)
  val x0 = (one_fixed / num).asUInt // Q(1+WIDTH).WIDTH格式的初始值

  def nrIter(x: UInt, num: UInt): UInt = {
    // 定点格式：
    // x是Q(1+WIDTH).WIDTH，宽度=2*WIDTH
    // num是整数(WIDTH位)，可视为Q(WIDTH).0，即整数部分为WIDTH位，无小数位。

    // num * x:
    // num是U(WIDTH)
    // x是Q(1+WIDTH).WIDTH（2*WIDTH位, 低WIDTH位为小数）
    // num*x的结果仍为Q(1+WIDTH).WIDTH格式(2*WIDTH位)
    val num_x = (num * x)((2*WIDTH)-1,0)

    // two = 2.0 = 2 << WIDTH (Q(1+WIDTH).WIDTH格式下的2.0)
    val two = (BigInt(2) << WIDTH).U((2 * WIDTH).W)
    //val two = (2.U << WIDTH)((2*WIDTH)-1,0)

    // diff = (2 - num*x)
    val diff = two - num_x

    // x*(2 - num*x)
    // x和diff都是Q(1+WIDTH).WIDTH格式
    // 相乘后为Q(2*(1+WIDTH)).(2*WIDTH)=Q(2+2*WIDTH)
    // 实际需要64位存储，但由于这里WIDTH自定义，建议使用64位足够大(当WIDTH <= 32)
    val x_new_full = (x * diff)
    // 相乘结果相对于x和diff都是Q(1+WIDTH).WIDTH,两个加起来小数位总共2*WIDTH, 
    // 右移WIDTH即可回到Q(1+WIDTH).WIDTH格式
    val x_new = (x_new_full >> WIDTH)((2*WIDTH)-1,0)
    x_new
  }

  // 迭代次数可根据需要调整
  // 一般2~4次迭代可达到较高精度
  val x1 = nrIter(x0, num)
  val x2 = nrIter(x1, num)
  val x3 = nrIter(x2, num)

  // 使用x3作为最终倒数近似值
  io.reciprocal_o := x3

  // printf("reciprocal_o = %d\n", io.reciprocal_o)
}


