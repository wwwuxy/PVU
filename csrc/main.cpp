#include "VPvuTop.h"  // 包含 Verilator 自动生成的模块头文件
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <iostream>
#include <iomanip>

#define CLK_PERIOD 10  // 定义时钟周期（单位：ns）

// 检查输出是否正确的函数
void check_outputs(VPvuTop *dut, uint16_t expected_o[4], uint16_t expected_dot_o) {
    bool pass = true;
    for (int i = 0; i < 4; ++i) {
        if (dut->io_posit_o[i] != expected_o[i]) {
            std::cerr << "Mismatch at io_posit_o_" << i << ": "
                      << "Expected " << expected_o[i]
                      << ", Got " << dut->io_posit_o[i] << "\n";
            pass = false;
        }
    }
    if (dut->io_posit_dot_o != expected_dot_o) {
        std::cerr << "Mismatch at io_posit_dot_o: "
                  << "Expected " << expected_dot_o
                  << ", Got " << dut->io_posit_dot_o << "\n";
        pass = false;
    }
    if (pass) {
        std::cout << "Test Passed.\n";
    } else {
        std::cerr << "Test Failed.\n";
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // 初始化顶层模块
    VPvuTop *dut = new VPvuTop;

    // 创建 VCD 波形文件
    VerilatedVcdC *tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // 信号初始化
    dut->clock = 0;
    dut->reset = 1;

    // 复位信号保持 2 个时钟周期
    for (int i = 0; i < 2; ++i) {
        dut->clock = !dut->clock;
        dut->eval();
        tfp->dump(2 * i * CLK_PERIOD);
        dut->clock = !dut->clock;
        dut->eval();
        tfp->dump((2 * i + 1) * CLK_PERIOD);
    }
    dut->reset = 0;

    // 测试用例设置
    uint16_t test_i1[4] = {1, 2, 3, 4};
    uint16_t test_i2[4] = {5, 6, 7, 8};
    uint8_t test_op = 0b010;  // 示例操作
    uint16_t expected_o[4] = {6, 8, 10, 12};  // 示例预期输出
    uint16_t expected_dot_o = 70;  // 示例点积预期值

    // 设置输入信号
    for (int i = 0; i < 4; ++i) {
        dut->io_posit_i1[i] = test_i1[i];
        dut->io_posit_i2[i] = test_i2[i];
    }
    dut->io_op = test_op;

    // 模拟 10 个时钟周期
    for (int cycle = 0; cycle < 10; ++cycle) {
        dut->clock = !dut->clock;
        dut->eval();
        tfp->dump(2 * cycle * CLK_PERIOD);
        dut->clock = !dut->clock;
        dut->eval();
        tfp->dump((2 * cycle + 1) * CLK_PERIOD);
    }

    // 检查输出
    check_outputs(dut, expected_o, expected_dot_o);

    // 结束仿真
    tfp->close();
    delete dut;
    delete tfp;

    return 0;
}

