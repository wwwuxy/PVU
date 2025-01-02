#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include "VPvuTop.h"       // 由 Verilator 生成
#include "VPvuTop__Syms.h" // 由 Verilator 生成

#if 0
//-----------------------------
// 检查输出是否正确
//-----------------------------
void check_outputs(VPvuTop* dut,
                   const uint32_t expected_o[4],
                   uint32_t expected_dot_o)
{
    bool pass = true;

    uint32_t actual_o[4] = {
        static_cast<uint32_t>(dut->io_posit_o_0),
        static_cast<uint32_t>(dut->io_posit_o_1),
        static_cast<uint32_t>(dut->io_posit_o_2),
        static_cast<uint32_t>(dut->io_posit_o_3)
    };
    uint32_t actual_dot_o = static_cast<uint32_t>(dut->io_posit_dot_o);

    for (int i = 0; i < 4; ++i) {
        if (actual_o[i] != expected_o[i]) {
            std::cerr << "Mismatch at io_posit_o_" << i << ": "
                      << "Expected 0x" << std::hex << expected_o[i]
                      << ", Got 0x" << actual_o[i] << std::dec << "\n";
            pass = false;
        }
    }
    if (actual_dot_o != expected_dot_o) {
        std::cerr << "Mismatch at io_posit_dot_o: "
                  << "Expected 0x" << std::hex << expected_dot_o
                  << ", Got 0x" << actual_dot_o << std::dec << "\n";
        pass = false;
    }
    if (pass) {
        std::cout << "Test Passed.\n";
    } else {
        std::cerr << "Test Failed.\n";
    }
}

//-----------------------------
// 给输入赋值
//-----------------------------
void set_inputs(
    VPvuTop* dut,
    const uint32_t i1[4],
    const uint32_t i2[4],
    uint8_t op
) {
    dut->io_posit_i1_0 = i1[0];
    dut->io_posit_i1_1 = i1[1];
    dut->io_posit_i1_2 = i1[2];
    dut->io_posit_i1_3 = i1[3];

    dut->io_posit_i2_0 = i2[0];
    dut->io_posit_i2_1 = i2[1];
    dut->io_posit_i2_2 = i2[2];
    dut->io_posit_i2_3 = i2[3];

    dut->io_op = op;
}

//-----------------------------
// 时钟翻转并执行仿真步骤
//-----------------------------
void toggle_clock(VPvuTop* dut, VerilatedVcdC* tfp, vluint64_t &main_time) {
    // 拉高时钟
    dut->clock = 1;
    dut->eval();
    if (tfp) tfp->dump(main_time++);
    
    // 拉低时钟
    dut->clock = 0;
    dut->eval();
    if (tfp) tfp->dump(main_time++);
}

