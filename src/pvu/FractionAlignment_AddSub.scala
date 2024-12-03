//Alignment factorial for add sub

package pvu

import chisel3._
import chisel3.util._

class FractionCompare(val WIDTH: Int,  val VECTOR_SIZE: Int) extends Module {
  val io = IO(new Bundle {
    val posit_frac1_i = Input(VECTOR_SIZE.W, UInt(WIDTH.W))
    val posit_frac2_i = Input(VECTOR_SIZE.W, UInt(WIDTH.W))
    val posit_frac1_o = Output(VECTOR_SIZE.W, UInt(WIDTH.W))
    val posit_frac2_o = Output(VECTOR_SIZE.W, UInt(WIDTH.W))
  })



}