//Modified radix-4 booth wallace multiplier
package pvu

import chisel3._
import chisel3.util._

class Radix4BoothMultiplier(val WIDTH_A: Int,val WIDTH_B: Int) extends Module {
  // 根据给定参数计算 COUNT
  val WIDTH_O: Int = WIDTH_A +  WIDTH_B  // 默认为 WIDTH_A + WIDTH_B
  val COUNT: Int   = WIDTH_B / 2

  val io = IO(new Bundle {
    val operand_a = Input(UInt(WIDTH_A.W))
    val operand_b = Input(UInt(WIDTH_B.W))
    val sum_o     = Output(UInt(WIDTH_O.W))
    val carry_o   = Output(UInt(WIDTH_O.W))
  })

  // 生成部分积
  val genProds = Module(new GenProds(WIDTH_A, WIDTH_B))
  genProds.io.operand_a := io.operand_a
  genProds.io.operand_b := io.operand_b

  // 使用 csa_tree 将多个部分积进行并行压缩
  val csaTree = Module(new CsaTree(N = COUNT, WIDTH_I = WIDTH_O))
  csaTree.io.operands_i := genProds.io.partial_prods

  // 输出和与进位
  io.sum_o   := csaTree.io.sum_o
  io.carry_o := csaTree.io.carry_o
}
