// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1288,"io_posit_i1_0", false,-1, 31,0);
    tracep->declBus(c+1289,"io_posit_i2_0", false,-1, 31,0);
    tracep->declBus(c+1290,"io_op", false,-1, 2,0);
    tracep->declBus(c+1291,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+1292,"io_posit_dot_o", false,-1, 31,0);
    tracep->pushNamePrefix("PvuTop ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1288,"io_posit_i1_0", false,-1, 31,0);
    tracep->declBus(c+1289,"io_posit_i2_0", false,-1, 31,0);
    tracep->declBus(c+1290,"io_op", false,-1, 2,0);
    tracep->declBus(c+1291,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+1292,"io_posit_dot_o", false,-1, 31,0);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+715,"io_pir_frac1_aligned", false,-1, 29,0);
    tracep->declBus(c+716,"io_pir_frac2_aligned", false,-1, 29,0);
    tracep->declBus(c+1295,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1296,"io_pir_exp_o", false,-1, 7,0);
    tracep->declBus(c+1297,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+717,"io_overflow", false,-1, 0,0);
    tracep->declBus(c+718,"io_frac_truncate", false,-1, 0,0);
    tracep->declBus(c+719,"sum", false,-1, 30,0);
    tracep->declBit(c+720,"mant1_greater", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode1 ");
    tracep->declBus(c+1288,"io_posit", false,-1, 31,0);
    tracep->declBus(c+1293,"io_Sign", false,-1, 0,0);
    tracep->declBus(c+63,"io_Exp", false,-1, 7,0);
    tracep->declBus(c+64,"io_Frac", false,-1, 27,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+1,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+685,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+65,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+1348,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1350,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"in_i", false,-1, 30,0);
    tracep->declBus(c+686,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1298,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1350,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1351,"index_lut", false,-1, 154,0);
    tracep->declBus(c+1299,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+687,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+3,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1348,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("decode2 ");
    tracep->declBus(c+1289,"io_posit", false,-1, 31,0);
    tracep->declBus(c+1294,"io_Sign", false,-1, 0,0);
    tracep->declBus(c+448,"io_Exp", false,-1, 7,0);
    tracep->declBus(c+449,"io_Frac", false,-1, 27,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+4,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+692,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+450,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+1348,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1350,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"in_i", false,-1, 30,0);
    tracep->declBus(c+693,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1300,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1350,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1351,"index_lut", false,-1, 154,0);
    tracep->declBus(c+1301,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+694,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+6,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1348,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+66,"io_pir_frac1_i", false,-1, 29,0);
    tracep->declBus(c+451,"io_pir_frac2_i", false,-1, 29,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1302,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+721,"io_pir_frac_o", false,-1, 61,0);
    tracep->pushNamePrefix("intdivider ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+66,"io_dividend", false,-1, 29,0);
    tracep->declBus(c+451,"io_divisor", false,-1, 29,0);
    tracep->declQuad(c+723,"io_quotient", false,-1, 59,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declQuad(c+67,"io_operand_a", false,-1, 59,0);
    tracep->declQuad(c+452,"io_operand_b", false,-1, 59,0);
    tracep->declArray(c+725,"io_sum_o", false,-1, 119,0);
    tracep->declArray(c+729,"io_carry_o", false,-1, 119,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+733,"io_operands_i", false,-1, 3599,0);
    tracep->declArray(c+846,"io_sum_o", false,-1, 124,0);
    tracep->declArray(c+850,"io_carry_o", false,-1, 124,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+854,"io_operands_i", false,-1, 499,0);
    tracep->declArray(c+846,"io_sum_o", false,-1, 124,0);
    tracep->declArray(c+850,"io_carry_o", false,-1, 124,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+70,"io_operands_i", false,-1, 1799,0);
    tracep->declArray(c+870,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+874,"io_carry_o", false,-1, 123,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+878,"io_operands_i", false,-1, 495,0);
    tracep->declArray(c+870,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+874,"io_carry_o", false,-1, 123,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+127,"io_operands_i", false,-1, 839,0);
    tracep->declArray(c+894,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+898,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+902,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+894,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+898,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+154,"io_operands_i", false,-1, 359,0);
    tracep->declArray(c+918,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+922,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+154,"io_operands_i", false,-1, 359,0);
    tracep->declArray(c+918,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+922,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+166,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+926,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+930,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+166,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+926,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+930,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+181,"io_operands_i", false,-1, 959,0);
    tracep->declArray(c+934,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+938,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+942,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+934,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+938,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+211,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+958,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+962,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+211,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+958,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+962,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+226,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+966,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+970,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+226,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+966,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+970,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+241,"io_operands_i", false,-1, 1799,0);
    tracep->declArray(c+974,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+978,"io_carry_o", false,-1, 123,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+982,"io_operands_i", false,-1, 495,0);
    tracep->declArray(c+974,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+978,"io_carry_o", false,-1, 123,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+298,"io_operands_i", false,-1, 839,0);
    tracep->declArray(c+998,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1002,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1006,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+998,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1002,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+325,"io_operands_i", false,-1, 359,0);
    tracep->declArray(c+1022,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1026,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+325,"io_operands_i", false,-1, 359,0);
    tracep->declArray(c+1022,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1026,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+337,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1030,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1034,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+337,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1030,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1034,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+352,"io_operands_i", false,-1, 959,0);
    tracep->declArray(c+1038,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1042,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1046,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+1038,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1042,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+382,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1062,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1066,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+382,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1062,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1066,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+397,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1070,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1074,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+397,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1070,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1074,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("genProds ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declQuad(c+67,"io_operand_a", false,-1, 59,0);
    tracep->declQuad(c+452,"io_operand_b", false,-1, 59,0);
    tracep->declArray(c+733,"io_partial_prods", false,-1, 3599,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+454,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1078,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+455,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+454,"io_code", false,-1, 2,0);
    tracep->declBit(c+455,"io_neg", false,-1);
    tracep->declBit(c+456,"io_zero", false,-1);
    tracep->declBit(c+457,"io_one", false,-1);
    tracep->declBit(c+458,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdFirst ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+459,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1303,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+460,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+459,"io_code", false,-1, 2,0);
    tracep->declBit(c+460,"io_neg", false,-1);
    tracep->declBit(c+461,"io_zero", false,-1);
    tracep->declBit(c+462,"io_one", false,-1);
    tracep->declBit(c+463,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+464,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1080,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+465,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+464,"io_code", false,-1, 2,0);
    tracep->declBit(c+465,"io_neg", false,-1);
    tracep->declBit(c+466,"io_zero", false,-1);
    tracep->declBit(c+467,"io_one", false,-1);
    tracep->declBit(c+468,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+469,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1082,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+470,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+469,"io_code", false,-1, 2,0);
    tracep->declBit(c+470,"io_neg", false,-1);
    tracep->declBit(c+471,"io_zero", false,-1);
    tracep->declBit(c+472,"io_one", false,-1);
    tracep->declBit(c+473,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+474,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1084,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+475,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+474,"io_code", false,-1, 2,0);
    tracep->declBit(c+475,"io_neg", false,-1);
    tracep->declBit(c+476,"io_zero", false,-1);
    tracep->declBit(c+477,"io_one", false,-1);
    tracep->declBit(c+478,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+479,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1086,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+480,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+479,"io_code", false,-1, 2,0);
    tracep->declBit(c+480,"io_neg", false,-1);
    tracep->declBit(c+481,"io_zero", false,-1);
    tracep->declBit(c+482,"io_one", false,-1);
    tracep->declBit(c+483,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+484,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1088,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+485,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+484,"io_code", false,-1, 2,0);
    tracep->declBit(c+485,"io_neg", false,-1);
    tracep->declBit(c+486,"io_zero", false,-1);
    tracep->declBit(c+487,"io_one", false,-1);
    tracep->declBit(c+488,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_13 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+489,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1090,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+490,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+489,"io_code", false,-1, 2,0);
    tracep->declBit(c+490,"io_neg", false,-1);
    tracep->declBit(c+491,"io_zero", false,-1);
    tracep->declBit(c+492,"io_one", false,-1);
    tracep->declBit(c+493,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_14 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+494,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1092,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+495,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+494,"io_code", false,-1, 2,0);
    tracep->declBit(c+495,"io_neg", false,-1);
    tracep->declBit(c+496,"io_zero", false,-1);
    tracep->declBit(c+497,"io_one", false,-1);
    tracep->declBit(c+498,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_15 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+499,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1094,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+500,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+499,"io_code", false,-1, 2,0);
    tracep->declBit(c+500,"io_neg", false,-1);
    tracep->declBit(c+501,"io_zero", false,-1);
    tracep->declBit(c+502,"io_one", false,-1);
    tracep->declBit(c+503,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_16 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+504,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1096,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+505,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+504,"io_code", false,-1, 2,0);
    tracep->declBit(c+505,"io_neg", false,-1);
    tracep->declBit(c+506,"io_zero", false,-1);
    tracep->declBit(c+507,"io_one", false,-1);
    tracep->declBit(c+508,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_17 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+509,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1098,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+510,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+509,"io_code", false,-1, 2,0);
    tracep->declBit(c+510,"io_neg", false,-1);
    tracep->declBit(c+511,"io_zero", false,-1);
    tracep->declBit(c+512,"io_one", false,-1);
    tracep->declBit(c+513,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_18 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+514,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1100,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+515,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+514,"io_code", false,-1, 2,0);
    tracep->declBit(c+515,"io_neg", false,-1);
    tracep->declBit(c+516,"io_zero", false,-1);
    tracep->declBit(c+517,"io_one", false,-1);
    tracep->declBit(c+518,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_19 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+519,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1102,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+520,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+519,"io_code", false,-1, 2,0);
    tracep->declBit(c+520,"io_neg", false,-1);
    tracep->declBit(c+521,"io_zero", false,-1);
    tracep->declBit(c+522,"io_one", false,-1);
    tracep->declBit(c+523,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+524,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1104,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+525,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+524,"io_code", false,-1, 2,0);
    tracep->declBit(c+525,"io_neg", false,-1);
    tracep->declBit(c+526,"io_zero", false,-1);
    tracep->declBit(c+527,"io_one", false,-1);
    tracep->declBit(c+528,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_20 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+529,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1106,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+530,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+529,"io_code", false,-1, 2,0);
    tracep->declBit(c+530,"io_neg", false,-1);
    tracep->declBit(c+531,"io_zero", false,-1);
    tracep->declBit(c+532,"io_one", false,-1);
    tracep->declBit(c+533,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_21 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+534,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1108,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+535,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+534,"io_code", false,-1, 2,0);
    tracep->declBit(c+535,"io_neg", false,-1);
    tracep->declBit(c+536,"io_zero", false,-1);
    tracep->declBit(c+537,"io_one", false,-1);
    tracep->declBit(c+538,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_22 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+539,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1110,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+540,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+539,"io_code", false,-1, 2,0);
    tracep->declBit(c+540,"io_neg", false,-1);
    tracep->declBit(c+541,"io_zero", false,-1);
    tracep->declBit(c+542,"io_one", false,-1);
    tracep->declBit(c+543,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_23 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+544,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1112,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+545,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+544,"io_code", false,-1, 2,0);
    tracep->declBit(c+545,"io_neg", false,-1);
    tracep->declBit(c+546,"io_zero", false,-1);
    tracep->declBit(c+547,"io_one", false,-1);
    tracep->declBit(c+548,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_24 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+549,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1114,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+550,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+549,"io_code", false,-1, 2,0);
    tracep->declBit(c+550,"io_neg", false,-1);
    tracep->declBit(c+551,"io_zero", false,-1);
    tracep->declBit(c+552,"io_one", false,-1);
    tracep->declBit(c+553,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_25 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+554,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1116,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+555,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+554,"io_code", false,-1, 2,0);
    tracep->declBit(c+555,"io_neg", false,-1);
    tracep->declBit(c+556,"io_zero", false,-1);
    tracep->declBit(c+557,"io_one", false,-1);
    tracep->declBit(c+558,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_26 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+559,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1118,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+560,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+559,"io_code", false,-1, 2,0);
    tracep->declBit(c+560,"io_neg", false,-1);
    tracep->declBit(c+561,"io_zero", false,-1);
    tracep->declBit(c+562,"io_one", false,-1);
    tracep->declBit(c+563,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_27 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+564,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1120,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+565,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+564,"io_code", false,-1, 2,0);
    tracep->declBit(c+565,"io_neg", false,-1);
    tracep->declBit(c+566,"io_zero", false,-1);
    tracep->declBit(c+567,"io_one", false,-1);
    tracep->declBit(c+568,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+569,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1122,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+570,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+569,"io_code", false,-1, 2,0);
    tracep->declBit(c+570,"io_neg", false,-1);
    tracep->declBit(c+571,"io_zero", false,-1);
    tracep->declBit(c+572,"io_one", false,-1);
    tracep->declBit(c+573,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+574,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1124,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+575,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+574,"io_code", false,-1, 2,0);
    tracep->declBit(c+575,"io_neg", false,-1);
    tracep->declBit(c+576,"io_zero", false,-1);
    tracep->declBit(c+577,"io_one", false,-1);
    tracep->declBit(c+578,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+579,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1126,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+580,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+579,"io_code", false,-1, 2,0);
    tracep->declBit(c+580,"io_neg", false,-1);
    tracep->declBit(c+581,"io_zero", false,-1);
    tracep->declBit(c+582,"io_one", false,-1);
    tracep->declBit(c+583,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+584,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1128,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+585,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+584,"io_code", false,-1, 2,0);
    tracep->declBit(c+585,"io_neg", false,-1);
    tracep->declBit(c+586,"io_zero", false,-1);
    tracep->declBit(c+587,"io_one", false,-1);
    tracep->declBit(c+588,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+589,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1130,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+590,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+589,"io_code", false,-1, 2,0);
    tracep->declBit(c+590,"io_neg", false,-1);
    tracep->declBit(c+591,"io_zero", false,-1);
    tracep->declBit(c+592,"io_one", false,-1);
    tracep->declBit(c+593,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+594,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1132,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+595,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+594,"io_code", false,-1, 2,0);
    tracep->declBit(c+595,"io_neg", false,-1);
    tracep->declBit(c+596,"io_zero", false,-1);
    tracep->declBit(c+597,"io_one", false,-1);
    tracep->declBit(c+598,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declQuad(c+67,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+599,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1134,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+600,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+599,"io_code", false,-1, 2,0);
    tracep->declBit(c+600,"io_neg", false,-1);
    tracep->declBit(c+601,"io_zero", false,-1);
    tracep->declBit(c+602,"io_one", false,-1);
    tracep->declBit(c+603,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+451,"io_num_i", false,-1, 29,0);
    tracep->declQuad(c+452,"io_reciprocal_o", false,-1, 59,0);
    tracep->declQuad(c+604,"x0", false,-1, 59,0);
    tracep->declArray(c+606,"x1_x_new_full", false,-1, 89,0);
    tracep->declArray(c+609,"x2_x_new_full", false,-1, 89,0);
    tracep->declArray(c+612,"x3_x_new_full", false,-1, 89,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dotproduct ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+64,"io_pir_frac1_i", false,-1, 27,0);
    tracep->declBus(c+449,"io_pir_frac2_i", false,-1, 27,0);
    tracep->declBit(c+1356,"io_pir_sign_o", false,-1);
    tracep->declBus(c+1136,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+1305,"io_pir_frac_o", false,-1, 61,0);
    tracep->declQuad(c+1307,"pir_frac_cmp_tmp", false,-1, 61,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declQuad(c+1305,"io_operands_i", false,-1, 61,0);
    tracep->declQuad(c+1305,"io_sum_o", false,-1, 61,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("frac_compare ");
    tracep->declQuad(c+1137,"io_pir_frac_i", false,-1, 57,0);
    tracep->declBus(c+1136,"io_pir_exp_i", false,-1, 7,0);
    tracep->declQuad(c+1139,"io_pir_frac_align", false,-1, 57,0);
    tracep->declBus(c+1136,"io_pir_max_exp", false,-1, 7,0);
    tracep->declBus(c+1357,"shift_amount", false,-1, 7,0);
    tracep->pushNamePrefix("comptree ");
    tracep->declBus(c+1136,"io_operands_i", false,-1, 7,0);
    tracep->declBus(c+1136,"io_result_o", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+66,"io_pir_frac1_i", false,-1, 29,0);
    tracep->declBus(c+451,"io_pir_frac2_i", false,-1, 29,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1136,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+1141,"io_pir_frac_o", false,-1, 61,0);
    tracep->declBus(c+1143,"sum", false,-1, 8,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+66,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+451,"io_operand_b", false,-1, 29,0);
    tracep->declQuad(c+1144,"io_sum_o", false,-1, 59,0);
    tracep->declQuad(c+1146,"io_carry_o", false,-1, 59,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+11,"io_operands_i", false,-1, 899,0);
    tracep->declQuad(c+1148,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1150,"io_carry_o", false,-1, 63,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1152,"io_operands_i", false,-1, 255,0);
    tracep->declQuad(c+1148,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1150,"io_carry_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+412,"io_operands_i", false,-1, 419,0);
    tracep->declQuad(c+1160,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1162,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1164,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1160,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1162,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+426,"io_operands_i", false,-1, 179,0);
    tracep->declQuad(c+1172,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1174,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+426,"io_operands_i", false,-1, 179,0);
    tracep->declQuad(c+1172,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1174,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+432,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1176,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1178,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+432,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1176,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1178,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+40,"io_operands_i", false,-1, 479,0);
    tracep->declQuad(c+1180,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1182,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1184,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1180,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1182,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+440,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1192,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1194,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+440,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1192,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1194,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+55,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1196,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1198,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+55,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1196,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1198,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+66,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+451,"io_operand_b", false,-1, 29,0);
    tracep->declArray(c+11,"io_partial_prods", false,-1, 899,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+615,"io_code", false,-1, 2,0);
    tracep->declBus(c+1200,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+616,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+615,"io_code", false,-1, 2,0);
    tracep->declBit(c+616,"io_neg", false,-1);
    tracep->declBit(c+617,"io_zero", false,-1);
    tracep->declBit(c+618,"io_one", false,-1);
    tracep->declBit(c+619,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdFirst ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+620,"io_code", false,-1, 2,0);
    tracep->declBus(c+1309,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+621,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+620,"io_code", false,-1, 2,0);
    tracep->declBit(c+621,"io_neg", false,-1);
    tracep->declBit(c+622,"io_zero", false,-1);
    tracep->declBit(c+623,"io_one", false,-1);
    tracep->declBit(c+624,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBus(c+69,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+1356,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBit(c+1356,"io_neg", false,-1);
    tracep->declBit(c+9,"io_zero", false,-1);
    tracep->declBit(c+10,"io_one", false,-1);
    tracep->declBit(c+1356,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+625,"io_code", false,-1, 2,0);
    tracep->declBus(c+1201,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+626,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+625,"io_code", false,-1, 2,0);
    tracep->declBit(c+626,"io_neg", false,-1);
    tracep->declBit(c+627,"io_zero", false,-1);
    tracep->declBit(c+628,"io_one", false,-1);
    tracep->declBit(c+629,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+630,"io_code", false,-1, 2,0);
    tracep->declBus(c+1202,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+631,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+630,"io_code", false,-1, 2,0);
    tracep->declBit(c+631,"io_neg", false,-1);
    tracep->declBit(c+632,"io_zero", false,-1);
    tracep->declBit(c+633,"io_one", false,-1);
    tracep->declBit(c+634,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+635,"io_code", false,-1, 2,0);
    tracep->declBus(c+1203,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+636,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+635,"io_code", false,-1, 2,0);
    tracep->declBit(c+636,"io_neg", false,-1);
    tracep->declBit(c+637,"io_zero", false,-1);
    tracep->declBit(c+638,"io_one", false,-1);
    tracep->declBit(c+639,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+640,"io_code", false,-1, 2,0);
    tracep->declBus(c+1204,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+641,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+640,"io_code", false,-1, 2,0);
    tracep->declBit(c+641,"io_neg", false,-1);
    tracep->declBit(c+642,"io_zero", false,-1);
    tracep->declBit(c+643,"io_one", false,-1);
    tracep->declBit(c+644,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+645,"io_code", false,-1, 2,0);
    tracep->declBus(c+1205,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+646,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+645,"io_code", false,-1, 2,0);
    tracep->declBit(c+646,"io_neg", false,-1);
    tracep->declBit(c+647,"io_zero", false,-1);
    tracep->declBit(c+648,"io_one", false,-1);
    tracep->declBit(c+649,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+650,"io_code", false,-1, 2,0);
    tracep->declBus(c+1206,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+651,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+650,"io_code", false,-1, 2,0);
    tracep->declBit(c+651,"io_neg", false,-1);
    tracep->declBit(c+652,"io_zero", false,-1);
    tracep->declBit(c+653,"io_one", false,-1);
    tracep->declBit(c+654,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+655,"io_code", false,-1, 2,0);
    tracep->declBus(c+1207,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+656,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+655,"io_code", false,-1, 2,0);
    tracep->declBit(c+656,"io_neg", false,-1);
    tracep->declBit(c+657,"io_zero", false,-1);
    tracep->declBit(c+658,"io_one", false,-1);
    tracep->declBit(c+659,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+660,"io_code", false,-1, 2,0);
    tracep->declBus(c+1208,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+661,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+660,"io_code", false,-1, 2,0);
    tracep->declBit(c+661,"io_neg", false,-1);
    tracep->declBit(c+662,"io_zero", false,-1);
    tracep->declBit(c+663,"io_one", false,-1);
    tracep->declBit(c+664,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+665,"io_code", false,-1, 2,0);
    tracep->declBus(c+1310,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+666,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+665,"io_code", false,-1, 2,0);
    tracep->declBit(c+666,"io_neg", false,-1);
    tracep->declBit(c+667,"io_zero", false,-1);
    tracep->declBit(c+668,"io_one", false,-1);
    tracep->declBit(c+669,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+670,"io_code", false,-1, 2,0);
    tracep->declBus(c+1209,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+671,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+670,"io_code", false,-1, 2,0);
    tracep->declBit(c+671,"io_neg", false,-1);
    tracep->declBit(c+672,"io_zero", false,-1);
    tracep->declBit(c+673,"io_one", false,-1);
    tracep->declBit(c+674,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+675,"io_code", false,-1, 2,0);
    tracep->declBus(c+1210,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+676,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+675,"io_code", false,-1, 2,0);
    tracep->declBit(c+676,"io_neg", false,-1);
    tracep->declBit(c+677,"io_zero", false,-1);
    tracep->declBit(c+678,"io_one", false,-1);
    tracep->declBit(c+679,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+680,"io_code", false,-1, 2,0);
    tracep->declBus(c+1211,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+681,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+680,"io_code", false,-1, 2,0);
    tracep->declBit(c+681,"io_neg", false,-1);
    tracep->declBit(c+682,"io_zero", false,-1);
    tracep->declBit(c+683,"io_one", false,-1);
    tracep->declBit(c+684,"io_two", false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("encode ");
    tracep->declBus(c+1311,"io_pir_sign", false,-1, 0,0);
    tracep->declBus(c+1312,"io_pir_exp", false,-1, 7,0);
    tracep->declBus(c+1313,"io_pir_frac", false,-1, 28,0);
    tracep->declBus(c+1314,"io_posit", false,-1, 31,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declArray(c+1280,"io_operand_i", false,-1, 91,0);
    tracep->declBus(c+1315,"io_shift_amount", false,-1, 4,0);
    tracep->declArray(c+1283,"io_result_o", false,-1, 91,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encode_dot ");
    tracep->declBit(c+1356,"io_pir_sign", false,-1);
    tracep->declBus(c+1316,"io_pir_exp", false,-1, 7,0);
    tracep->declBus(c+1317,"io_pir_frac", false,-1, 28,0);
    tracep->declBus(c+1318,"io_posit", false,-1, 31,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declArray(c+1225,"io_operand_i", false,-1, 91,0);
    tracep->declBus(c+1228,"io_shift_amount", false,-1, 4,0);
    tracep->declArray(c+1229,"io_result_o", false,-1, 91,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_add ");
    tracep->declBus(c+1212,"io_pir_frac_i", false,-1, 29,0);
    tracep->declBus(c+1319,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+1264,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1358,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1350,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1212,"in_i", false,-1, 29,0);
    tracep->declBus(c+1265,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1320,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1350,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1359,"index_lut", false,-1, 149,0);
    tracep->declBus(c+1321,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1266,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1213,"in_tmp", false,-1, 29,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1358,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declBus(c+1212,"io_operand_i", false,-1, 29,0);
    tracep->declBus(c+1265,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1271,"io_result_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_div ");
    tracep->declQuad(c+1214,"io_pir_frac_i", false,-1, 61,0);
    tracep->declBus(c+1322,"io_exp_adjust", false,-1, 8,0);
    tracep->declBus(c+1248,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1364,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1365,"CNT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1214,"in_i", false,-1, 61,0);
    tracep->declBus(c+1249,"cnt_o", false,-1, 5,0);
    tracep->declBit(c+1323,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1365,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1366,"index_lut", false,-1, 371,0);
    tracep->declQuad(c+1324,"sel_nodes", false,-1, 63,0);
    tracep->declArray(c+1250,"index_nodes", false,-1, 383,0);
    tracep->declQuad(c+1216,"in_tmp", false,-1, 61,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1364,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[5] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declQuad(c+1214,"io_operand_i", false,-1, 61,0);
    tracep->declBus(c+1249,"io_shift_amount", false,-1, 5,0);
    tracep->declQuad(c+1262,"io_result_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_dot ");
    tracep->declQuad(c+1326,"io_pir_frac_i", false,-1, 61,0);
    tracep->declBus(c+1328,"io_exp_adjust", false,-1, 8,0);
    tracep->declBus(c+699,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1378,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1365,"CNT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1329,"in_i", false,-1, 60,0);
    tracep->declBus(c+700,"cnt_o", false,-1, 5,0);
    tracep->declBit(c+1331,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1365,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1379,"index_lut", false,-1, 365,0);
    tracep->declQuad(c+1332,"sel_nodes", false,-1, 63,0);
    tracep->declArray(c+701,"index_nodes", false,-1, 383,0);
    tracep->declQuad(c+1334,"in_tmp", false,-1, 60,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1378,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[5] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declQuad(c+1326,"io_operand_i", false,-1, 61,0);
    tracep->declBus(c+700,"io_shift_amount", false,-1, 5,0);
    tracep->declQuad(c+713,"io_result_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_mul ");
    tracep->declQuad(c+1218,"io_pir_frac_i", false,-1, 61,0);
    tracep->declBus(c+1336,"io_exp_adjust", false,-1, 8,0);
    tracep->declBus(c+1232,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1364,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1365,"CNT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1218,"in_i", false,-1, 61,0);
    tracep->declBus(c+1233,"cnt_o", false,-1, 5,0);
    tracep->declBit(c+1337,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1365,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1366,"index_lut", false,-1, 371,0);
    tracep->declQuad(c+1338,"sel_nodes", false,-1, 63,0);
    tracep->declArray(c+1234,"index_nodes", false,-1, 383,0);
    tracep->declQuad(c+1220,"in_tmp", false,-1, 61,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1364,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[5] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declQuad(c+1218,"io_operand_i", false,-1, 61,0);
    tracep->declBus(c+1233,"io_shift_amount", false,-1, 5,0);
    tracep->declQuad(c+1246,"io_result_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_sub ");
    tracep->declBus(c+1222,"io_pir_frac_i", false,-1, 29,0);
    tracep->declBus(c+1340,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+1272,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1358,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1349,"MODE", false,-1);
    tracep->declBus(c+1350,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1222,"in_i", false,-1, 29,0);
    tracep->declBus(c+1273,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1341,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1350,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1359,"index_lut", false,-1, 149,0);
    tracep->declBus(c+1342,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1274,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1223,"in_tmp", false,-1, 29,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1358,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declBus(c+1222,"io_operand_i", false,-1, 29,0);
    tracep->declBus(c+1273,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1279,"io_result_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fracalign ");
    tracep->declBus(c+64,"io_pir_frac1_i", false,-1, 27,0);
    tracep->declBus(c+449,"io_pir_frac2_i", false,-1, 27,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+715,"io_pir_frac1_align", false,-1, 29,0);
    tracep->declBus(c+716,"io_pir_frac2_align", false,-1, 29,0);
    tracep->declBus(c+1224,"io_pir_max_exp", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fracalign_1 ");
    tracep->declBus(c+64,"io_pir_frac1_i", false,-1, 27,0);
    tracep->declBus(c+449,"io_pir_frac2_i", false,-1, 27,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+715,"io_pir_frac1_align", false,-1, 29,0);
    tracep->declBus(c+716,"io_pir_frac2_align", false,-1, 29,0);
    tracep->declBus(c+1224,"io_pir_max_exp", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+66,"io_pir_frac1_i", false,-1, 29,0);
    tracep->declBus(c+451,"io_pir_frac2_i", false,-1, 29,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1136,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+1141,"io_pir_frac_o", false,-1, 61,0);
    tracep->declBus(c+1143,"sum", false,-1, 8,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+66,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+451,"io_operand_b", false,-1, 29,0);
    tracep->declQuad(c+1144,"io_sum_o", false,-1, 59,0);
    tracep->declQuad(c+1146,"io_carry_o", false,-1, 59,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+11,"io_operands_i", false,-1, 899,0);
    tracep->declQuad(c+1148,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1150,"io_carry_o", false,-1, 63,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1152,"io_operands_i", false,-1, 255,0);
    tracep->declQuad(c+1148,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1150,"io_carry_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+412,"io_operands_i", false,-1, 419,0);
    tracep->declQuad(c+1160,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1162,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1164,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1160,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1162,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+426,"io_operands_i", false,-1, 179,0);
    tracep->declQuad(c+1172,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1174,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+426,"io_operands_i", false,-1, 179,0);
    tracep->declQuad(c+1172,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1174,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+432,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1176,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1178,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+432,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1176,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1178,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+40,"io_operands_i", false,-1, 479,0);
    tracep->declQuad(c+1180,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1182,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1184,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1180,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1182,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+440,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1192,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1194,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+440,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1192,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1194,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+55,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1196,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1198,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+55,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1196,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1198,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+66,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+451,"io_operand_b", false,-1, 29,0);
    tracep->declArray(c+11,"io_partial_prods", false,-1, 899,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+615,"io_code", false,-1, 2,0);
    tracep->declBus(c+1200,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+616,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+615,"io_code", false,-1, 2,0);
    tracep->declBit(c+616,"io_neg", false,-1);
    tracep->declBit(c+617,"io_zero", false,-1);
    tracep->declBit(c+618,"io_one", false,-1);
    tracep->declBit(c+619,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdFirst ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+620,"io_code", false,-1, 2,0);
    tracep->declBus(c+1309,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+621,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+620,"io_code", false,-1, 2,0);
    tracep->declBit(c+621,"io_neg", false,-1);
    tracep->declBit(c+622,"io_zero", false,-1);
    tracep->declBit(c+623,"io_one", false,-1);
    tracep->declBit(c+624,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBus(c+69,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+1356,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBit(c+1356,"io_neg", false,-1);
    tracep->declBit(c+9,"io_zero", false,-1);
    tracep->declBit(c+10,"io_one", false,-1);
    tracep->declBit(c+1356,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+625,"io_code", false,-1, 2,0);
    tracep->declBus(c+1201,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+626,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+625,"io_code", false,-1, 2,0);
    tracep->declBit(c+626,"io_neg", false,-1);
    tracep->declBit(c+627,"io_zero", false,-1);
    tracep->declBit(c+628,"io_one", false,-1);
    tracep->declBit(c+629,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+630,"io_code", false,-1, 2,0);
    tracep->declBus(c+1202,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+631,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+630,"io_code", false,-1, 2,0);
    tracep->declBit(c+631,"io_neg", false,-1);
    tracep->declBit(c+632,"io_zero", false,-1);
    tracep->declBit(c+633,"io_one", false,-1);
    tracep->declBit(c+634,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+635,"io_code", false,-1, 2,0);
    tracep->declBus(c+1203,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+636,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+635,"io_code", false,-1, 2,0);
    tracep->declBit(c+636,"io_neg", false,-1);
    tracep->declBit(c+637,"io_zero", false,-1);
    tracep->declBit(c+638,"io_one", false,-1);
    tracep->declBit(c+639,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+640,"io_code", false,-1, 2,0);
    tracep->declBus(c+1204,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+641,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+640,"io_code", false,-1, 2,0);
    tracep->declBit(c+641,"io_neg", false,-1);
    tracep->declBit(c+642,"io_zero", false,-1);
    tracep->declBit(c+643,"io_one", false,-1);
    tracep->declBit(c+644,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+645,"io_code", false,-1, 2,0);
    tracep->declBus(c+1205,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+646,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+645,"io_code", false,-1, 2,0);
    tracep->declBit(c+646,"io_neg", false,-1);
    tracep->declBit(c+647,"io_zero", false,-1);
    tracep->declBit(c+648,"io_one", false,-1);
    tracep->declBit(c+649,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+650,"io_code", false,-1, 2,0);
    tracep->declBus(c+1206,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+651,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+650,"io_code", false,-1, 2,0);
    tracep->declBit(c+651,"io_neg", false,-1);
    tracep->declBit(c+652,"io_zero", false,-1);
    tracep->declBit(c+653,"io_one", false,-1);
    tracep->declBit(c+654,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+655,"io_code", false,-1, 2,0);
    tracep->declBus(c+1207,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+656,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+655,"io_code", false,-1, 2,0);
    tracep->declBit(c+656,"io_neg", false,-1);
    tracep->declBit(c+657,"io_zero", false,-1);
    tracep->declBit(c+658,"io_one", false,-1);
    tracep->declBit(c+659,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+660,"io_code", false,-1, 2,0);
    tracep->declBus(c+1208,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+661,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+660,"io_code", false,-1, 2,0);
    tracep->declBit(c+661,"io_neg", false,-1);
    tracep->declBit(c+662,"io_zero", false,-1);
    tracep->declBit(c+663,"io_one", false,-1);
    tracep->declBit(c+664,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+665,"io_code", false,-1, 2,0);
    tracep->declBus(c+1310,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+666,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+665,"io_code", false,-1, 2,0);
    tracep->declBit(c+666,"io_neg", false,-1);
    tracep->declBit(c+667,"io_zero", false,-1);
    tracep->declBit(c+668,"io_one", false,-1);
    tracep->declBit(c+669,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+670,"io_code", false,-1, 2,0);
    tracep->declBus(c+1209,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+671,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+670,"io_code", false,-1, 2,0);
    tracep->declBit(c+671,"io_neg", false,-1);
    tracep->declBit(c+672,"io_zero", false,-1);
    tracep->declBit(c+673,"io_one", false,-1);
    tracep->declBit(c+674,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+675,"io_code", false,-1, 2,0);
    tracep->declBus(c+1210,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+676,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+675,"io_code", false,-1, 2,0);
    tracep->declBit(c+676,"io_neg", false,-1);
    tracep->declBit(c+677,"io_zero", false,-1);
    tracep->declBit(c+678,"io_one", false,-1);
    tracep->declBit(c+679,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+66,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+680,"io_code", false,-1, 2,0);
    tracep->declBus(c+1211,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+681,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+680,"io_code", false,-1, 2,0);
    tracep->declBit(c+681,"io_neg", false,-1);
    tracep->declBit(c+682,"io_zero", false,-1);
    tracep->declBit(c+683,"io_one", false,-1);
    tracep->declBit(c+684,"io_two", false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("sub ");
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+63,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+448,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+715,"io_pir_frac1_aligned", false,-1, 29,0);
    tracep->declBus(c+716,"io_pir_frac2_aligned", false,-1, 29,0);
    tracep->declBus(c+1343,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1344,"io_pir_exp_o", false,-1, 7,0);
    tracep->declBus(c+1345,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+1346,"io_overflow", false,-1, 0,0);
    tracep->declBus(c+1347,"io_frac_truncate", false,-1, 0,0);
    tracep->declBit(c+720,"mant1_greater", false,-1);
    tracep->declBus(c+719,"sum", false,-1, 30,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_top(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_top\n"); );
    // Body
    VPvuTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPvuTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPvuTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPvuTop___024root__trace_register(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPvuTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPvuTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPvuTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPvuTop___024root__trace_full_sub_0(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPvuTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_full_top_0\n"); );
    // Init
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPvuTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<12>/*383:0*/ VPvuTop__ConstPool__CONST_hc5a1c501_0;
extern const VlWide<12>/*383:0*/ VPvuTop__ConstPool__CONST_hc5537591_0;

VL_ATTR_COLD void VPvuTop___024root__trace_full_sub_0(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<29>/*927:0*/ __Vtemp_hb8eaa7b9__0;
    VlWide<15>/*479:0*/ __Vtemp_h6dc5424f__0;
    VlWide<8>/*255:0*/ __Vtemp_h20f8bede__0;
    VlWide<57>/*1823:0*/ __Vtemp_hf2977231__0;
    VlWide<27>/*863:0*/ __Vtemp_h41c0346e__0;
    VlWide<12>/*383:0*/ __Vtemp_h3c3c7d0e__0;
    VlWide<15>/*479:0*/ __Vtemp_h048d321d__0;
    VlWide<30>/*959:0*/ __Vtemp_hd7ffb2f5__0;
    VlWide<15>/*479:0*/ __Vtemp_h64ff26b0__0;
    VlWide<15>/*479:0*/ __Vtemp_h6d53275c__0;
    VlWide<57>/*1823:0*/ __Vtemp_h11b01039__0;
    VlWide<27>/*863:0*/ __Vtemp_h9848fa85__0;
    VlWide<12>/*383:0*/ __Vtemp_ha68b30cd__0;
    VlWide<15>/*479:0*/ __Vtemp_h9ca90697__0;
    VlWide<30>/*959:0*/ __Vtemp_h6f6fccf3__0;
    VlWide<15>/*479:0*/ __Vtemp_ha1884543__0;
    VlWide<15>/*479:0*/ __Vtemp_he8aff485__0;
    VlWide<14>/*447:0*/ __Vtemp_hae13c366__0;
    VlWide<6>/*191:0*/ __Vtemp_h9520066a__0;
    VlWide<8>/*255:0*/ __Vtemp_h827858a1__0;
    VlWide<8>/*255:0*/ __Vtemp_hbcb0fb76__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c0bf393__0;
    VlWide<3>/*95:0*/ __Vtemp_hc6f8af93__0;
    VlWide<3>/*95:0*/ __Vtemp_ha021ce85__0;
    VlWide<3>/*95:0*/ __Vtemp_hec931e38__0;
    VlWide<3>/*95:0*/ __Vtemp_h36519e28__0;
    VlWide<3>/*95:0*/ __Vtemp_h14515862__0;
    VlWide<4>/*127:0*/ __Vtemp_he287537c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc427fdde__0;
    VlWide<4>/*127:0*/ __Vtemp_heb380a01__0;
    VlWide<4>/*127:0*/ __Vtemp_h2082a094__0;
    VlWide<16>/*511:0*/ __Vtemp_hb9925c6b__0;
    VlWide<16>/*511:0*/ __Vtemp_haa669efa__0;
    VlWide<16>/*511:0*/ __Vtemp_he4a44391__0;
    VlWide<4>/*127:0*/ __Vtemp_h2fbbaec0__1;
    VlWide<4>/*127:0*/ __Vtemp_hee6c1f23__1;
    VlWide<4>/*127:0*/ __Vtemp_h7f3192a4__1;
    VlWide<4>/*127:0*/ __Vtemp_ha5392714__1;
    VlWide<16>/*511:0*/ __Vtemp_h6bc9911c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd6cbd594__1;
    VlWide<4>/*127:0*/ __Vtemp_hfc9e0d89__1;
    VlWide<4>/*127:0*/ __Vtemp_h0a19e709__1;
    VlWide<4>/*127:0*/ __Vtemp_h12832ed2__1;
    VlWide<16>/*511:0*/ __Vtemp_hfa618b5e__0;
    VlWide<16>/*511:0*/ __Vtemp_hca383fa4__0;
    VlWide<4>/*127:0*/ __Vtemp_he030a099__1;
    VlWide<4>/*127:0*/ __Vtemp_h1f99f829__1;
    VlWide<4>/*127:0*/ __Vtemp_h0ec6ec9a__1;
    VlWide<4>/*127:0*/ __Vtemp_hd0decde8__1;
    VlWide<16>/*511:0*/ __Vtemp_h63eadcd4__0;
    VlWide<4>/*127:0*/ __Vtemp_h750001a0__1;
    VlWide<4>/*127:0*/ __Vtemp_hdf25f8bd__1;
    VlWide<4>/*127:0*/ __Vtemp_h0ce3a25e__1;
    VlWide<4>/*127:0*/ __Vtemp_h6f957782__1;
    VlWide<8>/*255:0*/ __Vtemp_h888287a4__0;
    VlWide<8>/*255:0*/ __Vtemp_h18607c30__0;
    VlWide<8>/*255:0*/ __Vtemp_h9050cc37__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6),31);
    bufp->fullIData(oldp+2,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),31);
    bufp->fullIData(oldp+3,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+4,(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6),31);
    bufp->fullIData(oldp+5,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),31);
    bufp->fullIData(oldp+6,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullBit(oldp+7,(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o));
    bufp->fullCData(oldp+8,((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)),3);
    bufp->fullBit(oldp+9,((1U & (~ (IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))))));
    bufp->fullBit(oldp+10,(((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6) 
                            & (0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))));
    __Vtemp_hb8eaa7b9__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                         << 0x3cU) 
                                        | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1));
    __Vtemp_hb8eaa7b9__0[1U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                        << 0x3cU) 
                                                       | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1) 
                                                      >> 0x20U)));
    __Vtemp_hb8eaa7b9__0[2U] = (0x40000000U | (0x3fffffffU 
                                               & ((0x20000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                      << 0x1dU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                                     >> 2U))));
    __Vtemp_hb8eaa7b9__0[3U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_hb8eaa7b9__0[4U] = (0x10000000U | (0xfffffffU 
                                               & ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                     >> 4U))));
    __Vtemp_hb8eaa7b9__0[5U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_hb8eaa7b9__0[6U] = (0x4000000U | (0x3ffffffU 
                                              & ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                    >> 6U))));
    __Vtemp_hb8eaa7b9__0[7U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_hb8eaa7b9__0[8U] = (0x1000000U | (0xffffffU 
                                              & ((0x800000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                    >> 8U))));
    __Vtemp_hb8eaa7b9__0[9U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x14U));
    __Vtemp_hb8eaa7b9__0[0xaU] = (0x400000U | (0x3fffffU 
                                               & ((0x200000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                      << 0x15U)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                     >> 0xaU))));
    __Vtemp_hb8eaa7b9__0[0xbU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_hb8eaa7b9__0[0xcU] = (0x100000U | (0xfffffU 
                                               & ((0x80000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                      << 0x13U)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                     >> 0xcU))));
    __Vtemp_hb8eaa7b9__0[0xdU] = ((((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               << 1U)
                                            : 0U))) 
                                   << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                << 0x10U));
    __Vtemp_hb8eaa7b9__0[0xeU] = (0x40000U | (0x3ffffU 
                                              & ((0x20000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                     << 0x11U)) 
                                                 | (0x1ffffU 
                                                    & (((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                        ^ 
                                                        (((0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                               >> 0xfU))) 
                                                          & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                             | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                          ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                          : 
                                                         (((~ 
                                                            ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                  >> 0xfU))) 
                                                             | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                           & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                           ? 
                                                          (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                           << 1U)
                                                           : 0U))) 
                                                       >> 0xeU)))));
    __Vtemp_hb8eaa7b9__0[0xfU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                   << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                << 0xeU));
    __Vtemp_hb8eaa7b9__0[0x10U] = (0x10000U | (0xffffU 
                                               & ((0x8000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                      << 0xfU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                     >> 0x10U))));
    __Vtemp_hb8eaa7b9__0[0x11U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                    << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_hb8eaa7b9__0[0x12U] = (0x4000U | (0x3fffU 
                                              & ((0x2000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                     << 0xdU)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                    >> 0x12U))));
    __Vtemp_hb8eaa7b9__0[0x13U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_hb8eaa7b9__0[0x14U] = (0x1000U | (0xfffU 
                                              & ((0x800U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                     << 0xbU)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                    >> 0x14U))));
    __Vtemp_hb8eaa7b9__0[0x15U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_hb8eaa7b9__0[0x16U] = (0x400U | (0x3ffU 
                                             & ((0x200U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                    << 9U)) 
                                                | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                   >> 0x16U))));
    __Vtemp_hb8eaa7b9__0[0x17U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 6U));
    __Vtemp_hb8eaa7b9__0[0x18U] = (0x100U | (0xffU 
                                             & ((0x80U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                    << 7U)) 
                                                | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                   >> 0x18U))));
    __Vtemp_hb8eaa7b9__0[0x19U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_hb8eaa7b9__0[0x1aU] = (0x40U | (0x3fU & 
                                            ((0x20U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                 << 5U)) 
                                             | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                >> 0x1aU))));
    __Vtemp_hb8eaa7b9__0[0x1bU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_hb8eaa7b9__0[0x1cU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                   >> 0x1cU);
    bufp->fullWData(oldp+11,(__Vtemp_hb8eaa7b9__0),900);
    __Vtemp_h6dc5424f__0[0U] = (IData)(vlSelf->__VdfgTmp_hf293b01d__0);
    __Vtemp_h6dc5424f__0[1U] = (0x4000U | (IData)((vlSelf->__VdfgTmp_hf293b01d__0 
                                                   >> 0x20U)));
    __Vtemp_h6dc5424f__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                 << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                             << 0xaU));
    __Vtemp_h6dc5424f__0[3U] = (0x1000U | (0xfffU & 
                                           ((0x800U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                << 0xbU)) 
                                            | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                               >> 0x14U))));
    __Vtemp_h6dc5424f__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_h6dc5424f__0[5U] = (0x400U | (0x3ffU & 
                                          ((0x200U 
                                            & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                               << 9U)) 
                                           | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                              >> 0x16U))));
    __Vtemp_h6dc5424f__0[6U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h6dc5424f__0[7U] = (0x100U | (0xffU & (
                                                   (0x80U 
                                                    & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                       << 7U)) 
                                                   | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x18U))));
    __Vtemp_h6dc5424f__0[8U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 << 6U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                           << 4U));
    __Vtemp_h6dc5424f__0[9U] = (0x40U | (0x3fU & ((0x20U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                      << 5U)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                     >> 0x1aU))));
    __Vtemp_h6dc5424f__0[0xaU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                   << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                             << 2U));
    __Vtemp_h6dc5424f__0[0xbU] = (0x10U | (0xfU & (
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                       << 3U)) 
                                                   | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                      >> 0x1cU))));
    __Vtemp_h6dc5424f__0[0xcU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   << 2U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
    __Vtemp_h6dc5424f__0[0xdU] = (4U | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1eU) 
                                        | (3U & ((2U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                     << 1U)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                    >> 0x1eU)))));
    __Vtemp_h6dc5424f__0[0xeU] = vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod;
    bufp->fullWData(oldp+40,(__Vtemp_h6dc5424f__0),480);
    __Vtemp_h20f8bede__0[0U] = (IData)(vlSelf->__VdfgTmp_h705df0d9__0);
    __Vtemp_h20f8bede__0[1U] = (0x400000U | (IData)(
                                                    (vlSelf->__VdfgTmp_h705df0d9__0 
                                                     >> 0x20U)));
    __Vtemp_h20f8bede__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h20f8bede__0[3U] = (0x100000U | (0xfffffU 
                                             & ((0x80000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                   >> 0xcU))));
    __Vtemp_h20f8bede__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_h20f8bede__0[5U] = (0x40000U | (0x3ffffU 
                                            & ((0x20000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                  >> 0xeU))));
    __Vtemp_h20f8bede__0[6U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                 << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                              << 0xeU));
    __Vtemp_h20f8bede__0[7U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                >> 0x10U);
    bufp->fullWData(oldp+55,(__Vtemp_h20f8bede__0),240);
    bufp->fullCData(oldp+63,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp),8);
    bufp->fullIData(oldp+64,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),28);
    bufp->fullIData(oldp+65,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+66,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),30);
    bufp->fullQData(oldp+67,(((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                              << 0x1eU)),60);
    bufp->fullIData(oldp+69,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod),31);
    __Vtemp_hf2977231__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U];
    __Vtemp_hf2977231__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U];
    __Vtemp_hf2977231__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U];
    __Vtemp_hf2977231__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U]));
    __Vtemp_hf2977231__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_hf2977231__0[5U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_hf2977231__0[6U] = 0U;
    __Vtemp_hf2977231__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_hf2977231__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hf2977231__0[9U] = (0x40000U | ((0x20000U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                << 0x11U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    __Vtemp_hf2977231__0[0xaU] = 0U;
    __Vtemp_hf2977231__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_hf2977231__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_hf2977231__0[0xdU] = (0x1000U | ((0x800U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 0xbU)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_hf2977231__0[0xeU] = 0U;
    __Vtemp_hf2977231__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_hf2977231__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_hf2977231__0[0x11U] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_hf2977231__0[0x12U] = 0U;
    __Vtemp_hf2977231__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_hf2977231__0[0x14U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                  >> 0x1eU) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 2U)));
    __Vtemp_hf2977231__0[0x15U] = 1U;
    __Vtemp_hf2977231__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_hf2977231__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_hf2977231__0[0x18U] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 4U)));
    __Vtemp_hf2977231__0[0x19U] = 0U;
    __Vtemp_hf2977231__0[0x1aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_hf2977231__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_hf2977231__0[0x1cU] = (0x100000U | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    __Vtemp_hf2977231__0[0x1dU] = 0U;
    __Vtemp_hf2977231__0[0x1eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_hf2977231__0[0x1fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_hf2977231__0[0x20U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_hf2977231__0[0x21U] = 0U;
    __Vtemp_hf2977231__0[0x22U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_hf2977231__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_hf2977231__0[0x24U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x16U)));
    __Vtemp_hf2977231__0[0x25U] = 0U;
    __Vtemp_hf2977231__0[0x26U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_hf2977231__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_hf2977231__0[0x28U] = (4U | ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                << 1U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    __Vtemp_hf2977231__0[0x29U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_hf2977231__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_hf2977231__0[0x2bU] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | ((IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                              >> 0x20U)) 
                                                     >> 2U)));
    __Vtemp_hf2977231__0[0x2cU] = 0U;
    __Vtemp_hf2977231__0[0x2dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_hf2977231__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_hf2977231__0[0x2fU] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_hf2977231__0[0x30U] = 0U;
    __Vtemp_hf2977231__0[0x31U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_hf2977231__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_hf2977231__0[0x33U] = (0x10000U | ((0x8000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    __Vtemp_hf2977231__0[0x34U] = 0U;
    __Vtemp_hf2977231__0[0x35U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_hf2977231__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_hf2977231__0[0x37U] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_hf2977231__0[0x38U] = 0U;
    bufp->fullWData(oldp+70,(__Vtemp_hf2977231__0),1800);
    __Vtemp_h41c0346e__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U];
    __Vtemp_h41c0346e__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U];
    __Vtemp_h41c0346e__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U];
    __Vtemp_h41c0346e__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U]));
    __Vtemp_h41c0346e__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h41c0346e__0[5U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_h41c0346e__0[6U] = 0U;
    __Vtemp_h41c0346e__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h41c0346e__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h41c0346e__0[9U] = (0x40000U | ((0x20000U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                << 0x11U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    __Vtemp_h41c0346e__0[0xaU] = 0U;
    __Vtemp_h41c0346e__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_h41c0346e__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_h41c0346e__0[0xdU] = (0x1000U | ((0x800U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 0xbU)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h41c0346e__0[0xeU] = 0U;
    __Vtemp_h41c0346e__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_h41c0346e__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h41c0346e__0[0x11U] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_h41c0346e__0[0x12U] = 0U;
    __Vtemp_h41c0346e__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h41c0346e__0[0x14U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                  >> 0x1eU) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 2U)));
    __Vtemp_h41c0346e__0[0x15U] = 1U;
    __Vtemp_h41c0346e__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h41c0346e__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h41c0346e__0[0x18U] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 4U)));
    __Vtemp_h41c0346e__0[0x19U] = 0U;
    __Vtemp_h41c0346e__0[0x1aU] = 0U;
    bufp->fullWData(oldp+127,(__Vtemp_h41c0346e__0),840);
    __Vtemp_h3c3c7d0e__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U];
    __Vtemp_h3c3c7d0e__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U];
    __Vtemp_h3c3c7d0e__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U];
    __Vtemp_h3c3c7d0e__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U]));
    __Vtemp_h3c3c7d0e__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h3c3c7d0e__0[5U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_h3c3c7d0e__0[6U] = 0U;
    __Vtemp_h3c3c7d0e__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h3c3c7d0e__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h3c3c7d0e__0[9U] = (0x40000U | ((0x20000U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                << 0x11U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    __Vtemp_h3c3c7d0e__0[0xaU] = 0U;
    __Vtemp_h3c3c7d0e__0[0xbU] = 0U;
    bufp->fullWData(oldp+154,(__Vtemp_h3c3c7d0e__0),360);
    __Vtemp_h048d321d__0[0U] = vlSelf->__VdfgTmp_hec8297ca__0[0U];
    __Vtemp_h048d321d__0[1U] = vlSelf->__VdfgTmp_hec8297ca__0[1U];
    __Vtemp_h048d321d__0[2U] = (0x10U | vlSelf->__VdfgTmp_hec8297ca__0[2U]);
    __Vtemp_h048d321d__0[3U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                << 0x1eU);
    __Vtemp_h048d321d__0[4U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod);
    __Vtemp_h048d321d__0[5U] = (0x40000000U | ((0x20000000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                   << 0x1dU)) 
                                               | (IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U))));
    __Vtemp_h048d321d__0[6U] = 0U;
    __Vtemp_h048d321d__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h048d321d__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h048d321d__0[9U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_h048d321d__0[0xaU] = 0U;
    __Vtemp_h048d321d__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_h048d321d__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                   >> 0xcU) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_h048d321d__0[0xdU] = (0x40000U | ((0x20000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                  << 0x11U)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp_h048d321d__0[0xeU] = 0U;
    bufp->fullWData(oldp+166,(__Vtemp_h048d321d__0),480);
    __Vtemp_hd7ffb2f5__0[0U] = vlSelf->__VdfgTmp_hfa6eb825__0[0U];
    __Vtemp_hd7ffb2f5__0[1U] = vlSelf->__VdfgTmp_hfa6eb825__0[1U];
    __Vtemp_hd7ffb2f5__0[2U] = (0x1000U | vlSelf->__VdfgTmp_hfa6eb825__0[2U]);
    __Vtemp_hd7ffb2f5__0[3U] = 0U;
    __Vtemp_hd7ffb2f5__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_hd7ffb2f5__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hd7ffb2f5__0[6U] = (0x40U | ((0x20U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                   << 5U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x18U)));
    __Vtemp_hd7ffb2f5__0[7U] = 0U;
    __Vtemp_hd7ffb2f5__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_hd7ffb2f5__0[9U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                 << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                               >> 0x1eU) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U)));
    __Vtemp_hd7ffb2f5__0[0xaU] = 1U;
    __Vtemp_hd7ffb2f5__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_hd7ffb2f5__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   >> 4U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_hd7ffb2f5__0[0xdU] = (0x4000000U | ((0x2000000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                    << 0x19U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    __Vtemp_hd7ffb2f5__0[0xeU] = 0U;
    __Vtemp_hd7ffb2f5__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                   << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    __Vtemp_hd7ffb2f5__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_hd7ffb2f5__0[0x11U] = (0x100000U | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    __Vtemp_hd7ffb2f5__0[0x12U] = 0U;
    __Vtemp_hd7ffb2f5__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_hd7ffb2f5__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_hd7ffb2f5__0[0x15U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_hd7ffb2f5__0[0x16U] = 0U;
    __Vtemp_hd7ffb2f5__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_hd7ffb2f5__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_hd7ffb2f5__0[0x19U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x16U)));
    __Vtemp_hd7ffb2f5__0[0x1aU] = 0U;
    __Vtemp_hd7ffb2f5__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_hd7ffb2f5__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_hd7ffb2f5__0[0x1dU] = (4U | ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                << 1U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    bufp->fullWData(oldp+181,(__Vtemp_hd7ffb2f5__0),960);
    __Vtemp_h64ff26b0__0[0U] = vlSelf->__VdfgTmp_hfa6eb825__0[0U];
    __Vtemp_h64ff26b0__0[1U] = vlSelf->__VdfgTmp_hfa6eb825__0[1U];
    __Vtemp_h64ff26b0__0[2U] = (0x1000U | vlSelf->__VdfgTmp_hfa6eb825__0[2U]);
    __Vtemp_h64ff26b0__0[3U] = 0U;
    __Vtemp_h64ff26b0__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h64ff26b0__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h64ff26b0__0[6U] = (0x40U | ((0x20U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                   << 5U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x18U)));
    __Vtemp_h64ff26b0__0[7U] = 0U;
    __Vtemp_h64ff26b0__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h64ff26b0__0[9U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                 << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                               >> 0x1eU) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U)));
    __Vtemp_h64ff26b0__0[0xaU] = 1U;
    __Vtemp_h64ff26b0__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h64ff26b0__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   >> 4U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h64ff26b0__0[0xdU] = (0x4000000U | ((0x2000000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                    << 0x19U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    __Vtemp_h64ff26b0__0[0xeU] = 0U;
    bufp->fullWData(oldp+211,(__Vtemp_h64ff26b0__0),480);
    __Vtemp_h6d53275c__0[0U] = vlSelf->__VdfgTmp_h675e2a92__0[0U];
    __Vtemp_h6d53275c__0[1U] = vlSelf->__VdfgTmp_h675e2a92__0[1U];
    __Vtemp_h6d53275c__0[2U] = (0x100000U | vlSelf->__VdfgTmp_h675e2a92__0[2U]);
    __Vtemp_h6d53275c__0[3U] = 0U;
    __Vtemp_h6d53275c__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                 << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 0xeU));
    __Vtemp_h6d53275c__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h6d53275c__0[6U] = (0x4000U | ((0x2000U 
                                            & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                               << 0xdU)) 
                                           | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x10U)));
    __Vtemp_h6d53275c__0[7U] = 0U;
    __Vtemp_h6d53275c__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_h6d53275c__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                 >> 0x16U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h6d53275c__0[0xaU] = (0x100U | ((0x80U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                << 7U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp_h6d53275c__0[0xbU] = 0U;
    __Vtemp_h6d53275c__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                   << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 2U));
    __Vtemp_h6d53275c__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                   >> 0x1cU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 4U));
    __Vtemp_h6d53275c__0[0xeU] = (4U | ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                               << 1U)) 
                                        | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                    >> 0x20U)) 
                                           >> 0x1cU)));
    bufp->fullWData(oldp+226,(__Vtemp_h6d53275c__0),480);
    __Vtemp_h11b01039__0[0U] = vlSelf->__VdfgTmp_h7d087c26__0[0U];
    __Vtemp_h11b01039__0[1U] = vlSelf->__VdfgTmp_h7d087c26__0[1U];
    __Vtemp_h11b01039__0[2U] = (0x10000000U | vlSelf->__VdfgTmp_h7d087c26__0[2U]);
    __Vtemp_h11b01039__0[3U] = 0U;
    __Vtemp_h11b01039__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h11b01039__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h11b01039__0[6U] = (0x400000U | ((0x200000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 8U)));
    __Vtemp_h11b01039__0[7U] = 0U;
    __Vtemp_h11b01039__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_h11b01039__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h11b01039__0[0xaU] = (0x10000U | ((0x8000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                  << 0xfU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xeU)));
    __Vtemp_h11b01039__0[0xbU] = 0U;
    __Vtemp_h11b01039__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 0xaU));
    __Vtemp_h11b01039__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xcU));
    __Vtemp_h11b01039__0[0xeU] = (0x400U | ((0x200U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                << 9U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x14U)));
    __Vtemp_h11b01039__0[0xfU] = 0U;
    __Vtemp_h11b01039__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h11b01039__0[0x11U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_h11b01039__0[0x12U] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    __Vtemp_h11b01039__0[0x13U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h11b01039__0[0x14U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod);
    __Vtemp_h11b01039__0[0x15U] = (0x40000000U | ((0x20000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x1dU)) 
                                                  | (IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                             >> 0x20U))));
    __Vtemp_h11b01039__0[0x16U] = 0U;
    __Vtemp_h11b01039__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg) 
                                                 << 0x18U));
    __Vtemp_h11b01039__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    >> 6U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_h11b01039__0[0x19U] = (0x1000000U | ((0x800000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 6U)));
    __Vtemp_h11b01039__0[0x1aU] = 0U;
    __Vtemp_h11b01039__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h11b01039__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h11b01039__0[0x1dU] = (0x40000U | ((0x20000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp_h11b01039__0[0x1eU] = 0U;
    __Vtemp_h11b01039__0[0x1fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h11b01039__0[0x20U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_h11b01039__0[0x21U] = (0x1000U | ((0x800U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                  << 0xbU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x12U)));
    __Vtemp_h11b01039__0[0x22U] = 0U;
    __Vtemp_h11b01039__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                              << 6U));
    __Vtemp_h11b01039__0[0x24U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h11b01039__0[0x25U] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_h11b01039__0[0x26U] = 0U;
    __Vtemp_h11b01039__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg));
    __Vtemp_h11b01039__0[0x28U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                                  >> 0x1eU) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 2U)));
    __Vtemp_h11b01039__0[0x29U] = 1U;
    __Vtemp_h11b01039__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h11b01039__0[0x2bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h11b01039__0[0x2cU] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 4U)));
    __Vtemp_h11b01039__0[0x2dU] = 0U;
    __Vtemp_h11b01039__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_h11b01039__0[0x2fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h11b01039__0[0x30U] = (0x100000U | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    __Vtemp_h11b01039__0[0x31U] = 0U;
    __Vtemp_h11b01039__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h11b01039__0[0x33U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h11b01039__0[0x34U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h11b01039__0[0x35U] = 0U;
    __Vtemp_h11b01039__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h11b01039__0[0x37U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h11b01039__0[0x38U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x16U);
    bufp->fullWData(oldp+241,(__Vtemp_h11b01039__0),1800);
    __Vtemp_h9848fa85__0[0U] = vlSelf->__VdfgTmp_h7d087c26__0[0U];
    __Vtemp_h9848fa85__0[1U] = vlSelf->__VdfgTmp_h7d087c26__0[1U];
    __Vtemp_h9848fa85__0[2U] = (0x10000000U | vlSelf->__VdfgTmp_h7d087c26__0[2U]);
    __Vtemp_h9848fa85__0[3U] = 0U;
    __Vtemp_h9848fa85__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h9848fa85__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h9848fa85__0[6U] = (0x400000U | ((0x200000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 8U)));
    __Vtemp_h9848fa85__0[7U] = 0U;
    __Vtemp_h9848fa85__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_h9848fa85__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h9848fa85__0[0xaU] = (0x10000U | ((0x8000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                  << 0xfU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xeU)));
    __Vtemp_h9848fa85__0[0xbU] = 0U;
    __Vtemp_h9848fa85__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 0xaU));
    __Vtemp_h9848fa85__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xcU));
    __Vtemp_h9848fa85__0[0xeU] = (0x400U | ((0x200U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                << 9U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x14U)));
    __Vtemp_h9848fa85__0[0xfU] = 0U;
    __Vtemp_h9848fa85__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h9848fa85__0[0x11U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_h9848fa85__0[0x12U] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    __Vtemp_h9848fa85__0[0x13U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h9848fa85__0[0x14U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod);
    __Vtemp_h9848fa85__0[0x15U] = (0x40000000U | ((0x20000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x1dU)) 
                                                  | (IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                             >> 0x20U))));
    __Vtemp_h9848fa85__0[0x16U] = 0U;
    __Vtemp_h9848fa85__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg) 
                                                 << 0x18U));
    __Vtemp_h9848fa85__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    >> 6U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_h9848fa85__0[0x19U] = (0x1000000U | ((0x800000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 6U)));
    __Vtemp_h9848fa85__0[0x1aU] = 0U;
    bufp->fullWData(oldp+298,(__Vtemp_h9848fa85__0),840);
    __Vtemp_ha68b30cd__0[0U] = vlSelf->__VdfgTmp_h7d087c26__0[0U];
    __Vtemp_ha68b30cd__0[1U] = vlSelf->__VdfgTmp_h7d087c26__0[1U];
    __Vtemp_ha68b30cd__0[2U] = (0x10000000U | vlSelf->__VdfgTmp_h7d087c26__0[2U]);
    __Vtemp_ha68b30cd__0[3U] = 0U;
    __Vtemp_ha68b30cd__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_ha68b30cd__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_ha68b30cd__0[6U] = (0x400000U | ((0x200000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 8U)));
    __Vtemp_ha68b30cd__0[7U] = 0U;
    __Vtemp_ha68b30cd__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_ha68b30cd__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_ha68b30cd__0[0xaU] = (0x10000U | ((0x8000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                  << 0xfU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xeU)));
    __Vtemp_ha68b30cd__0[0xbU] = 0U;
    bufp->fullWData(oldp+325,(__Vtemp_ha68b30cd__0),360);
    __Vtemp_h9ca90697__0[0U] = vlSelf->__VdfgTmp_h4c832caa__0[0U];
    __Vtemp_h9ca90697__0[1U] = vlSelf->__VdfgTmp_h4c832caa__0[1U];
    __Vtemp_h9ca90697__0[2U] = vlSelf->__VdfgTmp_h4c832caa__0[2U];
    __Vtemp_h9ca90697__0[3U] = (4U | vlSelf->__VdfgTmp_h4c832caa__0[3U]);
    __Vtemp_h9ca90697__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                 << 0x1eU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                              << 0x1cU));
    __Vtemp_h9ca90697__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                 >> 2U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    __Vtemp_h9ca90697__0[6U] = (0x10000000U | ((0x8000000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                   << 0x1bU)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 2U)));
    __Vtemp_h9ca90697__0[7U] = 0U;
    __Vtemp_h9ca90697__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h9ca90697__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h9ca90697__0[0xaU] = (0x400000U | ((0x200000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                   << 0x15U)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 8U)));
    __Vtemp_h9ca90697__0[0xbU] = 0U;
    __Vtemp_h9ca90697__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                   << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg) 
                                                << 0x10U));
    __Vtemp_h9ca90697__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                   >> 0xeU) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x12U));
    __Vtemp_h9ca90697__0[0xeU] = (0x10000U | ((0x8000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                  << 0xfU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xeU)));
    bufp->fullWData(oldp+337,(__Vtemp_h9ca90697__0),480);
    __Vtemp_h6f6fccf3__0[0U] = vlSelf->__VdfgTmp_h01e20962__0[0U];
    __Vtemp_h6f6fccf3__0[1U] = vlSelf->__VdfgTmp_h01e20962__0[1U];
    __Vtemp_h6f6fccf3__0[2U] = vlSelf->__VdfgTmp_h01e20962__0[2U];
    __Vtemp_h6f6fccf3__0[3U] = (0x400U | vlSelf->__VdfgTmp_h01e20962__0[3U]);
    __Vtemp_h6f6fccf3__0[4U] = 0U;
    __Vtemp_h6f6fccf3__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                 << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                           << 4U));
    __Vtemp_h6f6fccf3__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                 >> 0x1aU) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h6f6fccf3__0[7U] = (0x10U | ((8U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                << 3U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1aU)));
    __Vtemp_h6f6fccf3__0[8U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                << 0x1eU);
    __Vtemp_h6f6fccf3__0[9U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod);
    __Vtemp_h6f6fccf3__0[0xaU] = (0x40000000U | ((0x20000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                     << 0x1dU)) 
                                                 | (IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                            >> 0x20U))));
    __Vtemp_h6f6fccf3__0[0xbU] = 0U;
    __Vtemp_h6f6fccf3__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                   << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg) 
                                                << 0x18U));
    __Vtemp_h6f6fccf3__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                   >> 6U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1aU));
    __Vtemp_h6f6fccf3__0[0xeU] = (0x1000000U | ((0x800000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                    << 0x17U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    __Vtemp_h6f6fccf3__0[0xfU] = 0U;
    __Vtemp_h6f6fccf3__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h6f6fccf3__0[0x11U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h6f6fccf3__0[0x12U] = (0x40000U | ((0x20000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp_h6f6fccf3__0[0x13U] = 0U;
    __Vtemp_h6f6fccf3__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h6f6fccf3__0[0x15U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_h6f6fccf3__0[0x16U] = (0x1000U | ((0x800U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                                  << 0xbU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x12U)));
    __Vtemp_h6f6fccf3__0[0x17U] = 0U;
    __Vtemp_h6f6fccf3__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                                              << 6U));
    __Vtemp_h6f6fccf3__0[0x19U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h6f6fccf3__0[0x1aU] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_h6f6fccf3__0[0x1bU] = 0U;
    __Vtemp_h6f6fccf3__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg));
    __Vtemp_h6f6fccf3__0[0x1dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U));
    bufp->fullWData(oldp+352,(__Vtemp_h6f6fccf3__0),960);
    __Vtemp_ha1884543__0[0U] = vlSelf->__VdfgTmp_h01e20962__0[0U];
    __Vtemp_ha1884543__0[1U] = vlSelf->__VdfgTmp_h01e20962__0[1U];
    __Vtemp_ha1884543__0[2U] = vlSelf->__VdfgTmp_h01e20962__0[2U];
    __Vtemp_ha1884543__0[3U] = (0x400U | vlSelf->__VdfgTmp_h01e20962__0[3U]);
    __Vtemp_ha1884543__0[4U] = 0U;
    __Vtemp_ha1884543__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                 << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                           << 4U));
    __Vtemp_ha1884543__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                 >> 0x1aU) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_ha1884543__0[7U] = (0x10U | ((8U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                << 3U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1aU)));
    __Vtemp_ha1884543__0[8U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                << 0x1eU);
    __Vtemp_ha1884543__0[9U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod);
    __Vtemp_ha1884543__0[0xaU] = (0x40000000U | ((0x20000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                     << 0x1dU)) 
                                                 | (IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                            >> 0x20U))));
    __Vtemp_ha1884543__0[0xbU] = 0U;
    __Vtemp_ha1884543__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                   << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg) 
                                                << 0x18U));
    __Vtemp_ha1884543__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                   >> 6U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1aU));
    __Vtemp_ha1884543__0[0xeU] = (0x1000000U | ((0x800000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                    << 0x17U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    bufp->fullWData(oldp+382,(__Vtemp_ha1884543__0),480);
    __Vtemp_he8aff485__0[0U] = vlSelf->__VdfgTmp_h8ec4a9af__0[0U];
    __Vtemp_he8aff485__0[1U] = vlSelf->__VdfgTmp_h8ec4a9af__0[1U];
    __Vtemp_he8aff485__0[2U] = vlSelf->__VdfgTmp_h8ec4a9af__0[2U];
    __Vtemp_he8aff485__0[3U] = (0x40000U | vlSelf->__VdfgTmp_h8ec4a9af__0[3U]);
    __Vtemp_he8aff485__0[4U] = 0U;
    __Vtemp_he8aff485__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                 << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    __Vtemp_he8aff485__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                 >> 0x12U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0xeU));
    __Vtemp_he8aff485__0[7U] = (0x1000U | ((0x800U 
                                            & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                               << 0xbU)) 
                                           | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    __Vtemp_he8aff485__0[8U] = 0U;
    __Vtemp_he8aff485__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_he8aff485__0[0xaU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                   >> 0x18U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_he8aff485__0[0xbU] = (0x40U | ((0x20U & 
                                            ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                             << 5U)) 
                                           | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp_he8aff485__0[0xcU] = 0U;
    __Vtemp_he8aff485__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
                                   << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg));
    __Vtemp_he8aff485__0[0xeU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
                                   >> 0x1eU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 2U));
    bufp->fullWData(oldp+397,(__Vtemp_he8aff485__0),480);
    __Vtemp_hae13c366__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                         << 0x3cU) 
                                        | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1));
    __Vtemp_hae13c366__0[1U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                        << 0x3cU) 
                                                       | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1) 
                                                      >> 0x20U)));
    __Vtemp_hae13c366__0[2U] = (0x40000000U | (0x3fffffffU 
                                               & ((0x20000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                      << 0x1dU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                                     >> 2U))));
    __Vtemp_hae13c366__0[3U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_hae13c366__0[4U] = (0x10000000U | (0xfffffffU 
                                               & ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                     >> 4U))));
    __Vtemp_hae13c366__0[5U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_hae13c366__0[6U] = (0x4000000U | (0x3ffffffU 
                                              & ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                    >> 6U))));
    __Vtemp_hae13c366__0[7U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_hae13c366__0[8U] = (0x1000000U | (0xffffffU 
                                              & ((0x800000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                    >> 8U))));
    __Vtemp_hae13c366__0[9U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x14U));
    __Vtemp_hae13c366__0[0xaU] = (0x400000U | (0x3fffffU 
                                               & ((0x200000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                      << 0x15U)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                     >> 0xaU))));
    __Vtemp_hae13c366__0[0xbU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_hae13c366__0[0xcU] = (0x100000U | (0xfffffU 
                                               & ((0x80000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                      << 0x13U)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                     >> 0xcU))));
    __Vtemp_hae13c366__0[0xdU] = 0U;
    bufp->fullWData(oldp+412,(__Vtemp_hae13c366__0),420);
    __Vtemp_h9520066a__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                         << 0x3cU) 
                                        | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1));
    __Vtemp_h9520066a__0[1U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                        << 0x3cU) 
                                                       | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1) 
                                                      >> 0x20U)));
    __Vtemp_h9520066a__0[2U] = (0x40000000U | (0x3fffffffU 
                                               & ((0x20000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                      << 0x1dU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                                     >> 2U))));
    __Vtemp_h9520066a__0[3U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_h9520066a__0[4U] = (0x10000000U | (0xfffffffU 
                                               & ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                     >> 4U))));
    __Vtemp_h9520066a__0[5U] = 0U;
    bufp->fullWData(oldp+426,(__Vtemp_h9520066a__0),180);
    __Vtemp_h827858a1__0[0U] = (IData)(vlSelf->__VdfgTmp_ha92d35ff__0);
    __Vtemp_h827858a1__0[1U] = (0x40U | (IData)((vlSelf->__VdfgTmp_ha92d35ff__0 
                                                 >> 0x20U)));
    __Vtemp_h827858a1__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                           << 2U));
    __Vtemp_h827858a1__0[3U] = (0x10U | (0xfU & ((8U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                     << 3U)) 
                                                 | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                    >> 0x1cU))));
    __Vtemp_h827858a1__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h827858a1__0[5U] = (4U | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                       << 0x1eU) | 
                                      (3U & ((2U & 
                                              ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                               << 1U)) 
                                             | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                >> 0x1eU)))));
    __Vtemp_h827858a1__0[6U] = (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                 << 0x1fU) | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod);
    __Vtemp_h827858a1__0[7U] = 1U;
    bufp->fullWData(oldp+432,(__Vtemp_h827858a1__0),240);
    __Vtemp_hbcb0fb76__0[0U] = (IData)(vlSelf->__VdfgTmp_hf293b01d__0);
    __Vtemp_hbcb0fb76__0[1U] = (0x4000U | (IData)((vlSelf->__VdfgTmp_hf293b01d__0 
                                                   >> 0x20U)));
    __Vtemp_hbcb0fb76__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                 << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                             << 0xaU));
    __Vtemp_hbcb0fb76__0[3U] = (0x1000U | (0xfffU & 
                                           ((0x800U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                << 0xbU)) 
                                            | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                               >> 0x14U))));
    __Vtemp_hbcb0fb76__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_hbcb0fb76__0[5U] = (0x400U | (0x3ffU & 
                                          ((0x200U 
                                            & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                               << 9U)) 
                                           | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                              >> 0x16U))));
    __Vtemp_hbcb0fb76__0[6U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_hbcb0fb76__0[7U] = (0x100U | (0xffU & (
                                                   (0x80U 
                                                    & ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                       << 7U)) 
                                                   | (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x18U))));
    bufp->fullWData(oldp+440,(__Vtemp_hbcb0fb76__0),240);
    bufp->fullCData(oldp+448,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp),8);
    bufp->fullIData(oldp+449,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),28);
    bufp->fullIData(oldp+450,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+451,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),30);
    bufp->fullQData(oldp+452,((0xfffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                   >> 0x1eU))))),60);
    bufp->fullCData(oldp+454,((7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                      << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1fU)))),3);
    bufp->fullBit(oldp+455,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+456,(((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                            << 1U) 
                                           | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                              >> 0x1fU)))) 
                             | ((~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                    | ((3U == (7U & 
                                               ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                 << 1U) 
                                                | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU)))) 
                                       | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))) 
                                & (7U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                 << 1U) 
                                                | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU))))))));
    bufp->fullBit(oldp+457,(((0U != (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                            << 1U) 
                                           | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                              >> 0x1fU)))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+458,(((~ ((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                << 1U) 
                                               | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                  >> 0x1fU)))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+459,((6U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                     >> 0x1dU))),3);
    bufp->fullBit(oldp+460,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+461,((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+462,(((0U != (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                     >> 0x1eU)) & (
                                                   (1U 
                                                    == 
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                     >> 0x1eU)) 
                                                   | ((2U 
                                                       != 
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)) 
                                                      & (3U 
                                                         == 
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                          >> 0x1eU)))))));
    bufp->fullBit(oldp+463,(((IData)(vlSelf->__VdfgTmp_h17e26bb5__0) 
                             & (2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                       >> 0x1eU)))));
    bufp->fullCData(oldp+464,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+465,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x17U))) 
                                 | ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 0x17U))) 
                                    | ((2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))) 
                                       | (3U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x17U))))))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0))));
    bufp->fullBit(oldp+466,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x17U))) 
                             | (IData)(((0x3800000U 
                                         == (0x3800000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x17U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+467,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x17U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+468,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x17U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+469,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+470,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+471,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 1U))) 
                             | (IData)(((0xeU == (0xeU 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 1U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+472,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 1U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+473,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 1U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+474,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x13U))),3);
    bufp->fullBit(oldp+475,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+476,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x13U))) 
                             | (IData)(((0x380000U 
                                         == (0x380000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+477,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x13U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+478,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x13U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+479,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x15U))),3);
    bufp->fullBit(oldp+480,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+481,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x15U))) 
                             | (IData)(((0xe00000U 
                                         == (0xe00000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+482,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x15U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+483,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x15U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+484,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+485,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+486,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x17U))) 
                             | (IData)(((0x3800000U 
                                         == (0x3800000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x17U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+487,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x17U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+488,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x17U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+489,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+490,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+491,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x19U))) 
                             | (IData)(((0xe000000U 
                                         == (0xe000000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+492,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x19U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+493,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x19U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+494,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x1bU))),3);
    bufp->fullBit(oldp+495,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+496,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x1bU))) 
                             | (IData)(((0x38000000U 
                                         == (0x38000000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+497,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x1bU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+498,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x1bU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+499,((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                               >> 0x1dU)),3);
    bufp->fullBit(oldp+500,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+501,(((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x1dU)) | (
                                                   (~ 
                                                    ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                                     | ((3U 
                                                         == 
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                          >> 0x1dU)) 
                                                        | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))) 
                                                   & (7U 
                                                      == 
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                       >> 0x1dU))))));
    bufp->fullBit(oldp+502,(((0U != (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x1dU)) & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                                   | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+503,(((~ ((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                         >> 0x1dU)) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+504,((7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                      << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1fU)))),3);
    bufp->fullBit(oldp+505,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+506,(((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                            << 1U) 
                                           | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              >> 0x1fU)))) 
                             | ((~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                    | ((3U == (7U & 
                                               ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                 << 1U) 
                                                | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU)))) 
                                       | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))) 
                                & (7U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                 << 1U) 
                                                | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU))))))));
    bufp->fullBit(oldp+507,(((0U != (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                            << 1U) 
                                           | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              >> 0x1fU)))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+508,(((~ ((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                << 1U) 
                                               | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1fU)))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+509,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+510,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+511,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 1U))) 
                             | (IData)(((0xeU == (0xeU 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 1U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+512,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 1U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+513,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 1U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+514,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 3U))),3);
    bufp->fullBit(oldp+515,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+516,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 3U))) 
                             | (IData)(((0x38U == (0x38U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 3U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+517,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 3U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+518,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 3U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+519,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+520,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+521,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 5U))) 
                             | (IData)(((0xe0U == (0xe0U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 5U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+522,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 5U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+523,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 5U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+524,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 3U))),3);
    bufp->fullBit(oldp+525,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+526,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 3U))) 
                             | (IData)(((0x38U == (0x38U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 3U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+527,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 3U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+528,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 3U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+529,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 7U))),3);
    bufp->fullBit(oldp+530,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+531,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 7U))) 
                             | (IData)(((0x380U == 
                                         (0x380U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 7U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+532,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 7U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+533,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 7U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+534,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 9U))),3);
    bufp->fullBit(oldp+535,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+536,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 9U))) 
                             | (IData)(((0xe00U == 
                                         (0xe00U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 9U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+537,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 9U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+538,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 9U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+539,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+540,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+541,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xbU))) 
                             | (IData)(((0x3800U == 
                                         (0x3800U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+542,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xbU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+543,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+544,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0xdU))),3);
    bufp->fullBit(oldp+545,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+546,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xdU))) 
                             | (IData)(((0xe000U == 
                                         (0xe000U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+547,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xdU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+548,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+549,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0xfU))),3);
    bufp->fullBit(oldp+550,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+551,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xfU))) 
                             | (IData)(((0x38000U == 
                                         (0x38000U 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+552,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xfU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+553,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+554,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x11U))),3);
    bufp->fullBit(oldp+555,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+556,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x11U))) 
                             | (IData)(((0xe0000U == 
                                         (0xe0000U 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+557,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x11U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+558,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x11U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+559,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x13U))),3);
    bufp->fullBit(oldp+560,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+561,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x13U))) 
                             | (IData)(((0x380000U 
                                         == (0x380000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x13U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+562,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x13U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+563,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x13U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+564,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x15U))),3);
    bufp->fullBit(oldp+565,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+566,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x15U))) 
                             | (IData)(((0xe00000U 
                                         == (0xe00000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x15U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+567,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x15U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+568,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x15U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+569,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+570,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+571,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 5U))) 
                             | (IData)(((0xe0U == (0xe0U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 5U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+572,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 5U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+573,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 5U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+574,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 7U))),3);
    bufp->fullBit(oldp+575,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+576,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 7U))) 
                             | (IData)(((0x380U == 
                                         (0x380U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 7U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+577,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 7U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+578,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 7U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+579,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 9U))),3);
    bufp->fullBit(oldp+580,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+581,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 9U))) 
                             | (IData)(((0xe00U == 
                                         (0xe00U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 9U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+582,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 9U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+583,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 9U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+584,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+585,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+586,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xbU))) 
                             | (IData)(((0x3800U == 
                                         (0x3800U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+587,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xbU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+588,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+589,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0xdU))),3);
    bufp->fullBit(oldp+590,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+591,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xdU))) 
                             | (IData)(((0xe000U == 
                                         (0xe000U & 
                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+592,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xdU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+593,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+594,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0xfU))),3);
    bufp->fullBit(oldp+595,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+596,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xfU))) 
                             | (IData)(((0x38000U == 
                                         (0x38000U 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+597,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xfU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+598,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+599,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x11U))),3);
    bufp->fullBit(oldp+600,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+601,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x11U))) 
                             | (IData)(((0xe0000U == 
                                         (0xe0000U 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U))) 
                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0)))))))));
    bufp->fullBit(oldp+602,(((0U != (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x11U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+603,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x11U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullQData(oldp+604,((0xfffffffffffffffULL 
                               & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))),60);
    bufp->fullWData(oldp+606,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full),90);
    bufp->fullWData(oldp+609,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full),90);
    bufp->fullWData(oldp+612,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full),90);
    bufp->fullCData(oldp+615,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 3U))),3);
    bufp->fullBit(oldp+616,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+617,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 3U))) 
                             | (IData)(((0x38U == (0x38U 
                                                   & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 3U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 3U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+618,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 3U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+619,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 3U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+620,((6U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 1U))),3);
    bufp->fullBit(oldp+621,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+622,((0U == (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 2U)))));
    bufp->fullBit(oldp+623,(((0U != (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 2U))) 
                             & ((1U == (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                              >> 2U))) 
                                | (IData)(((0xcU == 
                                            (0xcU & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                           & (2U != 
                                              (3U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 2U)))))))));
    bufp->fullBit(oldp+624,(((IData)(vlSelf->__VdfgTmp_h17e4e3f4__0) 
                             & (8U == (0xcU & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))));
    bufp->fullCData(oldp+625,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 5U))),3);
    bufp->fullBit(oldp+626,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+627,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 5U))) 
                             | (IData)(((0xe0U == (0xe0U 
                                                   & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 5U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 5U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+628,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 5U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+629,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 5U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+630,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+631,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+632,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x17U))) 
                             | (IData)(((0x3800000U 
                                         == (0x3800000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x17U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0x17U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+633,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x17U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+634,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x17U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+635,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+636,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+637,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x19U))) 
                             | (IData)(((0xe000000U 
                                         == (0xe000000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x19U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0x19U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+638,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x19U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+639,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x19U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+640,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code),3);
    bufp->fullBit(oldp+641,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+642,(((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                             | ((~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                    | ((3U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                                       | ((4U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                                          | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))) 
                                & (7U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code))))));
    bufp->fullBit(oldp+643,(((0U != (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+644,(((~ ((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+645,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 7U))),3);
    bufp->fullBit(oldp+646,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+647,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 7U))) 
                             | (IData)(((0x380U == 
                                         (0x380U & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 7U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 7U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+648,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 7U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+649,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 7U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+650,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 9U))),3);
    bufp->fullBit(oldp+651,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+652,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 9U))) 
                             | (IData)(((0xe00U == 
                                         (0xe00U & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 9U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 9U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+653,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 9U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+654,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 9U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+655,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+656,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+657,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xbU))) 
                             | (IData)(((0x3800U == 
                                         (0x3800U & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0xbU))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0xbU))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+658,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xbU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+659,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xbU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+660,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0xdU))),3);
    bufp->fullBit(oldp+661,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+662,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xdU))) 
                             | (IData)(((0xe000U == 
                                         (0xe000U & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0xdU))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0xdU))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+663,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xdU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+664,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xdU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+665,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0xfU))),3);
    bufp->fullBit(oldp+666,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+667,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xfU))) 
                             | (IData)(((0x38000U == 
                                         (0x38000U 
                                          & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0xfU))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0xfU))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+668,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xfU))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+669,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xfU))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+670,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x11U))),3);
    bufp->fullBit(oldp+671,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+672,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x11U))) 
                             | (IData)(((0xe0000U == 
                                         (0xe0000U 
                                          & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x11U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0x11U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+673,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x11U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+674,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x11U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+675,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x13U))),3);
    bufp->fullBit(oldp+676,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+677,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x13U))) 
                             | (IData)(((0x380000U 
                                         == (0x380000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x13U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0x13U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+678,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x13U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+679,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x13U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+680,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x15U))),3);
    bufp->fullBit(oldp+681,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+682,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x15U))) 
                             | (IData)(((0xe00000U 
                                         == (0xe00000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                        & (~ ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x15U))) 
                                                 | ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                         >> 0x15U))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))))))));
    bufp->fullBit(oldp+683,(((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x15U))) 
                             & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))));
    bufp->fullBit(oldp+684,(((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x15U))) 
                                 | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))));
    bufp->fullCData(oldp+685,((0x1fU & ((IData)(1U) 
                                        + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullCData(oldp+686,((0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+687,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+692,((0x1fU & ((IData)(1U) 
                                        + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullCData(oldp+693,((0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+694,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+699,(((0x1ffffffeU & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                                        >> 0x22U)) 
                                               << 1U)) 
                               | (0U != (0x1ffffffffULL 
                                         & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))),29);
    bufp->fullCData(oldp+700,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+701,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+713,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o),62);
    bufp->fullIData(oldp+715,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align),30);
    bufp->fullIData(oldp+716,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align),30);
    bufp->fullBit(oldp+717,(vlSelf->PvuTop__DOT__add__DOT__io_overflow));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow) 
                             & (0U != (0x3fffffffU 
                                       & vlSelf->PvuTop__DOT__add__DOT__sum)))));
    bufp->fullIData(oldp+719,(vlSelf->PvuTop__DOT__add__DOT__sum),31);
    bufp->fullBit(oldp+720,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
    __Vtemp_h0c0bf393__0[0U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])));
    __Vtemp_h0c0bf393__0[1U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])));
    __Vtemp_h0c0bf393__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])));
    __Vtemp_hc6f8af93__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])))));
    __Vtemp_hc6f8af93__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])))));
    __Vtemp_hc6f8af93__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])))));
    VL_ADD_W(3, __Vtemp_ha021ce85__0, __Vtemp_h0c0bf393__0, __Vtemp_hc6f8af93__0);
    bufp->fullQData(oldp+721,((0xfffffffffffffffULL 
                               & (((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & __Vtemp_ha021ce85__0[2U]))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 __Vtemp_ha021ce85__0[1U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_ha021ce85__0[0U])) 
                                                   >> 0x1eU))))),62);
    __Vtemp_hec931e38__0[0U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])));
    __Vtemp_hec931e38__0[1U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])));
    __Vtemp_hec931e38__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])));
    __Vtemp_h36519e28__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])))));
    __Vtemp_h36519e28__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])))));
    __Vtemp_h36519e28__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])))));
    VL_ADD_W(3, __Vtemp_h14515862__0, __Vtemp_hec931e38__0, __Vtemp_h36519e28__0);
    bufp->fullQData(oldp+723,((0xfffffffffffffffULL 
                               & (((QData)((IData)(
                                                   (0x3ffffffU 
                                                    & __Vtemp_h14515862__0[2U]))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 __Vtemp_h14515862__0[1U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_h14515862__0[0U])) 
                                                   >> 0x1eU))))),60);
    __Vtemp_he287537c__0[0U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])));
    __Vtemp_he287537c__0[1U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])));
    __Vtemp_he287537c__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])));
    __Vtemp_he287537c__0[3U] = (0xffffffU & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                             ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
                                                ^ (
                                                   vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
                                                   ^ 
                                                   vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U]))));
    bufp->fullWData(oldp+725,(__Vtemp_he287537c__0),120);
    __Vtemp_hc427fdde__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])))));
    __Vtemp_hc427fdde__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])))));
    __Vtemp_hc427fdde__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])))));
    __Vtemp_hc427fdde__0[3U] = (0xffffffU & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U]) 
                                             | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U]) 
                                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
                                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U]) 
                                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U]) 
                                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                                          | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U]) 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U]))))));
    bufp->fullWData(oldp+729,(__Vtemp_hc427fdde__0),120);
    bufp->fullWData(oldp+733,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods),3600);
    __Vtemp_heb380a01__0[0U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])));
    __Vtemp_heb380a01__0[1U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])));
    __Vtemp_heb380a01__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])));
    __Vtemp_heb380a01__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U])));
    bufp->fullWData(oldp+846,(__Vtemp_heb380a01__0),125);
    __Vtemp_h2082a094__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])))));
    __Vtemp_h2082a094__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])))));
    __Vtemp_h2082a094__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])))));
    __Vtemp_h2082a094__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U])))));
    bufp->fullWData(oldp+850,(__Vtemp_h2082a094__0),125);
    __Vtemp_hb9925c6b__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U];
    __Vtemp_hb9925c6b__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U];
    __Vtemp_hb9925c6b__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U];
    __Vtemp_hb9925c6b__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                 << 0x1dU) | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U]);
    __Vtemp_hb9925c6b__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                 >> 3U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                           << 0x1dU));
    __Vtemp_hb9925c6b__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                 >> 3U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                           << 0x1dU));
    __Vtemp_hb9925c6b__0[6U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                 >> 3U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
                                           << 0x1dU));
    __Vtemp_hb9925c6b__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                 << 0x1aU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
                                              >> 3U));
    __Vtemp_hb9925c6b__0[8U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                 >> 6U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                           << 0x1aU));
    __Vtemp_hb9925c6b__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                 >> 6U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                           << 0x1aU));
    __Vtemp_hb9925c6b__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                   >> 6U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
                                             << 0x1aU));
    __Vtemp_hb9925c6b__0[0xbU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U] 
                                   << 0x17U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
                                                >> 6U));
    __Vtemp_hb9925c6b__0[0xcU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U] 
                                   >> 9U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U] 
                                             << 0x17U));
    __Vtemp_hb9925c6b__0[0xdU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U] 
                                   >> 9U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U] 
                                             << 0x17U));
    __Vtemp_hb9925c6b__0[0xeU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U] 
                                   >> 9U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U] 
                                             << 0x17U));
    __Vtemp_hb9925c6b__0[0xfU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U] 
                                  >> 9U);
    bufp->fullWData(oldp+854,(__Vtemp_hb9925c6b__0),500);
    bufp->fullWData(oldp+870,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),124);
    bufp->fullWData(oldp+874,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),124);
    __Vtemp_haa669efa__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U];
    __Vtemp_haa669efa__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U];
    __Vtemp_haa669efa__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U];
    __Vtemp_haa669efa__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
                                 << 0x1cU) | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U]);
    __Vtemp_haa669efa__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
                                 >> 4U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
                                           << 0x1cU));
    __Vtemp_haa669efa__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
                                 >> 4U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
                                           << 0x1cU));
    __Vtemp_haa669efa__0[6U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
                                 >> 4U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
                                           << 0x1cU));
    __Vtemp_haa669efa__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                                 << 0x18U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
                                              >> 4U));
    __Vtemp_haa669efa__0[8U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                                 >> 8U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                                           << 0x18U));
    __Vtemp_haa669efa__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                                 >> 8U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                                           << 0x18U));
    __Vtemp_haa669efa__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                                   >> 8U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                                             << 0x18U));
    __Vtemp_haa669efa__0[0xbU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
                                   << 0x14U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                                                >> 8U));
    __Vtemp_haa669efa__0[0xcU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
                                   >> 0xcU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
                                               << 0x14U));
    __Vtemp_haa669efa__0[0xdU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
                                   >> 0xcU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
                                               << 0x14U));
    __Vtemp_haa669efa__0[0xeU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
                                   >> 0xcU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
                                               << 0x14U));
    __Vtemp_haa669efa__0[0xfU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
                                  >> 0xcU);
    bufp->fullWData(oldp+878,(__Vtemp_haa669efa__0),496);
    bufp->fullWData(oldp+894,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o),123);
    bufp->fullWData(oldp+898,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o),123);
    __Vtemp_he4a44391__0[0U] = vlSelf->__VdfgTmp_h650924d4__0[0U];
    __Vtemp_he4a44391__0[1U] = vlSelf->__VdfgTmp_h650924d4__0[1U];
    __Vtemp_he4a44391__0[2U] = vlSelf->__VdfgTmp_h650924d4__0[2U];
    __Vtemp_he4a44391__0[3U] = ((vlSelf->__VdfgTmp_h0264415d__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h650924d4__0[3U]);
    __Vtemp_he4a44391__0[4U] = ((vlSelf->__VdfgTmp_h0264415d__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h0264415d__0[1U] 
                                           << 0x1bU));
    __Vtemp_he4a44391__0[5U] = ((vlSelf->__VdfgTmp_h0264415d__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h0264415d__0[2U] 
                                           << 0x1bU));
    __Vtemp_he4a44391__0[6U] = ((vlSelf->__VdfgTmp_h0264415d__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h0264415d__0[3U] 
                                           << 0x1bU));
    __Vtemp_he4a44391__0[7U] = ((vlSelf->__VdfgTmp_h97082784__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_h0264415d__0[3U] 
                                              >> 5U));
    __Vtemp_he4a44391__0[8U] = ((vlSelf->__VdfgTmp_h97082784__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_h97082784__0[1U] 
                                             << 0x16U));
    __Vtemp_he4a44391__0[9U] = ((vlSelf->__VdfgTmp_h97082784__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_h97082784__0[2U] 
                                             << 0x16U));
    __Vtemp_he4a44391__0[0xaU] = ((vlSelf->__VdfgTmp_h97082784__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_h97082784__0[3U] 
                                               << 0x16U));
    __Vtemp_he4a44391__0[0xbU] = ((vlSelf->__VdfgTmp_h043f4b57__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_h97082784__0[3U] 
                                                >> 0xaU));
    __Vtemp_he4a44391__0[0xcU] = ((vlSelf->__VdfgTmp_h043f4b57__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h043f4b57__0[1U] 
                                               << 0x11U));
    __Vtemp_he4a44391__0[0xdU] = ((vlSelf->__VdfgTmp_h043f4b57__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h043f4b57__0[2U] 
                                               << 0x11U));
    __Vtemp_he4a44391__0[0xeU] = ((vlSelf->__VdfgTmp_h043f4b57__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h043f4b57__0[3U] 
                                               << 0x11U));
    __Vtemp_he4a44391__0[0xfU] = (vlSelf->__VdfgTmp_h043f4b57__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+902,(__Vtemp_he4a44391__0),492);
    __Vtemp_h2fbbaec0__1[0U] = vlSelf->__VdfgTmp_h650924d4__0[0U];
    __Vtemp_h2fbbaec0__1[1U] = vlSelf->__VdfgTmp_h650924d4__0[1U];
    __Vtemp_h2fbbaec0__1[2U] = vlSelf->__VdfgTmp_h650924d4__0[2U];
    __Vtemp_h2fbbaec0__1[3U] = vlSelf->__VdfgTmp_h650924d4__0[3U];
    bufp->fullWData(oldp+918,(__Vtemp_h2fbbaec0__1),122);
    __Vtemp_hee6c1f23__1[0U] = vlSelf->__VdfgTmp_h0264415d__0[0U];
    __Vtemp_hee6c1f23__1[1U] = vlSelf->__VdfgTmp_h0264415d__0[1U];
    __Vtemp_hee6c1f23__1[2U] = vlSelf->__VdfgTmp_h0264415d__0[2U];
    __Vtemp_hee6c1f23__1[3U] = vlSelf->__VdfgTmp_h0264415d__0[3U];
    bufp->fullWData(oldp+922,(__Vtemp_hee6c1f23__1),122);
    __Vtemp_h7f3192a4__1[0U] = vlSelf->__VdfgTmp_h97082784__0[0U];
    __Vtemp_h7f3192a4__1[1U] = vlSelf->__VdfgTmp_h97082784__0[1U];
    __Vtemp_h7f3192a4__1[2U] = vlSelf->__VdfgTmp_h97082784__0[2U];
    __Vtemp_h7f3192a4__1[3U] = vlSelf->__VdfgTmp_h97082784__0[3U];
    bufp->fullWData(oldp+926,(__Vtemp_h7f3192a4__1),122);
    __Vtemp_ha5392714__1[0U] = vlSelf->__VdfgTmp_h043f4b57__0[0U];
    __Vtemp_ha5392714__1[1U] = vlSelf->__VdfgTmp_h043f4b57__0[1U];
    __Vtemp_ha5392714__1[2U] = vlSelf->__VdfgTmp_h043f4b57__0[2U];
    __Vtemp_ha5392714__1[3U] = vlSelf->__VdfgTmp_h043f4b57__0[3U];
    bufp->fullWData(oldp+930,(__Vtemp_ha5392714__1),122);
    bufp->fullWData(oldp+934,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o),123);
    bufp->fullWData(oldp+938,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o),123);
    __Vtemp_h6bc9911c__0[0U] = vlSelf->__VdfgTmp_h3fe54950__0[0U];
    __Vtemp_h6bc9911c__0[1U] = vlSelf->__VdfgTmp_h3fe54950__0[1U];
    __Vtemp_h6bc9911c__0[2U] = vlSelf->__VdfgTmp_h3fe54950__0[2U];
    __Vtemp_h6bc9911c__0[3U] = ((vlSelf->__VdfgTmp_h2f7d037a__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h3fe54950__0[3U]);
    __Vtemp_h6bc9911c__0[4U] = ((vlSelf->__VdfgTmp_h2f7d037a__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h2f7d037a__0[1U] 
                                           << 0x1bU));
    __Vtemp_h6bc9911c__0[5U] = ((vlSelf->__VdfgTmp_h2f7d037a__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h2f7d037a__0[2U] 
                                           << 0x1bU));
    __Vtemp_h6bc9911c__0[6U] = ((vlSelf->__VdfgTmp_h2f7d037a__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h2f7d037a__0[3U] 
                                           << 0x1bU));
    __Vtemp_h6bc9911c__0[7U] = ((vlSelf->__VdfgTmp_he49df3d2__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_h2f7d037a__0[3U] 
                                              >> 5U));
    __Vtemp_h6bc9911c__0[8U] = ((vlSelf->__VdfgTmp_he49df3d2__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_he49df3d2__0[1U] 
                                             << 0x16U));
    __Vtemp_h6bc9911c__0[9U] = ((vlSelf->__VdfgTmp_he49df3d2__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_he49df3d2__0[2U] 
                                             << 0x16U));
    __Vtemp_h6bc9911c__0[0xaU] = ((vlSelf->__VdfgTmp_he49df3d2__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_he49df3d2__0[3U] 
                                               << 0x16U));
    __Vtemp_h6bc9911c__0[0xbU] = ((vlSelf->__VdfgTmp_h502ef6cf__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_he49df3d2__0[3U] 
                                                >> 0xaU));
    __Vtemp_h6bc9911c__0[0xcU] = ((vlSelf->__VdfgTmp_h502ef6cf__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h502ef6cf__0[1U] 
                                               << 0x11U));
    __Vtemp_h6bc9911c__0[0xdU] = ((vlSelf->__VdfgTmp_h502ef6cf__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h502ef6cf__0[2U] 
                                               << 0x11U));
    __Vtemp_h6bc9911c__0[0xeU] = ((vlSelf->__VdfgTmp_h502ef6cf__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h502ef6cf__0[3U] 
                                               << 0x11U));
    __Vtemp_h6bc9911c__0[0xfU] = (vlSelf->__VdfgTmp_h502ef6cf__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+942,(__Vtemp_h6bc9911c__0),492);
    __Vtemp_hd6cbd594__1[0U] = vlSelf->__VdfgTmp_h3fe54950__0[0U];
    __Vtemp_hd6cbd594__1[1U] = vlSelf->__VdfgTmp_h3fe54950__0[1U];
    __Vtemp_hd6cbd594__1[2U] = vlSelf->__VdfgTmp_h3fe54950__0[2U];
    __Vtemp_hd6cbd594__1[3U] = vlSelf->__VdfgTmp_h3fe54950__0[3U];
    bufp->fullWData(oldp+958,(__Vtemp_hd6cbd594__1),122);
    __Vtemp_hfc9e0d89__1[0U] = vlSelf->__VdfgTmp_h2f7d037a__0[0U];
    __Vtemp_hfc9e0d89__1[1U] = vlSelf->__VdfgTmp_h2f7d037a__0[1U];
    __Vtemp_hfc9e0d89__1[2U] = vlSelf->__VdfgTmp_h2f7d037a__0[2U];
    __Vtemp_hfc9e0d89__1[3U] = vlSelf->__VdfgTmp_h2f7d037a__0[3U];
    bufp->fullWData(oldp+962,(__Vtemp_hfc9e0d89__1),122);
    __Vtemp_h0a19e709__1[0U] = vlSelf->__VdfgTmp_he49df3d2__0[0U];
    __Vtemp_h0a19e709__1[1U] = vlSelf->__VdfgTmp_he49df3d2__0[1U];
    __Vtemp_h0a19e709__1[2U] = vlSelf->__VdfgTmp_he49df3d2__0[2U];
    __Vtemp_h0a19e709__1[3U] = vlSelf->__VdfgTmp_he49df3d2__0[3U];
    bufp->fullWData(oldp+966,(__Vtemp_h0a19e709__1),122);
    __Vtemp_h12832ed2__1[0U] = vlSelf->__VdfgTmp_h502ef6cf__0[0U];
    __Vtemp_h12832ed2__1[1U] = vlSelf->__VdfgTmp_h502ef6cf__0[1U];
    __Vtemp_h12832ed2__1[2U] = vlSelf->__VdfgTmp_h502ef6cf__0[2U];
    __Vtemp_h12832ed2__1[3U] = vlSelf->__VdfgTmp_h502ef6cf__0[3U];
    bufp->fullWData(oldp+970,(__Vtemp_h12832ed2__1),122);
    bufp->fullWData(oldp+974,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),124);
    bufp->fullWData(oldp+978,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),124);
    __Vtemp_hfa618b5e__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U];
    __Vtemp_hfa618b5e__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U];
    __Vtemp_hfa618b5e__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U];
    __Vtemp_hfa618b5e__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
                                 << 0x1cU) | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U]);
    __Vtemp_hfa618b5e__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
                                 >> 4U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
                                           << 0x1cU));
    __Vtemp_hfa618b5e__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
                                 >> 4U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
                                           << 0x1cU));
    __Vtemp_hfa618b5e__0[6U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
                                 >> 4U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
                                           << 0x1cU));
    __Vtemp_hfa618b5e__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                                 << 0x18U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
                                              >> 4U));
    __Vtemp_hfa618b5e__0[8U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                                 >> 8U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                                           << 0x18U));
    __Vtemp_hfa618b5e__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                                 >> 8U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                                           << 0x18U));
    __Vtemp_hfa618b5e__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                                   >> 8U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                                             << 0x18U));
    __Vtemp_hfa618b5e__0[0xbU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
                                   << 0x14U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                                                >> 8U));
    __Vtemp_hfa618b5e__0[0xcU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
                                   >> 0xcU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
                                               << 0x14U));
    __Vtemp_hfa618b5e__0[0xdU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
                                   >> 0xcU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
                                               << 0x14U));
    __Vtemp_hfa618b5e__0[0xeU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
                                   >> 0xcU) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
                                               << 0x14U));
    __Vtemp_hfa618b5e__0[0xfU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
                                  >> 0xcU);
    bufp->fullWData(oldp+982,(__Vtemp_hfa618b5e__0),496);
    bufp->fullWData(oldp+998,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o),123);
    bufp->fullWData(oldp+1002,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o),123);
    __Vtemp_hca383fa4__0[0U] = vlSelf->__VdfgTmp_h6f28208e__0[0U];
    __Vtemp_hca383fa4__0[1U] = vlSelf->__VdfgTmp_h6f28208e__0[1U];
    __Vtemp_hca383fa4__0[2U] = vlSelf->__VdfgTmp_h6f28208e__0[2U];
    __Vtemp_hca383fa4__0[3U] = ((vlSelf->__VdfgTmp_h55fb8d4d__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h6f28208e__0[3U]);
    __Vtemp_hca383fa4__0[4U] = ((vlSelf->__VdfgTmp_h55fb8d4d__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h55fb8d4d__0[1U] 
                                           << 0x1bU));
    __Vtemp_hca383fa4__0[5U] = ((vlSelf->__VdfgTmp_h55fb8d4d__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h55fb8d4d__0[2U] 
                                           << 0x1bU));
    __Vtemp_hca383fa4__0[6U] = ((vlSelf->__VdfgTmp_h55fb8d4d__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h55fb8d4d__0[3U] 
                                           << 0x1bU));
    __Vtemp_hca383fa4__0[7U] = ((vlSelf->__VdfgTmp_hf34dff92__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_h55fb8d4d__0[3U] 
                                              >> 5U));
    __Vtemp_hca383fa4__0[8U] = ((vlSelf->__VdfgTmp_hf34dff92__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hf34dff92__0[1U] 
                                             << 0x16U));
    __Vtemp_hca383fa4__0[9U] = ((vlSelf->__VdfgTmp_hf34dff92__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hf34dff92__0[2U] 
                                             << 0x16U));
    __Vtemp_hca383fa4__0[0xaU] = ((vlSelf->__VdfgTmp_hf34dff92__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_hf34dff92__0[3U] 
                                               << 0x16U));
    __Vtemp_hca383fa4__0[0xbU] = ((vlSelf->__VdfgTmp_hd8744e72__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_hf34dff92__0[3U] 
                                                >> 0xaU));
    __Vtemp_hca383fa4__0[0xcU] = ((vlSelf->__VdfgTmp_hd8744e72__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hd8744e72__0[1U] 
                                               << 0x11U));
    __Vtemp_hca383fa4__0[0xdU] = ((vlSelf->__VdfgTmp_hd8744e72__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hd8744e72__0[2U] 
                                               << 0x11U));
    __Vtemp_hca383fa4__0[0xeU] = ((vlSelf->__VdfgTmp_hd8744e72__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hd8744e72__0[3U] 
                                               << 0x11U));
    __Vtemp_hca383fa4__0[0xfU] = (vlSelf->__VdfgTmp_hd8744e72__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+1006,(__Vtemp_hca383fa4__0),492);
    __Vtemp_he030a099__1[0U] = vlSelf->__VdfgTmp_h6f28208e__0[0U];
    __Vtemp_he030a099__1[1U] = vlSelf->__VdfgTmp_h6f28208e__0[1U];
    __Vtemp_he030a099__1[2U] = vlSelf->__VdfgTmp_h6f28208e__0[2U];
    __Vtemp_he030a099__1[3U] = vlSelf->__VdfgTmp_h6f28208e__0[3U];
    bufp->fullWData(oldp+1022,(__Vtemp_he030a099__1),122);
    __Vtemp_h1f99f829__1[0U] = vlSelf->__VdfgTmp_h55fb8d4d__0[0U];
    __Vtemp_h1f99f829__1[1U] = vlSelf->__VdfgTmp_h55fb8d4d__0[1U];
    __Vtemp_h1f99f829__1[2U] = vlSelf->__VdfgTmp_h55fb8d4d__0[2U];
    __Vtemp_h1f99f829__1[3U] = vlSelf->__VdfgTmp_h55fb8d4d__0[3U];
    bufp->fullWData(oldp+1026,(__Vtemp_h1f99f829__1),122);
    __Vtemp_h0ec6ec9a__1[0U] = vlSelf->__VdfgTmp_hf34dff92__0[0U];
    __Vtemp_h0ec6ec9a__1[1U] = vlSelf->__VdfgTmp_hf34dff92__0[1U];
    __Vtemp_h0ec6ec9a__1[2U] = vlSelf->__VdfgTmp_hf34dff92__0[2U];
    __Vtemp_h0ec6ec9a__1[3U] = vlSelf->__VdfgTmp_hf34dff92__0[3U];
    bufp->fullWData(oldp+1030,(__Vtemp_h0ec6ec9a__1),122);
    __Vtemp_hd0decde8__1[0U] = vlSelf->__VdfgTmp_hd8744e72__0[0U];
    __Vtemp_hd0decde8__1[1U] = vlSelf->__VdfgTmp_hd8744e72__0[1U];
    __Vtemp_hd0decde8__1[2U] = vlSelf->__VdfgTmp_hd8744e72__0[2U];
    __Vtemp_hd0decde8__1[3U] = vlSelf->__VdfgTmp_hd8744e72__0[3U];
    bufp->fullWData(oldp+1034,(__Vtemp_hd0decde8__1),122);
    bufp->fullWData(oldp+1038,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o),123);
    bufp->fullWData(oldp+1042,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o),123);
    __Vtemp_h63eadcd4__0[0U] = vlSelf->__VdfgTmp_hccbd30a4__0[0U];
    __Vtemp_h63eadcd4__0[1U] = vlSelf->__VdfgTmp_hccbd30a4__0[1U];
    __Vtemp_h63eadcd4__0[2U] = vlSelf->__VdfgTmp_hccbd30a4__0[2U];
    __Vtemp_h63eadcd4__0[3U] = ((vlSelf->__VdfgTmp_he2ebaa9c__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_hccbd30a4__0[3U]);
    __Vtemp_h63eadcd4__0[4U] = ((vlSelf->__VdfgTmp_he2ebaa9c__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_he2ebaa9c__0[1U] 
                                           << 0x1bU));
    __Vtemp_h63eadcd4__0[5U] = ((vlSelf->__VdfgTmp_he2ebaa9c__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_he2ebaa9c__0[2U] 
                                           << 0x1bU));
    __Vtemp_h63eadcd4__0[6U] = ((vlSelf->__VdfgTmp_he2ebaa9c__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_he2ebaa9c__0[3U] 
                                           << 0x1bU));
    __Vtemp_h63eadcd4__0[7U] = ((vlSelf->__VdfgTmp_hccdabe8d__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_he2ebaa9c__0[3U] 
                                              >> 5U));
    __Vtemp_h63eadcd4__0[8U] = ((vlSelf->__VdfgTmp_hccdabe8d__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hccdabe8d__0[1U] 
                                             << 0x16U));
    __Vtemp_h63eadcd4__0[9U] = ((vlSelf->__VdfgTmp_hccdabe8d__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hccdabe8d__0[2U] 
                                             << 0x16U));
    __Vtemp_h63eadcd4__0[0xaU] = ((vlSelf->__VdfgTmp_hccdabe8d__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_hccdabe8d__0[3U] 
                                               << 0x16U));
    __Vtemp_h63eadcd4__0[0xbU] = ((vlSelf->__VdfgTmp_h4bccd5fb__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_hccdabe8d__0[3U] 
                                                >> 0xaU));
    __Vtemp_h63eadcd4__0[0xcU] = ((vlSelf->__VdfgTmp_h4bccd5fb__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h4bccd5fb__0[1U] 
                                               << 0x11U));
    __Vtemp_h63eadcd4__0[0xdU] = ((vlSelf->__VdfgTmp_h4bccd5fb__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h4bccd5fb__0[2U] 
                                               << 0x11U));
    __Vtemp_h63eadcd4__0[0xeU] = ((vlSelf->__VdfgTmp_h4bccd5fb__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h4bccd5fb__0[3U] 
                                               << 0x11U));
    __Vtemp_h63eadcd4__0[0xfU] = (vlSelf->__VdfgTmp_h4bccd5fb__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+1046,(__Vtemp_h63eadcd4__0),492);
    __Vtemp_h750001a0__1[0U] = vlSelf->__VdfgTmp_hccbd30a4__0[0U];
    __Vtemp_h750001a0__1[1U] = vlSelf->__VdfgTmp_hccbd30a4__0[1U];
    __Vtemp_h750001a0__1[2U] = vlSelf->__VdfgTmp_hccbd30a4__0[2U];
    __Vtemp_h750001a0__1[3U] = vlSelf->__VdfgTmp_hccbd30a4__0[3U];
    bufp->fullWData(oldp+1062,(__Vtemp_h750001a0__1),122);
    __Vtemp_hdf25f8bd__1[0U] = vlSelf->__VdfgTmp_he2ebaa9c__0[0U];
    __Vtemp_hdf25f8bd__1[1U] = vlSelf->__VdfgTmp_he2ebaa9c__0[1U];
    __Vtemp_hdf25f8bd__1[2U] = vlSelf->__VdfgTmp_he2ebaa9c__0[2U];
    __Vtemp_hdf25f8bd__1[3U] = vlSelf->__VdfgTmp_he2ebaa9c__0[3U];
    bufp->fullWData(oldp+1066,(__Vtemp_hdf25f8bd__1),122);
    __Vtemp_h0ce3a25e__1[0U] = vlSelf->__VdfgTmp_hccdabe8d__0[0U];
    __Vtemp_h0ce3a25e__1[1U] = vlSelf->__VdfgTmp_hccdabe8d__0[1U];
    __Vtemp_h0ce3a25e__1[2U] = vlSelf->__VdfgTmp_hccdabe8d__0[2U];
    __Vtemp_h0ce3a25e__1[3U] = vlSelf->__VdfgTmp_hccdabe8d__0[3U];
    bufp->fullWData(oldp+1070,(__Vtemp_h0ce3a25e__1),122);
    __Vtemp_h6f957782__1[0U] = vlSelf->__VdfgTmp_h4bccd5fb__0[0U];
    __Vtemp_h6f957782__1[1U] = vlSelf->__VdfgTmp_h4bccd5fb__0[1U];
    __Vtemp_h6f957782__1[2U] = vlSelf->__VdfgTmp_h4bccd5fb__0[2U];
    __Vtemp_h6f957782__1[3U] = vlSelf->__VdfgTmp_h4bccd5fb__0[3U];
    bufp->fullWData(oldp+1074,(__Vtemp_h6f957782__1),122);
    bufp->fullQData(oldp+1078,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod),61);
    bufp->fullQData(oldp+1080,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod),61);
    bufp->fullQData(oldp+1082,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod),61);
    bufp->fullQData(oldp+1084,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod),61);
    bufp->fullQData(oldp+1086,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod),61);
    bufp->fullQData(oldp+1088,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod),61);
    bufp->fullQData(oldp+1090,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod),61);
    bufp->fullQData(oldp+1092,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod),61);
    bufp->fullQData(oldp+1094,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod),61);
    bufp->fullQData(oldp+1096,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod),61);
    bufp->fullQData(oldp+1098,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod),61);
    bufp->fullQData(oldp+1100,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod),61);
    bufp->fullQData(oldp+1102,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod),61);
    bufp->fullQData(oldp+1104,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod),61);
    bufp->fullQData(oldp+1106,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod),61);
    bufp->fullQData(oldp+1108,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod),61);
    bufp->fullQData(oldp+1110,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod),61);
    bufp->fullQData(oldp+1112,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod),61);
    bufp->fullQData(oldp+1114,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod),61);
    bufp->fullQData(oldp+1116,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod),61);
    bufp->fullQData(oldp+1118,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod),61);
    bufp->fullQData(oldp+1120,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod),61);
    bufp->fullQData(oldp+1122,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod),61);
    bufp->fullQData(oldp+1124,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod),61);
    bufp->fullQData(oldp+1126,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod),61);
    bufp->fullQData(oldp+1128,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod),61);
    bufp->fullQData(oldp+1130,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod),61);
    bufp->fullQData(oldp+1132,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod),61);
    bufp->fullQData(oldp+1134,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod),61);
    bufp->fullCData(oldp+1136,(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                 ? 0x7fU : (0xffU & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum)))),8);
    bufp->fullQData(oldp+1137,(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                 ? 0ULL : (0x3ffffffffffffffULL 
                                           & ((0xfffffffffffffffULL 
                                               & (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  ^ 
                                                  (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                   ^ 
                                                   (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                    ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))) 
                                              + (0xfffffffffffffffULL 
                                                 & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                     & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                    | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                        & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                       | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                          | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                              & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                             | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))))))),58);
    bufp->fullQData(oldp+1139,((0x3ffffffffffffffULL 
                                & (((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                     ? 0ULL : ((0xfffffffffffffffULL 
                                                & (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                   ^ 
                                                   (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                    ^ 
                                                    (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                     ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))) 
                                               + (0xfffffffffffffffULL 
                                                  & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                      & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                     | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                         & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                        | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                            & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                           | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                               & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                              | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                  | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                 & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))))) 
                                   << 2U))),58);
    bufp->fullQData(oldp+1141,(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                 ? 0ULL : (0x3fffffffffffffffULL 
                                           & ((0xfffffffffffffffULL 
                                               & (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  ^ 
                                                  (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                   ^ 
                                                   (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                    ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))) 
                                              + (0xfffffffffffffffULL 
                                                 & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                     & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                    | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                        & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                       | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                          | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                              & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                             | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                 | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))))))),62);
    bufp->fullSData(oldp+1143,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum),9);
    bufp->fullQData(oldp+1144,((0xfffffffffffffffULL 
                                & (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),60);
    bufp->fullQData(oldp+1146,((0xfffffffffffffffULL 
                                & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                    & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                       & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                      | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                          & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                         | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                             & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                            | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                               & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),60);
    bufp->fullQData(oldp+1148,((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),64);
    bufp->fullQData(oldp+1150,(((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                 & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                    & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                       & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                      | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                          & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                         | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                             | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                            & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),64);
    __Vtemp_h888287a4__0[0U] = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o);
    __Vtemp_h888287a4__0[1U] = (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                        >> 0x20U));
    __Vtemp_h888287a4__0[2U] = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o);
    __Vtemp_h888287a4__0[3U] = (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                        >> 0x20U));
    __Vtemp_h888287a4__0[4U] = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o);
    __Vtemp_h888287a4__0[5U] = (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        >> 0x20U));
    __Vtemp_h888287a4__0[6U] = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o);
    __Vtemp_h888287a4__0[7U] = (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
                                        >> 0x20U));
    bufp->fullWData(oldp+1152,(__Vtemp_h888287a4__0),256);
    bufp->fullQData(oldp+1160,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o),63);
    bufp->fullQData(oldp+1162,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o),63);
    __Vtemp_h18607c30__0[0U] = (IData)(vlSelf->__VdfgTmp_h06f2217f__0);
    __Vtemp_h18607c30__0[1U] = (((IData)(vlSelf->__VdfgTmp_hc014e5bc__0) 
                                 << 0x1fU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h06f2217f__0 
                                                      >> 0x20U)));
    __Vtemp_h18607c30__0[2U] = (((IData)(vlSelf->__VdfgTmp_hc014e5bc__0) 
                                 >> 1U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_hc014e5bc__0 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_h18607c30__0[3U] = (((IData)(vlSelf->__VdfgTmp_h11508155__0) 
                                 << 0x1eU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_hc014e5bc__0 
                                                       >> 0x20U)) 
                                              >> 1U));
    __Vtemp_h18607c30__0[4U] = (((IData)(vlSelf->__VdfgTmp_h11508155__0) 
                                 >> 2U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h11508155__0 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    __Vtemp_h18607c30__0[5U] = (((IData)(vlSelf->__VdfgTmp_h18a29784__0) 
                                 << 0x1dU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h11508155__0 
                                                       >> 0x20U)) 
                                              >> 2U));
    __Vtemp_h18607c30__0[6U] = (((IData)(vlSelf->__VdfgTmp_h18a29784__0) 
                                 >> 3U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h18a29784__0 
                                                    >> 0x20U)) 
                                           << 0x1dU));
    __Vtemp_h18607c30__0[7U] = ((IData)((vlSelf->__VdfgTmp_h18a29784__0 
                                         >> 0x20U)) 
                                >> 3U);
    bufp->fullWData(oldp+1164,(__Vtemp_h18607c30__0),252);
    bufp->fullQData(oldp+1172,(vlSelf->__VdfgTmp_h06f2217f__0),62);
    bufp->fullQData(oldp+1174,(vlSelf->__VdfgTmp_hc014e5bc__0),62);
    bufp->fullQData(oldp+1176,(vlSelf->__VdfgTmp_h11508155__0),62);
    bufp->fullQData(oldp+1178,(vlSelf->__VdfgTmp_h18a29784__0),62);
    bufp->fullQData(oldp+1180,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o),63);
    bufp->fullQData(oldp+1182,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o),63);
    __Vtemp_h9050cc37__0[0U] = (IData)(vlSelf->__VdfgTmp_h78d5643b__0);
    __Vtemp_h9050cc37__0[1U] = (((IData)(vlSelf->__VdfgTmp_h4df9372c__0) 
                                 << 0x1fU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h78d5643b__0 
                                                      >> 0x20U)));
    __Vtemp_h9050cc37__0[2U] = (((IData)(vlSelf->__VdfgTmp_h4df9372c__0) 
                                 >> 1U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h4df9372c__0 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_h9050cc37__0[3U] = (((IData)(vlSelf->__VdfgTmp_hf3614e3c__0) 
                                 << 0x1eU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h4df9372c__0 
                                                       >> 0x20U)) 
                                              >> 1U));
    __Vtemp_h9050cc37__0[4U] = (((IData)(vlSelf->__VdfgTmp_hf3614e3c__0) 
                                 >> 2U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_hf3614e3c__0 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    __Vtemp_h9050cc37__0[5U] = (((IData)(vlSelf->__VdfgTmp_h52bae079__0) 
                                 << 0x1dU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_hf3614e3c__0 
                                                       >> 0x20U)) 
                                              >> 2U));
    __Vtemp_h9050cc37__0[6U] = (((IData)(vlSelf->__VdfgTmp_h52bae079__0) 
                                 >> 3U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h52bae079__0 
                                                    >> 0x20U)) 
                                           << 0x1dU));
    __Vtemp_h9050cc37__0[7U] = ((IData)((vlSelf->__VdfgTmp_h52bae079__0 
                                         >> 0x20U)) 
                                >> 3U);
    bufp->fullWData(oldp+1184,(__Vtemp_h9050cc37__0),252);
    bufp->fullQData(oldp+1192,(vlSelf->__VdfgTmp_h78d5643b__0),62);
    bufp->fullQData(oldp+1194,(vlSelf->__VdfgTmp_h4df9372c__0),62);
    bufp->fullQData(oldp+1196,(vlSelf->__VdfgTmp_hf3614e3c__0),62);
    bufp->fullQData(oldp+1198,(vlSelf->__VdfgTmp_h52bae079__0),62);
    bufp->fullIData(oldp+1200,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod),31);
    bufp->fullIData(oldp+1201,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod),31);
    bufp->fullIData(oldp+1202,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod),31);
    bufp->fullIData(oldp+1203,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod),31);
    bufp->fullIData(oldp+1204,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod),31);
    bufp->fullIData(oldp+1205,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod),31);
    bufp->fullIData(oldp+1206,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod),31);
    bufp->fullIData(oldp+1207,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod),31);
    bufp->fullIData(oldp+1208,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod),31);
    bufp->fullIData(oldp+1209,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod),31);
    bufp->fullIData(oldp+1210,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod),31);
    bufp->fullIData(oldp+1211,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod),31);
    bufp->fullIData(oldp+1212,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+1213,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullQData(oldp+1214,(vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i),62);
    bufp->fullQData(oldp+1216,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),62);
    bufp->fullQData(oldp+1218,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i),62);
    bufp->fullQData(oldp+1220,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),62);
    bufp->fullIData(oldp+1222,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+1223,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+1224,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp),8);
    bufp->fullWData(oldp+1225,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),92);
    bufp->fullCData(oldp+1228,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+1229,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),92);
    bufp->fullIData(oldp+1232,(((0x1ffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o 
                                                         >> 0x22U)) 
                                                << 1U)) 
                                | (0U != (0x1ffffffffULL 
                                          & vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o)))),29);
    bufp->fullCData(oldp+1233,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+1234,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+1246,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),62);
    bufp->fullIData(oldp+1248,(((0x1ffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o 
                                                         >> 0x22U)) 
                                                << 1U)) 
                                | (0U != (0x1ffffffffULL 
                                          & vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o)))),29);
    bufp->fullCData(oldp+1249,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+1250,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+1262,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),62);
    bufp->fullIData(oldp+1264,(((0x1ffffffeU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                >> 1U)) 
                                | (1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o))),29);
    bufp->fullCData(oldp+1265,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1266,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+1271,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->fullIData(oldp+1272,(((0x1ffffffeU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                >> 1U)) 
                                | (1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o))),29);
    bufp->fullCData(oldp+1273,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1274,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+1279,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullWData(oldp+1280,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),92);
    bufp->fullWData(oldp+1283,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),92);
    bufp->fullBit(oldp+1286,(vlSelf->clock));
    bufp->fullBit(oldp+1287,(vlSelf->reset));
    bufp->fullIData(oldp+1288,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+1289,(vlSelf->io_posit_i2_0),32);
    bufp->fullCData(oldp+1290,(vlSelf->io_op),3);
    bufp->fullIData(oldp+1291,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+1292,(vlSelf->io_posit_dot_o),32);
    bufp->fullBit(oldp+1293,((vlSelf->io_posit_i1_0 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1294,((vlSelf->io_posit_i2_0 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1295,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                     | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                     ? (vlSelf->io_posit_i1_0 
                                        >> 0x1fU) : 
                                    (vlSelf->io_posit_i2_0 
                                     >> 0x1fU)))));
    bufp->fullCData(oldp+1296,((0xffU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                         + (IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow)))),8);
    bufp->fullIData(oldp+1297,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                 ? vlSelf->__VdfgTmp_hf87afcc4__0
                                 : vlSelf->__VdfgTmp_hf0a27d07__0)),30);
    bufp->fullBit(oldp+1298,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1299,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+1300,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1301,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullCData(oldp+1302,((0xffU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                         - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp)))),8);
    bufp->fullQData(oldp+1303,((0x1fffffffffffffffULL 
                                & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                               >> 0x1eU)) 
                                       & ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                  >> 0x1eU)) 
                                          | ((2U != 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                               >> 0x1eU)) 
                                             & (3U 
                                                == 
                                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                 >> 0x1eU)))))
                                       ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                          << 0x1eU)
                                       : (((IData)(vlSelf->__VdfgTmp_h17e26bb5__0) 
                                           & (2U == 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                               >> 0x1eU)))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1fU)
                                           : 0ULL))))),61);
    bufp->fullQData(oldp+1305,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i),62);
    bufp->fullQData(oldp+1307,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp),62);
    bufp->fullIData(oldp+1309,((0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                        >> 2U))) 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                           >> 2U))) 
                                                      | (IData)(
                                                                ((0xcU 
                                                                  == 
                                                                  (0xcU 
                                                                   & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                                                 & (2U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                        >> 2U)))))))
                                                   ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h17e4e3f4__0) 
                                                    & (8U 
                                                       == 
                                                       (0xcU 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))
                                                    ? 
                                                   (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                    << 1U)
                                                    : 0U))))),31);
    bufp->fullIData(oldp+1310,((0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                        >> 0xfU))) 
                                                   & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                           >> 0xfU))) 
                                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                    << 1U)
                                                    : 0U))))),31);
    bufp->fullBit(oldp+1311,((1U & ((1U == (IData)(vlSelf->io_op))
                                     ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                         ? (vlSelf->io_posit_i1_0 
                                            >> 0x1fU)
                                         : (vlSelf->io_posit_i2_0 
                                            >> 0x1fU))
                                     : ((2U == (IData)(vlSelf->io_op))
                                         ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                            ^ (vlSelf->io_posit_i1_0 
                                               >> 0x1fU))
                                         : ((3U == (IData)(vlSelf->io_op))
                                             ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op)) 
                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))));
    bufp->fullCData(oldp+1312,(((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_h06753e69__0))),8);
    bufp->fullIData(oldp+1313,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac),29);
    bufp->fullIData(oldp+1314,(((0x10000000U & vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac)
                                 ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                ? (vlSelf->io_posit_i1_0 
                                                   >> 0x1fU)
                                                : (vlSelf->io_posit_i2_0 
                                                   >> 0x1fU))
                                            : ((2U 
                                                == (IData)(vlSelf->io_op))
                                                ? (
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                   ^ 
                                                   (vlSelf->io_posit_i1_0 
                                                    >> 0x1fU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_op)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                 : 0U)),32);
    bufp->fullCData(oldp+1315,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+1316,(((5U == (IData)(vlSelf->io_op))
                                 ? ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (0xffU & (IData)(vlSelf->__VdfgTmp_h0a432aee__0))
                                     : 0U) : 0U)),8);
    bufp->fullIData(oldp+1317,(((5U == (IData)(vlSelf->io_op))
                                 ? ((0x1ffffffeU & 
                                     ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                               >> 0x22U)) 
                                      << 1U)) | (0U 
                                                 != 
                                                 (0x1ffffffffULL 
                                                  & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))
                                 : 0U)),29);
    bufp->fullIData(oldp+1318,((((5U == (IData)(vlSelf->io_op)) 
                                 & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                            >> 0x3dU)))
                                 ? (0x7fffffffU & (
                                                   ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                                                     << 1U) 
                                                    | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                       >> 0x1fU)) 
                                                   + 
                                                   (1U 
                                                    & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                        >> 0x1eU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xbfffffffU 
                                                                   & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U])))))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1319,((0xffU & ((IData)(2U) 
                                         + ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                 ? 
                                                ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(1U) 
                                                                      - 
                                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     - (IData)(1U)) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (((IData)(1U) 
                                                        - 
                                                        vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                       - (IData)(1U))))
                                                 : 
                                                ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((- 
                                                                     vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (- 
                                                       vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                             : 0U)))),8);
    bufp->fullBit(oldp+1320,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1321,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullSData(oldp+1322,((0x1ffU & ((IData)(0x22U) 
                                          + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                              ? ((0U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                  ? 
                                                 ((0x1c0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(1U) 
                                                                       - 
                                                                       vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 5U)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((IData)(1U) 
                                                         - 
                                                         vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                                  : 
                                                 ((0x1c0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     >> 5U)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (- 
                                                        vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                              : 0U)))),9);
    bufp->fullBit(oldp+1323,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+1324,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+1326,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),62);
    bufp->fullSData(oldp+1328,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (IData)(vlSelf->__VdfgTmp_h0a432aee__0)
                                 : 0U)),9);
    bufp->fullQData(oldp+1329,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i),61);
    bufp->fullBit(oldp+1331,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+1332,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+1334,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),61);
    bufp->fullSData(oldp+1336,((0x1ffU & ((IData)(0x22U) 
                                          + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                              ? ((0U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                  ? 
                                                 ((0x1c0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(1U) 
                                                                       - 
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 5U)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((IData)(1U) 
                                                         - 
                                                         vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                                  : 
                                                 ((0x1c0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     >> 5U)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (- 
                                                        vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                              : 0U)))),9);
    bufp->fullBit(oldp+1337,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+1338,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullCData(oldp+1340,((0xffU & ((IData)(2U) 
                                         + ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                 ? 
                                                ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(1U) 
                                                                      - 
                                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     - (IData)(1U)) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (((IData)(1U) 
                                                        - 
                                                        vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                       - (IData)(1U))))
                                                 : 
                                                ((0xe0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((- 
                                                                     vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                    >> 4U)))) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (- 
                                                       vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                             : 0U)))),8);
    bufp->fullBit(oldp+1341,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1342,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+1343,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                     & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                    ^ (vlSelf->io_posit_i1_0 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1344,((0xffU & ((1U & ((~ 
                                                 (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                  >> 0x1eU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp))))),8);
    bufp->fullIData(oldp+1345,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                 ? vlSelf->__VdfgTmp_hf0a27d07__0
                                 : vlSelf->__VdfgTmp_hf87afcc4__0)),30);
    bufp->fullBit(oldp+1346,(((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                              & (vlSelf->PvuTop__DOT__add__DOT__sum 
                                 >> 0x1eU))));
    bufp->fullBit(oldp+1347,((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                               & (vlSelf->PvuTop__DOT__add__DOT__sum 
                                  >> 0x1eU)) & (0U 
                                                != 
                                                (0x3fffffffU 
                                                 & vlSelf->PvuTop__DOT__add__DOT__sum)))));
    bufp->fullIData(oldp+1348,(0x1fU),32);
    bufp->fullBit(oldp+1349,(1U));
    bufp->fullIData(oldp+1350,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+1351,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+1356,(0U));
    bufp->fullCData(oldp+1357,(0U),8);
    bufp->fullIData(oldp+1358,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+1359,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+1364,(0x3eU),32);
    bufp->fullIData(oldp+1365,(6U),32);
    bufp->fullWData(oldp+1366,(VPvuTop__ConstPool__CONST_hc5a1c501_0),372);
    bufp->fullIData(oldp+1378,(0x3dU),32);
    bufp->fullWData(oldp+1379,(VPvuTop__ConstPool__CONST_hc5537591_0),366);
}
