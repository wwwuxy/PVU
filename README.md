# PVU-Posit Vector Unit
PVU是一个可配置的Posit向量计算单元，支持加法、减法、乘法、除法、点积五种运算，并参数化了Posit位宽、尾数对齐位宽、Es位宽。

作者：吴欣宇 （cswuxy@mails.swust.edu.cn）

## 先决条件
- PVU是基于Chisel开发的，在因此需要先将Chisel转换为Verilog/systemverilog，可以使用**mill**或**sbt**
- 在仿真部分，需要安装**verilator**进行，我们编写了Kconfig来对测试内容进管理
- 若需要FPGA验证，可以将生成的verilog/systemverilog导入至Vavido进行验证

## 项目架构
```
├── build.sbt
├── build.sc
├── clean_all.py    
├── clean_line.py   #辅助清理生成Verilog的脏数据
├── config.h
├── csrc
├── Kconfig
├── makefile
├── obj_dir
├── project
├── README.md
├── src
├── target
├── test_src
├── vsrc
```
- 所有的Chisel文件位于`./src/main/scala/pvu`中
- 生成的verilog/systemverilog文件位于`./vsrc`
- verilator所需的激励文件位于`./csrc`

## PVU特点：
**参数化与模块化向量运算单元**：PVU采用可扩展的并行处理架构，能够同时高效地跨多个数据流进行计算。它支持五项核心算术运算：加法、减法、乘法、除法和点积运算，这些运算对于高性能数值计算至关重要。通过其可参数化的配置框架，PVU 能够动态调整关键设计参数，如位宽、指数范围和尾数对齐粒度。

**面向 PVU 的 RISC-V 指令集架构定制**：将Posit向量运算直接集成到 RISC-V 向量扩展（RVV）架构中。通过嵌入专为Posit数据格式定制的特定 RVV 指令，此架构弥合了Posit计算系统中软件执行与硬件实现之间长期存在的抽象差距。