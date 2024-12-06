// CsaTree 模块
package pvu

import chisel3._
import chisel3.util._

class CsaTree(
  val N: Int,val WIDTH_I: Int) extends Module {
  val WIDTH_O: Int = WIDTH_I + log2Ceil(N) // 输出位宽
  val io = IO(new Bundle {
    val operands_i = Input(Vec(N, UInt(WIDTH_I.W)))
    val sum_o = Output(UInt(WIDTH_O.W))
    val carry_o = Output(UInt(WIDTH_O.W))
  })

  // 计算分割点
  val N_A = N / 2
  val N_B = N - N_A

  if (N == 1) {
    // N == 1 时，直接输出
    io.sum_o := io.operands_i(0)
    io.carry_o := 0.U
  }
  else if (N == 2) {
    // N == 2 时，sum_o = operands_i[0], carry_o = operands_i[1]
    io.sum_o := io.operands_i(0)
    io.carry_o := io.operands_i(1)
  }
  else if (N == 3) {
    // N == 3 时，使用 Compressor3to2
    val compressor = Module(new Compressor3to2(WIDTH_I, WIDTH_O))
    compressor.io.operands_i := io.operands_i
    io.sum_o := compressor.io.sum_o
    io.carry_o := compressor.io.carry_o
  }
  else if (N == 4) {
    // N == 4 时，使用 Compressor4to2
    val compressor = Module(new Compressor4to2(WIDTH_I, WIDTH_O))
    compressor.io.operands_i := io.operands_i
    io.sum_o := compressor.io.sum_o
    io.carry_o := compressor.io.carry_o
  }
  else {
    // N > 4 时，递归分割并压缩
    val operands_i_A = io.operands_i.slice(0, N_A)
    val operands_i_B = io.operands_i.slice(N_A, N)

    // 创建两个子 CSA 树
    val csa_tree_A = Module(new CsaTree(N_A, WIDTH_I))
    csa_tree_A.io.operands_i := operands_i_A

    val csa_tree_B = Module(new CsaTree(N_B, WIDTH_I))
    csa_tree_B.io.operands_i := operands_i_B

    // 将两个 CSA 树的输出作为 Compressor4to2 的输入
    val operands_i_C = Wire(Vec(4, UInt(WIDTH_O.W)))
    operands_i_C := VecInit(Seq(
      csa_tree_A.io.sum_o,
      csa_tree_A.io.carry_o,
      csa_tree_B.io.sum_o,
      csa_tree_B.io.carry_o
    ))

    // 使用 Compressor4to2 压缩
    val compressor = Module(new Compressor4to2(WIDTH_O, WIDTH_O)) //上一轮的输出为本轮的输入
    compressor.io.operands_i := operands_i_C
    io.sum_o := compressor.io.sum_o
    io.carry_o := compressor.io.carry_o
  }
}

