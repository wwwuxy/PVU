// #include <verilated.h>
// #include <verilated_vcd_c.h>  // 包含 VCD 功能
// #include <fstream>
// #include <iomanip>
// #include <cmath>
// #include <iostream>
// #include "VPvuTop.h"
// #include "../../SoftPosit/source/include/softposit.h"

// //---------------- 配置参数 -------------------
// #define OP_DOT_PRODUCT   0b101
// const char* ACT_FILE    = "../test_src/posit_activations.bin";
// const char* WEIGHT_FILE = "../test_src/posit_weights.bin";
// const char* GOLDEN_FILE = "../test_src/posit_output.bin";
// const int SAMPLE_NUM    = 1000;  // 与生成数据一致
// const char* WAVEFORM_FILE = "waveform.vcd";  // 波形输出文件
// //--------------------------------------------

// struct TestData {
//     uint32_t activations[SAMPLE_NUM][3];  // 格式: [SAMPLE_NUM][3]
//     uint32_t weights[SAMPLE_NUM][3];      // 格式: [SAMPLE_NUM][3]
//     uint32_t golden[SAMPLE_NUM];          // 格式: [SAMPLE_NUM]
// };

// TestData load_testdata() {
//     TestData td;
    
//     // 读取激活数据
//     std::ifstream act(ACT_FILE, std::ios::binary);
//     uint32_t act_dims[2];
//     act.read(reinterpret_cast<char*>(act_dims), 8);
//     act.read(reinterpret_cast<char*>(td.activations), sizeof(td.activations));

//     // 读取权重数据
//     std::ifstream weight(WEIGHT_FILE, std::ios::binary);
//     uint32_t weight_dims[2];
//     weight.read(reinterpret_cast<char*>(weight_dims), 8);
//     weight.read(reinterpret_cast<char*>(td.weights), sizeof(td.weights));

//     // 读取预期输出
//     std::ifstream golden(GOLDEN_FILE, std::ios::binary);
//     uint32_t golden_dims[1];
//     golden.read(reinterpret_cast<char*>(golden_dims), 4);
//     golden.read(reinterpret_cast<char*>(td.golden), sizeof(td.golden));

//     return td;
// }

// bool posit_equal(uint32_t a, uint32_t b) {
//     if (a == b) return true;

//     // 允许1ULP误差
//     int32_t ia = static_cast<int32_t>(a);
//     int32_t ib = static_cast<int32_t>(b);
//     return std::abs(ia - ib) <= 1;
// }

// int main(int argc, char** argv) {
//     Verilated::commandArgs(argc, argv);
    
//     // 启用波形跟踪
//     Verilated::traceEverOn(true);

//     VPvuTop* top = new VPvuTop;

//     // 创建 VCD 文件对象用于波形输出
//     VerilatedVcdC* tfp = new VerilatedVcdC;
//     top->trace(tfp, 99);  // 设置波形深度
//     tfp->open(WAVEFORM_FILE);  // 打开波形输出文件

//     // 加载测试数据
//     TestData td = load_testdata();

//     // 初始化信号
//     top->clock = 0;
//     top->reset = 1;
//     top->eval();

//     // 复位序列（2周期）
//     for (int i = 0; i < 2; ++i) {
//         top->clock ^= 1;
//         top->eval();
//         tfp->dump(i);  // 转储波形数据
//     }
//     top->reset = 0;

//     size_t errors = 0;
//     const size_t total = SAMPLE_NUM;

//     // 测试主循环
//     for (size_t i = 0; i < total; ++i) {
//         // 设置输入数据
//         uint32_t* act = td.activations[i];
//         uint32_t* weight = td.weights[i];
//         uint32_t golden = td.golden[i];

//         top->io_posit_i1_0 = act[0];
//         top->io_posit_i1_1 = act[1];
//         top->io_posit_i1_2 = act[2];
//         top->io_posit_i2_0 = weight[0];
//         top->io_posit_i2_1 = weight[1];
//         top->io_posit_i2_2 = weight[2];
//         top->io_op = OP_DOT_PRODUCT;

//         // 运行一次点积计算
//         top->clock = 1;
//         top->eval();
//         tfp->dump(i*2 + 1);  // 转储波形数据

//         top->clock = 0;
//         top->eval();
//         tfp->dump(i*2 + 2);  // 转储波形数据

//         // 结果比较
//         uint32_t hw_result = top->io_posit_dot_o;
//         if (!posit_equal(hw_result, golden)) {
//             std::cerr << "样本 " << i << " 不匹配\n"
//                       << "  硬件: 0x" << std::hex << hw_result << "\n"
//                       << "  预期: 0x" << std::hex << golden << "\n"
//                       << "  激活数据: " << std::hex << act[0] << ", " << act[1] << ", " << act[2] << "\n"
//                       << "  权重数据: " << std::hex << weight[0] << ", " << weight[1] << ", " << weight[2] << "\n";
//             errors++;
//         }

//         // 进度显示
//         if ((i+1) % 100 == 0) {
//             std::cout << "已测试 " << (i+1) << "/" << total 
//                       << " (" << ((i+1)*100/total) << "%)" 
//                       << std::endl;
//         }
//     }

//     // 资源清理
//     tfp->close();  // 关闭波形文件
//     top->final();
//     delete top;
//     delete tfp;

//     // 结果报告
//     std::cout << "\n验证结果\n========="
//               << "\n总样本数: " << total
//               << "\n错误数量: " << errors
//               << "\n错误率:   " << std::fixed << std::setprecision(2)
//               << (errors*100.0/total) << "%\n";

//     return errors ? EXIT_FAILURE : EXIT_SUCCESS;
// }
