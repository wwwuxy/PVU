//posit vector div unit

package pvu

import chisel3._
import chisel3.util._

class Div(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int) extends Module {
  val es: Int         = 2
  val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int  = nd + es + 1
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2
  val MUL_WIDTH: Int  = 2 * (ALIGN_WIDTH + 1)

  val io = IO(new Bundle {
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_i = Input(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
    val pir_frac2_i = Input(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))

    val pir_sign_o = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o  = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_o = Output(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  })

//异或运算计算符号
    for (i <- 0 until VECTOR_SIZE) {
        io.pir_sign_o(i)       := io.pir_sign1_i(i) ^ io.pir_sign2_i(i)
//计算尾数
        val intdivider          = Module(new IntDivider(ALIGN_WIDTH))
        intdivider.io.dividend := io.pir_frac1_i(i)
        intdivider.io.divisor  := io.pir_frac2_i(i)
        io.pir_frac_o(i)       := intdivider.io.quotient
//计算指数, 有符号减法
        io.pir_exp_o(i)        := io.pir_exp1_i(i) - io.pir_exp2_i(i)
    }
}