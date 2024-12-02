  //posit vector decode unit

packet pvu

import chisel3._
import chisel3.util._
import chisel3.experimental._

class Lzc extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val width   = Input(UInt(POSIT_WIDTH.W))
    val mode    = Input(UInt(1.W))
    val in_i    = Output(UInt(POSIT_WIDTH.W - 1.W))
    val cnt_o   = Output(UInt(nd-1.W))
    val empty_o = Output(UInt(1.W))
  })
    addResource("../resources/lzc.v")
}


class decode(POSIT_WIDTH:Int, VECTOR_SIZE:Int) extends Module{
    val es: Int         = 2
    val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
    val EXP_WIDTH: Int  = nd + es
    val FRAC_WIDTH: Int = POSIT_WIDTH - es - 3       // 1 sign bit, 2 regime bits

  val io = IO(new Bundle {
    val posit = Input(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W)))
    val Sign  = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val Exp   = Output(Vec(VECTOR_SIZE, UInt(EXP_WIDTH.W)))
    val Frac  = Output(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
  })

                                                                     //Handling symbols and operand
    val operand = Wire(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W - 1.W)))  //Remove the sign bit
    for(i <- 0 until VECTOR_SIZE){
        io.Sign(i) := io.posit(i)(POSIT_WIDTH - 1)
        operand(i) := io.Sign ? (~(io.posit(i)(POSIT_WIDTH.W -2.W, 0))+ 1) : io.posit(i)(POSIT_WIDTH.W - 2.W, 0)
    }

      //Count leading zeros
    val reg_sign    = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
    val lzc_operand = Wire(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W - 1.W)))
    val lzc         = Wire(Vec(VECTOR_SIZE, UInt(nd - 2.W)))
    val lzc_zeros   = Wire(Vec(VECTOR_SIZE, UInt(1.W)))

    for(i <- 0 until VECTOR_SIZE){
        reg_sign(i)    := operand(i)(POSIT_WIDTH.W - 2.W)
        lzc_operand(i) := reg_sign ? (~operand) : operand
    }

    val lzc = Module(new Lzc)
    for(i <- 0 until VECTOR_SIZE){
        lzc.io.width := POSIT_WIDTH.U
        lzc.io.mode  := 1.U
        lzc.io.in_i  := lzc_operand(i)
        lzc_zeros(i) := lzc.io.empty_o
        lzc(i)       := lzc.io.cnt_o
    }



}

