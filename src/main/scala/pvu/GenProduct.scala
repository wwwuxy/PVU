/**
  * GenProduct 模块根据 Radix-4 Booth 编码生成部分积。
  *
  * 输入:
  * - multiplicand: 被乘数 A
  * - code: 3 位 Booth 编码
  *
  * 输出:
  * - partial_prod: 生成的部分积
  * - sign: 是否为负部分积
  */
package pvu

import chisel3._
import chisel3.util._

class GenProduct(val WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val multiplicand = Input(UInt(WIDTH.W))  // 被乘数 A
    val code         = Input(UInt(3.W))      // 3 位 Booth 编码
    
    val partial_prod = Output(UInt((WIDTH + 1).W))  // 生成的部分积
    val sign         = Output(Bool())               // 是否为负部分积
  })
/**  Bilbil
 
  // 实例化 BoothEncoder
  val boothEncoder = Module(new BoothEncoder())
  boothEncoder.io.code := io.code

  // 定义临时部分积
  val tempProd = Wire(UInt((WIDTH + 1).W))
  

  // 根据 Booth 编码生成 tempProd
  when (boothEncoder.io.one) {
    tempProd := Cat(io.multiplicand(WIDTH - 1), io.multiplicand)
  } .elsewhen (boothEncoder.io.two) {
    tempProd := Cat(io.multiplicand, 0.U(1.W))
  } .otherwise {
    tempProd := 0.U
  }


  // 生成最终的部分积，这里不用+1，因为+1放在了下一行的部分积中
  io.partial_prod := Mux(boothEncoder.io.neg, ~tempProd, tempProd)

  // 输出符号
  io.sign := boothEncoder.io.neg

**/
//  PDPU
  // 实例化 BoothEncoder
  val boothEncoder = Module(new BoothEncoder())
  boothEncoder.io.code := io.code

  // 定义临时部分积
  val tempProd = Wire(UInt((WIDTH + 1).W))
  

  // 根据 Booth 编码生成 tempProd
  when (boothEncoder.io.one) {
    tempProd := io.multiplicand
  } .elsewhen (boothEncoder.io.two) {
    tempProd := io.multiplicand << 1
  } .otherwise {
    tempProd := 0.U
  }


  // 生成最终的部分积，这里不用+1，因为+1放在了下一行的部分积中
  io.partial_prod := Mux(boothEncoder.io.neg, ~tempProd, tempProd)

  // 输出符号
  io.sign := boothEncoder.io.neg

}
