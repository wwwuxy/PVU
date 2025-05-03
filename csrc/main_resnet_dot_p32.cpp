#include"../config.h"
#ifdef CONFIG_RESNET_DOT_P32 

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <chrono>  // 添加计时库
#include <vector>  // 添加vector用于统计误差
#include "VPvuTop.h"
#include "../../SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP                 5
const char* ACT_FILE    = "./test_src/ResNet50/posit_activations.bin";
const char* WEIGHT_FILE = "./test_src/ResNet50/posit_weights.bin";
const char* GOLDEN_FILE = "./test_src/ResNet50/dot_product_results.bin";
const int SAMPLE_NUM    = 9000;  // 与生成数据一致
const int TOTAL_ELEMENTS = 9000;  // 点积操作输出是标量，所以每个样本只有一个元素
const char* WAVEFORM_FILE = "waveform.vcd";  // 波形输出文件
const int MAX_VECTOR_SIZE = 4;  // 最大向量大小
//--------------------------------------------

//---------------- 硬件接口说明 ---------------
// 输入接口:
// io_posit_i1_0~3, io_posit_i2_0~3: posit格式输入 [31:0]
// io_op: 操作类型 [2:0] - 5表示点积
// 
// 输出接口:
// io_posit_o_0~3: posit格式输出 [31:0]（单独向量操作结果）
// io_posit_dot_o: posit点积结果 [31:0]（四个元素的点积）
//--------------------------------------------

// 直接实现一些必要的辅助函数
inline bool signP32UI(uint32_t ui) {
    return (ui & 0x80000000) != 0;
}

inline bool signregP32UI(uint32_t ui) {
    return (ui & 0x40000000) != 0;
}

// 直接在此实现convertP32ToDouble函数，避免链接错误
double convertP32ToDouble(posit32_t pA) {
    union ui32_p32 uA;
    union ui64_double uZ;
    uint_fast32_t uiA, tmp = 0;
    uint_fast64_t expA = 0, uiZ, fracA = 0;
    bool signA = 0, regSA;
    int_fast32_t scale, kA = 0;

    uA.p = pA;
    uiA = uA.ui;

    if (uA.ui == 0)
        return 0;
    else if (uA.ui == 0x80000000)
        return NAN;
    else {
        signA = signP32UI(uiA);
        if (signA) uiA = (-uiA & 0xFFFFFFFF);
        regSA = signregP32UI(uiA);
        tmp = (uiA << 2) & 0xFFFFFFFF;
        if (regSA) {
            while (tmp >> 31) {
                kA++;
                tmp = (tmp << 1) & 0xFFFFFFFF;
            }
        }
        else {
            kA = -1;
            while (!(tmp >> 31)) {
                kA--;
                tmp = (tmp << 1) & 0xFFFFFFFF;
            }
            tmp &= 0x7FFFFFFF;
        }
        expA = tmp >> 29; // 提取2位

        fracA = (((uint64_t)tmp << 3) & 0xFFFFFFFF) << 20;

        expA = (((kA << 2) + expA) + 1023) << 52;
        uiZ = expA + fracA + (((uint64_t)signA & 0x1) << 63);

        uZ.ui = uiZ;
        return uZ.d;
    }
}

struct TestData {
    // 使用vector替代固定大小数组，以支持动态向量大小
    std::vector<std::vector<uint32_t>> activations;  // [sample_num][4] (posit格式)
    std::vector<std::vector<uint32_t>> weights;      // [sample_num][4] (posit格式)
    std::vector<uint32_t> golden;                    // [sample_num] (点积结果)
    
    // 构造函数，初始化数据结构
    TestData(int sample_num) {
        // 点积固定使用4元素向量
        activations.resize(sample_num, std::vector<uint32_t>(4, 0));
        weights.resize(sample_num, std::vector<uint32_t>(4, 0));
        golden.resize(sample_num);
    }
};

// 读取posit格式数据
uint32_t read_posit_data(std::ifstream& file) {
    uint32_t data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        return data;
    }
    return 0;  // 如果读取失败，返回0
}

// 跳过 fa0 并读取有效Posit数据
uint32_t read_valid_posit_data(std::ifstream& file) {
    uint32_t data;
    while (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        if (data != 0xfa0) {  // 忽略头部信息 fa0
            return data;
        }
    }
    return 0;  // 如果读取失败，返回 0
}

TestData load_testdata() {
    TestData td(SAMPLE_NUM);

    // 读取posit激活数据
    std::ifstream act(ACT_FILE, std::ios::binary);
    if (!act.is_open()) {
        std::cerr << "无法打开激活数据文件: " << ACT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.activations[i][j] = read_posit_data(act);
        }
    }

    // 读取posit权重数据
    std::ifstream weight(WEIGHT_FILE, std::ios::binary);
    if (!weight.is_open()) {
        std::cerr << "无法打开权重数据文件: " << WEIGHT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.weights[i][j] = read_posit_data(weight);
        }
    }

    // 读取预期输出数据（posit32格式）
    std::ifstream golden(GOLDEN_FILE, std::ios::binary);
    if (!golden.is_open()) {
        std::cerr << "无法打开预期输出数据文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        td.golden[i] = read_valid_posit_data(golden);
    }

    return td;
}

