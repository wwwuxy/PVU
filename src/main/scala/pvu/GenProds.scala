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
  val COUNT: Int   = (WIDTH_B + 2) / 2
  val WIDTH_O: Int = WIDTH_A + WIDTH_B
  
  val io = IO(new Bundle {
    val operand_a     = Input(UInt(WIDTH_A.W))               // 被乘数 A
    val operand_b     = Input(UInt(WIDTH_B.W))               // 乘数 B
    val partial_prods = Output(Vec(COUNT, UInt(WIDTH_O.W)))  // 生成的部分积
  })

  // 定义内部信号
  val multiplier  = Wire(UInt((WIDTH_B + 3).W))
  multiplier     := Cat(0.U(2.W), io.operand_b, 0.U(1.W))  // {2'b00, operand_b, 1'b0}

  val codes      = Wire(Vec(COUNT, UInt(3.W)))
  val temp_prods = Wire(Vec(COUNT, UInt((WIDTH_O + 1).W)))  // 假设 GenProduct 输出 WIDTH_O +1 bits
  val signs      = Wire(Vec(COUNT, Bool()))

  // Assign codes
  codes(0) := multiplier(2, 0)

  // Instantiate GenProduct for codes(0)
  val genProd0 = Module(new GenProduct(WIDTH = WIDTH_A))
  genProd0.io.multiplicand := io.operand_a
  genProd0.io.code         := codes(0)
  temp_prods(0)            := genProd0.io.partial_prod
  signs(0)                 := genProd0.io.sign

  // Assign partial_prods(0)
  io.partial_prods(0) := Cat(~signs(0), signs(0), signs(0), temp_prods(0))

  // Generate partial products for i = 1 to COUNT-2
  for (i <- 1 until COUNT - 1) {
    codes(i) := multiplier((2 * i + 2), (2 * i))
    
    // Instantiate GenProduct for codes(i)
    val genProd = Module(new GenProduct(WIDTH = WIDTH_A))
    genProd.io.multiplicand := io.operand_a
    genProd.io.code         := codes(i)
    temp_prods(i)           := genProd.io.partial_prod
    signs(i)                := genProd.io.sign

    // Compute partial_prods(i)
    // {1'b1, ~signs[i], temp_prods[i], 1'b0, signs[i-1]} << (2*i - 2)
    val concatenated = Cat(
      1.U(1.W),
      ~signs(i),
      temp_prods(i),
      0.U(1.W),
      signs(i - 1)
    )
    io.partial_prods(i) := (concatenated << (2 * i - 2)) (WIDTH_O - 1, 0) // 截断到 WIDTH_O 位
  }

  // Assign codes[COUNT-1]
  codes(COUNT - 1) := multiplier((2 * COUNT), (2 * COUNT - 2))

  // Instantiate GenProduct for codes[COUNT-1]
  val genProdLast = Module(new GenProduct(WIDTH = WIDTH_A))
  genProdLast.io.multiplicand := io.operand_a
  genProdLast.io.code         := codes(COUNT - 1)
  temp_prods(COUNT - 1)       := genProdLast.io.partial_prod
  signs(COUNT - 1)            := genProdLast.io.sign

  // Assign partial_prods[COUNT-1]
  // {temp_prods[COUNT-1], 1'b0, signs[COUNT-2]} << (2*COUNT - 4)
  val concatenatedLast = Cat(
    temp_prods(COUNT - 1),
    0.U(1.W),
    signs(COUNT - 2)
  )
  io.partial_prods(COUNT - 1) := (concatenatedLast << (2 * COUNT - 4)) (WIDTH_O - 1, 0) // 截断到 WIDTH_O 位
}
