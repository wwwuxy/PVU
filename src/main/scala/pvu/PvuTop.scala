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
 import chisel3.stage._
 
 class PvuTop(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
   var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
   var EXP_WIDTH: Int  = nd + ES + 1
   var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3               //rigime位宽至少为2，再去除一位符号位，故减3
   var MUL_WIDTH: Int  = 2 * (FRAC_WIDTH + 1)
   val SUM_WIDTH: Int  = MUL_WIDTH + log2Ceil(VECTOR_SIZE)
 
   val io = IO(new Bundle {
     val posit_i1 = Input(Vec(VECTOR_SIZE,UInt(POSIT_WIDTH.W)))
     val posit_i2 = Input(Vec(VECTOR_SIZE,UInt(POSIT_WIDTH.W)))
     val op       = Input(UInt(3.W))

     val posit_o     = Output(Vec(VECTOR_SIZE,UInt(POSIT_WIDTH.W)))
     val posit_dot_o = Output(UInt(POSIT_WIDTH.W))
 })
 
   //**********//
   //**decode**//
   //**********//
  val pir_sign1 = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_sign2 = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_exp1  = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_exp2  = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_frac1 = Wire(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH + 1).W)))
  val pir_frac2 = Wire(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH + 1).W)))

  val decode1 = Module(new PositDecode(POSIT_WIDTH, VECTOR_SIZE, ES))
  val decode2 = Module(new PositDecode(POSIT_WIDTH, VECTOR_SIZE, ES))

  decode1.io.posit := io.posit_i1
  decode2.io.posit := io.posit_i2
  pir_sign1        := decode1.io.Sign
  pir_exp1         := decode1.io.Exp
  pir_frac1        := decode1.io.Frac
  pir_sign2        := decode2.io.Sign
  pir_exp2         := decode2.io.Exp
  pir_frac2        := decode2.io.Frac

  //***********************//
  //get operand and compute//
  //***********************//
  val pir_sign_rst     = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_exp_rst      = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_frac_rst_add = Wire(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
  val pir_frac_rst_sub = Wire(Vec(VECTOR_SIZE, UInt(ALIGN_WIDTH.W)))
  val pir_frac_rst_mul = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val pir_frac_rst_div = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val pir_max_exp      = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))    //fraction_align

    //for dotproduct, output is scalar
  val pir_sign_dot = Wire(UInt(1.W))
  val pir_exp_dot  = Wire(SInt(EXP_WIDTH.W))
  val pir_frac_dot = Wire(UInt((SUM_WIDTH + 1).W))

    //初始化中间变量
  for(i <- 0 until VECTOR_SIZE){
    pir_sign_rst(i)     := 0.U
    pir_exp_rst(i)      := 0.S
    pir_frac_rst_add(i) := 0.U
    pir_frac_rst_sub(i) := 0.U
    pir_frac_rst_mul(i) := 0.U
    pir_frac_rst_div(i) := 0.U
    pir_max_exp(i)      := 0.S
  }

  pir_sign_dot := 0.U
  pir_exp_dot  := 0.S
  pir_frac_dot := 0.U

  when(io.op === 1.U){    //Add
    val overflow      = Wire(Vec(VECTOR_SIZE, UInt(1.W)))  //尾数溢出
    val frac_truncate = Wire(Vec(VECTOR_SIZE, UInt(1.W)))  //尾数截断
  
    val fracalign = Module(new FractionAlignment_AddSub(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
    val add       = Module(new Add(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))

    fracalign.io.pir_exp1_i  := pir_exp1
    fracalign.io.pir_frac1_i := pir_frac1
    fracalign.io.pir_exp2_i  := pir_exp2
    fracalign.io.pir_frac2_i := pir_frac2

    add.io.pir_sign1_i       := pir_sign1
    add.io.pir_sign2_i       := pir_sign2
    add.io.pir_exp1_i        := fracalign.io.pir_max_exp
    add.io.pir_exp2_i        := fracalign.io.pir_max_exp
    add.io.pir_frac1_aligned := fracalign.io.pir_frac1_align
    add.io.pir_frac2_aligned := fracalign.io.pir_frac2_align
  
    pir_sign_rst     := add.io.pir_sign_o
    pir_exp_rst      := add.io.pir_exp_o
    pir_frac_rst_add := add.io.pir_frac_o
    pir_max_exp      := fracalign.io.pir_max_exp
    overflow         := add.io.overflow
    frac_truncate    := add.io.frac_truncate

  }.elsewhen(io.op === 2.U){  //Sub
    val overflow      = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
    val frac_truncate = Wire(Vec(VECTOR_SIZE, UInt(1.W)))

    val fracalign = Module(new FractionAlignment_AddSub(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
    val sub       = Module(new Sub(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))

    fracalign.io.pir_exp1_i  := pir_exp1
    fracalign.io.pir_frac1_i := pir_frac1
    fracalign.io.pir_exp2_i  := pir_exp2
    fracalign.io.pir_frac2_i := pir_frac2
  
    sub.io.pir_sign1_i       := pir_sign1
    sub.io.pir_sign2_i       := pir_sign2
    sub.io.pir_exp1_i        := fracalign.io.pir_max_exp
    sub.io.pir_exp2_i        := fracalign.io.pir_max_exp
    sub.io.pir_frac1_aligned := fracalign.io.pir_frac1_align
    sub.io.pir_frac2_aligned := fracalign.io.pir_frac2_align
  
    pir_sign_rst     := sub.io.pir_sign_o
    pir_exp_rst      := sub.io.pir_exp_o
    pir_frac_rst_sub := sub.io.pir_frac_o
    pir_max_exp      := fracalign.io.pir_max_exp
    overflow         := sub.io.overflow
    frac_truncate    := sub.io.frac_truncate
  
  }.elsewhen(io.op === 3.U){  //Mul
    val mul = Module(new Mul(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
  
    mul.io.pir_sign1_i := pir_sign1
    mul.io.pir_sign2_i := pir_sign2
    mul.io.pir_exp1_i  := pir_exp1
    mul.io.pir_exp2_i  := pir_exp2
    mul.io.pir_frac1_i := pir_frac1
    mul.io.pir_frac2_i := pir_frac2
  
    pir_sign_rst     := mul.io.pir_sign_o
    pir_exp_rst      := mul.io.pir_exp_o
    pir_frac_rst_mul := mul.io.pir_frac_o
  
  }.elsewhen(io.op === 4.U){  //Div
    val div = Module(new Div(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
  
    div.io.pir_sign1_i := pir_sign1
    div.io.pir_sign2_i := pir_sign2
    div.io.pir_exp1_i  := pir_exp1
    div.io.pir_exp2_i  := pir_exp2
    div.io.pir_frac1_i := pir_frac1
    div.io.pir_frac2_i := pir_frac2
  
    pir_sign_rst     := div.io.pir_sign_o
    pir_exp_rst      := div.io.pir_exp_o
    pir_frac_rst_div := div.io.pir_frac_o
  
  }.elsewhen(io.op === 5.U){  //DotProduct, 先相乘再相加，对阶在DotProduct中实现，输入向量 输出标量
   val dotproduct = Module(new DotProduct(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, ES))
  
  
    dotproduct.io.pir_sign1_i := pir_sign1
    dotproduct.io.pir_sign2_i := pir_sign2
    dotproduct.io.pir_exp1_i  := pir_exp1
    dotproduct.io.pir_exp2_i  := pir_exp2
    dotproduct.io.pir_frac1_i := pir_frac1
    dotproduct.io.pir_frac2_i := pir_frac2
  
    pir_sign_dot := dotproduct.io.pir_sign_o
    pir_exp_dot  := dotproduct.io.pir_exp_o
    pir_frac_dot := dotproduct.io.pir_frac_o
  }

  //***********************//
  //fraction normalization//
  //***********************//
  val pir_exp_adjust      = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_exp_adjust_dot  = Wire(SInt(EXP_WIDTH.W))
  val pir_frac_normed     = Wire(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  val pir_frac_normed_dot = Wire(UInt(MUL_WIDTH.W))

  //初始化中间变量
  pir_exp_adjust      := VecInit(Seq.fill(VECTOR_SIZE)(0.S(EXP_WIDTH.W)))
  pir_exp_adjust_dot  := 0.S(EXP_WIDTH.W)
  pir_frac_normed     := VecInit(Seq.fill(VECTOR_SIZE)(0.U(MUL_WIDTH.W)))
  pir_frac_normed_dot := 0.U(MUL_WIDTH.W)

  when(io.op === 5.U){  //dotproduct output is scala, 默认小数点位于首位
  val frac_norm_dot                = Module(new FracNorm_DotProduct(POSIT_WIDTH, SUM_WIDTH + 1, log2Ceil(VECTOR_SIZE+1)+2, ES))
      frac_norm_dot.io.pir_frac_i := pir_frac_dot
      pir_frac_normed_dot         := frac_norm_dot.io.pir_frac_o
      pir_exp_adjust_dot          := frac_norm_dot.io.exp_adjust
  }.elsewhen(io.op === 1.U){ //Add
    val frac_norm_add                = Module(new FracNorm(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, 1, ES))
        frac_norm_add.io.pir_frac_i := pir_frac_rst_add
        pir_frac_normed             := frac_norm_add.io.pir_frac_o
        pir_exp_adjust              := frac_norm_add.io.exp_adjust
  }.elsewhen(io.op === 2.U){ //Sub
    val frac_norm_sub                = Module(new FracNorm(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH, 1, ES))
        frac_norm_sub.io.pir_frac_i := pir_frac_rst_sub
        pir_frac_normed             := frac_norm_sub.io.pir_frac_o
        pir_exp_adjust              := frac_norm_sub.io.exp_adjust
  }.elsewhen(io.op === 3.U){  //Mul           
    val frac_norm_mul                = Module(new FracNorm(POSIT_WIDTH, VECTOR_SIZE, MUL_WIDTH, 2, ES))
        frac_norm_mul.io.pir_frac_i := pir_frac_rst_mul
        pir_frac_normed             := frac_norm_mul.io.pir_frac_o
        pir_exp_adjust              := frac_norm_mul.io.exp_adjust
  }.elsewhen(io.op === 4.U){  //Div    
    val frac_norm_div                = Module(new FracNorm(POSIT_WIDTH, VECTOR_SIZE, MUL_WIDTH, 1, ES))
        frac_norm_div.io.pir_frac_i := pir_frac_rst_div
        pir_frac_normed             := frac_norm_div.io.pir_frac_o
        pir_exp_adjust              := frac_norm_div.io.exp_adjust
  }

  //***************//
  //**Adjust EXP**//
  //**************//
  val pir_exp_rst_adjusied     = Wire(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
  val pir_exp_rst_adjusied_dot = Wire(SInt(EXP_WIDTH.W))

  //初始化中间变量
  pir_exp_rst_adjusied     := VecInit(Seq.fill(VECTOR_SIZE)(0.S(EXP_WIDTH.W)))
  pir_exp_rst_adjusied_dot := 0.S(EXP_WIDTH.W)

  when(io.op === 5.U){
    pir_exp_rst_adjusied_dot := pir_exp_adjust_dot + pir_exp_dot
  }.otherwise{
    for(i <- 0 until VECTOR_SIZE){
      pir_exp_rst_adjusied(i) := pir_exp_rst(i) + pir_exp_adjust(i)
    }
  }

  //***********//
  //**encode**//
  //*********//
  when(io.op === 5.U){
    val encode_dot              = Module(new PositEncode_DotProduct(POSIT_WIDTH, ES))
        encode_dot.io.pir_sign := pir_sign_dot
        encode_dot.io.pir_exp  := pir_exp_rst_adjusied_dot
        encode_dot.io.pir_frac := pir_frac_normed_dot
        io.posit_dot_o         := encode_dot.io.posit
        io.posit_o             := VecInit(Seq.fill(VECTOR_SIZE)(0.U(POSIT_WIDTH.W)))
  }.otherwise{
    val encode              = Module(new PositEncode(POSIT_WIDTH, VECTOR_SIZE, ES))
        encode.io.pir_sign := pir_sign_rst
        encode.io.pir_exp  := pir_exp_rst_adjusied
        encode.io.pir_frac := pir_frac_normed
        io.posit_o         := encode.io.posit
        io.posit_dot_o     := 0.U
  }
}

// 单个Posit数解码模块
class PositDecodeSingle(val POSIT_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1 
  var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3
  
  val io = IO(new Bundle {
    val posit = Input(UInt(POSIT_WIDTH.W))
    val Sign = Output(UInt(1.W))
    val Exp = Output(SInt(EXP_WIDTH.W))
    val Frac = Output(UInt((FRAC_WIDTH + 1).W))
  })

  // 使用与原始PositDecode相同的解码逻辑
  val decode = Module(new PositDecode(POSIT_WIDTH, 1, ES))
  decode.io.posit(0) := io.posit
  io.Sign := decode.io.Sign(0)
  io.Exp := decode.io.Exp(0)
  io.Frac := decode.io.Frac(0)
}

// 单个Posit数编码模块
class PositEncodeSingle(val POSIT_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3
  var MUL_WIDTH: Int = 2 * (FRAC_WIDTH + 1)
  
  val io = IO(new Bundle {
    val pir_sign = Input(UInt(1.W))
    val pir_exp = Input(SInt(EXP_WIDTH.W))
    val pir_frac = Input(UInt(MUL_WIDTH.W))
    val posit = Output(UInt(POSIT_WIDTH.W))
  })

  // 使用与原始PositEncode相同的编码逻辑
  val encode = Module(new PositEncode(POSIT_WIDTH, 1, ES))
  encode.io.pir_sign(0) := io.pir_sign
  encode.io.pir_exp(0) := io.pir_exp
  encode.io.pir_frac(0) := io.pir_frac
  io.posit := encode.io.posit(0)
}

// 单个加法单元
class AddUnit(val POSIT_WIDTH: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  
  val io = IO(new Bundle {
    val sign1 = Input(UInt(1.W))
    val sign2 = Input(UInt(1.W))
    val exp1 = Input(SInt(EXP_WIDTH.W))
    val exp2 = Input(SInt(EXP_WIDTH.W))
    val frac1 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    val frac2 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    
    val sign_o = Output(UInt(1.W))
    val exp_o = Output(SInt(EXP_WIDTH.W))
    val frac_o = Output(UInt(ALIGN_WIDTH.W))
    val max_exp = Output(SInt(EXP_WIDTH.W))
  })
  
  // 对齐小数点
  val exp_diff = io.exp1 - io.exp2
  val max_exp = Mux(exp_diff >= 0.S, io.exp1, io.exp2)
  val shifted_frac1 = Mux(exp_diff >= 0.S, io.frac1, (io.frac1 >> (-exp_diff).asUInt))
  val shifted_frac2 = Mux(exp_diff >= 0.S, (io.frac2 >> exp_diff.asUInt), io.frac2)
  
  // 相加或相减
  val add_result = Mux(io.sign1 === io.sign2, 
                      shifted_frac1 + shifted_frac2,
                      Mux(shifted_frac1 >= shifted_frac2, 
                          shifted_frac1 - shifted_frac2,
                          shifted_frac2 - shifted_frac1))
                          
  // 结果符号
  val sign_o = Mux(io.sign1 === io.sign2, 
                  io.sign1,
                  Mux(shifted_frac1 >= shifted_frac2, io.sign1, io.sign2))
  
  // 输出
  io.sign_o := sign_o
  io.exp_o := max_exp
  io.frac_o := add_result
  io.max_exp := max_exp
}

// 单个减法单元 - 与加法类似但操作不同
class SubUnit(val POSIT_WIDTH: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  
  val io = IO(new Bundle {
    val sign1 = Input(UInt(1.W))
    val sign2 = Input(UInt(1.W))
    val exp1 = Input(SInt(EXP_WIDTH.W))
    val exp2 = Input(SInt(EXP_WIDTH.W))
    val frac1 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    val frac2 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    
    val sign_o = Output(UInt(1.W))
    val exp_o = Output(SInt(EXP_WIDTH.W))
    val frac_o = Output(UInt(ALIGN_WIDTH.W))
    val max_exp = Output(SInt(EXP_WIDTH.W))
  })
  
  // 对齐小数点
  val exp_diff = io.exp1 - io.exp2
  val max_exp = Mux(exp_diff >= 0.S, io.exp1, io.exp2)
  val shifted_frac1 = Mux(exp_diff >= 0.S, io.frac1, (io.frac1 >> (-exp_diff).asUInt))
  val shifted_frac2 = Mux(exp_diff >= 0.S, (io.frac2 >> exp_diff.asUInt), io.frac2)
  
  // 相减
  val inverted_sign2 = ~io.sign2(0)
  val sub_result = Mux(io.sign1 === inverted_sign2, 
                      shifted_frac1 + shifted_frac2,
                      Mux(shifted_frac1 >= shifted_frac2, 
                          shifted_frac1 - shifted_frac2,
                          shifted_frac2 - shifted_frac1))
                          
  // 结果符号
  val sign_o = Mux(io.sign1 === inverted_sign2, 
                  io.sign1,
                  Mux(shifted_frac1 >= shifted_frac2, io.sign1, ~io.sign1(0)))
  
  // 输出
  io.sign_o := sign_o
  io.exp_o := max_exp
  io.frac_o := sub_result
  io.max_exp := max_exp
}

// 单个乘法单元
class MulUnit(val POSIT_WIDTH: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  var MUL_WIDTH: Int = 2 * (POSIT_WIDTH - ES - 2)
  
  val io = IO(new Bundle {
    val sign1 = Input(UInt(1.W))
    val sign2 = Input(UInt(1.W))
    val exp1 = Input(SInt(EXP_WIDTH.W))
    val exp2 = Input(SInt(EXP_WIDTH.W))
    val frac1 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    val frac2 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    
    val sign_o = Output(UInt(1.W))
    val exp_o = Output(SInt(EXP_WIDTH.W))
    val frac_o = Output(UInt(MUL_WIDTH.W))
  })
  
  // 乘法结果
  val sign_o = io.sign1 ^ io.sign2
  val exp_o = io.exp1 + io.exp2
  val frac_o = io.frac1 * io.frac2
  
  // 输出
  io.sign_o := sign_o
  io.exp_o := exp_o
  io.frac_o := frac_o
}

// 单个除法单元
class DivUnit(val POSIT_WIDTH: Int, val ALIGN_WIDTH: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  var MUL_WIDTH: Int = 2 * (POSIT_WIDTH - ES - 2)
  
  val io = IO(new Bundle {
    val sign1 = Input(UInt(1.W))
    val sign2 = Input(UInt(1.W))
    val exp1 = Input(SInt(EXP_WIDTH.W))
    val exp2 = Input(SInt(EXP_WIDTH.W))
    val frac1 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    val frac2 = Input(UInt((POSIT_WIDTH - ES - 2).W))
    
    val sign_o = Output(UInt(1.W))
    val exp_o = Output(SInt(EXP_WIDTH.W))
    val frac_o = Output(UInt(MUL_WIDTH.W))
  })
  
  // 除法结果
  val sign_o = io.sign1 ^ io.sign2
  val exp_o = io.exp1 - io.exp2
  
  // 扩展精度进行除法
  val extended_frac1 = Cat(io.frac1, 0.U((MUL_WIDTH - (POSIT_WIDTH - ES - 2)).W))
  val frac_o = extended_frac1 / io.frac2
  
  // 输出
  io.sign_o := sign_o
  io.exp_o := exp_o
  io.frac_o := frac_o
}

// 单个尾数归一化单元
class FracNormSingle(val POSIT_WIDTH: Int, val FRAC_WIDTH: Int, val POINT_POS: Int, val ES: Int) extends Module {
  var nd: Int = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int = nd + ES + 1
  var MUL_WIDTH: Int = 2 * (POSIT_WIDTH - ES - 2)
  
  val io = IO(new Bundle {
    val pir_frac_i = Input(UInt(FRAC_WIDTH.W))
    val pir_frac_o = Output(UInt(MUL_WIDTH.W))
    val exp_adjust = Output(SInt(EXP_WIDTH.W))
  })
  
  // 处理零值情况
  when(io.pir_frac_i === 0.U) {
    io.pir_frac_o := 0.U
    io.exp_adjust := 0.S
  }.otherwise {
    // 找到首个1的位置
    val leading_zeros = PriorityEncoder(Reverse(io.pir_frac_i))
    val shift_amount = leading_zeros - POINT_POS.U
    
    // 归一化后的小数
    val normalized_frac = (io.pir_frac_i << shift_amount)(FRAC_WIDTH-1, 0)
    val extended_frac = Cat(normalized_frac, 0.U((MUL_WIDTH - FRAC_WIDTH).W))
    
    io.pir_frac_o := extended_frac
    io.exp_adjust := (-shift_amount).asSInt
  }
}
