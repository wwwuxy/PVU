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


