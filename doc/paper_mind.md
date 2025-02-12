### 硬件模块：

#### 解码：
1. 提取符号位，若符号位为1，表示Posit是负数，若符号位为0，表示正数，并提取后的Posit二进制修改为补码表示
2. 计算Regime的位宽和值，通过前导0计数模块（LZC）来计算Regime部分的值，首先提取Regime部分的最高位，若为0，表示Regime类如（00....01），此时直接送入LZC模块进行计数，若为1，则Regime类如（11....10），则先将所有二进制取反，再送入LZC模块进行计数
3. LZC模块将返回前导0的个数以及是否全0，前者可以结合Regime最高位的值代入公式（1）计算r值，由于Regime位域的长度是动态的，故有Regime位域占满整个Posit位宽的情况，此时可以通过后者进行判断
4. Regime位域的长度k可以由前导0的个数+1得到，我们将Posit通过桶形移位器左移k+1位，即可从最高位提取Exponent位域，其宽度ES由Posit配置（通常为2）获取，同时，若ES不为2，我们可以将ES值代入公式（2），得到Useed的值，若ES为2，我们则不用计算Useed。
5. 为了便于后续计算，我们将Regime和Exponent结合，计算统一的以二为底的指数值exp。具体而言，我们将r左移ES位，再和Exponent位域的值e相加，即可得到exp的值。
6. 最后，我们通过桶形移位器左移ES位，即可得到尾数部分Fraction。注意，在Posit数制中，尾数部分是有隐藏位的m的，我们将其与提取到的Fraction拼接，便获得了运算时的真实尾数值
7. 至此，我们成功将Posit解码，得到了Posit浮点运算中间表示（PIR），包括表示Posit正负的sign，以二为底的指数值exp和实际尾数frc。

#### 加法：

#### 减法：

#### 乘法：

#### 除法：

#### 点积：
8. 复用乘法逻辑，并增加一层任意数乘0得0的判断
9. 对每个向量的乘法结果进行对阶操作
10. 将尾数全部转换为补码
11. 通过CsaTree进行累加
12. 进行最后一次求和
13. 将整个CsaTree视为一个quire，其位宽为误差舍入留下了充分的余地
14. 所有元素全部计算完成后，再进入标准化部件进行舍入操作

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
15. 似乎转换成posit的值较大，计算时出现溢出

---
### 测试方案：

#### Verilator
16. 通过Pytorch提取Resnet的首个卷积层的激活、权重，为了更贴合实际，我对其进行了量化处理
17. 通过SoftPosit库 将量化后的激活、权重数据批量转换为 Posit格式，其中激活数据和权重数据各4000条
18. 对五大运算进行依次测试，验证其计算正确度
19. 通过激励文件，送入PVU进行计算，对比结果得出点积运算正确率

#### Vavido
20. 仿真模拟，得到PPA等成本信息
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

21. 如何体现其对于754的优势，后续是否需要添加double转float再进行量化的验证工作？
22.  对posit16、posit8是否需要测试？ --> Softposit库不支持posit<16,2> <8,2>

---
#### 图表：

- [x] PVU和其他hw的功能比较 --> table
- [ ] Posit四个部分介绍 --> figure
- [ ] posit-Regime部分计算规则（r、k、useed） --> figure
- [x] posit计算示例 --> figure
- [ ] Posit向量划分（复用专利1）--> figure
- [ ] 基于Deep PeNSieve比较一下FP64和P32在同一个CNN上**训练**的损失和准确率 --> 无法复现就用Table 2的数据画直方图来对比推理的准确度
- [ ] 基于PositNN比较一下FP64和P32在同一个DNN上的损失和准确率
- [x] RVV扩展指令 --> table
- [ ] PVU数据流主图 --> figure
- [ ] 乘法、除法、点积（对于quire可以加一个小图）各画一个算法逻辑 --> figure
- [x] PAU挂载至运算单元图  --> figurer --> 类似PPU-Light的前端
- [x] PVU与其他HW的异同 --> table



___
### Paper-Word：面向低功耗平台的Posit数制向量运算单元设计与实现

