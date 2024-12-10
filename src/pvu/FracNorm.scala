//Posit Vector FracNorm Unit
package pvu

import chisel3._
import chisel3.util._
import chisel3.experimental._

class MantissaNorm(val VECTOR_SIZE: Int, val WIDTH: Int, val EXP_WIDTH: Int, val DECIMAL_POINT: Int) extends Module {
  val io = IO(new Bundle {
    val pir_frac_i = Input(Vec(VECTOR_SIZE, UInt(WIDTH.W)))
    val exp_adjust = Output(Vec(VECTOR_SIZE, SInt((EXP_WIDTH+1).W)))
    val pir_frac_o = Output(Vec(VECTOR_SIZE, UInt(WIDTH.W)))
  })

  val LZC_WIDTH = log2Cei(WIDTH)  //存放前导0数量所需要的二进制位宽

  
  for(i <- 0 until VECTOR_SIZE){
    
  //计算前导0的个数
    val lzcMod              = Module(new LZC(WIDTH))
    lzcMod.io.in_i         := io.pir_frac_i(i)
    val leading_zero_count  = lzcMod.io.cnt_o
    val lzc_zeroes          = lzcMod.io.empty_o

  //计算指数位移量(指数几乎不会溢出)
    val exp_adjust_reg = Wire(SInt((EXP_WIDTH+1).W))
    when(lzc_zeroes) {
      exp_adjust_reg := 0.S   // 尾数全0，不需要规格化
    }.elsewhen(leading_zero_count <= (DECIMAL_POINT - 1).U) {
      exp_adjust_reg := (DECIMAL_POINT.U - leading_zero_count - 1.U).asSInt
    }.otherwise {
      exp_adjust_reg := -((leading_zero_count - (DECIMAL_POINT.U - 1.U)).asSInt)
    }

    io.exp_adjust(i) := exp_adjust_reg

  //使用barrel_shifter移位，使DECIMAL_POINT位上为1
    val shifter = Module(new BarrelShifter(WIDTH, LZC_WIDTH))
    shifter.io.operand_i    := io.pir_frac_i(i)
    shifter.io.shift_amount := leading_zero_count
    io.pir_frac_o(i)        := shifter.io.result_o
  }
}