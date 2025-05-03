//Posit Vector Mul Unit
package pvu

import chisel3._
import chisel3.util._

class Mul(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int  = nd + ES + 1 
  var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3
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

  val maxExp = ((1.U << (EXP_WIDTH - 1)) - 1.U).asSInt

  for (i <- 0 until VECTOR_SIZE) {
    io.pir_sign_o(i) := io.pir_sign1_i(i) ^ io.pir_sign2_i(i)
    
    val multiplier = Module(new Radix4BoothMultiplier(FRAC_WIDTH+1, FRAC_WIDTH+1))
    multiplier.io.operand_a := io.pir_frac1_i(i)
    multiplier.io.operand_b := io.pir_frac2_i(i)
    val product = multiplier.io.sum_o + multiplier.io.carry_o
    
    val expSum = io.pir_exp1_i(i) +& io.pir_exp2_i(i)
    val overflow = expSum(EXP_WIDTH)
    
    io.pir_exp_o(i) := Mux(overflow === 1.U, maxExp, expSum(EXP_WIDTH - 1, 0).asSInt)
    io.pir_frac_o(i) := Mux(overflow === 1.U, 0.U, product)
  }
}
