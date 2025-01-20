/**
  * GenProds 模块根据 Radix-4 Booth 编码生成多个部分积。
  *
  * 参数:
  * - WIDTH_A: 被乘数 A 的位宽
  * - WIDTH_B: 乘数 B 的位宽
  * - COUNT: 生成的部分积数量，计算公式为 (WIDTH_B + 2) / 2
  * - WIDTH_O: 输出部分积的位宽，计算公式为 WIDTH_A + WIDTH_B
  *
  * 输入:
  * - operand_a: 被乘数 A
  * - operand_b: 乘数 B
  *
  * 输出:
  * - partial_prods: 生成的部分积
  */
package pvu

import chisel3._
import chisel3.util._


class GenProds(val WIDTH_A: Int,val WIDTH_B: Int) extends Module {
  var COUNT: Int   = (WIDTH_B + 2) / 2                      //加2是为了符号补偿
  var WIDTH_O: Int = WIDTH_A + WIDTH_B
  
  val io = IO(new Bundle {
    val operand_a     = Input(UInt(WIDTH_A.W))               // 被乘数 A
    val operand_b     = Input(UInt(WIDTH_B.W))               // 乘数 B
    val partial_prods = Output(Vec(COUNT, UInt(WIDTH_O.W)))  // 生成的部分积
  })

  // 定义内部信号,对乘数B进行Booth编码
  val multiplier  = Wire(UInt((WIDTH_B + 1).W))
      multiplier := Cat(io.operand_b, 0.U(1.W))  // {operand_b, 1'b0} --> 必须为奇数位宽

  val codes      = Wire(Vec(COUNT - 1, UInt(3.W)))
  val temp_prods = Wire(Vec(COUNT - 1, UInt((WIDTH_A + 1).W)))  // 部分积位宽为 WIDTH_A + 1
  val signs      = Wire(Vec(COUNT - 1, Bool()))

  // 第一个 code 取 multiplier 的低 3 位
  codes(0) := multiplier(2, 0)

  // 实例化一个 GenProduct，用 codes(0) 生成第一个部分积
  val genProdFirst = Module(new GenProduct(WIDTH = WIDTH_A))
  genProdFirst.io.multiplicand := io.operand_a
  genProdFirst.io.code         := codes(0)
  temp_prods(0)                := genProdFirst.io.partial_prod
  signs(0)                     := genProdFirst.io.sign

  // 进行符号扩展, 拼接了 { ~signs(0), signs(0), signs(0), temp_prods(0) }
  io.partial_prods(0) := Cat(~signs(0), signs(0), signs(0), temp_prods(0))
  // printf("signs[0] = %b\n", ~signs(0))
  // printf("partial_prods[0] = %x\n", io.partial_prods(0))

  // 生成中间 (i = 1 到 COUNT - 2) 的部分积
  for (i <- 1 until COUNT - 1) {
    // 截取 multiplier 的 (2*i+2) 到 (2*i) 三位，作为 codes(i)
    codes(i) := multiplier((2 * i + 2), (2 * i))
    // printf("codes[%d] = %b\n", i.U, codes(i))
    

    val genProd = Module(new GenProduct(WIDTH = WIDTH_A))
    genProd.io.multiplicand := io.operand_a
    genProd.io.code         := codes(i)
    temp_prods(i)           := genProd.io.partial_prod
    signs(i)                := genProd.io.sign

    // 拼接出部分积：{1'b1, ~signs(i), temp_prods(i), 1'b0, signs(i - 1)}
    // 然后左移 (2*i - 2) 位，并最终截断到 WIDTH_O 宽度
    // 这里的 1'b1 或 ~signs(i) 之类的拼接，是针对最终补码或对齐设计
    val concatenated = Cat(
      1.U(1.W),
      ~signs(i),
      temp_prods(i),
      0.U(1.W),
      signs(i - 1)
    )
    io.partial_prods(i) := (concatenated << (2 * (i - 1))) // 进行左移

    // printf("signs[%d] = %b\n", i.U, signs(i))
    // printf("temp_prods[%d] = %b\n\n", i.U, temp_prods(i))
    // printf("partial_prods[%d] = %b\n", i.U, io.partial_prods(i))

  }

  //符号补偿
  val concatenatedLast = signs(COUNT - 2)
  io.partial_prods(COUNT - 1) := (concatenatedLast << (2 * (COUNT - 2))) // 进行左移
}
