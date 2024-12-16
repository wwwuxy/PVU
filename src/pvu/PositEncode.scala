//Posit Vector Decode Unit
package pvu

import chisel3._
import chisel3.util._

class PositEncode(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int) extends Module {
  val es: Int         = 2
  val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  val EXP_WIDTH: Int  = nd + es + 1 
  val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2

  val io = IO(new Bundle {
    val pir_sign = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp  = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac = Output(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W + 1.W)))
    val posit    = Input(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W)))
  })

  //提取尾数隐藏位
  val frac_hide = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  for(i <- 0 until VECTOR_SIZE){
    frac_hide = io.pir_frac(i)(FRAC_WIDTH)
  }
  
  //获取es和rigime的二进制
  val regime_k = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
  val es_value = Wire(Vec(VECTOR_SIZE, UInt(es.W)))
  for(i <- 0 until VECTOR_SIZE){
    regime_k(i) := io.pir_exp(i)(EXP_WIDTH - 1, es)
    es_value(i) := io.pir_exp(i)(es - 1, 0)
  }

  //初始化regime
  val k_sign       = Wire(VecUInt(1.W))
  val regime_init  = Wire(UInt(nd.W))
  val regime       = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
  regime_init     := 1.U

  for(i <- 0 until VECTOR_SIZE){
    k_sign    := io.pir_exp(i)(EXP_WIDTH - 1)
    regime(i) := Mux(k_sign === 1.U, regime_init(i), ~regime_init(i))
    //当sign_k为1时，regime为负数，即0000...1（-k），当sign_k为0时，regime为正数，即1111...0（k-1）
  }

  //计算regime位宽


}