#### Abstract：
在边缘计算、人工智能、深度学习和大数据处理等领域的快速发展背景下，传统的IEEE 754浮点数体系面临精度和效率的瓶颈，尤其在某些特定应用场景中暴露出高能耗和精度损失等问题。为了解决这些挑战，Posit数制凭借其自适应精度分布、更广泛的动态范围以及较低的硬件资源消耗，逐渐成为研究的热点，尤其在资源受限的边缘计算环境中展现出显著的优势。然而，尽管Posit数制在理论上具有诸多优势，现有研究仍主要集中在标量计算模式上，导致在大规模并行数据处理时出现性能瓶颈。本文提出了一种基于Chisel语言设计的Posit向量运算单元（PVU），该单元通过并行处理多个数据集，支持加法、减法、乘法、除法和点积等基本运算，突破了传统标量设计的局限。结合定制化的RISC-V指令扩展，本研究实现了更高的计算性能和能效比。实验结果表明，Posit数制在精度、速度和能效方面均优于IEEE 754浮点数制，展示了其在多种应用场景中的潜在优势。本文的贡献包括高效的向量运算单元实现、参数化和模块化的硬件设计、自定义RISC-V指令支持以及Posit数制的实际应用验证，为下一代浮点数运算在边缘计算中的应用提供了创新性解决方案。
#### 1. introduction：
如今。随着人工智能物联网（AIOT）的不断火热，边缘计算对数值计算精度与运算效率的要求不断提升。传统的IEEE 754浮点数体系虽然在多数场景中表现稳定，但其固定的精度分配和舍入机制在某些特殊应用中逐渐暴露出灵活性不足、能耗较高以及精度损失严重等问题。为此，在2017年由John L. Gustafson提出的posit数制因其自适应精度分布、更宽的动态范围和较低的硬件资源消耗等优势，逐渐成为学术界和工业界研究的热点之一。

然而，针对Posit浮点运算硬件的研究较少，且大多采用逐一处理数据的方式，即标量计算模式，虽然设计相对简单、实现较为成熟，但在面对大规模并行数据处理需求时容易形成性能瓶颈。相比之下，向量计算单元通过同时对多个数据元素进行并行运算，显著提高了数据吞吐量和运算效率。在信号处理、图像处理、科学计算和机器学习等领域，向量计算单元展现出了更高的能效比和更低的功耗，成为解决复杂计算任务的重要突破口。

RISC-V指令集架构（ISA）是一个开放、可扩展的架构，旨在满足从嵌入式系统到高性能计算的多种应用需求。RISC-V以其简单、高效、模块化和灵活性强等特点脱颖而出。其开放性使得任何人都可以免费使用并进行扩展，这带来了相对于X86、ARM的巨大优势。RISC-V的V扩展（RVV）是为提升处理器在数据并行任务中的性能而设计的扩展，通过对向量操作的支持，使得处理器能够在一个指令周期内对多个数据元素进行并行计算，极大地提高了科学计算、图像处理、机器学习等领域中的数据处理效率。

Chisel作为一种基于Scala的现代硬件构建语言，凭借其高度抽象、模块化设计和灵活的硬件描述能力，为快速原型开发和验证硬件架构提供了理想的平台。利用Chisel进行硬件设计，不仅可以显著提高开发效率，而且有助于实现更高层次的设计复用和参数化优化。

