# PVU (Posit Vector Unit)

## 项目概述

PVU是一个基于Chisel的Posit向量处理单元实现，支持常见的向量运算，包括加法、减法、乘法、除法和点积等操作。主要用于加速Posit数值格式的向量计算，同时支持与IEEE-754浮点格式的互转。

## 硬件架构

PVU的顶层模块为`PvuTop`，整体结构包括以下几个主要部分：

1. 输入解码部分：负责将Posit格式解码为内部表示（符号位、指数和尾数）
2. 算术运算单元：提供各种向量运算功能
3. 对齐和规范化：处理尾数对齐和结果规范化
4. 输出编码：将内部表示重新编码为Posit格式

## 主要功能

PVU支持以下运算：

1. 加法 (Add)
2. 减法 (Sub)
3. 乘法 (Mul)
4. 除法 (Div)
5. 点积 (DotProduct)
6. Posit精度转换
7. Float和Posit相互转换
8. 大小比较

## 优化历史

### 2023年优化
- 简化代码结构，优化硬件资源使用
- 采用码高尔夫风格，大幅降低代码行数（约53.5%）
- 主要优化模块包括：
  - IntReciprocal：整数倒数模块（优化率75%）
  - IntDivider：整数除法模块（优化率60%）
  - Div：Posit向量除法单元（优化率47%）
  - Mul：Posit向量乘法单元（优化率56%）
  - Add：Posit向量加法单元（优化率46%） 
  - Sub：Posit向量减法单元（优化率48%）
  - DotProduct：Posit点积单元（优化率48%）

## 使用说明

### 参数配置

PVU支持多种运行时配置参数：

- `MAX_POSIT_WIDTH`：最大Posit位宽
- `MAX_VECTOR_SIZE`：最大向量大小
- `MAX_ALIGN_WIDTH`：最大对齐宽度
- `ES`：ES参数
- `FLOAT_MODE`：浮点数格式选择
- `INT_WIDTH`：整数位宽

### 操作码说明

PVU通过操作码(op)控制执行不同的运算：

- 1：加法
- 2：减法
- 3：乘法
- 4：除法
- 5：点积
- 6：Posit精度转换
- 7：Float和Posit相互转换
- 8：大小比较（Greater），输出较大值
- 9：大小比较（Less），输出较小值
- 10：Posit量化至Int8

### 浮点数格式选择

PVU支持多种浮点数格式，通过`float_mode`控制：

- 0：FP4 (1位符号, 1位指数, 2位尾数)
- 1：FP8 (1位符号, 4位指数, 3位尾数)
- 2：FP16 (1位符号, 5位指数, 10位尾数)
- 3：FP32 (1位符号, 8位指数, 23位尾数)
- 4：FP64 (1位符号, 11位指数, 52位尾数)

## 开发者文档

详细的优化报告请参考 [optimization_report.md](/home/wuxy/PVU/optimization_report.md)。

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
- 已投Euro Par 2025

## PVU特点：
- **参数化与模块化向量运算单元**：PVU采用可扩展的并行处理架构，能够同时高效地跨多个数据流进行计算。它支持五项核心算术运算：加法、减法、乘法、除法和点积运算，这些运算对于高性能数值计算至关重要。通过其可参数化的配置框架，PVU 能够动态调整关键设计参数，如位宽、指数范围和尾数对齐粒度。

- **面向 PVU 的 RISC-V 指令集架构定制**：将Posit向量运算直接集成到 RISC-V 向量扩展（RVV）架构中。通过嵌入专为Posit数据格式定制的特定 RVV 指令，此架构弥合了Posit计算系统中软件执行与硬件实现之间长期存在的抽象差距。

