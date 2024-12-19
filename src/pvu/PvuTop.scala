//PVU TOP
/* 支持五种操作类型 --> op控制
    1 --> 加法
    2 --> 减法
    3 --> 乘法
    4 --> 除法
    5 --> 点积
 */

 package pvu
 import chisel3._
 import chisel3.util._
 import scala.languageFeature.existentials
 
 class PvuTop(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int) extends Module {
   val es: Int         = 2
   val nd: Int         = log2Ceil(POSIT_WIDTH - 1)
   val EXP_WIDTH: Int  = nd + es + 1 
   val FRAC_WIDTH: Int = POSIT_WIDTH - es - 2
   val MUL_WIDTH: Int  = 2 * (FRAC_WIDTH + 1)
 
   val io = IO(new Bundle {
     val posit_i1    = Input(Vec(VECTOR_SIZE,UInt(POSIT_WIDTH.W)))
     val posit_i2    = Input(Vec(VECTOR_SIZE,UInt(POSIT_WIDTH.W)))
     val op          = Input(Vec(VECTOR_SIZE,UInt(3.W)))
     val posit_o     = Output(VECTOR_SIZE,UInt(POSIT_WIDTH.W))
     val posit_dot_o = Output(UInt(POSIT_WIDTH.W))
 })
 
 //**********//
 //**decode**//
 //**********//
  val pir_sign1 = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_sign2 = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_exp1  = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_exp2  = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_frac1 = Wire(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
  val pir_frac2 = Wire(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))

  val decode1 = Module(new PositDecode(POSIT_WIDTH, VECTOR_SIZE))
  val decode2 = Module(new PositDecode(POSIT_WIDTH, VECTOR_SIZE))

  pir_sign1 := decode1.io.Sign
  pir_exp1  := decode1.io.Exp
  pir_frac1 := decode1.io.Frac
  pir_sign2 := decode2.io.Sign
  pir_exp2  := decode2.io.Exp
  pir_frac2 := decode2.io.Frac

//***********************//
//get operand and compute//
//***********************//
  val pir_sign_rst        = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_exp_rst         = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_frac_rst_addsub = Wire(Vec(VECTOR_SIZE, UInt(FRAC_WIDTH.W)))
  val pir_frac_rst_muldiv = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val pir_max_exp         = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))   //fraction_align

  //for dotproduct, output is scalar
  val pir_sign_dot = Wire(UInt(1.W))
  val pir_exp_dot  = Wire(SInt(EXP_WIDTH.W))
  val pir_frac_dot = Wire(UInt(MUL_WIDTH.W))

  when(io.op === 1.U){    //Add
    val overflow      = Wire(Vec(VECTOR_SIZE, UInt(1.W)))  //尾数溢出
    val frac_truncate = Wire(Vec(VECTOR_SIZE, UInt(1.W)))  //尾数截断
  
    val fracalign = Module(new FractionAlignment_AddSub(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH))
    val add       = Module(new Add(POSIT_WIDTH, VECTOR_SIZE))

    fracalign.io.pir_exp1_i  := pir_exp1
    fracalign.io.pir_frac1_i := pir_frac1
    fracalign.io.pir_exp2_i  := pir_exp2
    fracalign.io.pir_frac2_i := pir_frac2

    add.io.pir_sign1_i       := pir_sign1
    add.io.pir_sign2_i       := pir_sign2
    add.io.pir_exp1_i        := pir_exp1 
    add.io.pir_exp2_i        := pir_exp2
    add.io.pir_frac1_aligned := fracalign.io.pir_frac1_align
    add.io.pir_frac2_aligned := fracalign.io.pir_frac2_align
  
    pir_sign_rst        := add.io.pir_sign_o
    pir_exp_rst         := add.io.pir_exp_o
    pir_frac_rst_addsub := add.io.pir_frac_o
    pir_max_exp         := fracalign.io.pir_max_exp
    overflow            := add.io.overflow
    frac_truncate       := add.io.frac_truncate

  }.elsewhen(io.op === 2.U){  //Sub
    val overflow      = Wire(Vec(VECTOR_SIZE, UInt(1.W))) 
    val frac_truncate = Wire(Vec(VECTOR_SIZE, UInt(1.W))) 

    val fracalign = Module(new FractionAlignment_AddSub(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH))
    val sub       = Module(new Sub(POSIT_WIDTH, VECTOR_SIZE))

    fracalign.io.pir_exp1_i  := pir_exp1
    fracalign.io.pir_frac1_i := pir_frac1
    fracalign.io.pir_exp2_i  := pir_exp2
    fracalign.io.pir_frac2_i := pir_frac2
  
    sub.io.pir_sign1_i       := pir_sign1
    sub.io.pir_sign2_i       := pir_sign2
    sub.io.pir_exp1_i        := pir_exp1
    sub.io.pir_exp2_i        := pir_exp2
    sub.io.pir_frac1_aligned := fracalign.io.pir_frac1_align
    sub.io.pir_frac2_aligned := fracalign.io.pir_frac2_align
  
    pir_sign_rst        := sub.io.pir_sign_o
    pir_exp_rst         := sub.io.pir_exp_o
    pir_frac_rst_addsub := sub.io.pir_frac_o
    pir_max_exp         := fracalign.io.pir_max_exp
    overflow            := sub.io.overflow
    frac_truncate       := sub.io.frac_truncate
  
  }.elsewhen(io.op === 3.U){  //Mul
    val mul = Module(new Mul(POSIT_WIDTH, VECTOR_SIZE))
  
    mul.io.pir_sign1_i := pir_sign1
    mul.io.pir_sign2_i := pir_sign2
    mul.io.pir_exp1_i  := pir_exp1
    mul.io.pir_exp2_i  := pir_exp2
    mul.io.pir_frac1_i := pir_frac1
    mul.io.pir_frac2_i := pir_frac2
  
    pir_sign_rst        := mul.io.pir_sign_o
    pir_exp_rst         := mul.io.pir_exp_o
    pir_frac_rst_muldiv := mul.io.pir_frac_o
  
  }.elsewhen(io.op === 4.U){  //Div
    val div = Module(new Div(POSIT_WIDTH, VECTOR_SIZE))
  
    div.io.pir_sign1_i := pir_sign1
    div.io.pir_sign2_i := pir_sign2
    div.io.pir_exp1_i  := pir_exp1
    div.io.pir_exp2_i  := pir_exp2
    div.io.pir_frac1_i := pir_frac1
    div.io.pir_frac2_i := pir_frac2
  
    pir_sign_rst        := div.io.pir_sign_o
    pir_exp_rst         := div.io.pir_exp_o
    pir_frac_rst_muldiv := div.io.pir_frac_o
  
  }.elsewhen(io.op === 5.U){  //DotProduct, 输入向量 输出标量
    val fracalign1 = Module(new FractionAlignment_DotProduct(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH))
    val fracalign2 = Module(new FractionAlignment_DotProduct(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH))
    val dotproduct = Module(new DotProduct(POSIT_WIDTH, VECTOR_SIZE))
  
    fracalign1.io.pir_exp_i  := pir_exp1
    fracalign1.io.pir_frac_i := pir_frac1
    fracalign2.io.pir_exp_i  := pir_exp2
    fracalign2.io.pir_frac_i := pir_frac2
  
    dotproduct.io.pir_sign1_i := pir_sign1
    dotproduct.io.pir_sign2_i := pir_sign2
    dotproduct.io.pir_exp1_i  := fracalign1.io.pir_max_exp
    dotproduct.io.pir_exp2_i  := fracalign2.io.pir_max_exp
    dotproduct.io.pir_frac1_i := fracalign1.io.pir_frac_align
    dotproduct.io.pir_frac2_i := fracalign2.io.pir_frac_align
  
    pir_sign_dot := dotproduct.io.pir_sign_o
    pir_exp_dot  := dotproduct.io.pir_exp_o
    pir_frac_dot := dotproduct.io.pir_frac_o
  }