基于上述原因，本研究旨在设计并实现一款基于Chisel语言的posit向量运算单元(PVU)，该单元支持加法、减法、乘法、除法以及向量点积等运算，进一步利用定制化的RISC-V指令扩展，打破传统标量设计的局限，为下一代高性能、低功耗计算平台提供了全新的解决方案。具体而言，本工作主要贡献如下：
- 向量运算单元的高效实现：本研究设计的posit向量运算单元能够同时对多组数据进行并行处理，支持向量加法、向量减法、向量乘法、向量除法、向量点积五大运算，突破了传统标量计算模式在大规模数据处理中的性能瓶颈。
- 参数化模块化的硬件设计：利用Chisel语言的高度抽象和参数化能力，本文构建了一个模块化、可扩展的硬件架构。将Posit位宽、es位宽和尾数对齐位宽进行了参数化设计，便于在不同应用场景下进行灵活配置和扩展。这种设计方法大大降低了开发成本，并为后续系统级集成和功能扩展提供了坚实基础。
- 自定义RISC-V指令支持：为了充分发挥posit向量运算单元的性能优势，本研究在RISC-V向量扩展（RVV）的基础上，定制了一系列Posit向量运算指令。这些自定义指令能够直接调用向量运算单元进行数据处理，优化了数据传输和指令解码流程，显著提升了硬件与软件之间的协同效率，从而实现了更高的系统整体运算性能和能效比。
- Posit数制应用验证：通过实验与仿真结果证明，该向量运算单元在精度、速度以及能耗等方面均具备较强的竞争力，并且，在大多数应用场景下，Posit数制比IEEE 754浮点数制拥有更高的计算精度，并且在降低功耗和资源占用方面展现出明显优势，从而验证了其在高性能、低功耗计算平台中的应用潜力。
本文余下部分的组织结构如下：第二部分介绍了Posit数制系统和RISC-V指令集。第三部分对比了本研究和其他现有研究的异同。第四部分详细阐述了PVU的逻辑实现，重点介绍了乘法和点积算法。第五部分描述了自定义的指令集架构扩展和编译支持。第六部分描述了硬件成本和运算精度。最后一部分讲述了总结与展望。

#### 2. Blackground：
Posit数制通过引入灵活的编码机制来提高数值表示的效率和精度。如图一所示，它的基本组成部分包括Sign, Regime, Exponent和Fraction，每个部分都有独特的功能和结构，使得Posit数制在精度和范围之间达到了平衡。以下是对各个组成部分的详细介绍：
- 符号位S是Posit数制的第一个比特，负责确定posit的正负。若 s = 0，则Posit为正数；若 s = 1，则Posit为负数。
- Regime file R是Posit数制的关键创新之一，采用了可变长度的编码方式来表示指数的范围，决定了Posit的尺度。Regime由连续的1和0组成，由反转位R0控制其长度，当Posit较大时，Regime将包含更多的1，反之，Regime将包含更多的0。Regime file的长度为k，值r由下述公式计算：（ r 的计算公式）
- Regime value是一个特殊常数Useed的比例因子，Useed的值与Posit的配置有关，具体而言，取决于Posit中Exponent部分的位宽ES，其计算公式如下：（Useed的计算公式）
- Exponent file E是Posit中显示配置的部分。由于Regime位域是可变长度的，因此Exponent位可能在Posit的LSB之后，此时Exponent的值为0。
- Fraction file F是Posit数制的最后一部分，类似于IEEE 754中的尾数部分。但是，在Fraction前面总是有一个隐含数m，当Posit是正数时，m = 1，当Posit是负数时，m = 2。这意味着在实际存储时，尾数部分通常只存储后续的二进制位，而第一个位不需要显式存储。例如，数值1.101会在尾部部分存储101，而隐式地理解为1.101。

综合上述4个部分，虽然在Posit标准2022中，ES固定为2，但为了更好的评估，PVU将ES进行了参数化处理，从而得到了两种计算公式，当ES不为2时，Posit value p的计算公式如（3）所示，当ES为2时，Posit value p的计算公式如（4）所示。

特殊的，若Posit file全为0，则Posit value 为0，若Posit file全为1，则Posit value为Not a Real(NaR)，即umbrella value for anything not mathematically definable as a unique real number。

举个例子，如图2所示，0111110111101010是Posit<16,2>的二进制编码，Posit的符号位为0，表示是正数，故s = 0。Regime file为111110，有5个连续的1和一个0组成，其长度k = 6，故r = 5 - 1 =4。Exponent file为11，故e = 3，Useed值为16。最后，Fraction file为1101010，因此f = 106/2^7 = 106/128 = 0.828125。因此，根据公式(3)，可以计算出p = (1+0.828125) ×
2^(1-2×0)×(4×4+2+0) = 239616
#### 3. Related work：
在RISC-V架构方面，欧洲的PULP平台探索了RISC-V架构的低功耗应用[1]，尤其在物联网设备和嵌入式系统中表现出色。RISC-V的优势在于其指令集简洁且高度模块化，能够根据具体需求扩展，尤其适合在边缘设备上实现定制化设计，如专用于人工智能推理任务的加速器[2]。

