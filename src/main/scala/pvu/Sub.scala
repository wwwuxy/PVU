//Posit Vector Sub
package pvu

import chisel3._
import chisel3.util._

class Sub(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int) extends Module {
// Fixed parameters
  var es: Int         = 2
  var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int  = nd + es + 1 

  val io = IO(new Bundle {
    val pir_sign1_i       = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i       = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i        = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i        = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_aligned = Input(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
    val pir_frac2_aligned = Input(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))

    val pir_sign_o    = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o     = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_o    = Output(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
    val overflow      = Output(Vec(VECTOR_SIZE, UInt(1.W)))  // Overflow flag
    val frac_truncate = Output(Vec(VECTOR_SIZE, UInt(1.W)))  // Fraction_Truncate flag
  })

//检查符号位，相同则减法，否则加法
  val diff_sign = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  for (i <- 0 until VECTOR_SIZE) {
    diff_sign(i) := Mux(io.pir_sign1_i(i) === io.pir_sign2_i(i), 0.U, 1.U)
  }

//进行减法操作
  for(i <- 0 until VECTOR_SIZE){
    when(diff_sign(i) === 0.U){ //符号相同，执行减法,无需标准化
    //确定哪个尾数更大
      val mant1         = io.pir_frac1_aligned(i)
      val mant2         = io.pir_frac2_aligned(i)
      val mant1_greater = (mant1 > mant2)

    //执行减法
      io.pir_frac_o(i) := Mux(mant1_greater, mant1 - mant2, mant2 - mant1)
     
    //计算结果符号位
      when(io.pir_sign1_i(i) === 1.U){
        io.pir_sign_o(i) := Mux(mant1_greater, 1.U, 0.U)
      }.otherwise{
        io.pir_sign_o(i) := Mux(mant1_greater, 0.U, 1.U)
      }
    
    //指数、溢出、截断 赋值 
      io.pir_exp_o(i)     := io.pir_exp1_i(i)
      io.overflow(i)      := 0.U
      io.frac_truncate(i) := 0.U

    }.otherwise{ //符号不同，执行加法
      val sum      = io.pir_frac1_aligned(i) +& io.pir_frac2_aligned(i)
      val carry    = sum(ALIGN_WIDTH)
      val new_frac = Mux(carry, sum >> 1, sum(ALIGN_WIDTH-1, 0))
      val new_exp  = Mux(carry, io.pir_exp1_i(i) + 1.S, io.pir_exp1_i(i))
    
    //赋值结果符号、指数和尾数
      io.pir_sign_o(i) := io.pir_sign1_i(i)  //结果符号与第一个操作数相同
      io.pir_exp_o(i)  := new_exp
      io.pir_frac_o(i) := new_frac

    //溢出、截断标志
      io.overflow(i)  := carry
      io.frac_truncate(i) := carry && (sum(ALIGN_WIDTH-1, 0).orR)

    } 
  }
}