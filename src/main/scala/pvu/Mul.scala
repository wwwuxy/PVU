//Posit Vector Mul Unit
package pvu

import chisel3._
import chisel3.util._

class Mul(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int) extends Module {
  var es: Int         = 2
  var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int  = nd + es + 1 
  var FRAC_WIDTH: Int = POSIT_WIDTH - es - 3
  var MUL_WIDTH: Int  = 2 * (FRAC_WIDTH + 1)

  val io = IO(new Bundle {
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_i = Input(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH+1).W)))
    val pir_frac2_i = Input(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH+1).W)))

    val pir_sign_o = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o  = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_o = Output(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  })

  //异或运算计算符号
  for (i <- 0 until VECTOR_SIZE) {
      io.pir_sign_o(i) := io.pir_sign1_i(i) ^ io.pir_sign2_i(i)
  }

  //计算尾数
  val sum_frac = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val carry    = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val frac     = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))

  for (i <- 0 until VECTOR_SIZE) {
    val radix4BoothMultiplier = Module(new Radix4BoothMultiplier(FRAC_WIDTH+1, FRAC_WIDTH+1))
    radix4BoothMultiplier.io.operand_a := io.pir_frac1_i(i)
    radix4BoothMultiplier.io.operand_b := io.pir_frac2_i(i)
    sum_frac(i)                        := radix4BoothMultiplier.io.sum_o
    carry(i)                           := radix4BoothMultiplier.io.carry_o
    frac(i)                            := (sum_frac(i) + carry(i)) << 1         //左移一位进行缩放，后续尾数标准化时指数减一
  }


  //计算指数
  // 定义最大指数值,处理指数溢出时
  val maxExp = ((1.U << (EXP_WIDTH - 1)) - 1.U).asSInt

  for (i <- 0 until VECTOR_SIZE) {
    val sum   = io.pir_exp1_i(i) +& io.pir_exp2_i(i)
    val carry = sum(EXP_WIDTH)

   io.pir_exp_o(i)  := Mux(carry === 1.U, maxExp, sum(EXP_WIDTH - 1, 0).asSInt)
   io.pir_frac_o(i) := Mux(carry === 1.U, 0.U, frac(i)) //溢出时尾数为0
  }

  // printf("mul result:\n")
  // printf("pir_sign_o = %b\n", io.pir_sign_o(0))
  // printf("pir_exp_o = %b\n", io.pir_exp_o(0))
  // printf("pir_frac_o = %b\n", io.pir_frac_o(0))
}
