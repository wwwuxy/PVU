  //Posit Encode Unit For DotProduct
package pvu

import chisel3._
import chisel3.util._

class PositEncode_DotProduct(val POSIT_WIDTH: Int) extends Module {
  var es: Int         = 2
  var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int  = nd + es + 1
  var FRAC_WIDTH: Int = POSIT_WIDTH - es - 3

  val io = IO(new Bundle {
    val pir_sign = Input(UInt(1.W))
    val pir_exp  = Input(SInt(EXP_WIDTH.W))
    val pir_frac = Input(UInt(FRAC_WIDTH.W + 1.W))
    
    val posit = Output(UInt(POSIT_WIDTH.W))
  })

    //提取尾数隐藏位
  val frac_hide  = Wire(UInt(1.W))
      frac_hide := io.pir_frac(FRAC_WIDTH)
  
    //获取es和rigime的二进制
  val regime_k  = Wire(UInt(nd.W))
  val es_value  = Wire(UInt(es.W))
      regime_k := io.pir_exp(EXP_WIDTH - 1, es)
      es_value := io.pir_exp(es - 1, 0)

    //初始化regime
  val k_sign      = Wire(UInt(1.W))
  val regime_init = Wire(UInt((POSIT_WIDTH - 1).W))
  val regime      = Wire(UInt((POSIT_WIDTH- 1).W))

  regime_init := 1.U

  k_sign := io.pir_exp(EXP_WIDTH - 1)
  regime := Mux(k_sign === 1.U, regime_init, ~regime_init)
    //当k_sign为1时，regime为负数，即0000...1（-k），当k_sign为0时，regime为正数，即1111...0（k-1）

    //计算regime位宽
  val regime_width  = Wire(UInt(nd.W))
      regime_width := Mux(k_sign === 1.U, ((~regime_k + 1.U) + 1.U), regime_k + 2.U)

    //拼接各个部分（位宽溢出）
  var TMP_WIDTH    = POSIT_WIDTH - 1 + es + FRAC_WIDTH
  val reg_es_frac  = Wire(UInt(TMP_WIDTH.W))
      reg_es_frac := Cat(regime, es_value, io.pir_frac(FRAC_WIDTH - 1, 0))

    //进行右移操作(先左移再右移)
  var MAX_SHIFT   = FRAC_WIDTH + es + 1
  var SHIFT_WIDTH = log2Ceil(MAX_SHIFT)
  val shift       = Wire(UInt(SHIFT_WIDTH.W))

  shift := Mux(regime_width >= POSIT_WIDTH.U, MAX_SHIFT.U, regime_width + FRAC_WIDTH.U + es.U  - POSIT_WIDTH.U + 1.U)
    //如果regime_bits>=n，说明regime占据了所有位，此时右移位数为最大右移位数,在两次移位后，posit则全是regime位，且位宽位n位
    //如果regime_bits<n，说明右移后需要对mant的低位进行舍入，舍入的位数即位移量，设为x， reg+esp+mant-x = n-1， x = reg+esp+mant-n+1
    //右移的数据量计算是为了让 右移后的低MAX_SHIFT_AMOUNT位成为舍入位，其上的n位是有效数据位

  val value_before_shift = Wire(UInt(TMP_WIDTH.W + MAX_SHIFT.W))
  val value_after_shift  = Wire(UInt(TMP_WIDTH.W + MAX_SHIFT.W))

      value_before_shift             := reg_es_frac << MAX_SHIFT
  val barrel_shifter                  = Module(new BarrelShifter(TMP_WIDTH + MAX_SHIFT, SHIFT_WIDTH, false))
      barrel_shifter.io.operand_i    := value_before_shift
      barrel_shifter.io.shift_amount := shift
      value_after_shift              := barrel_shifter.io.result_o

    //进行舍入操作  --> RNE舍入
  val value_before_round = Wire(UInt((POSIT_WIDTH - 1).W))
  val round_bits         = Wire(UInt(MAX_SHIFT.W))
  val value_after_round  = Wire(UInt((POSIT_WIDTH - 1).W))


  value_before_round := value_after_shift(MAX_SHIFT + POSIT_WIDTH - 2, MAX_SHIFT)
  round_bits         := value_after_shift(MAX_SHIFT - 1, 0)

  val round_bit          = round_bits(MAX_SHIFT - 1)
  val sticky_bit         = round_bits(MAX_SHIFT - 2, 0).orR
  val round_value        = round_bit & (sticky_bit | value_before_round(0))
      value_after_round := value_before_round + round_value

    //输出Posit --> 转换为补码
  val result = Wire(UInt(POSIT_WIDTH.W))

  result   := Mux(io.pir_sign === 1.U, Cat(1.U, ~value_after_round + 1.U), Cat(0.U, value_after_round))
  io.posit := Mux(frac_hide === 1.U, result, 0.U)
}


