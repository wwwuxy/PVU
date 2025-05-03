//Posit Dot_Product Unit
package pvu

import chisel3._
import chisel3.util._

class DotProduct(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int, val ES:Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3
  var MUL_WIDTH: Int = 2 * (FRAC_WIDTH + 1)
  val SUM_WIDTH: Int = MUL_WIDTH + log2Ceil(VECTOR_SIZE)

  val io = IO(new Bundle {
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_i = Input(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH+1).W)))
    val pir_frac2_i = Input(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH+1).W)))
    val pir_sign_o = Output(UInt(1.W))
    val pir_exp_o = Output(SInt(EXP_WIDTH.W))
    val pir_frac_o = Output(UInt((SUM_WIDTH+1).W))
  })

  // # 使用乘法模块执行向量乘法
  val mul = Module(new Mul(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
  mul.io.pir_sign1_i := io.pir_sign1_i
  mul.io.pir_sign2_i := io.pir_sign2_i
  mul.io.pir_exp1_i := io.pir_exp1_i
  mul.io.pir_exp2_i := io.pir_exp2_i
  mul.io.pir_frac1_i := io.pir_frac1_i
  mul.io.pir_frac2_i := io.pir_frac2_i
  
  // # 处理零输入情况
  val pir_frac_mul = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val pir_exp_mul = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_sign_mul = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  
  for(i <- 0 until VECTOR_SIZE) {
    pir_sign_mul(i) := mul.io.pir_sign_o(i)
    pir_exp_mul(i) := mul.io.pir_exp_o(i)
    pir_frac_mul(i) := mul.io.pir_frac_o(i)
    when((io.pir_exp1_i(i) === 0.S && io.pir_frac1_i(i) === 0.U) || (io.pir_exp2_i(i) === 0.S && io.pir_frac2_i(i) === 0.U)) {
      pir_frac_mul(i) := 0.U
      pir_exp_mul(i) := 0.S
    }
  }

  // # 对齐尾数
  val frac_compare = Module(new FractionAlignment_DotProduct(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
  frac_compare.io.pir_exp_i := pir_exp_mul
  frac_compare.io.pir_frac_i := pir_frac_mul
  
  // # 负数尾数转换为二进制补码
  val pir_frac_aligned = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  for (i <- 0 until VECTOR_SIZE) {
    pir_frac_aligned(i) := Mux(pir_sign_mul(i) === 1.U, ~frac_compare.io.pir_frac_align(i) + 1.U, frac_compare.io.pir_frac_align(i))
  }

  // # CSA树累加
  val csaTree = Module(new CsaTree(VECTOR_SIZE, SUM_WIDTH, SUM_WIDTH))
  csaTree.io.operands_i := pir_frac_aligned
  
  // # 使用+&操作符进行加法，保留进位位
  val sum_result = Wire(UInt((SUM_WIDTH+1).W))
  sum_result := csaTree.io.sum_o +& csaTree.io.carry_o

  // # 输出结果
  io.pir_sign_o := sum_result(SUM_WIDTH)
  io.pir_exp_o := frac_compare.io.pir_max_exp
  io.pir_frac_o := sum_result
}