//-----------------------------
// 主函数
//-----------------------------
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // 创建顶层 DUT 模块
    VPvuTop *dut = new VPvuTop;
    
    // 波形追踪
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("pvu_top_wave.vcd");

    vluint64_t main_time = 0;

    // 复位
    dut->reset = 1;
    for (int i = 0; i < 5; ++i) {
        toggle_clock(dut, tfp, main_time);
    }
    dut->reset = 0;

    //--------------------------------------------------
    // 测试用例1: 加法示例 (1.0 + 1.0 -> 2.0)
    //--------------------------------------------------
    {
        // i1[] = 1.0, 1.0, 1.0, 1.0
        // i2[] = 1.0, 1.0, 1.0, 1.0
        // op = 0 (加法)
        // 期望: out[0..3] 全部是 2.0, dot = 8.0? (2+2+2+2)
        uint32_t test_i1[4] = {0x4000, 0x4000, 0x4000, 0x4000}; // 1.0?
        uint32_t test_i2[4] = {0x4000, 0x4000, 0x4000, 0x4000}; // 1.0?
        uint8_t  test_op    = 1; // 加法

        // 2.0 => 0x6000? (示例)
        // 8.0 => 0x7C00? (示例)
        uint32_t expected_o[4]  = {0x6000, 0x6000, 0x6000, 0x6000}; 
        uint32_t expected_dot_o = 0x7C00; // 8.0 ?

        set_inputs(dut, test_i1, test_i2, test_op);
        for (int cycle = 0; cycle < 2; ++cycle) {
            toggle_clock(dut, tfp, main_time);
        }
        check_outputs(dut, expected_o, expected_dot_o);
    }

    //--------------------------------------------------
    // 测试用例2: 加法示例 (2.0 + 3.0 -> 5.0)
    //--------------------------------------------------
    // {
    //     // i1[] = 2.0, 2.0, 3.0, 3.0
    //     // i2[] = 3.0, 3.0, 2.0, 2.0
    //     // op = 0 (加法)
    //     // 期望: 
    //     //   out[0] = 2+3=5.0 => 0x7400?
    //     //   out[1] = 2+3=5.0 => 0x7400?
    //     //   out[2] = 3+2=5.0 => 0x7400?
    //     //   out[3] = 3+2=5.0 => 0x7400?
    //     // dot = 5+5+5+5=20 => 0x7A00? (示例)
    //     uint32_t test_i1[4] = {0x6000, 0x6000, 0x6C00, 0x6C00}; // 2.0, 2.0, 3.0, 3.0
    //     uint32_t test_i2[4] = {0x6C00, 0x6C00, 0x6000, 0x6000}; // 3.0, 3.0, 2.0, 2.0
    //     uint8_t  test_op    = 1; // 加法

    //     uint32_t expected_o[4]  = {0x7400, 0x7400, 0x7400, 0x7400}; // 5.0 ?
    //     uint32_t expected_dot_o = 0x7A00; // 20 ?

    //     set_inputs(dut, test_i1, test_i2, test_op);
    //     for (int cycle = 0; cycle < 2; ++cycle) {
    //         toggle_clock(dut, tfp, main_time);
    //     }
    //     check_outputs(dut, expected_o, expected_dot_o);
    // }

    //--------------------------------------------------
    // 测试用例3: 乘法示例 (2.0 * 3.0 -> 6.0)
    //--------------------------------------------------
    // {
    //     // i1[] = 2.0, 3.0, 2.0, 3.0
    //     // i2[] = 3.0, 2.0, 3.0, 2.0
    //     // op = 1 (乘法)
    //     // 期望: 2*3=6 => 0x7A00? (示例), 3*2=6 => 0x7A00?
    //     // dot = sum of out[] => 6+6+6+6=24 => 0x7E00? (示例)
    //     uint32_t test_i1[4] = {0x6000, 0x6C00, 0x6000, 0x6C00};
    //     uint32_t test_i2[4] = {0x6C00, 0x6000, 0x6C00, 0x6000};
    //     uint8_t  test_op    = 3; // 乘法

    //     uint32_t expected_o[4]  = {0x7A00, 0x7A00, 0x7A00, 0x7A00}; // 6.0 ?
    //     uint32_t expected_dot_o = 0x7E00; // 24 ?

    //     set_inputs(dut, test_i1, test_i2, test_op);
    //     for (int cycle = 0; cycle < 2; ++cycle) {
    //         toggle_clock(dut, tfp, main_time);
    //     }
    //     check_outputs(dut, expected_o, expected_dot_o);
    // }

    //--------------------------------------------------
    // 测试用例4: 带有负数示例 (-1.0 + 2.0 -> 1.0)
    //--------------------------------------------------
    // {
    //     // i1[] = -1.0, -1.0, -1.0, -1.0
    //     // i2[] =  2.0,  2.0,  2.0,  2.0
    //     // op = 0 (加法)
    //     // out[] = 1.0 => 0x4000?, dot = 4.0 => 0x7000? (纯示例)
    //     uint32_t test_i1[4] = {0xC000, 0xC000, 0xC000, 0xC000}; // -1.0?
    //     uint32_t test_i2[4] = {0x6000, 0x6000, 0x6000, 0x6000}; // 2.0?
    //     uint8_t  test_op    = 1; // 加法

    //     uint32_t expected_o[4]  = {0x4000, 0x4000, 0x4000, 0x4000}; // 1.0?
    //     uint32_t expected_dot_o = 0x7000; // 4.0 ?

    //     set_inputs(dut, test_i1, test_i2, test_op);
    //     for (int cycle = 0; cycle < 2; ++cycle) {
    //         toggle_clock(dut, tfp, main_time);
    //     }
    //     check_outputs(dut, expected_o, expected_dot_o);
    // }

    //--------------------------------------------------
    // 更多用例（小数、大数、特殊场景等）可继续添加
    //--------------------------------------------------

    // 收尾
    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}

#else
//每个数组只有 一个 元素，便于波形调试
//----------------------------------------------------------------------
// 1) 检查输出：仅对单一 io_posit_o_0 以及 io_posit_dot_o 进行比较
//----------------------------------------------------------------------
void check_outputs(VPvuTop* dut, uint32_t expected_o, uint32_t expected_dot_o)
{
    bool pass = true;

    // 读取实际输出
    uint32_t actual_o     = static_cast<uint32_t>(dut->io_posit_o_0);
    uint32_t actual_dot_o = static_cast<uint32_t>(dut->io_posit_dot_o);

    // 比对主输出
    if (actual_o != expected_o) {
        std::cerr << "Mismatch at io_posit_o_0: "
                  << "Expected 0x" << std::hex << expected_o
                  << ", Got 0x" << actual_o << std::dec << "\n";
        pass = false;
    }

    // 比对 dot 输出
    // if (actual_dot_o != expected_dot_o) {
    //     std::cerr << "Mismatch at io_posit_dot_o: "
    //               << "Expected 0x" << std::hex << expected_dot_o
    //               << ", Got 0x" << actual_dot_o << std::dec << "\n";
    //     pass = false;
    // }

    // 最终打印测试结果
    if (pass) {
        std::cout << "Test Passed.\n";
    } else {
        std::cerr << "Test Failed.\n";
    }
}

