package pvu

import chisel3._
import chisel3.util._
import chisel3.experimental._

class Decode(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int) extends Module {
  val es: Int = 2
  val nd: Int = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int = nd + es
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2

  val io = IO(new Bundle {
    val posit = Input(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W)))
    val Sign  = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val Exp   = Output(Vec(VECTOR_SIZE, UInt(EXP_WIDTH.W)))
    val Frac  = Output(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
  })

  // Handling symbols and operand
  val operand = Wire(Vec(VECTOR_SIZE, UInt((POSIT_WIDTH - 1).W))) // Remove the sign bit
  for (i <- 0 until VECTOR_SIZE) {
    io.Sign(i) := io.posit(i)(POSIT_WIDTH - 1)
    operand(i) := Mux(io.Sign(i) === 1.U, (~io.posit(i)(POSIT_WIDTH - 2, 0) + 1.U), io.posit(i)(POSIT_WIDTH - 2, 0))
  }

  // Count leading zeros
  val R0          = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val lzc_operand = Wire(Vec(VECTOR_SIZE, UInt((POSIT_WIDTH - 1).W)))
  val lzc         = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
  val lzc_zeros   = Wire(Vec(VECTOR_SIZE, UInt(1.W)))

  for (i <- 0 until VECTOR_SIZE) {
    R0(i)          := operand(i)(POSIT_WIDTH - 2)
    lzc_operand(i) := Mux(R0(i) === 1.U, ~operand(i), operand(i))
  }

  // Instantiate LZC module for each vector element
  for (i <- 0 until VECTOR_SIZE) {
    val lzcModule = Module(new LZC(POSIT_WIDTH - 1, true, nd))
    lzcModule.io.in_i := lzc_operand(i)
    lzc(i) := lzcModule.io.cnt_o
    lzc_zeros(i) := lzcModule.io.empty_o
  }

  // Get the regime value
  val same_length = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
  val regime_r    = Wire(Vec(VECTOR_SIZE, SInt((nd + 1).W)))

  for (i <- 0 until VECTOR_SIZE) {
    same_length(i) := Mux(lzc_zeros(i) === 1.U, (POSIT_WIDTH - 1).U, lzc(i))
    regime_r(i)    := Mux(R0(i) === 1.U, Cat(0.U, same_length(i) - 1.U), Cat(1.U, ~same_length(i) + 1.U)) // regime value, Convert negative numbers to two's complement
  }

  // Left shift the regime
  val operand_after_shift = Wire(Vec(VECTOR_SIZE, UInt((POSIT_WIDTH - 1).W)))

  for (i <- 0 until VECTOR_SIZE) {
    val barrel_shifter = Module(new BarrelShifter(POSIT_WIDTH - 1, nd, false))
    barrel_shifter.io.operand_i := operand(i)
    barrel_shifter.io.shift_amount := same_length(i) + 1.U
    operand_after_shift(i) := barrel_shifter.io.result_o
  }

  // Get the exponent value
  val es_value = Wire(Vec(VECTOR_SIZE, UInt(2.W)))
  for (i <- 0 until VECTOR_SIZE) {
    es_value(i) := Mux(lzc_zeros(i) === 1.U, 0.U, operand_after_shift(i)(POSIT_WIDTH - 2, POSIT_WIDTH - 3))
    io.Exp(i)   := (regime_r(i) << 2) | es_value(i)
  }

  // Extract the fraction
  val implicit_bits = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  for (i <- 0 until VECTOR_SIZE) {
    implicit_bits(i) := operand_after_shift(i)(POSIT_WIDTH - 2 - es, 2).orR // |operand_after_shift(i)(POSIT_WIDTH - 2 - es, 2)
    io.Frac(i) := Cat(implicit_bits(i), operand_after_shift(i)(POSIT_WIDTH - 2 - es, 2))
  }
}
