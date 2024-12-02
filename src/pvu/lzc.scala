packet pvu

import chisel3._
import chisel3.util._

class LZC(val WIDTH: Int, val MODE: Boolean, val CNT_WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val in_i = Input(UInt(WIDTH.W))
    val cnt_o = Output(UInt(CNT_WIDTH.W))
    val empty_o = Output(Bool())
  })

  // Handle single-bit input case
  when (WIDTH === 1) {
    io.cnt_o := !io.in_i
    io.empty_o := !io.in_i
  } otherwise {
    // Calculate number of levels based on input width
    val NumLevels = log2Ceil(WIDTH)

    // Assertions for valid input
    assert(WIDTH > 0, "Input must be at least one bit wide")

    // Internal signals
    val index_lut = Reg(Vec(WIDTH, UInt(NumLevels.W)))
    val sel_nodes = Reg(Vec(1 << NumLevels, Bool()))
    val index_nodes = Reg(Vec(1 << NumLevels, UInt(NumLevels.W)))
    val in_tmp = Reg(UInt(WIDTH.W))

    // Reverse vector for trailing zero count
    when (MODE) {
      for (i <- 0 until WIDTH) {
        in_tmp(i) := io.in_i(WIDTH - 1 - i)
      }
    } otherwise {
      in_tmp := io.in_i
    }

    // Initialize index lookup table
    for (j <- 0 until WIDTH) {
      index_lut(j) := j.U(NumLevels.W)
    }

    // Logic for different levels
    for (level <- 0 until NumLevels) {
      if (level == NumLevels - 1) {
        // Last level logic
        for (k <- 0 until (1 << level)) {
          if (2 * k < WIDTH - 1) {
            // Two successive indices
            sel_nodes(2 * level - 1 + k) := in_tmp(2 * k) | in_tmp(2 * k + 1)
            index_nodes(2 * level - 1 + k) := Mux(in_tmp(2 * k), index_lut(2 * k), index_lut(2 * k + 1))
          } else if (2 * k == WIDTH - 1) {
            // Only first index
            sel_nodes(2 * level - 1 + k) := in_tmp(2 * k)
            index_nodes(2 * level - 1 + k) := index_lut(2 * k)
          } else {
            // Out of range
            sel_nodes(2 * level - 1 + k) := false.B
            index_nodes(2 * level - 1 + k) := 0.U
          }
        }
      } else {
        // Intermediate levels logic
        for (l <- 0 until (1 << level)) {
          sel_nodes(2 * level - 1 + l) := sel_nodes((2 * level + 1) - 1 + 2 * l) | sel_nodes((2 * level + 1) - 1 + 2 * l + 1)
          index_nodes(2 * level - 1 + l) := Mux(sel_nodes((2 * level + 1) - 1 + 2 * l), index_nodes((2 * level + 1) - 1 + 2 * l), index_nodes((2 * level + 1) - 1 + 2 * l + 1))
        }
      }
    }

    // Output assignments
    io.cnt_o := Mux(NumLevels > 0.U, index_nodes(0), 0.U(CNT_WIDTH.W))
    io.empty_o := Mux(NumLevels > 0.U, ~sel_nodes(0), ~io.in_i.asBool)
  }
}
