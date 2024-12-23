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
    val pir_sign = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac = Input(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W + 1.W)))
    
    val posit    = Output(Vec(VECTOR_SIZE, UInt(POSIT_WIDTH.W)))
  })

  //提取尾数隐藏位
  val frac_hide = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  for(i <- 0 until VECTOR_SIZE){
    frac_hide(i) := io.pir_frac(i)(FRAC_WIDTH)
  }
  
  //获取es和rigime的二进制
  val regime_k = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
  val es_value = Wire(Vec(VECTOR_SIZE, UInt(es.W)))
  for(i <- 0 until VECTOR_SIZE){
    regime_k(i) := io.pir_exp(i)(EXP_WIDTH - 1, es)
    es_value(i) := io.pir_exp(i)(es - 1, 0)
  }

  //初始化regime
  val k_sign       = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val regime_init  = Wire(UInt((POSIT_WIDTH - 1).W))
  val regime       = Wire(Vec(VECTOR_SIZE, UInt((POSIT_WIDTH- 1).W)))

  regime_init     := 1.U

  for(i <- 0 until VECTOR_SIZE){
    k_sign(i) := io.pir_exp(i)(EXP_WIDTH - 1)
    regime(i) := Mux(k_sign(i) === 1.U, regime_init, ~regime_init)
    //当k_sign为1时，regime为负数，即0000...1（-k），当k_sign为0时，regime为正数，即1111...0（k-1）
  }

  //计算regime位宽
  val regime_width = Wire(Vec(VECTOR_SIZE, UInt(nd.W)))
  for(i <- 0 until VECTOR_SIZE){
    regime_width(i) := Mux(k_sign(i) === 1.U, ((~regime_k(i) + 1.U) + 1.U), regime_k(i) + 2.U)
  }

  //拼接各个部分（位宽溢出）
  var TMP_WIDTH   = POSIT_WIDTH - 1 + es + FRAC_WIDTH
  val reg_es_frac = Wire(Vec(VECTOR_SIZE, UInt(TMP_WIDTH.W)))
  for(i <- 0 until VECTOR_SIZE){
    reg_es_frac(i) := Cat(regime(i), es_value(i), io.pir_frac(i)(FRAC_WIDTH - 1, 0))
  }

  //进行右移操作(先左移再右移)
  var MAX_SHIFT   = FRAC_WIDTH + es + 1
  var SHIFT_WIDTH = log2Ceil(MAX_SHIFT)
  val shift = Wire(Vec(VECTOR_SIZE, UInt(SHIFT_WIDTH.W)))

  for(i <- 0 until VECTOR_SIZE){
    shift(i) := Mux(regime_width(i) >= POSIT_WIDTH.U, MAX_SHIFT.U, regime_width(i) + FRAC_WIDTH.U + es.U  - POSIT_WIDTH.U + 1.U)
  }
  //如果regime_bits>=n，说明regime占据了所有位，此时右移位数为最大右移位数,在两次移位后，posit则全是regime位，且位宽位n位
  //如果regime_bits<n，说明右移后需要对mant的低位进行舍入，舍入的位数即位移量，设为x， reg+esp+mant-x = n-1， x = reg+esp+mant-n+1
  //右移的数据量计算是为了让 右移后的低MAX_SHIFT_AMOUNT位成为舍入位，其上的n位是有效数据位

  val value_before_shift = Wire(Vec(VECTOR_SIZE, UInt(TMP_WIDTH.W + MAX_SHIFT.W)))
  val value_after_shift  = Wire(Vec(VECTOR_SIZE, UInt(TMP_WIDTH.W + MAX_SHIFT.W)))

  for(i <- 0 until VECTOR_SIZE){
    value_before_shift(i) := reg_es_frac(i) << MAX_SHIFT
    val barrel_shifter = Module(new BarrelShifter(TMP_WIDTH + MAX_SHIFT, SHIFT_WIDTH, false))
    barrel_shifter.io.operand_i    := value_before_shift(i)
    barrel_shifter.io.shift_amount := shift(i)
    value_after_shift(i)           := barrel_shifter.io.result_o
  }

  //进行舍入操作  --> RNE舍入
  val value_before_round = Wire(Vec(VECTOR_SIZE, UInt((POSIT_WIDTH - 1).W)))
  val round_bits         = Wire(Vec(VECTOR_SIZE, UInt(MAX_SHIFT.W)))
  val value_after_round  = Wire(Vec(VECTOR_SIZE, UInt((POSIT_WIDTH - 1).W)))

  for(i <- 0 until VECTOR_SIZE){
   value_before_round(i) := value_after_shift(i)(MAX_SHIFT + POSIT_WIDTH - 2, MAX_SHIFT)
   round_bits(i)         := value_after_shift(i)(MAX_SHIFT - 1, 0)

   val round_bit         = round_bits(i)(MAX_SHIFT - 1)
   val sticky_bit        = round_bits(i)(MAX_SHIFT - 2, 0).orR
   val round_value       = round_bit & (sticky_bit | value_before_round(i)(0))
   value_after_round(i) := value_before_round(i) + round_value
  }

  //输出Posit --> 转换为补码
  for(i <- 0 until VECTOR_SIZE){
    val result   = Wire(UInt(POSIT_WIDTH.W))

    result      := Mux(io.pir_sign(i) === 1.U, Cat(1.U, ~value_after_round(i) + 1.U), Cat(0.U, value_after_round(i)))
    io.posit(i) := Mux(frac_hide(i) === 1.U, result, 0.U)
  }
}


