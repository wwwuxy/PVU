package millbuild

import _root_.mill.runner.MillBuildRootModule

object MiscInfo_build {
  implicit lazy val millBuildRootModuleInfo: _root_.mill.runner.MillBuildRootModule.Info = _root_.mill.runner.MillBuildRootModule.Info(
    Vector("/home/wuxy/PVU/out/mill-launcher/0.11.7.jar").map(_root_.os.Path(_)),
    _root_.os.Path("/home/wuxy/PVU"),
    _root_.os.Path("/home/wuxy/PVU"),
  )
  implicit lazy val millBaseModuleInfo: _root_.mill.main.RootModule.Info = _root_.mill.main.RootModule.Info(
    millBuildRootModuleInfo.projectRoot,
    _root_.mill.define.Discover[build]
  )
}
import MiscInfo_build.{millBuildRootModuleInfo, millBaseModuleInfo}
object build extends build
class build extends _root_.mill.main.RootModule {

//MILL_ORIGINAL_FILE_PATH=/home/wuxy/PVU/build.sc
//MILL_USER_CODE_START_MARKER
// import Mill dependency
import mill._
import mill.scalalib._
import mill.scalalib.scalafmt.ScalafmtModule
import mill.scalalib.TestModule.Utest
// support BSP
import mill.bsp._

object pvu extends ScalaModule with ScalafmtModule { m =>
  override def scalaVersion = "2.13.12"
  override def scalacOptions = Seq(
    "-language:reflectiveCalls",  // 允许使用反射调用
    "-deprecation",               // 编译器关于过时特性的警告
    "-feature",                   // 编译器对新特性的支持
    "-Xcheckinit"                 // 检查初始化变量是否被使用
  )

  // def sources = T.sources {    // 添加模块源代码目录
  //   super.sources() ++ Seq(
  //     PathRef(os.pwd / "src" / "pvu")
  //   )
  // }

  val chiselVersion = "6.5.0"

  override def ivyDeps = Agg(
    ivy"org.chipsalliance::chisel:$chiselVersion",
    // ivy"org.circt::circt-stage:0.0.1" // 根据实际情况调整版本
  )

  override def scalacPluginIvyDeps = Agg(
    ivy"org.chipsalliance:::chisel-plugin:$chiselVersion"
  )

  object test extends ScalaTests with TestModule.ScalaTest {  // 测试模块
    override def ivyDeps = m.ivyDeps() ++ Agg(
      ivy"org.scalatest::scalatest::3.2.16"
    )
  }

  def repositoriesTask = T.task { // 仓库配置
    Seq(
      coursier.MavenRepository("http://mirrors.cloud.tencent.com/nexus/repository/maven-public"),
      coursier.MavenRepository("https://repo.scala-sbt.org/scalasbt/maven-releases")
      // 如果 CIRCT 不在上述仓库中，添加 CIRCT 的仓库
    ) ++ super.repositoriesTask()
  }
}

}