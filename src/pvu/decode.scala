package pvu

import chisel3._
import chisel3.util._
import chisel3.experimental._

class decode(POSIT_WIDTH:Int, VECTOR_SIZE:Int) extends Module{
    val es: Int         = 2
    val nd: Int         = log2Ceil(POSIT_WIDTH - 1) //log2Ceil的调用？
    val EXP_WIDTH: Int  = nd + es
    val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2     

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
        operand(i) := Mux(io.Sign(i) === 1.U, (~(io.posit(i)(POSIT_WIDTH.W -2.W, 0))+ 1), io.posit(i)(POSIT_WIDTH.W - 2.W, 0))
    }

    //Count leading zeros
    val R0          = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
    val lzc_operand = Wire(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W - 1.W)))
    val lzc         = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
    val lzc_zeros   = Wire(Vec(VECTOR_SIZE, UInt(1.W)))

    for(i <- 0 until VECTOR_SIZE){
        R0(i)          := operand(i)(POSIT_WIDTH.W - 2.W)
        lzc_operand(i) := Mux(R0(i) === 1.U, ~operand(i), operand(i))
    }

    val lzc = Module(new LZC(POSIT_WIDTH -1, true, nd))
    for(i <- 0 unit VECTOR_SIZE){
        lzc.io.in_i := lzc_operand(i)
        lzc(i) := lzc.io.cnt_o
        lzc_zeros(i) := lzc.io.empty_o
    }


    //get the regime value

    val same_lenth = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
    val regime_r   = Wire(Vec(VECTOR_SIZE, SInt(nd.W + 1.W)))

    for(i <- 0 until VECTOR_SIZE){
        same_lenth(i) := Mux(lzc_zeros(i) === 1.U, POSIT_WIDTH.U - 1.U, lzc(i))
        regime_r(i)   := Mux(R0(i) === 1.U, Cat(0.U, same_lenth(i) - 1.U), Cat(1.U, ~same_lenth(i) + 1))    //regime value, Convert negative numbers to two's complement
    }

    //Left shift the regime
    val operand_after_shift = Wire(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W - 1.W)))

    val barrel_shifter = Module(new BarrelShifter(POSIT_WIDTH - 1, nd, false))
    for(i <- 0 until VECTOR_SIZE){
        barrel_shifter.io.operand_i := operand(i)
        barrel_shifter.io.shift_amount := same_lenth(i) + 1.U
        operand_after_shift(i) := barrel_shifter.io.result_o
    }

    //Get the exponent value
    val es_value = Wire(Vec(VECTOR_SIZE, UInt(2.W)))
    for(i <- 0 until VECTOR_SIZE){
        es_value(i) := Mux(lzc_zeros(i) === 1.U, 0.U, operand_after_shift(i)(POSIT_WIDTH.W - 2.W, POSIT_WIDTH.W - 3.W))
        io.Exp(i)   := regime_r(i) << 2 | es_value(i)
    }

    //Extract the fraction
    val implicit_bits = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
    for(i <- 0 until VECTOR_SIZE){
        implicit_bits(i) := |operand(POSIT_WIDTH - 2, 0)
        io.Frac(i) := Cat{implicit_bits, operand_after_shift(POSIT_WIDTH - 2 - es, 2)}
    }
}

