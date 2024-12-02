packet pvu

import chisel3._
import chisel3.util._

class BarrelShifter(val WIDTH: Int, val SHIFT_WIDTH: Int, val MODE: Boolean) extends Module {
  val io = IO(new Bundle {
    val operand_i = Input(UInt(WIDTH.W))
    val shift_amount = Input(UInt(SHIFT_WIDTH.W))
    val result_o = Output(UInt(WIDTH.W))
  })

  val temp_results = RegInit(VecInit(Seq.fill(SHIFT_WIDTH)(0.U(WIDTH.W))))

  when (MODE) {
    // Right shift
    temp_results(SHIFT_WIDTH-1) := io.operand_i
    for (i <- SHIFT_WIDTH-1 to 1 by -1) {
      temp_results(i-1) := Mux(io.shift_amount(i), temp_results(i) >> (1 << i), temp_results(i))
    }
    io.result_o := Mux(io.shift_amount(0), temp_results(0) >> 1, temp_results(0))
  }.otherwise {
    // Left shift
    temp_results(SHIFT_WIDTH-1) := io.operand_i
    for (i <- SHIFT_WIDTH-1 to 1 by -1) {
      temp_results(i-1) := Mux(io.shift_amount(i), temp_results(i) << (1 << i), temp_results(i))
    }
    io.result_o := Mux(io.shift_amount(0), temp_results(0) << 1, temp_results(0))
  }
}

