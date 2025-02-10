// Alignment factorial for dot-product

package pvu

import chisel3._
import chisel3.util._

class FractionAlignment_DotProduct(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int  = nd + ES + 1
  var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3
  var MUL_WIDTH: Int  = 2 * (FRAC_WIDTH + 1)
  
  val io = IO(new Bundle {
    val pir_frac_i     = Input(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
    val pir_exp_i      = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))

    val pir_frac_align = Output(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
    val pir_max_exp    = Output(SInt(EXP_WIDTH.W))
  })

  // 计算每个向量元素的最大指数
    val comptree = Module(new CompTree(VECTOR_SIZE, EXP_WIDTH))
    comptree.io.operands_i := io.pir_exp_i
    io.pir_max_exp         := comptree.io.result_o

  // 计算所需的移位量并确保 shift_amount <= ALIGN_WIDTH
  val shift_amount = Wire(Vec(VECTOR_SIZE, UInt(EXP_WIDTH.W)))

  for(i <- 0 until VECTOR_SIZE){
    shift_amount(i) := (io.pir_max_exp - io.pir_exp_i(i)).asUInt //取与0的最大值 ---> 防御性编程
    io.pir_frac_align(i) := io.pir_frac_i(i) >> Mux(shift_amount(i) > ALIGN_WIDTH.U, ALIGN_WIDTH.U, shift_amount(i))
  }
}