package pvu

import chisel3._
import chisel3.util._

class Counter5to3 extends Module {
  val io = IO(new Bundle {
    val x1   = Input(Bool())
    val x2   = Input(Bool())
    val x3   = Input(Bool())
    val x4   = Input(Bool())
    val cin  = Input(Bool())

    val sum   = Output(Bool())
    val carry = Output(Bool())
    val cout  = Output(Bool())
  })

  val sumWire   = io.x1 ^ io.x2 ^ io.x3 ^ io.x4 ^ io.cin
  val coutWire  = ((io.x1 ^ io.x2) & io.x3) | (~(io.x1 ^ io.x2) & io.x1)
  val carryWire = ((io.x1 ^ io.x2 ^ io.x3 ^ io.x4) & io.cin) | 
                  (~(io.x1 ^ io.x2 ^ io.x3 ^ io.x4) & io.x4)

  io.sum   := sumWire
  io.carry := carryWire
  io.cout  := coutWire
}

class Compressor4to2(val WIDTH_I: Int, val WIDTH_O: Int) extends Module {
  
  val io = IO(new Bundle {
    val operands_i = Input(Vec(4, UInt(WIDTH_I.W)))
    val sum_o      = Output(UInt(WIDTH_O.W))
    val carry_o    = Output(UInt(WIDTH_O.W))
  })

  // 用来逐位调用 5:3 计数器
  val sumVec   = Wire(Vec(WIDTH_I, Bool()))
  val carryVec = Wire(Vec(WIDTH_I, Bool()))
  val coutVec  = Wire(Vec(WIDTH_I, Bool()))
  val cinVec   = Wire(Vec(WIDTH_I + 1, Bool()))

  // 初始进位 (cin) 置 0
  cinVec(0) := false.B

  // 实例化多个 5:3 counter，并做级联连接
  for (i <- 0 until WIDTH_I) {
    val counter = Module(new Counter5to3)
    counter.io.x1  := io.operands_i(0)(i)
    counter.io.x2  := io.operands_i(1)(i)
    counter.io.x3  := io.operands_i(2)(i)
    counter.io.x4  := io.operands_i(3)(i)
    counter.io.cin := cinVec(i)

    sumVec(i)   := counter.io.sum
    carryVec(i) := counter.io.carry
    coutVec(i)  := counter.io.cout

    // 下一级的 cin 来自本级的 cout
    cinVec(i + 1) := counter.io.cout
  }

  // 最后一位的 carry + cin 可能进位 2 bit（加法结果可能达到 "10"）
  val carryTemp = Wire(UInt(2.W))
  carryTemp := carryVec(WIDTH_I - 1).asUInt + cinVec(WIDTH_I).asUInt

  // sum_o 直接是所有 sumVec 组合成的宽度为 WIDTH_I 的结果(低 WIDTH_I bits)，
  // 再留高 2 bits 用于后续扩展（或置 0）。
  // 这里把高 2 bits 置 0，则 sum_o = {0, sumVec}，与 Verilog 里保持一致；
  // 当然也可以只保持 WIDTH_I 位看需求。
  val sumCat = Wire(UInt(WIDTH_I.W))
  sumCat := sumVec.asUInt
  io.sum_o := sumVec.asUInt   // 也可以只用 sumVec.asUInt，如果需要占满 outWIDTH_I，可以改写

  // carry_o = {carryTemp[1:0], carryVec[WIDTH_I-2:0], 1'b0}
  // Verilog 中:
  //   assign carry_o = {carry_temp, carry[WIDTH_I_I-2:0], 1'b0};
  // 这里按照相同的格式拼接。
  val carryCat = Wire(UInt(WIDTH_I.W))
  carryCat := carryVec.asUInt
  io.carry_o := Cat(carryTemp, carryCat(WIDTH_I - 2, 0), 0.U(1.W))
}