在Posit浮点运算软件方面，SoftPosit是由Berkeley Lab开发的一个开源项目[3]，提供了Posit浮点数的基本运算支持，并展示了Posit在高精度数值计算中的应用潜力。Julia的Posit库[4]已经实现了对Posit浮点数的支持，并被广泛应用于数值计算和深度学习推理任务中。研究表明，在相同位宽下，Posit浮点数的计算精度和效率显著优于IEEE 754浮点数[5]，尤其是在低功耗高效计算场景中，Posit的应用前景广阔。其他领域也有许多应用Posit格式的研究，包括图像处理[6]，天气预报[7]等。

法国里昂大学的Florent de Dinechin团队对Posit浮点数的适用情景进行了探索[8]，发现其非常适用于机器学习领域，并证明了Posit浮点数与IEEE 754浮点数之间的精确转换。美国罗切斯特理工学院的Zachariah Carmichael团队成功将深度神经网络（DNN）在低于8位的Posit浮点数上运行[9]，并获得更好的精度和延迟。意大利比萨大学的Marco Cococcioni团队通过软件仿真，探索了Posit浮点机制向量化计算的可能性，并将其集成在DNN模型训练推理过程中[10]。马德里康普顿斯大学的PeNSieve项目提出了一种基于Posit的深度神经网络模型训练和推理框架，并通过融合运算进行了低比特量化处理[11]。

相较于Posit数制软件仿真和应用的百花齐放，其硬件计算单元的研究则较为匮乏。马德里康普顿斯大学的PERCIVAL[12]和BIG-PERCIVAL项目[13]聚焦于小规模和大规模Posit运算的实现，旨在加速深度学习推理和科学计算。德国亚琛工业大学的PERC项目[14]则研究如何将Posit运算集成到高性能处理器中，而印度马德拉斯理工学院的PERI项目[15]侧重于优化物联网设备的高精度计算和能效表现。新加坡国立大学的POSAR项目[16]为智能终端设备和低功耗应用设计了轻量化的Posit处理单元，推动了RISC-V架构在边缘计算中的广泛应用。意大利比萨大学的PPU-light项目[17]可以将Posit转换为其他数制。南京大学的李琼团队设计了一个可配置的开源Posit点积单元PDPU，能够在深度学习应用中执行有效的点积运算，并支持混合精度[18]。如表1所示，我们总结了其中一些工作，并与本工作进行了比较。
#### 4. Posit Vector Unit Arithmentic Operations And Implementation：

#### 5. RISC-V ISA Extension And Compiler suppopt

#### 6. Conclusion And Expectation

