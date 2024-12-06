/**
  * BoothEncoder 模块实现了 Radix-4 Booth 编码逻辑。
  * 
  * 输入:
  * - code: 3 位操作码
  * 
  * 输出:
  * - neg: 是否为负操作 (-1*A 或 -2*A)
  * - zero: 是否为零操作 (0)
  * - one: 是否为 +1*A 或 -1*A
  * - two: 是否为 +2*A 或 -2*A
  */
package pvu

import chisel3._
import chisel3.util._


class BoothEncoder extends Module {
  val io = IO(new Bundle {
    val code = Input(UInt(3.W))  // 3 位操作码
    val neg  = Output(Bool())    // 负操作指示
    val zero = Output(Bool())    // 零操作指示
    val one  = Output(Bool())    // +1*A 或 -1*A 指示
    val two  = Output(Bool())    // +2*A 或 -2*A 指示
  })

  // 计算 neg 信号
  // 当 code 为 100、101、110 时，neg = 1
  io.neg := (io.code(2) & ~io.code(0)) | (io.code(2) & ~io.code(1))

  // 计算 zero 信号
  // 当 code 为 000 或 111 时，zero = 1
  io.zero := (~io.code.orR) | (io.code.andR)

  // 计算 two 信号
  // 当 code 为 011 或 100 时，two = 1
  io.two := (~io.code(2) & io.code(1) & io.code(0)) | (io.code(2) & ~io.code(1) & ~io.code(0))

  // 计算 one 信号
  // 当 code 为 001、010、101、110 时，one = 1
  io.one := (io.code(1) & ~io.code(0)) | (~io.code(1) & io.code(0))
}


