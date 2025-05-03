//Posit Vector Add
package pvu

import chisel3._
import chisel3.util._

class Add(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module { // # Posit向量加法单元
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1

  val io = IO(new Bundle {
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_aligned = Input(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
    val pir_frac2_aligned = Input(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
    val pir_sign_o = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_o = Output(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
    val overflow = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val frac_truncate = Output(Vec(VECTOR_SIZE, UInt(1.W)))
  })

  for (i <- 0 until VECTOR_SIZE) {
    val same_sign = io.pir_sign1_i(i) === io.pir_sign2_i(i) // # 检查符号位是否相同
    
    when (same_sign) { // # 同号执行加法
      val sum = io.pir_frac1_aligned(i) +& io.pir_frac2_aligned(i)
      val carry = sum(ALIGN_WIDTH) // # 检查进位
      
      // # 如果有进位，尾数右移一位，指数加一
      io.pir_sign_o(i) := io.pir_sign1_i(i)
      io.pir_exp_o(i) := Mux(carry, io.pir_exp1_i(i) + 1.S, io.pir_exp1_i(i))
      io.pir_frac_o(i) := Mux(carry, sum >> 1, sum(ALIGN_WIDTH - 1, 0))
      
      // # 设置溢出标志和尾数截断标志
      io.overflow(i) := carry
      io.frac_truncate(i) := (carry.asBool && sum(ALIGN_WIDTH - 1, 0).orR).asUInt
    } .otherwise { // # 异号执行减法
      val mant1 = io.pir_frac1_aligned(i)
      val mant2 = io.pir_frac2_aligned(i)
      val mant1_greater = mant1 > mant2
      
      // # 计算尾数差值
      io.pir_frac_o(i) := Mux(mant1_greater, mant1 - mant2, mant2 - mant1)
      io.pir_sign_o(i) := Mux(mant1_greater, io.pir_sign1_i(i), io.pir_sign2_i(i))
      io.pir_exp_o(i) := io.pir_exp1_i(i)
      io.overflow(i) := 0.U
      io.frac_truncate(i) := 0.U
    }
  }
}
