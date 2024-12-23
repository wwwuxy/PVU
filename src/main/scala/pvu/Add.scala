//Posit Vector Add
package pvu

import chisel3._
import chisel3.util._

class Add(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int) extends Module {
  val es: Int         = 2
  val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int  = nd + es + 1 
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2

  val io = IO(new Bundle {
    val pir_sign1_i       = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i       = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i        = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i        = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_aligned = Input(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
    val pir_frac2_aligned = Input(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))

    val pir_sign_o    = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o     = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_o    = Output(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
    val overflow      = Output(Vec(VECTOR_SIZE, UInt(1.W)))  // Overflow flag
    val frac_truncate = Output(Vec(VECTOR_SIZE, UInt(1.W)))  // Fraction_Truncate flag
  })

//检查符号位,相同则加法,不同则减法
  val diff_sign = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  for (i <- 0 until VECTOR_SIZE) {
    diff_sign(i) := Mux(io.pir_sign1_i(i) === io.pir_sign2_i(i), 0.U, 1.U)
  }

//进行加法操作
  for (i <- 0 until VECTOR_SIZE) {
  when (diff_sign(i) === 0.U) { // 符号相同，执行加法
    // 执行带进位的加法
    val sum   = io.pir_frac1_aligned(i) +& io.pir_frac2_aligned(i)
    val carry = sum(FRAC_WIDTH)                                     // 检查进位

    // 如果有进位，尾数右移一位 并 指数加一
    val new_frac = Mux(carry, sum >> 1, sum(FRAC_WIDTH - 1, 0))
    val new_exp  = Mux(carry, io.pir_exp1_i(i) + 1.S, io.pir_exp1_i(i))

    // 赋值结果符号、指数和尾数
    io.pir_sign_o(i) := io.pir_sign1_i(i)
    io.pir_exp_o(i)  := new_exp
    io.pir_frac_o(i) := new_frac

    // 设置溢出标志
    io.overflow(i) := carry

    // 设置尾数截断标志：如果有进位且尾数中有1
    io.frac_truncate(i) := (carry.asBool && sum(FRAC_WIDTH - 1, 0).orR).asUInt
  } .otherwise { // 符号不同，执行减法
    // 确定哪个尾数更大
    val mant1         = io.pir_frac1_aligned(i)
    val mant2         = io.pir_frac2_aligned(i)
    val mant1_greater = (mant1 > mant2)

    // 计算尾数差
    val mant_diff = Mux(mant1_greater, mant1 - mant2, mant2 - mant1)
    io.pir_frac_o(i) := mant_diff

    // 确定结果的符号
    val res_sign = Mux(mant1_greater, io.pir_sign1_i(i), io.pir_sign2_i(i))
    io.pir_sign_o(i) := res_sign

    //减法指数不变
    io.pir_exp_o(i)     := io.pir_exp1_i(i)
    io.overflow(i)      := 0.U
    io.frac_truncate(i) := 0.U
    }
  }
}
