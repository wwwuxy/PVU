//Posit Vector Decode Unit
package pvu

import chisel3._
import chisel3.util._

class PositEncode(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int) extends Module {
  val es: Int         = 2
  val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int  = nd + es
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2

  val io = IO(new Bundle {
    val pir_sign = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp  = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac = Output(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W + 1.W)))
    val posit    = Input(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W)))
  })

}