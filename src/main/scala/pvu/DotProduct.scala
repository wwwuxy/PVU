//Posit Dot_Product Unit
package pvu

import chisel3._
import chisel3.util._

class DotProduct(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int) extends Module {
  val es: Int         = 2
  val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int  = nd + es
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2
  val MUL_WIDTH: Int  = 2 * (FRAC_WIDTH + 1)

  val io = IO(new Bundle {
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_i = Input(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
    val pir_frac2_i = Input(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))

    val pir_sign_o = Output(UInt(1.W))
    val pir_exp_o  = Output(SInt(EXP_WIDTH.W))
    val pir_frac_o = Output(UInt(MUL_WIDTH.W))
  })

//通过MUL进行累乘计算
  val pir_sign_mul = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_exp_mul  = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_frac_mul = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))

  val mul = Module(new Mul(POSIT_WIDTH, VECTOR_SIZE))
  mul.io.pir_sign1_i := io.pir_sign1_i
  mul.io.pir_sign2_i := io.pir_sign2_i
  mul.io.pir_exp1_i  := io.pir_exp1_i
  mul.io.pir_exp2_i  := io.pir_exp2_i
  mul.io.pir_frac1_i := io.pir_frac1_i
  mul.io.pir_frac2_i := io.pir_frac2_i

  pir_sign_mul := mul.io.pir_sign_o
  pir_exp_mul  := mul.io.pir_exp_o
  pir_frac_mul := mul.io.pir_frac_o

//将尾数进行对阶
  val pir_exp_cmp  = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_frac_cmp = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))

  val frac_compare            = Module(new FracCompare(POSIT_WIDTH, VECTOR_SIZE))
  frac_compare.io.pir_exp_i  := pir_exp_mul
  frac_compare.io.pir_frac_i := pir_frac_mul
  pir_exp_cmp                := frac_compare.io.pir_exp_o
  pir_frac_cmp               := frac_compare.io.pir_frac_o

//将负Posit数的尾数转换为补码
  for (i <- 0 until VECTOR_SIZE) {
    when (pir_sign_mul(i) === 1.U) {
      pir_frac_cmp(i) := ~pir_frac_cmp(i) + 1.U
    }
  }

//通过CsaTree进行累加
  val sum        = Wire(UInt(MUL_WIDTH.W))
  val carry      = Wire(UInt(MUL_WIDTH.W))
  val sum_result = Wire(UInt(MUL_WIDTH.W + 1.W))

  val csaTree = Module(new CsaTree(VECTOR_SIZE, MUL_WIDTH))
  csaTree.io.operand_i := pir_frac_cmp
  sum                  := csaTree.io.sum_o
  carry                := csaTree.io.carry_o
//最后一次求和
  sum_result           := carry + sum

//输出结果 
  io.pir_sign_o := sum_result(MUL_WIDTH)
  io.pir_exp_o  := pir_exp_cmp(0)
  io.pir_frac_o := sum_result(MUL_WIDTH - 1, 0)
}
