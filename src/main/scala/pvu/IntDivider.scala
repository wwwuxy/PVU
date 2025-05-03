package pvu

import chisel3._
import chisel3.util._

// Integer division module: convert the divisor to its reciprocal, then multiply it by the dividend
// Output is a 2*width q fixed-point number with width decimal places.

class IntDivider(val WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val dividend = Input(UInt(WIDTH.W))
    val divisor = Input(UInt(WIDTH.W))
    val quotient = Output(UInt((2*WIDTH).W))
  })

  val reciprocalMod = Module(new IntReciprocal(WIDTH))
  reciprocalMod.io.num_i := io.divisor
  
  val boothMult = Module(new Radix4BoothMultiplier(2*WIDTH, 2*WIDTH))
  boothMult.io.operand_a := (io.dividend << WIDTH)((2*WIDTH)-1,0)
  boothMult.io.operand_b := reciprocalMod.io.reciprocal_o
  
  io.quotient := ((boothMult.io.sum_o + boothMult.io.carry_o) >> WIDTH)((2*WIDTH)-1,0) << WIDTH - 1
}
