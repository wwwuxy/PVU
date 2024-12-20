package pvu

import chisel3._
import chisel3.stage._
import circt.stage.ChiselStage
import chisel3.util._


object Elaborate extends App{
    val POSIT_WIDTH = 16
    val VECTOR_SIZE = 4
    val ALIGN_WIDTH = 14

    var filltlflag = Array[String]()
    var firtoolOpts = Array[String]()

    filltlflag = filltlflag ++ Array(
        "--target-dir", "generated",
        "--target:verilog"
        )
    firtoolOpts = firtoolOpts ++ Array(
        "--lowering-options=" + Seq(
        ).mkString(","),
        "--disable-all-randomization"
    )

    ChiselStage.emitSystemVerilogFile(
        new PvuTop(POSIT_WIDTH, VECTOR_SIZE, ALIGN_WIDTH),
        filltlflag,
        firtoolOpts
    )
}
