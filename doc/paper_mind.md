### 硬件模块：

#### 解码：

#### 加法：

#### 减法：

#### 乘法：

#### 除法：

#### 点积：
1. 复用乘法逻辑，并增加一层任意数乘0得0的判断
2. 对每个向量的乘法结果进行对阶操作
3. 将尾数全部转换为补码
4. 通过CsaTree进行累加
5. 进行最后一次求和
6. 将整个CsaTree视为一个quire，其位宽为误差舍入留下了充分的余地
7. 所有元素全部计算完成后，再进入标准化部件进行舍入操作

#### 编码：



### ISA设计：

- funct6 --> inst[31:26]
- vm ------> inst[25]
- vs2 ------> inst[24:20]
- vs1 ------> inst[19:15]
- funct3 --> inst[14:12]
- vd ------> inst[11:7]
- opfvv -->  inst[6:0]
#### 加法：
```
vpositadd vd, vs1, vs2, vm
001101 0 vs2 vs1 000 vd 1010111  
```
#### 减法：
```
vpositsub vd, vs1, vs2, vm
001101 0 vs2 vs1 001 vd 1010111 0  
```
#### 乘法：
```
vpositmul vd, vs1, vs2, vm
001101 0 vs2 vs1 010 vd 1010111     
```
#### 除法：
```
vpositdiv vd, vs1, vs2, vm
001101 0 vs2 vs1 011 vd 1010111   
```
#### 点积：
```
vpositdot vd, vs1, vs2, vm
001101 0 vs2 vs1 100 vd 1010111   
```

#### 注：
- `vd`: 目标向量寄存器，存储运算结果。
- `vs1`, `vs2`: 源向量寄存器。
- `vm`: inst[25]，为0时则启用掩码向量，简化处理这里为1

---
### 设计问题：
8. 似乎转换成posit的值较大，计算时出现溢出

---
### 测试方案：

#### Verilator
9. 通过Pytorch提取Resnet的首个卷积层的激活、权重，为了更贴合实际，我对其进行了量化处理
10. 通过SoftPosit库 将量化后的激活、权重数据批量转换为 Posit格式，其中激活数据和权重数据各4000条
11. 对五大运算进行依次测试，验证其计算正确度
12. 通过激励文件，送入PVU进行计算，对比结果得出点积运算正确率

#### Vavido
13. 仿真模拟，得到PPA等成本信息
	1. Area
	2. Delay
	3. Power
	4. Performance
	5. Area Efficiency
	6. Energy Efficiency

#### yosys-sta
- 仿真拿到PVU的面积开销  --> 该项目无法仿真二维数组，需要综合时展开，有error

#### TODO:
- 添加GEMM测试数据


---
#### 问题：
14. 如何体现其对于754的优势，后续是否需要添加double转float再进行量化的验证工作？
15.  对posit16、posit8是否需要测试？ --> Softposit库不支持posit<16,2> <8,2>

---
#### 图表：
16. PVU和其他hw的功能比较 --> table
17. Posit四个部分介绍 --> figure
18. posit-Regime部分计算规则（r、k、useed） --> figure
19. posit计算示例 --> figure
20. Posit向量划分（复用专利1）--> figure
21.  基于Deep PeNSieve比较一下FP64和P32在同一个CNN上的损失和准确率
22. 基于PositNN比较一下FP64和P32在同一个DNN上的损失和准确率
23. RVV扩展指令 --> table
24. PVU数据流主图 --> figure
25. 乘法、除法、点积（对于quire可以加一个小图）各画一个算法逻辑 --> figure



___
### 结构：
#### 1. introduction：

#### 2. blackground：

##### 2.1 Posit Number System：

###### 2.2 RISC-V：

#### 3. related work：

