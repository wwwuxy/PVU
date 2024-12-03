// Alignment factorial for dot-product

package pvu

import chisel3._
import chisel3.util._

class FractionCompare(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int) extends Module {
  // Fixed parameters
  val es: Int         = 2
  val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int  = nd + es
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2
  
  val io = IO(new Bundle {
    val pir_frac_i     = Input(Vec(VECTOR_SIZE, UInt(2 * FRAC_WIDTH.W)))
    val pir_exp_i      = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_align = Output(Vec(VECTOR_SIZE, UInt(2 *ALIGN_WIDTH.W)))
    val pir_max_exp    = Output(SInt(EXP_WIDTH.W))      //for encode and fraction_normalize 
  })

  // Calculate the maximum exponent of each vector element
    val comptree = Module(new CompTree(VECTOR_SIZE, EXP_WIDTH))
    comptree.io.operands_i := io.pir_exp_i
    io.pir_max_exp         := comptree.io.result_o

  // Align score to ALIGN_WIDTH
    val frac_shifted = Wire(Vec(VECTOR_SIZE, UInt(2 * ALIGN_WIDTH.W)))
    if(ALIGN_WIDTH > FRAC_WIDTH){
      for(i <- 0 until VECTOR_SIZE){
        frac_shifted(i) := io.pir_frac_i(i) << (ALIGN_WIDTH - FRAC_WIDTH)
      }
    } else {
      for(i <- 0 until VECTOR_SIZE){
        frac_shifted(i) := io.pir_frac_i(i) >> (FRAC_WIDTH - ALIGN_WIDTH)
      }
    }

  // Calculate the amount of shift required and ensure shift_amount <= ALIGN_WIDTH
  for(i <- 0 until VECTOR_SIZE){
    val shift_amount = (io.pir_max_exp - io.pir_exp_i(i)).max(0.S)
    io.pir_frac_align(i) := frac_shifted(i) << Mux(shift_amount > ALIGN_WIDTH.S, ALIGN_WIDTH.S, shift_amount)
  }

}