---
[1] Pullini A, Rossi D, Loi I, Tagliavini G, Benini L. Mr.Wolf: An Energy-Precision Scalable Parallel Ultra Low Power SoC for IoT Edge Processing[J]. IEEE Journal of Solid-State Circuits, 2019, 54(7): 1970-1981. DOI:10.1109/JSSC.2019.2912307.
[2] Wang S, Wang X, Xu Z, Chen B, Feng C, Wang Q, Ye T T. Optimizing CNN Computation Using RISC-V Custom Instruction Sets for Edge Platforms[J]. IEEE Transactions on Computers, 2024, 73(5): 1371-1382.
[3] C. Leong, “Softposit,” https://gitlab.com/cerlane/SoftPosit, 2018.
[4] Klöwer M, Düben PD, Palmer TN. SoftPosit.jl: A posit arithmetic emulator for Julia[EB/OL]. GitHub repository, 2020.
[5] S. D. Ciocirlan, D. Loghin, L. Ramapantulu, N. Tapus, and Y. M. Teo, “The Accuracy and Efficiency ofPosit Arithmetic,” 2021, arXiv:2109.08225.
[6]N. Shah, L. I. G. Olascoaga, S. Zhao, W. Meert, and M. Verhelst, “DPU:
DAG processing unit for irregular graphs with precision-scalable posit
arithmetic in 28 nm,” IEEE J. Solid State Circuits (JSSC), vol. 57, no. 8,
pp. 2586–2596, 2022.
[7]N. Ho, D. T. Nguyen, H. D. Silva, J. L. Gustafson, W. Wong, and I. J.
Chang, “Posit arithmetic for the training and deployment of generative
adversarial networks,” in 2021 Design, Automation & Test in Europe
Conference & Exhibition (DATE). IEEE, 2021, pp. 1350–1355.
[8] de Dinechin, F., Forget, L., Muller, J.-M., & Uguen, Y. Posits: The Good, the Bad and the Ugly. Univ Lyon, INSA Lyon, Inria, CITI, Lyon, France.
[9] Carmichael, Z., Langroudi, H. F., Khazanov, C., Lillie, J., Gustafson, J. L., & Kudithipudi, D. Deep Positron: A Deep Neural Network Using the Posit Number System. Neuromorphic AI Lab, Rochester Institute of Technology, NY, USA, National University of Singapore, Singapore.
[10] Cococcioni, M., Rossi, F., Ruffaldi, E., & Saponara, S. Fast Approximations of Activation Functions in Deep Neural Networks when using Posit Arithmetic. _Department of Information Engineering, Università di Pisa_, Medical Microinstruments (MMI) S.p.A., 2020. Published: March 10, 2020.
[11] Murillo, R., Del Barrio, A. A., & Botella, G. (2020). Deep PeNSieve: A deep learning framework based on the posit number system. _Digital Signal Processing_, 102, 102762.
[12] Mallas, D., Murillo, R., Del Barrio, A. A., Botella, G., Piñuel, L., & Prieto-Matias, M. PERCIVAL: Open-Source Posit RISC-V Core With Quire Capability[J]. IEEE Access, Vol. 10, No. 3, July-Sept. 2022.
[13] Mallasén, D., Del Barrio, A. A., & Prieto-Matias, M. Big-PERCIVAL: Exploring the Native Use of 64-Bit Posit Arithmetic in Scientific Computing[EB/OL]. arXiv preprint, 2023, May.
[14] M. V. Arunkumar, S. G. Bhairathi, and H. G. Hayatnagarkar, “PERC: Posit Enhanced Rocket Chip,” in 4th Workshop on Computer Architecture Research with RISC-V (CARRV’20), 2020, p. 8.
[15] S. Tiwari, N. Gala, C. Rebeiro, and V. Kamakoti, “PERI: A Configurable Posit Enabled RISC-V Core,” ACM Transactions on Architecture and Code Optimization, vol. 18, no. 3, pp. 1–26, Jun. 2021.
[16] S. D. Ciocirlan, D. Loghin, L. Ramapantulu, N. Tapus, and Y. M. Teo, “The Accuracy and Efficiency of Posit Arithmetic,” 2021, arXiv:2109.08225.
[17] M. Cococcioni, F. Rossi, E. Ruffaldi, and S. Saponara, “A Lightweight Posit Processing Unit for RISC-V Processors in Deep Neural Network Applications,” IEEE Transactions on Emerging Topics in Computing, no. 01, pp. 1–1, Oct. 2021.
[18] Li, Q., Fang, C., & Wang, Z. PDPU: An Open-Source Posit Dot-Product Unit for Deep Learning Applications. In _2023 IEEE International Symposium on Circuits and Systems (ISCAS)_, 2023. IEEE.


---
(1) r的计算公式
(2) useed的计算公式
(3) p的计算公式 -->ES 可配置版本
(4) p的计算公式 -->ES 固定为2版本
fig1：Posit32数制格式
fig2：Posit<16,2>举例
fig3：PVU硬件设计主图
- 解码
- 五大运算
- 尾数对齐
- 规格化
- 编码


table1：本工作与相关Posit处理单元的异同
- 比较角度：Posit配置参数化、基础四则运算、点积/FMA运算、RISC-V集成、标量运算、向量运算、高级软件支持、自定义指令支持、开源
- 比较对象：BIG-PERCIVAL、PERC、PERI、POSAR、PPU-light、PDPU

---

### 会议：
- Euro-Par 2025
    - 摘要截止：2025-2-24
    - 投稿截止：2025-3-9