bool posit_equal(uint32_t a, uint32_t b) {
    // 如果完全相等，直接返回true
    if (a == b) return true;
    
    // 检查特殊值NaR (Not a Real) - Posit中的NaN表示
    bool a_is_nar = (a == 0x80000000);
    bool b_is_nar = (b == 0x80000000);
    
    // 如果两者都是NaR，视为相等
    if (a_is_nar && b_is_nar) return true;
    
    // 如果只有一个是NaR，视为不等
    if (a_is_nar || b_is_nar) return false;
    
    // 检查零值 (posit零值是0x00000000)
    bool a_is_zero = (a == 0x00000000);
    bool b_is_zero = (b == 0x00000000);
    
    // 如果一个是零而另一个不是，视为不等
    if (a_is_zero != b_is_zero) return false;
    
    // 允许1ULP误差
    int32_t ia = static_cast<int32_t>(a);
    int32_t ib = static_cast<int32_t>(b);
    return std::abs(ia - ib) <= 1;
}

// 计算posit32的误差率
double posit32_error_rate(uint32_t hw_result, uint32_t golden) {
    // 转换为浮点数以计算误差
    posit32_t p_hw = {.v = hw_result};
    posit32_t p_golden = {.v = golden};
    
    // 使用SoftPosit库函数直接转换
    double f_hw = convertP32ToDouble(p_hw);
    double f_golden = convertP32ToDouble(p_golden);
    
    // 计算相对误差（百分比）
    if (f_golden == 0.0) {
        // 如果标准值为0，使用绝对误差
        return std::abs(f_hw);
    } else {
        return std::abs((f_hw - f_golden) / f_golden) * 100.0;
    }
}

// 计算绝对误差
double posit32_absolute_error(uint32_t hw_result, uint32_t golden) {
    posit32_t p_hw = {.v = hw_result};
    posit32_t p_golden = {.v = golden};
    
    double f_hw = convertP32ToDouble(p_hw);
    double f_golden = convertP32ToDouble(p_golden);
    
    return std::abs(f_hw - f_golden);
}

