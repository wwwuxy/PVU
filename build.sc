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
    "-language:reflectiveCalls",  //允许使用反射调用
    "-deprecation", //编译器关于过时特性的警告
    "-feature",   //编译器对新特性的支持
    "-Xcheckinit" //检查初始化变量是否被使用
  )

  // def sources = T.sources {    //添加模块源代码目录
  //   super.sources() ++ Seq(
  //     PathRef(os.pwd / "difftest"),
  //     PathRef(os.pwd / "rvdecoderdb" / "rvdecoderdb")
  //   )
  // }

  val chiselVersion = "6.5.0"

  override def ivyDeps = Agg(
    ivy"org.chipsalliance::chisel:$chiselVersion"
  )

  override def scalacPluginIvyDeps = Agg(
    ivy"org.chipsalliance:::chisel-plugin:$chiselVersion"
  )

  object test extends ScalaTests with TestModule.ScalaTest {  //测试模块
    override def ivyDeps = m.ivyDeps() ++ Agg(
      ivy"org.scalatest::scalatest::3.2.19"
    )
  }

  def repositoriesTask = T.task { //仓库配置
    Seq(
      coursier.MavenRepository("http://mirrors.cloud.tencent.com/nexus/repository/maven-public"),
      coursier.MavenRepository(
        "https://repo.scala-sbt.org/scalasbt/maven-releases"
      )
    ) ++ super.repositoriesTask()
  }
}
