// Compressor3to2 模块
package pvu

import chisel3._
import chisel3.util._

class Compressor3to2(val WIDTH_I: Int, val WIDTH_O: Int) extends Module {
  val io = IO(new Bundle {
    val operands_i = Input(Vec(3, UInt(WIDTH_I.W)))
    val sum_o      = Output(UInt(WIDTH_O.W))
    val carry_o    = Output(UInt(WIDTH_O.W))
  })

  // 逐位相加
  val sum = io.operands_i.reduce(_ ^ _) // 异或实现逐位求和
  val carry = (io.operands_i(0) & io.operands_i(1)) |
              (io.operands_i(1) & io.operands_i(2)) |
              (io.operands_i(0) & io.operands_i(2)) // 计算进位

  io.sum_o   := sum
  io.carry_o := carry
}