// 添加性能测试函数
std::vector<double> run_performance_test(int sample_count, bool enable_waveform = false) {
    VPvuTop* top = new VPvuTop;
    VerilatedVcdC* tfp = nullptr;
    
    if (enable_waveform) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        tfp->open(WAVEFORM_FILE);
    }
    
    // 加载测试数据（点积操作固定为4元素）
    TestData td = load_testdata();
    
    // 初始化信号
    top->clock = 0;
    top->reset = 1;
    top->eval();
    
    // 复位序列（2周期）
    for (int i = 0; i < 2; ++i) {
        top->clock ^= 1;
        top->eval();
        if (tfp) tfp->dump(i);
    }
    top->reset = 0;
    
    // 初始化错误统计和分析变量
    size_t errors = 0;
    double total_error = 0.0;
    double max_relative_error = 0.0;
    double max_absolute_error = 0.0;
    size_t max_error_sample_id = 0;
    
    // 添加计时变量
    auto total_start_time = std::chrono::high_resolution_clock::now();
    double total_hw_compute_time = 0.0;  // 只统计硬件计算时间
    double max_hw_compute_time = 0.0;
    double min_hw_compute_time = std::numeric_limits<double>::max();
    double avg_hw_compute_time = 0.0;
    
    // 测试主循环
    for (size_t i = 0; i < sample_count; ++i) {
        // 获取posit输入数据
        std::vector<uint32_t>& act = td.activations[i];
        std::vector<uint32_t>& weight = td.weights[i];
        uint32_t golden = td.golden[i];
        
        // 设置posit输入数据 - 点积运算固定使用4个元素
        top->io_posit_i1_0 = act[0];
        top->io_posit_i1_1 = act[1];
        top->io_posit_i1_2 = act[2];
        top->io_posit_i1_3 = act[3];
        
        top->io_posit_i2_0 = weight[0];
        top->io_posit_i2_1 = weight[1];
        top->io_posit_i2_2 = weight[2];
        top->io_posit_i2_3 = weight[3];
        
        // 设置信号量
        top->io_op = OP; // 5表示点积操作
        
        // 开始计时硬件计算 - 只统计从输入到输出的时间
        auto hw_compute_start_time = std::chrono::high_resolution_clock::now();
        
        // 运行一次计算
        top->clock = 1;
        top->eval();
        if (tfp) tfp->dump(i*2 + 1);
        
        top->clock = 0;
        top->eval();
        if (tfp) tfp->dump(i*2 + 2);
        
        // 结束计时硬件计算
        auto hw_compute_end_time = std::chrono::high_resolution_clock::now();
        double hw_compute_time = std::chrono::duration<double, std::milli>(hw_compute_end_time - hw_compute_start_time).count();
        total_hw_compute_time += hw_compute_time;
        
        // 更新最大和最小硬件计算时间
        max_hw_compute_time = std::max(max_hw_compute_time, hw_compute_time);
        min_hw_compute_time = std::min(min_hw_compute_time, hw_compute_time);
        
        // 结果比较 - 点积运算结果在io_posit_dot_o
        uint32_t hw_result = top->io_posit_dot_o;
        
        // 计算相对误差和绝对误差
        double rel_error = posit32_error_rate(hw_result, golden);
        double abs_error = posit32_absolute_error(hw_result, golden);
        
        // 更新误差统计
        total_error += rel_error;
        
        if (rel_error > max_relative_error) {
            max_relative_error = rel_error;
            max_error_sample_id = i;
        }
        
        max_absolute_error = std::max(max_absolute_error, abs_error);
        
        // 检查结果是否匹配
        if (!posit_equal(hw_result, golden)) {
            // 对于点积运算，显示完整的输入向量和计算错误
            std::cerr << "样本 " << i << " 不匹配\n"
                      << "  硬件: 0x" << std::hex << hw_result
                      << "\n  预期: 0x" << std::hex << golden
                      << "\n  相对误差: " << std::dec << rel_error << "%"
                      << "\n  绝对误差: " << std::dec << abs_error
                      << "\n  激活数据: 0x" << std::hex
                      << act[0] << ", " << act[1] << ", " << act[2] << ", " << act[3]
                      << "\n  权重数据: 0x" << std::hex
                      << weight[0] << ", " << weight[1] << ", " << weight[2] << ", " << weight[3]
                      << std::dec << std::endl;
            errors++;
        }
        
        // 进度显示
        if ((i+1) % 100 == 0) {
            std::cout << "已测试 " << (i+1) << "/" << sample_count 
                      << " (" << ((i+1)*100/sample_count) << "%)" 
                      << std::endl;
        }
    }
    
    // 计算总运行时间和平均时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();
    avg_hw_compute_time = total_hw_compute_time / sample_count;
    
    // 资源清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    top->final();
    delete top;
    
    // 计算点积运算吞吐量（每秒处理的样本数）
    double sample_throughput = sample_count / (total_hw_compute_time / 1000.0);
    // 由于点积是4个元素一起计算，元素吞吐量是样本吞吐量的4倍
    double elements_throughput = sample_throughput * 4;
    
    // 计算平均误差
    double avg_error = sample_count > 0 ? total_error / sample_count : 0.0;
    
    // 返回性能结果
    std::cout << "\n点积运算性能测试结果\n========="
              << "\n总样本数: " << sample_count
              << "\n错误样本数: " << errors
              << "\n错误率: " << std::fixed << std::setprecision(2)
              << (errors*100.0/sample_count) << "%"
              << "\n平均相对误差: " << std::fixed << std::setprecision(4) << avg_error << "%"
              << "\n最大相对误差: " << std::fixed << std::setprecision(4) << max_relative_error << "%"
              << "\n最大绝对误差: " << std::fixed << std::setprecision(8) << max_absolute_error
              << (errors > 0 ? "\n最大误差样本ID: " : "") << (errors > 0 ? std::to_string(max_error_sample_id) : "")
              << "\n\n性能统计\n========="
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n硬件计算时间: " << std::fixed << std::setprecision(2) << total_hw_compute_time << " ms"
              << "\n平均硬件计算时间: " << std::fixed << std::setprecision(4) << avg_hw_compute_time << " ms"
              << "\n最大硬件计算时间: " << std::fixed << std::setprecision(4) << max_hw_compute_time << " ms"
              << "\n最小硬件计算时间: " << std::fixed << std::setprecision(4) << min_hw_compute_time << " ms"
              << "\n元素吞吐量: " << std::fixed << std::setprecision(2) << elements_throughput << " 元素/秒\n";
              
    // 返回性能指标，用于比较
    std::vector<double> results = {
        total_hw_compute_time,
        avg_hw_compute_time,
        elements_throughput  // 元素吞吐量
    };
    
    return results;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 测试参数
    int test_samples = SAMPLE_NUM;  // 使用与原始代码相同的样本数量
    bool enable_waveform = false;  // 默认不生成波形文件
    
    // 解析命令行参数
    if (argc > 1) {
        test_samples = std::atoi(argv[1]);
    }
    if (argc > 2) {
        enable_waveform = (std::atoi(argv[2]) != 0);
    }
    
    std::cout << "开始点积性能测试，样本数: " << test_samples << std::endl;
    
    // 点积运算只有一种模式 - 始终使用4个元素计算一个点积
    std::vector<double> results = run_performance_test(test_samples, enable_waveform);
    
    std::cout << "\nposit到posit的点积测试完成！" << std::endl;
    
    return 0;
}

#endif 