//***********************//
//fraction normalization//
//***********************//
  val pir_exp_adjust      = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_exp_adjusi_dot  = Wire(SInt(EXP_WIDTH.W))
  val pir_frac_normed     = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val pir_frac_normed_dot = Wire(UInt(MUL_WIDTH.W))

  when(io.op === 5.U){  //dotproduct output is scala, 默认小数点位于首位
  val frac_norm = Module(new FracNorm(POSIT_WIDTH, 1, MUL_WIDTH, 1))
  frac_norm.io.pir_frac_i := pir_frac_dot
  pir_frac_normed_dot     := frac_norm.io.pir_frac_o
  pir_exp_adjusi_dot      := frac_norm.io.pir_exp_o
  
  }.elsewhen(io.op === 1.U || io.op === 2.U){ //Add Sub
    val frac_norm = Module(new FracNorm(POSIT_WIDTH, VECTOR_SIZE, FRAC_WIDTH, 1))
    frac_norm.io.pir_frac_i := pir_frac_rst_addsub
    frac_norm.io.pir_exp_i  := pir_exp_rst
    pir_frac_normed         := frac_norm.io.pir_frac_o
    pir_exp_adjust          := frac_norm.io.pir_exp_o
  }.otherwise{                            //Mul Div                
    val frac_norm = Module(new FracNorm(POSIT_WIDTH, VECTOR_SIZE, MUL_WIDTH, 1))
    frac_norm.io.pir_frac_i := pir_frac_rst_muldiv
    frac_norm.io.pir_exp_i  := pir_exp_rst
    pir_frac_normed         := frac_norm.io.pir_frac_o
    pir_exp_adjust          := frac_norm.io.pir_exp_o
  }

//***************//
//**Adjust EXP**//
//**************//
  val pir_exp_rst_adjusied = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_exp_rst_adjusied_dot      = Wire(SInt(EXP_WIDTH.W))

  when(io.op === 5.U){
    pir_exp_rst_adjusied_dot := pir_exp_adjusi_dot
  }.otherwise{
    for(i <- 0 until VECTOR_SIZE){
      pir_exp_rst_adjusied(i) := pir_exp_rst(i) + pir_exp_adjust(i)
    }
  }

//***********//
//**encode**//
//*********//
  when(io.op === 5.U){
    val encode_dot = Module(new PositEncode(POSIT_WIDTH, 1))
    encode_dot.io.pir_sign := pir_sign_dot
    encode_dot.io.pir_exp  := pir_exp_rst_adjusied_dot
    encode_dot.io.pir_frac := pir_frac_normed_dot
    io.posit_dot_o         := encode_dot.io.posit
    io.posit_o             := VecInit(Seq.fill(VECTOR_SIZE)(0.U(POSIT_WIDTH.W)))
  }.otherwise{
    val encode = Module(new PositEncode(POSIT_WIDTH, VECTOR_SIZE))
    encode.io.pir_sign := pir_sign_rst
    encode.io.pir_exp  := pir_exp_rst_adjusied
    encode.io.pir_frac := pir_frac_normed
    io.posit_o         := encode.io.posit
    io.posit_dot_o     := 0.U
  }
}