//----------------------------------------------------------------------
// 2) 设置输入：只给单一的 i1, i2, 和一个 op
//----------------------------------------------------------------------
void set_inputs(VPvuTop* dut, uint32_t i1, uint32_t i2, uint8_t op)
{
    dut->io_posit_i1_0 = i1;  // 只设置 i1_0
    dut->io_posit_i2_0 = i2;  // 只设置 i2_0
    dut->io_op         = op;  // 操作码
}

//----------------------------------------------------------------------
// 3) 翻转时钟
//----------------------------------------------------------------------
void toggle_clock(VPvuTop* dut, VerilatedVcdC* tfp, vluint64_t &main_time) {
    // 拉高时钟
    dut->clock = 1;
    dut->eval();
    if (tfp) tfp->dump(main_time++);

    // 拉低时钟
    dut->clock = 0;
    dut->eval();
    if (tfp) tfp->dump(main_time++);
}

//----------------------------------------------------------------------
// 4) 主测试程序
//----------------------------------------------------------------------
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // 创建顶层 DUT
    VPvuTop* dut = new VPvuTop;

    // 如果需要波形
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("pvu_top_wave.vcd");

    vluint64_t main_time = 0;

    // ----------------- 复位 -----------------
    dut->reset = 1;
    for (int i = 0; i < 5; ++i) {
        toggle_clock(dut, tfp, main_time);
    }
    dut->reset = 0;

    //===============================================================
    // 测试用例1:测试加法
    //===============================================================
    // {
    //     // 设置输入：i1= 0x4000(1.0?), i2= 0x4000(1.0?), op= 0(假设是加法)
    //     printf("Test Add\n");
    //     uint32_t i1  = 0x5A000000;
    //     uint32_t i2  = 0x48000000;
    //     uint8_t  op  = 1; // 假设 0 代表加法

    //     // 期望输出：2.0 => 0x6000(?), dot => 0x6000(若 dot=同样结果?)
    //     // 如果 dot 是某些累加结果，需要根据设计改
    //     uint32_t expected_o     = 0x5C000000; 
    //     uint32_t expected_dot_o = 0; 

    //     // 写入输入
    //     set_inputs(dut, i1, i2, op);

    //     // 等待两拍时钟
    //     for (int cycle = 0; cycle < 2; ++cycle) {
    //         toggle_clock(dut, tfp, main_time);
    //     }

    //     // 比对输出
    //     check_outputs(dut, expected_o, expected_dot_o);
    // }


    //===============================================================
    // 测试用例2: 测试减法
    //===============================================================
    // {
    //     // 设置输入：i1= 0x4000(1.0?), i2= 0x4000(1.0?), op= 0(假设是加法)
    //     printf("Test Sub\n");
    //     uint32_t i1  = 0x5A000000;
    //     uint32_t i2  = 0x48000000;
    //     uint8_t  op  = 2; // 假设 0 代表加法

    //     // 期望输出：2.0 => 0x6000(?), dot => 0x6000(若 dot=同样结果?)
    //     // 如果 dot 是某些累加结果，需要根据设计改
    //     uint32_t expected_o     = 0x58000000; 
    //     uint32_t expected_dot_o = 0; 

    //     // 写入输入
    //     set_inputs(dut, i1, i2, op);

    //     // 等待两拍时钟
    //     for (int cycle = 0; cycle < 2; ++cycle) {
    //         toggle_clock(dut, tfp, main_time);
    //     }

    //     // 比对输出
    //     check_outputs(dut, expected_o, expected_dot_o);
    // }

    //===============================================================
    // 测试用例2: (例如乘法: 2.0 * 3.0 = 6.0?)
    //===============================================================
    {
        // i1= 0x6000(2.0?), i2= 0x6C00(3.0?), op= 1(假设是乘法)
        printf("Test Mul\n");
        uint32_t i1  = 0x48000000; 
        uint32_t i2  = 0x4C000000; 
        uint8_t  op  = 3;      // 乘法

        // 期望输出: 6.0 => 0x7A00(?), dot => 0x7A00(?)
        uint32_t expected_o     = 0x54000000; 
        uint32_t expected_dot_o = 0; 

        set_inputs(dut, i1, i2, op);

        for (int cycle = 0; cycle < 2; ++cycle) {
            toggle_clock(dut, tfp, main_time);
        }

        check_outputs(dut, expected_o, expected_dot_o);
    }

    // 你可以继续添加更多单元素的测试用例

    // 仿真结束收尾
    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}


#endif