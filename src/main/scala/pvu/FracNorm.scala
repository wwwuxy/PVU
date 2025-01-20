//Posit Vector FracNorm Unit
//输出的是调整后的尾数和指数的调整量，还需对指数进行调整
//WIDTH在PvuTop中调用时指定，要么是MUL_WIDTH，要么是FRAC_WIDTH
package pvu

import chisel3._
import chisel3.util._
import chisel3.experimental._

class FracNorm(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val WIDTH: Int, val DECIMAL_POINT: Int, val OP: Int) extends Module {
  var es: Int         = 2
  var nd: Int         = log2Ceil(WIDTH - 1)
  var EXP_WIDTH: Int  = nd + es + 1 
  var FRAC_WIDTH: Int = POSIT_WIDTH - es - 3
  
  // printf("DECIMAL_POINT = %d\n", DECIMAL_POINT.asUInt)
  
  val io = IO(new Bundle {
    val pir_frac_i = Input(Vec(VECTOR_SIZE, UInt(WIDTH.W)))
    
    val exp_adjust = Output(Vec(VECTOR_SIZE, SInt((EXP_WIDTH).W)))
    val pir_frac_o = Output(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH + 1).W)))
  })

  val LZC_WIDTH = log2Ceil(WIDTH)  //存放前导0数量所需要的二进制位宽
  val leading_zero_count  = Wire(UInt(nd.W))
  
  printf("pir_frac_i = %b\n", io.pir_frac_i(0))

  for(i <- 0 until VECTOR_SIZE){
    
  //计算前导0的个数
    val lzcMod              = Module(new LZC(WIDTH, true, nd))
        lzcMod.io.in_i     := io.pir_frac_i(i)
        leading_zero_count := lzcMod.io.cnt_o
    val lzc_zeroes          = lzcMod.io.empty_o

  //计算指数位移量(指数几乎不会溢出)
    val exp_adjust_reg = Wire(SInt((EXP_WIDTH+1).W))
    when(lzc_zeroes) {
      exp_adjust_reg := 0.S   // 尾数全0，不需要规格化
    }.elsewhen(leading_zero_count <= (DECIMAL_POINT - 1).U) {
      when(OP.U === 3.U) {
        exp_adjust_reg := (DECIMAL_POINT.U - leading_zero_count - 1.U).asSInt - 1.S
      }.otherwise {
        exp_adjust_reg := (DECIMAL_POINT.U - leading_zero_count - 1.U).asSInt
      }
    }.otherwise {
      exp_adjust_reg := -((leading_zero_count - (DECIMAL_POINT.U - 1.U)).asSInt)
    }

    // io.exp_adjust(i) := exp_adjust_reg + WIDTH.S - FRAC_WIDTH.S
    // io.exp_adjust(i) := exp_adjust_reg

  //使用barrel_shifter左移，使DECIMAL_POINT位上为1
    val frac_shifted = Wire(UInt(WIDTH.W))
    val shifter      = Module(new BarrelShifter(WIDTH, LZC_WIDTH, false))
    shifter.io.operand_i    := io.pir_frac_i(i)
    shifter.io.shift_amount := leading_zero_count
    frac_shifted            := shifter.io.result_o

  //保留前FRAC_WITH + 1位，低位舍入
    if(WIDTH > (FRAC_WIDTH + 1)){
      val sticky_bits = frac_shifted(WIDTH - FRAC_WIDTH - 2, 0)
      val sticky_bit  = sticky_bits.orR.asUInt
      io.pir_frac_o(i) := Cat(frac_shifted(WIDTH - 1, WIDTH - FRAC_WIDTH) ,sticky_bit)
      io.exp_adjust(i) := exp_adjust_reg 
    }else{
      io.pir_frac_o(i) := frac_shifted
      io.exp_adjust(i) := exp_adjust_reg
    }
  }

  // printf("Fractional Normalization:\n")
  // printf("pir_frac_o = %b\n", io.pir_frac_o(0))
  // printf("exp_adjust = %d\n", io.exp_adjust(0))
  
} 