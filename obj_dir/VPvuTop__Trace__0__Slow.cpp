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
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+847,"io_pir_frac1_aligned", false,-1, 29,0);
    tracep->declBus(c+848,"io_pir_frac2_aligned", false,-1, 29,0);
    tracep->declBus(c+1295,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1296,"io_pir_exp_o", false,-1, 7,0);
    tracep->declBus(c+1297,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+849,"io_overflow", false,-1, 0,0);
    tracep->declBus(c+850,"io_frac_truncate", false,-1, 0,0);
    tracep->declBus(c+851,"sum", false,-1, 30,0);
    tracep->declBit(c+852,"mant1_greater", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode1 ");
    tracep->declBus(c+1288,"io_posit", false,-1, 31,0);
    tracep->declBus(c+1293,"io_Sign", false,-1, 0,0);
    tracep->declBus(c+286,"io_Exp", false,-1, 7,0);
    tracep->declBus(c+287,"io_Frac", false,-1, 27,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+1,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+817,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+288,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+1346,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1347,"MODE", false,-1);
    tracep->declBus(c+1348,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"in_i", false,-1, 30,0);
    tracep->declBus(c+818,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1298,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1348,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1349,"index_lut", false,-1, 154,0);
    tracep->declBus(c+1299,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+819,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+3,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1346,"i", false,-1, 31,0);
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
    tracep->declBus(c+578,"io_Exp", false,-1, 7,0);
    tracep->declBus(c+579,"io_Frac", false,-1, 27,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+4,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+824,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+580,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+1346,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1347,"MODE", false,-1);
    tracep->declBus(c+1348,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"in_i", false,-1, 30,0);
    tracep->declBus(c+825,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1300,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1348,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1349,"index_lut", false,-1, 154,0);
    tracep->declBus(c+1301,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+826,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+6,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1346,"i", false,-1, 31,0);
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
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+289,"io_pir_frac1_i", false,-1, 29,0);
    tracep->declBus(c+581,"io_pir_frac2_i", false,-1, 29,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1302,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+853,"io_pir_frac_o", false,-1, 61,0);
    tracep->pushNamePrefix("intdivider ");
    tracep->declBus(c+289,"io_dividend", false,-1, 29,0);
    tracep->declBus(c+581,"io_divisor", false,-1, 29,0);
    tracep->declQuad(c+855,"io_quotient", false,-1, 59,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declQuad(c+290,"io_operand_a", false,-1, 59,0);
    tracep->declQuad(c+582,"io_operand_b", false,-1, 59,0);
    tracep->declArray(c+857,"io_sum_o", false,-1, 119,0);
    tracep->declArray(c+861,"io_carry_o", false,-1, 119,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+11,"io_operands_i", false,-1, 3719,0);
    tracep->declArray(c+865,"io_sum_o", false,-1, 124,0);
    tracep->declArray(c+869,"io_carry_o", false,-1, 124,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+873,"io_operands_i", false,-1, 499,0);
    tracep->declArray(c+865,"io_sum_o", false,-1, 124,0);
    tracep->declArray(c+869,"io_carry_o", false,-1, 124,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+293,"io_operands_i", false,-1, 1799,0);
    tracep->declArray(c+889,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+893,"io_carry_o", false,-1, 123,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+897,"io_operands_i", false,-1, 495,0);
    tracep->declArray(c+889,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+893,"io_carry_o", false,-1, 123,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+350,"io_operands_i", false,-1, 839,0);
    tracep->declArray(c+913,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+917,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+921,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+913,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+917,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+377,"io_operands_i", false,-1, 359,0);
    tracep->declArray(c+937,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+941,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+377,"io_operands_i", false,-1, 359,0);
    tracep->declArray(c+937,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+941,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+389,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+945,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+949,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+389,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+945,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+949,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+404,"io_operands_i", false,-1, 959,0);
    tracep->declArray(c+953,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+957,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+961,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+953,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+957,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+434,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+977,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+981,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+434,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+977,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+981,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+449,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+985,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+989,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+449,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+985,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+989,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+128,"io_operands_i", false,-1, 1919,0);
    tracep->declArray(c+993,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+997,"io_carry_o", false,-1, 123,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1001,"io_operands_i", false,-1, 495,0);
    tracep->declArray(c+993,"io_sum_o", false,-1, 123,0);
    tracep->declArray(c+997,"io_carry_o", false,-1, 123,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+464,"io_operands_i", false,-1, 959,0);
    tracep->declArray(c+1017,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1021,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1025,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+1017,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1021,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+494,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1041,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1045,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+494,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1041,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1045,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+509,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1049,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1053,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+509,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1049,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1053,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+188,"io_operands_i", false,-1, 959,0);
    tracep->declArray(c+1057,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1061,"io_carry_o", false,-1, 122,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1065,"io_operands_i", false,-1, 491,0);
    tracep->declArray(c+1057,"io_sum_o", false,-1, 122,0);
    tracep->declArray(c+1061,"io_carry_o", false,-1, 122,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+524,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1081,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1085,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+524,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1081,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1085,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+218,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1089,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1093,"io_carry_o", false,-1, 121,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+218,"io_operands_i", false,-1, 479,0);
    tracep->declArray(c+1089,"io_sum_o", false,-1, 121,0);
    tracep->declArray(c+1093,"io_carry_o", false,-1, 121,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("genProds ");
    tracep->declQuad(c+290,"io_operand_a", false,-1, 59,0);
    tracep->declQuad(c+582,"io_operand_b", false,-1, 59,0);
    tracep->declArray(c+11,"io_partial_prods", false,-1, 3719,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+584,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1097,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+585,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+584,"io_code", false,-1, 2,0);
    tracep->declBit(c+585,"io_neg", false,-1);
    tracep->declBit(c+586,"io_zero", false,-1);
    tracep->declBit(c+587,"io_one", false,-1);
    tracep->declBit(c+588,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+589,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1099,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+590,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+589,"io_code", false,-1, 2,0);
    tracep->declBit(c+590,"io_neg", false,-1);
    tracep->declBit(c+591,"io_zero", false,-1);
    tracep->declBit(c+592,"io_one", false,-1);
    tracep->declBit(c+593,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+594,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1303,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+1354,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+594,"io_code", false,-1, 2,0);
    tracep->declBit(c+1354,"io_neg", false,-1);
    tracep->declBit(c+595,"io_zero", false,-1);
    tracep->declBit(c+596,"io_one", false,-1);
    tracep->declBit(c+1354,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+597,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1101,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+598,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+597,"io_code", false,-1, 2,0);
    tracep->declBit(c+598,"io_neg", false,-1);
    tracep->declBit(c+599,"io_zero", false,-1);
    tracep->declBit(c+600,"io_one", false,-1);
    tracep->declBit(c+601,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+602,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1103,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+603,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+602,"io_code", false,-1, 2,0);
    tracep->declBit(c+603,"io_neg", false,-1);
    tracep->declBit(c+604,"io_zero", false,-1);
    tracep->declBit(c+605,"io_one", false,-1);
    tracep->declBit(c+606,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+607,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1105,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+608,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+607,"io_code", false,-1, 2,0);
    tracep->declBit(c+608,"io_neg", false,-1);
    tracep->declBit(c+609,"io_zero", false,-1);
    tracep->declBit(c+610,"io_one", false,-1);
    tracep->declBit(c+611,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+612,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1107,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+613,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+612,"io_code", false,-1, 2,0);
    tracep->declBit(c+613,"io_neg", false,-1);
    tracep->declBit(c+614,"io_zero", false,-1);
    tracep->declBit(c+615,"io_one", false,-1);
    tracep->declBit(c+616,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_13 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+617,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1109,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+618,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+617,"io_code", false,-1, 2,0);
    tracep->declBit(c+618,"io_neg", false,-1);
    tracep->declBit(c+619,"io_zero", false,-1);
    tracep->declBit(c+620,"io_one", false,-1);
    tracep->declBit(c+621,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_14 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+622,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1305,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+623,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+622,"io_code", false,-1, 2,0);
    tracep->declBit(c+623,"io_neg", false,-1);
    tracep->declBit(c+624,"io_zero", false,-1);
    tracep->declBit(c+625,"io_one", false,-1);
    tracep->declBit(c+626,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_15 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+627,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1111,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+628,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+627,"io_code", false,-1, 2,0);
    tracep->declBit(c+628,"io_neg", false,-1);
    tracep->declBit(c+629,"io_zero", false,-1);
    tracep->declBit(c+630,"io_one", false,-1);
    tracep->declBit(c+631,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_16 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+632,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1113,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+633,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+632,"io_code", false,-1, 2,0);
    tracep->declBit(c+633,"io_neg", false,-1);
    tracep->declBit(c+634,"io_zero", false,-1);
    tracep->declBit(c+635,"io_one", false,-1);
    tracep->declBit(c+636,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_17 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+637,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1115,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+638,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+637,"io_code", false,-1, 2,0);
    tracep->declBit(c+638,"io_neg", false,-1);
    tracep->declBit(c+639,"io_zero", false,-1);
    tracep->declBit(c+640,"io_one", false,-1);
    tracep->declBit(c+641,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_18 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+642,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1117,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+643,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+642,"io_code", false,-1, 2,0);
    tracep->declBit(c+643,"io_neg", false,-1);
    tracep->declBit(c+644,"io_zero", false,-1);
    tracep->declBit(c+645,"io_one", false,-1);
    tracep->declBit(c+646,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_19 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+647,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1119,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+648,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+647,"io_code", false,-1, 2,0);
    tracep->declBit(c+648,"io_neg", false,-1);
    tracep->declBit(c+649,"io_zero", false,-1);
    tracep->declBit(c+650,"io_one", false,-1);
    tracep->declBit(c+651,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+652,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1121,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+653,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+652,"io_code", false,-1, 2,0);
    tracep->declBit(c+653,"io_neg", false,-1);
    tracep->declBit(c+654,"io_zero", false,-1);
    tracep->declBit(c+655,"io_one", false,-1);
    tracep->declBit(c+656,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_20 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+657,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1123,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+658,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+657,"io_code", false,-1, 2,0);
    tracep->declBit(c+658,"io_neg", false,-1);
    tracep->declBit(c+659,"io_zero", false,-1);
    tracep->declBit(c+660,"io_one", false,-1);
    tracep->declBit(c+661,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_21 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+662,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1125,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+663,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+662,"io_code", false,-1, 2,0);
    tracep->declBit(c+663,"io_neg", false,-1);
    tracep->declBit(c+664,"io_zero", false,-1);
    tracep->declBit(c+665,"io_one", false,-1);
    tracep->declBit(c+666,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_22 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+667,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1127,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+668,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+667,"io_code", false,-1, 2,0);
    tracep->declBit(c+668,"io_neg", false,-1);
    tracep->declBit(c+669,"io_zero", false,-1);
    tracep->declBit(c+670,"io_one", false,-1);
    tracep->declBit(c+671,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_23 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+672,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1129,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+673,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+672,"io_code", false,-1, 2,0);
    tracep->declBit(c+673,"io_neg", false,-1);
    tracep->declBit(c+674,"io_zero", false,-1);
    tracep->declBit(c+675,"io_one", false,-1);
    tracep->declBit(c+676,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_24 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+677,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1131,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+678,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+677,"io_code", false,-1, 2,0);
    tracep->declBit(c+678,"io_neg", false,-1);
    tracep->declBit(c+679,"io_zero", false,-1);
    tracep->declBit(c+680,"io_one", false,-1);
    tracep->declBit(c+681,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_25 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+682,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1133,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+683,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+682,"io_code", false,-1, 2,0);
    tracep->declBit(c+683,"io_neg", false,-1);
    tracep->declBit(c+684,"io_zero", false,-1);
    tracep->declBit(c+685,"io_one", false,-1);
    tracep->declBit(c+686,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_26 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+687,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1135,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+688,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+687,"io_code", false,-1, 2,0);
    tracep->declBit(c+688,"io_neg", false,-1);
    tracep->declBit(c+689,"io_zero", false,-1);
    tracep->declBit(c+690,"io_one", false,-1);
    tracep->declBit(c+691,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_27 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+692,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1137,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+693,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+692,"io_code", false,-1, 2,0);
    tracep->declBit(c+693,"io_neg", false,-1);
    tracep->declBit(c+694,"io_zero", false,-1);
    tracep->declBit(c+695,"io_one", false,-1);
    tracep->declBit(c+696,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_28 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+697,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1139,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+698,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+697,"io_code", false,-1, 2,0);
    tracep->declBit(c+698,"io_neg", false,-1);
    tracep->declBit(c+699,"io_zero", false,-1);
    tracep->declBit(c+700,"io_one", false,-1);
    tracep->declBit(c+701,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+702,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1141,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+703,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+702,"io_code", false,-1, 2,0);
    tracep->declBit(c+703,"io_neg", false,-1);
    tracep->declBit(c+704,"io_zero", false,-1);
    tracep->declBit(c+705,"io_one", false,-1);
    tracep->declBit(c+706,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+707,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1143,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+708,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+707,"io_code", false,-1, 2,0);
    tracep->declBit(c+708,"io_neg", false,-1);
    tracep->declBit(c+709,"io_zero", false,-1);
    tracep->declBit(c+710,"io_one", false,-1);
    tracep->declBit(c+711,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+712,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1145,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+713,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+712,"io_code", false,-1, 2,0);
    tracep->declBit(c+713,"io_neg", false,-1);
    tracep->declBit(c+714,"io_zero", false,-1);
    tracep->declBit(c+715,"io_one", false,-1);
    tracep->declBit(c+716,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+717,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1147,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+718,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+717,"io_code", false,-1, 2,0);
    tracep->declBit(c+718,"io_neg", false,-1);
    tracep->declBit(c+719,"io_zero", false,-1);
    tracep->declBit(c+720,"io_one", false,-1);
    tracep->declBit(c+721,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+722,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1149,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+723,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+722,"io_code", false,-1, 2,0);
    tracep->declBit(c+723,"io_neg", false,-1);
    tracep->declBit(c+724,"io_zero", false,-1);
    tracep->declBit(c+725,"io_one", false,-1);
    tracep->declBit(c+726,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+727,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1151,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+728,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+727,"io_code", false,-1, 2,0);
    tracep->declBit(c+728,"io_neg", false,-1);
    tracep->declBit(c+729,"io_zero", false,-1);
    tracep->declBit(c+730,"io_one", false,-1);
    tracep->declBit(c+731,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declQuad(c+290,"io_multiplicand", false,-1, 59,0);
    tracep->declBus(c+732,"io_code", false,-1, 2,0);
    tracep->declQuad(c+1153,"io_partial_prod", false,-1, 60,0);
    tracep->declBit(c+733,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+732,"io_code", false,-1, 2,0);
    tracep->declBit(c+733,"io_neg", false,-1);
    tracep->declBit(c+734,"io_zero", false,-1);
    tracep->declBit(c+735,"io_one", false,-1);
    tracep->declBit(c+736,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+581,"io_num_i", false,-1, 29,0);
    tracep->declQuad(c+582,"io_reciprocal_o", false,-1, 59,0);
    tracep->declQuad(c+737,"x0", false,-1, 59,0);
    tracep->declArray(c+739,"x1_x_new_full", false,-1, 89,0);
    tracep->declArray(c+742,"x2_x_new_full", false,-1, 89,0);
    tracep->declArray(c+745,"x3_x_new_full", false,-1, 89,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dotproduct ");
    tracep->declBit(c+1286,"clock", false,-1);
    tracep->declBit(c+1287,"reset", false,-1);
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+287,"io_pir_frac1_i", false,-1, 27,0);
    tracep->declBus(c+579,"io_pir_frac2_i", false,-1, 27,0);
    tracep->declBit(c+1354,"io_pir_sign_o", false,-1);
    tracep->declBus(c+1155,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+1307,"io_pir_frac_o", false,-1, 61,0);
    tracep->declQuad(c+1309,"pir_frac_cmp_tmp", false,-1, 61,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declQuad(c+1307,"io_operands_i", false,-1, 61,0);
    tracep->declQuad(c+1307,"io_sum_o", false,-1, 61,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("frac_compare ");
    tracep->declQuad(c+1156,"io_pir_frac_i", false,-1, 57,0);
    tracep->declBus(c+1155,"io_pir_exp_i", false,-1, 7,0);
    tracep->declQuad(c+1158,"io_pir_frac_align", false,-1, 57,0);
    tracep->declBus(c+1155,"io_pir_max_exp", false,-1, 7,0);
    tracep->declBus(c+1355,"shift_amount", false,-1, 7,0);
    tracep->pushNamePrefix("comptree ");
    tracep->declBus(c+1155,"io_operands_i", false,-1, 7,0);
    tracep->declBus(c+1155,"io_result_o", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+289,"io_pir_frac1_i", false,-1, 29,0);
    tracep->declBus(c+581,"io_pir_frac2_i", false,-1, 29,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1155,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+1160,"io_pir_frac_o", false,-1, 61,0);
    tracep->declBus(c+1162,"sum", false,-1, 8,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBus(c+289,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+581,"io_operand_b", false,-1, 29,0);
    tracep->declQuad(c+1163,"io_sum_o", false,-1, 59,0);
    tracep->declQuad(c+1165,"io_carry_o", false,-1, 59,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+233,"io_operands_i", false,-1, 959,0);
    tracep->declQuad(c+1167,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1169,"io_carry_o", false,-1, 63,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1171,"io_operands_i", false,-1, 255,0);
    tracep->declQuad(c+1167,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1169,"io_carry_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+539,"io_operands_i", false,-1, 479,0);
    tracep->declQuad(c+1179,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1181,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1183,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1179,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1181,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+554,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1191,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1193,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+554,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1191,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1193,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+562,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1195,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1197,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+562,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1195,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1197,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+263,"io_operands_i", false,-1, 479,0);
    tracep->declQuad(c+1199,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1201,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1203,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1199,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1201,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+570,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1211,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1213,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+570,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1211,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1213,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+278,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1215,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1217,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+278,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1215,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1217,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+289,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+581,"io_operand_b", false,-1, 29,0);
    tracep->declArray(c+233,"io_partial_prods", false,-1, 959,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+748,"io_code", false,-1, 2,0);
    tracep->declBus(c+1219,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+749,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+748,"io_code", false,-1, 2,0);
    tracep->declBit(c+749,"io_neg", false,-1);
    tracep->declBit(c+750,"io_zero", false,-1);
    tracep->declBit(c+751,"io_one", false,-1);
    tracep->declBit(c+752,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+753,"io_code", false,-1, 2,0);
    tracep->declBus(c+1220,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+754,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+753,"io_code", false,-1, 2,0);
    tracep->declBit(c+754,"io_neg", false,-1);
    tracep->declBit(c+755,"io_zero", false,-1);
    tracep->declBit(c+756,"io_one", false,-1);
    tracep->declBit(c+757,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+1356,"io_code", false,-1, 2,0);
    tracep->declBus(c+1357,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+1354,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+1356,"io_code", false,-1, 2,0);
    tracep->declBit(c+1354,"io_neg", false,-1);
    tracep->declBit(c+1358,"io_zero", false,-1);
    tracep->declBit(c+1354,"io_one", false,-1);
    tracep->declBit(c+1354,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+758,"io_code", false,-1, 2,0);
    tracep->declBus(c+1221,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+759,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+758,"io_code", false,-1, 2,0);
    tracep->declBit(c+759,"io_neg", false,-1);
    tracep->declBit(c+760,"io_zero", false,-1);
    tracep->declBit(c+761,"io_one", false,-1);
    tracep->declBit(c+762,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+763,"io_code", false,-1, 2,0);
    tracep->declBus(c+1222,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+764,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+763,"io_code", false,-1, 2,0);
    tracep->declBit(c+764,"io_neg", false,-1);
    tracep->declBit(c+765,"io_zero", false,-1);
    tracep->declBit(c+766,"io_one", false,-1);
    tracep->declBit(c+767,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+768,"io_code", false,-1, 2,0);
    tracep->declBus(c+1223,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+769,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+768,"io_code", false,-1, 2,0);
    tracep->declBit(c+769,"io_neg", false,-1);
    tracep->declBit(c+770,"io_zero", false,-1);
    tracep->declBit(c+771,"io_one", false,-1);
    tracep->declBit(c+772,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+773,"io_code", false,-1, 2,0);
    tracep->declBus(c+1224,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+774,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+773,"io_code", false,-1, 2,0);
    tracep->declBit(c+774,"io_neg", false,-1);
    tracep->declBit(c+775,"io_zero", false,-1);
    tracep->declBit(c+776,"io_one", false,-1);
    tracep->declBit(c+1311,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_13 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBus(c+292,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+1354,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBit(c+1354,"io_neg", false,-1);
    tracep->declBit(c+9,"io_zero", false,-1);
    tracep->declBit(c+10,"io_one", false,-1);
    tracep->declBit(c+1354,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+777,"io_code", false,-1, 2,0);
    tracep->declBus(c+1225,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+778,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+777,"io_code", false,-1, 2,0);
    tracep->declBit(c+778,"io_neg", false,-1);
    tracep->declBit(c+779,"io_zero", false,-1);
    tracep->declBit(c+780,"io_one", false,-1);
    tracep->declBit(c+781,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+782,"io_code", false,-1, 2,0);
    tracep->declBus(c+1226,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+783,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+782,"io_code", false,-1, 2,0);
    tracep->declBit(c+783,"io_neg", false,-1);
    tracep->declBit(c+784,"io_zero", false,-1);
    tracep->declBit(c+785,"io_one", false,-1);
    tracep->declBit(c+786,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+787,"io_code", false,-1, 2,0);
    tracep->declBus(c+1227,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+788,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+787,"io_code", false,-1, 2,0);
    tracep->declBit(c+788,"io_neg", false,-1);
    tracep->declBit(c+789,"io_zero", false,-1);
    tracep->declBit(c+790,"io_one", false,-1);
    tracep->declBit(c+791,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+792,"io_code", false,-1, 2,0);
    tracep->declBus(c+1228,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+793,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+792,"io_code", false,-1, 2,0);
    tracep->declBit(c+793,"io_neg", false,-1);
    tracep->declBit(c+794,"io_zero", false,-1);
    tracep->declBit(c+795,"io_one", false,-1);
    tracep->declBit(c+796,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+797,"io_code", false,-1, 2,0);
    tracep->declBus(c+1229,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+798,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+797,"io_code", false,-1, 2,0);
    tracep->declBit(c+798,"io_neg", false,-1);
    tracep->declBit(c+799,"io_zero", false,-1);
    tracep->declBit(c+800,"io_one", false,-1);
    tracep->declBit(c+801,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+802,"io_code", false,-1, 2,0);
    tracep->declBus(c+1312,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+803,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+802,"io_code", false,-1, 2,0);
    tracep->declBit(c+803,"io_neg", false,-1);
    tracep->declBit(c+804,"io_zero", false,-1);
    tracep->declBit(c+805,"io_one", false,-1);
    tracep->declBit(c+806,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+807,"io_code", false,-1, 2,0);
    tracep->declBus(c+1230,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+808,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+807,"io_code", false,-1, 2,0);
    tracep->declBit(c+808,"io_neg", false,-1);
    tracep->declBit(c+809,"io_zero", false,-1);
    tracep->declBit(c+810,"io_one", false,-1);
    tracep->declBit(c+811,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+812,"io_code", false,-1, 2,0);
    tracep->declBus(c+1231,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+813,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+812,"io_code", false,-1, 2,0);
    tracep->declBit(c+813,"io_neg", false,-1);
    tracep->declBit(c+814,"io_zero", false,-1);
    tracep->declBit(c+815,"io_one", false,-1);
    tracep->declBit(c+816,"io_two", false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("encode ");
    tracep->declBus(c+1313,"io_pir_sign", false,-1, 0,0);
    tracep->declBus(c+1314,"io_pir_exp", false,-1, 7,0);
    tracep->declBus(c+1315,"io_pir_frac", false,-1, 28,0);
    tracep->declBus(c+1316,"io_posit", false,-1, 31,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declArray(c+1280,"io_operand_i", false,-1, 91,0);
    tracep->declBus(c+1317,"io_shift_amount", false,-1, 4,0);
    tracep->declArray(c+1283,"io_result_o", false,-1, 91,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encode_dot ");
    tracep->declBit(c+1354,"io_pir_sign", false,-1);
    tracep->declBus(c+1318,"io_pir_exp", false,-1, 7,0);
    tracep->declBus(c+1319,"io_pir_frac", false,-1, 28,0);
    tracep->declBus(c+1320,"io_posit", false,-1, 31,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declArray(c+1241,"io_operand_i", false,-1, 91,0);
    tracep->declBus(c+1244,"io_shift_amount", false,-1, 4,0);
    tracep->declArray(c+1245,"io_result_o", false,-1, 91,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm ");
    tracep->declQuad(c+1232,"io_pir_frac_i", false,-1, 61,0);
    tracep->declBus(c+1321,"io_exp_adjust", false,-1, 8,0);
    tracep->declBus(c+1248,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1347,"MODE", false,-1);
    tracep->declBus(c+1360,"CNT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1232,"in_i", false,-1, 61,0);
    tracep->declBus(c+1249,"cnt_o", false,-1, 5,0);
    tracep->declBit(c+1322,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1360,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1361,"index_lut", false,-1, 371,0);
    tracep->declQuad(c+1323,"sel_nodes", false,-1, 63,0);
    tracep->declArray(c+1250,"index_nodes", false,-1, 383,0);
    tracep->declQuad(c+1234,"in_tmp", false,-1, 61,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1359,"i", false,-1, 31,0);
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
    tracep->declQuad(c+1232,"io_operand_i", false,-1, 61,0);
    tracep->declBus(c+1249,"io_shift_amount", false,-1, 5,0);
    tracep->declQuad(c+1262,"io_result_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_add ");
    tracep->declBus(c+1236,"io_pir_frac_i", false,-1, 29,0);
    tracep->declBus(c+1325,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+1264,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1373,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1347,"MODE", false,-1);
    tracep->declBus(c+1348,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1236,"in_i", false,-1, 29,0);
    tracep->declBus(c+1265,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1326,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1348,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1374,"index_lut", false,-1, 149,0);
    tracep->declBus(c+1327,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1266,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1237,"in_tmp", false,-1, 29,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1373,"i", false,-1, 31,0);
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
    tracep->declBus(c+1236,"io_operand_i", false,-1, 29,0);
    tracep->declBus(c+1265,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1271,"io_result_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_dot ");
    tracep->declQuad(c+1328,"io_pir_frac_i", false,-1, 61,0);
    tracep->declBus(c+1330,"io_exp_adjust", false,-1, 8,0);
    tracep->declBus(c+831,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1379,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1347,"MODE", false,-1);
    tracep->declBus(c+1360,"CNT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1331,"in_i", false,-1, 60,0);
    tracep->declBus(c+832,"cnt_o", false,-1, 5,0);
    tracep->declBit(c+1333,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1360,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1380,"index_lut", false,-1, 365,0);
    tracep->declQuad(c+1334,"sel_nodes", false,-1, 63,0);
    tracep->declArray(c+833,"index_nodes", false,-1, 383,0);
    tracep->declQuad(c+1336,"in_tmp", false,-1, 60,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1379,"i", false,-1, 31,0);
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
    tracep->declQuad(c+1328,"io_operand_i", false,-1, 61,0);
    tracep->declBus(c+832,"io_shift_amount", false,-1, 5,0);
    tracep->declQuad(c+845,"io_result_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_sub ");
    tracep->declBus(c+1238,"io_pir_frac_i", false,-1, 29,0);
    tracep->declBus(c+1338,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+1272,"io_pir_frac_o", false,-1, 28,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1373,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1347,"MODE", false,-1);
    tracep->declBus(c+1348,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1238,"in_i", false,-1, 29,0);
    tracep->declBus(c+1273,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1339,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1348,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1374,"index_lut", false,-1, 149,0);
    tracep->declBus(c+1340,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1274,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1239,"in_tmp", false,-1, 29,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1373,"i", false,-1, 31,0);
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
    tracep->declBus(c+1238,"io_operand_i", false,-1, 29,0);
    tracep->declBus(c+1273,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1279,"io_result_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fracalign ");
    tracep->declBus(c+287,"io_pir_frac1_i", false,-1, 27,0);
    tracep->declBus(c+579,"io_pir_frac2_i", false,-1, 27,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+847,"io_pir_frac1_align", false,-1, 29,0);
    tracep->declBus(c+848,"io_pir_frac2_align", false,-1, 29,0);
    tracep->declBus(c+1240,"io_pir_max_exp", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fracalign_1 ");
    tracep->declBus(c+287,"io_pir_frac1_i", false,-1, 27,0);
    tracep->declBus(c+579,"io_pir_frac2_i", false,-1, 27,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+847,"io_pir_frac1_align", false,-1, 29,0);
    tracep->declBus(c+848,"io_pir_frac2_align", false,-1, 29,0);
    tracep->declBus(c+1240,"io_pir_max_exp", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+289,"io_pir_frac1_i", false,-1, 29,0);
    tracep->declBus(c+581,"io_pir_frac2_i", false,-1, 29,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1155,"io_pir_exp_o", false,-1, 7,0);
    tracep->declQuad(c+1160,"io_pir_frac_o", false,-1, 61,0);
    tracep->declBus(c+1162,"sum", false,-1, 8,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBus(c+289,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+581,"io_operand_b", false,-1, 29,0);
    tracep->declQuad(c+1163,"io_sum_o", false,-1, 59,0);
    tracep->declQuad(c+1165,"io_carry_o", false,-1, 59,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+233,"io_operands_i", false,-1, 959,0);
    tracep->declQuad(c+1167,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1169,"io_carry_o", false,-1, 63,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1171,"io_operands_i", false,-1, 255,0);
    tracep->declQuad(c+1167,"io_sum_o", false,-1, 63,0);
    tracep->declQuad(c+1169,"io_carry_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+539,"io_operands_i", false,-1, 479,0);
    tracep->declQuad(c+1179,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1181,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1183,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1179,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1181,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+554,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1191,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1193,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+554,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1191,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1193,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+562,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1195,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1197,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+562,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1195,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1197,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+263,"io_operands_i", false,-1, 479,0);
    tracep->declQuad(c+1199,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1201,"io_carry_o", false,-1, 62,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+1203,"io_operands_i", false,-1, 251,0);
    tracep->declQuad(c+1199,"io_sum_o", false,-1, 62,0);
    tracep->declQuad(c+1201,"io_carry_o", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+570,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1211,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1213,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+570,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1211,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1213,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+278,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1215,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1217,"io_carry_o", false,-1, 61,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+278,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+1215,"io_sum_o", false,-1, 61,0);
    tracep->declQuad(c+1217,"io_carry_o", false,-1, 61,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+289,"io_operand_a", false,-1, 29,0);
    tracep->declBus(c+581,"io_operand_b", false,-1, 29,0);
    tracep->declArray(c+233,"io_partial_prods", false,-1, 959,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+748,"io_code", false,-1, 2,0);
    tracep->declBus(c+1219,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+749,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+748,"io_code", false,-1, 2,0);
    tracep->declBit(c+749,"io_neg", false,-1);
    tracep->declBit(c+750,"io_zero", false,-1);
    tracep->declBit(c+751,"io_one", false,-1);
    tracep->declBit(c+752,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+753,"io_code", false,-1, 2,0);
    tracep->declBus(c+1220,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+754,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+753,"io_code", false,-1, 2,0);
    tracep->declBit(c+754,"io_neg", false,-1);
    tracep->declBit(c+755,"io_zero", false,-1);
    tracep->declBit(c+756,"io_one", false,-1);
    tracep->declBit(c+757,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+1356,"io_code", false,-1, 2,0);
    tracep->declBus(c+1357,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+1354,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+1356,"io_code", false,-1, 2,0);
    tracep->declBit(c+1354,"io_neg", false,-1);
    tracep->declBit(c+1358,"io_zero", false,-1);
    tracep->declBit(c+1354,"io_one", false,-1);
    tracep->declBit(c+1354,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+758,"io_code", false,-1, 2,0);
    tracep->declBus(c+1221,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+759,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+758,"io_code", false,-1, 2,0);
    tracep->declBit(c+759,"io_neg", false,-1);
    tracep->declBit(c+760,"io_zero", false,-1);
    tracep->declBit(c+761,"io_one", false,-1);
    tracep->declBit(c+762,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+763,"io_code", false,-1, 2,0);
    tracep->declBus(c+1222,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+764,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+763,"io_code", false,-1, 2,0);
    tracep->declBit(c+764,"io_neg", false,-1);
    tracep->declBit(c+765,"io_zero", false,-1);
    tracep->declBit(c+766,"io_one", false,-1);
    tracep->declBit(c+767,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+768,"io_code", false,-1, 2,0);
    tracep->declBus(c+1223,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+769,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+768,"io_code", false,-1, 2,0);
    tracep->declBit(c+769,"io_neg", false,-1);
    tracep->declBit(c+770,"io_zero", false,-1);
    tracep->declBit(c+771,"io_one", false,-1);
    tracep->declBit(c+772,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+773,"io_code", false,-1, 2,0);
    tracep->declBus(c+1224,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+774,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+773,"io_code", false,-1, 2,0);
    tracep->declBit(c+774,"io_neg", false,-1);
    tracep->declBit(c+775,"io_zero", false,-1);
    tracep->declBit(c+776,"io_one", false,-1);
    tracep->declBit(c+1311,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_13 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBus(c+292,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+1354,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBit(c+1354,"io_neg", false,-1);
    tracep->declBit(c+9,"io_zero", false,-1);
    tracep->declBit(c+10,"io_one", false,-1);
    tracep->declBit(c+1354,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+777,"io_code", false,-1, 2,0);
    tracep->declBus(c+1225,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+778,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+777,"io_code", false,-1, 2,0);
    tracep->declBit(c+778,"io_neg", false,-1);
    tracep->declBit(c+779,"io_zero", false,-1);
    tracep->declBit(c+780,"io_one", false,-1);
    tracep->declBit(c+781,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+782,"io_code", false,-1, 2,0);
    tracep->declBus(c+1226,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+783,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+782,"io_code", false,-1, 2,0);
    tracep->declBit(c+783,"io_neg", false,-1);
    tracep->declBit(c+784,"io_zero", false,-1);
    tracep->declBit(c+785,"io_one", false,-1);
    tracep->declBit(c+786,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+787,"io_code", false,-1, 2,0);
    tracep->declBus(c+1227,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+788,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+787,"io_code", false,-1, 2,0);
    tracep->declBit(c+788,"io_neg", false,-1);
    tracep->declBit(c+789,"io_zero", false,-1);
    tracep->declBit(c+790,"io_one", false,-1);
    tracep->declBit(c+791,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+792,"io_code", false,-1, 2,0);
    tracep->declBus(c+1228,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+793,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+792,"io_code", false,-1, 2,0);
    tracep->declBit(c+793,"io_neg", false,-1);
    tracep->declBit(c+794,"io_zero", false,-1);
    tracep->declBit(c+795,"io_one", false,-1);
    tracep->declBit(c+796,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+797,"io_code", false,-1, 2,0);
    tracep->declBus(c+1229,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+798,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+797,"io_code", false,-1, 2,0);
    tracep->declBit(c+798,"io_neg", false,-1);
    tracep->declBit(c+799,"io_zero", false,-1);
    tracep->declBit(c+800,"io_one", false,-1);
    tracep->declBit(c+801,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+802,"io_code", false,-1, 2,0);
    tracep->declBus(c+1312,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+803,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+802,"io_code", false,-1, 2,0);
    tracep->declBit(c+803,"io_neg", false,-1);
    tracep->declBit(c+804,"io_zero", false,-1);
    tracep->declBit(c+805,"io_one", false,-1);
    tracep->declBit(c+806,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+807,"io_code", false,-1, 2,0);
    tracep->declBus(c+1230,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+808,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+807,"io_code", false,-1, 2,0);
    tracep->declBit(c+808,"io_neg", false,-1);
    tracep->declBit(c+809,"io_zero", false,-1);
    tracep->declBit(c+810,"io_one", false,-1);
    tracep->declBit(c+811,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+289,"io_multiplicand", false,-1, 29,0);
    tracep->declBus(c+812,"io_code", false,-1, 2,0);
    tracep->declBus(c+1231,"io_partial_prod", false,-1, 30,0);
    tracep->declBit(c+813,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+812,"io_code", false,-1, 2,0);
    tracep->declBit(c+813,"io_neg", false,-1);
    tracep->declBit(c+814,"io_zero", false,-1);
    tracep->declBit(c+815,"io_one", false,-1);
    tracep->declBit(c+816,"io_two", false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("sub ");
    tracep->declBus(c+1293,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+1294,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+286,"io_pir_exp1_i", false,-1, 7,0);
    tracep->declBus(c+578,"io_pir_exp2_i", false,-1, 7,0);
    tracep->declBus(c+847,"io_pir_frac1_aligned", false,-1, 29,0);
    tracep->declBus(c+848,"io_pir_frac2_aligned", false,-1, 29,0);
    tracep->declBus(c+1341,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+1342,"io_pir_exp_o", false,-1, 7,0);
    tracep->declBus(c+1343,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+1344,"io_overflow", false,-1, 0,0);
    tracep->declBus(c+1345,"io_frac_truncate", false,-1, 0,0);
    tracep->declBit(c+852,"mant1_greater", false,-1);
    tracep->declBus(c+851,"sum", false,-1, 30,0);
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
    VlWide<60>/*1919:0*/ __Vtemp_ha5dfaff8__0;
    VlWide<63>/*2015:0*/ __Vtemp_ha96238eb__0;
    VlWide<65>/*2079:0*/ __Vtemp_h22d0bb2d__0;
    VlWide<65>/*2079:0*/ __Vtemp_h0b483c84__0;
    VlWide<65>/*2079:0*/ __Vtemp_hac3a406e__0;
    VlWide<67>/*2143:0*/ __Vtemp_ha5c20c1a__0;
    VlWide<69>/*2207:0*/ __Vtemp_hceb74099__0;
    VlWide<69>/*2207:0*/ __Vtemp_h67c67f14__0;
    VlWide<69>/*2207:0*/ __Vtemp_hc9c956a3__0;
    VlWide<71>/*2271:0*/ __Vtemp_hf4cefdfc__0;
    VlWide<73>/*2335:0*/ __Vtemp_hcdcc479a__0;
    VlWide<73>/*2335:0*/ __Vtemp_h11053d10__0;
    VlWide<73>/*2335:0*/ __Vtemp_h39912dfa__0;
    VlWide<75>/*2399:0*/ __Vtemp_h95ecafcb__0;
    VlWide<77>/*2463:0*/ __Vtemp_h00d7f6cf__0;
    VlWide<77>/*2463:0*/ __Vtemp_hb960510d__0;
    VlWide<77>/*2463:0*/ __Vtemp_h8179f328__0;
    VlWide<79>/*2527:0*/ __Vtemp_h448a4c64__0;
    VlWide<80>/*2559:0*/ __Vtemp_h91df3ee4__0;
    VlWide<81>/*2591:0*/ __Vtemp_haa774b67__0;
    VlWide<81>/*2591:0*/ __Vtemp_h7977f354__0;
    VlWide<82>/*2623:0*/ __Vtemp_h58a39ad5__0;
    VlWide<84>/*2687:0*/ __Vtemp_h27c9078c__0;
    VlWide<84>/*2687:0*/ __Vtemp_h16d3413b__0;
    VlWide<84>/*2687:0*/ __Vtemp_he842d4a8__0;
    VlWide<86>/*2751:0*/ __Vtemp_h5469c348__0;
    VlWide<88>/*2815:0*/ __Vtemp_h29676282__0;
    VlWide<88>/*2815:0*/ __Vtemp_h594d3cf7__0;
    VlWide<88>/*2815:0*/ __Vtemp_h2832a0c2__0;
    VlWide<90>/*2879:0*/ __Vtemp_h56746e53__0;
    VlWide<92>/*2943:0*/ __Vtemp_he84d6640__0;
    VlWide<92>/*2943:0*/ __Vtemp_h5ab9ec31__0;
    VlWide<92>/*2943:0*/ __Vtemp_h67056666__0;
    VlWide<94>/*3007:0*/ __Vtemp_h83ff4566__0;
    VlWide<96>/*3071:0*/ __Vtemp_haa16b424__0;
    VlWide<96>/*3071:0*/ __Vtemp_h2ce970a1__0;
    VlWide<96>/*3071:0*/ __Vtemp_h309dfd3f__0;
    VlWide<98>/*3135:0*/ __Vtemp_h3269b9da__0;
    VlWide<100>/*3199:0*/ __Vtemp_he826145f__0;
    VlWide<100>/*3199:0*/ __Vtemp_ha0eb09d8__0;
    VlWide<100>/*3199:0*/ __Vtemp_hd42abbcf__0;
    VlWide<102>/*3263:0*/ __Vtemp_hae442ab6__0;
    VlWide<103>/*3295:0*/ __Vtemp_h924a82ea__0;
    VlWide<103>/*3295:0*/ __Vtemp_h228a44f3__0;
    VlWide<103>/*3295:0*/ __Vtemp_h6eaf3d7e__0;
    VlWide<105>/*3359:0*/ __Vtemp_hec0cfaf0__0;
    VlWide<107>/*3423:0*/ __Vtemp_h212ad777__0;
    VlWide<107>/*3423:0*/ __Vtemp_hb5116ac0__0;
    VlWide<107>/*3423:0*/ __Vtemp_hc888ff4a__0;
    VlWide<109>/*3487:0*/ __Vtemp_h7c099af7__0;
    VlWide<111>/*3551:0*/ __Vtemp_haf20040b__0;
    VlWide<111>/*3551:0*/ __Vtemp_h6e8ffde9__0;
    VlWide<111>/*3551:0*/ __Vtemp_h5a35645d__0;
    VlWide<113>/*3615:0*/ __Vtemp_h328aef96__0;
    VlWide<115>/*3679:0*/ __Vtemp_h22c386fb__0;
    VlWide<115>/*3679:0*/ __Vtemp_h64c96c8e__0;
    VlWide<115>/*3679:0*/ __Vtemp_h93500b80__0;
    VlWide<117>/*3743:0*/ __Vtemp_hd1cf2aea__0;
    VlWide<60>/*1919:0*/ __Vtemp_hc39d1ab4__0;
    VlWide<30>/*959:0*/ __Vtemp_h62903cbb__0;
    VlWide<15>/*479:0*/ __Vtemp_hbed1a62e__0;
    VlWide<30>/*959:0*/ __Vtemp_h4fbe89fd__0;
    VlWide<15>/*479:0*/ __Vtemp_h7d0890c9__0;
    VlWide<8>/*255:0*/ __Vtemp_h1e51c69c__0;
    VlWide<57>/*1823:0*/ __Vtemp_h706c5f20__0;
    VlWide<27>/*863:0*/ __Vtemp_hac1009e4__0;
    VlWide<12>/*383:0*/ __Vtemp_h754afc9a__0;
    VlWide<15>/*479:0*/ __Vtemp_h8f513eb4__0;
    VlWide<30>/*959:0*/ __Vtemp_h0840d99f__0;
    VlWide<15>/*479:0*/ __Vtemp_h60336926__0;
    VlWide<15>/*479:0*/ __Vtemp_h7045d0b6__0;
    VlWide<30>/*959:0*/ __Vtemp_h5fd67438__0;
    VlWide<15>/*479:0*/ __Vtemp_h19005271__0;
    VlWide<15>/*479:0*/ __Vtemp_h0f4bb4eb__0;
    VlWide<15>/*479:0*/ __Vtemp_h43949df8__0;
    VlWide<15>/*479:0*/ __Vtemp_h7ec81ae8__0;
    VlWide<8>/*255:0*/ __Vtemp_h1c4ca0ea__0;
    VlWide<8>/*255:0*/ __Vtemp_h7ad596e8__0;
    VlWide<8>/*255:0*/ __Vtemp_h74cead56__0;
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
    VlWide<16>/*511:0*/ __Vtemp_hf567ea9d__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c3e9fd5__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2a87b9c__1;
    VlWide<4>/*127:0*/ __Vtemp_h3021675c__1;
    VlWide<4>/*127:0*/ __Vtemp_hd1689825__1;
    VlWide<16>/*511:0*/ __Vtemp_h11e7a323__0;
    VlWide<4>/*127:0*/ __Vtemp_h40185b32__1;
    VlWide<4>/*127:0*/ __Vtemp_h2c1c2ac0__1;
    VlWide<4>/*127:0*/ __Vtemp_hc1e7894e__1;
    VlWide<4>/*127:0*/ __Vtemp_h53161dfe__1;
    VlWide<16>/*511:0*/ __Vtemp_hfa618b5e__0;
    VlWide<16>/*511:0*/ __Vtemp_h9f5098ab__0;
    VlWide<4>/*127:0*/ __Vtemp_hece6169c__1;
    VlWide<4>/*127:0*/ __Vtemp_h236d3c48__1;
    VlWide<4>/*127:0*/ __Vtemp_ha0d41819__1;
    VlWide<4>/*127:0*/ __Vtemp_h5f8bc438__1;
    VlWide<16>/*511:0*/ __Vtemp_h25b5643e__0;
    VlWide<4>/*127:0*/ __Vtemp_h527ba76e__1;
    VlWide<4>/*127:0*/ __Vtemp_h7437fd0e__1;
    VlWide<4>/*127:0*/ __Vtemp_h1e9b504f__1;
    VlWide<4>/*127:0*/ __Vtemp_h9e7dfe3b__1;
    VlWide<8>/*255:0*/ __Vtemp_h888287a4__0;
    VlWide<8>/*255:0*/ __Vtemp_h82c3937f__0;
    VlWide<8>/*255:0*/ __Vtemp_h12532a88__0;
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
    bufp->fullBit(oldp+10,((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)));
    __Vtemp_ha5dfaff8__0[0x3aU] = (((IData)((0x1fffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x10000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                       | (IData)(
                                                                 (0x8000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1eU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x18000000U 
                                                                 == 
                                                                 (0x38000000U 
                                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                        | ((~ 
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                             >> 0x1bU)) 
                                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1fU)
                                                     : 0ULL))))) 
                                    >> 0x1aU) | ((IData)(
                                                         ((0x1fffffffffffffffULL 
                                                           & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              ((1U 
                                                                & ((IData)(
                                                                           (0x10000000U 
                                                                            == 
                                                                            (0x18000000U 
                                                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                                   | (IData)(
                                                                             (0x8000000U 
                                                                              == 
                                                                              (0x18000000U 
                                                                               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                                ? 
                                                               ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                << 0x1eU)
                                                                : 
                                                               ((1U 
                                                                 & ((IData)(
                                                                            (0x18000000U 
                                                                             == 
                                                                             (0x38000000U 
                                                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                                    | ((~ 
                                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                         >> 0x1bU)) 
                                                                       & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                                 ? 
                                                                ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                 << 0x1fU)
                                                                 : 0ULL)))) 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_ha96238eb__0[0U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod);
    __Vtemp_ha96238eb__0[1U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                        >> 0x20U));
    __Vtemp_ha96238eb__0[2U] = 0U;
    __Vtemp_ha96238eb__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_ha96238eb__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_ha96238eb__0[5U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                         >> 0x20U)) 
                                >> 6U);
    __Vtemp_ha96238eb__0[6U] = 0U;
    __Vtemp_ha96238eb__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_ha96238eb__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_ha96238eb__0[9U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0xcU);
    __Vtemp_ha96238eb__0[0xaU] = 0U;
    __Vtemp_ha96238eb__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_ha96238eb__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_ha96238eb__0[0xdU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x12U);
    __Vtemp_ha96238eb__0[0xeU] = 0U;
    __Vtemp_ha96238eb__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_ha96238eb__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_ha96238eb__0[0x11U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U);
    __Vtemp_ha96238eb__0[0x12U] = 0U;
    __Vtemp_ha96238eb__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_ha96238eb__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U));
    __Vtemp_ha96238eb__0[0x15U] = 0U;
    __Vtemp_ha96238eb__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_ha96238eb__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_ha96238eb__0[0x18U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 4U);
    __Vtemp_ha96238eb__0[0x19U] = 0U;
    __Vtemp_ha96238eb__0[0x1aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_ha96238eb__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_ha96238eb__0[0x1cU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xaU);
    __Vtemp_ha96238eb__0[0x1dU] = 0U;
    __Vtemp_ha96238eb__0[0x1eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_ha96238eb__0[0x1fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_ha96238eb__0[0x20U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x10U);
    __Vtemp_ha96238eb__0[0x21U] = 0U;
    __Vtemp_ha96238eb__0[0x22U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_ha96238eb__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_ha96238eb__0[0x24U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x16U);
    __Vtemp_ha96238eb__0[0x25U] = 0U;
    __Vtemp_ha96238eb__0[0x26U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_ha96238eb__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_ha96238eb__0[0x28U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1cU);
    __Vtemp_ha96238eb__0[0x29U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_ha96238eb__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_ha96238eb__0[0x2bU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 2U);
    __Vtemp_ha96238eb__0[0x2cU] = 0U;
    __Vtemp_ha96238eb__0[0x2dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_ha96238eb__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_ha96238eb__0[0x2fU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 8U);
    __Vtemp_ha96238eb__0[0x30U] = 0U;
    __Vtemp_ha96238eb__0[0x31U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_ha96238eb__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_ha96238eb__0[0x33U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xeU);
    __Vtemp_ha96238eb__0[0x34U] = 0U;
    __Vtemp_ha96238eb__0[0x35U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_ha96238eb__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_ha96238eb__0[0x37U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x14U);
    __Vtemp_ha96238eb__0[0x38U] = 0U;
    __Vtemp_ha96238eb__0[0x39U] = (((IData)((0x1fffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x10000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                       | (IData)(
                                                                 (0x8000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1eU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x18000000U 
                                                                 == 
                                                                 (0x38000000U 
                                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                        | ((~ 
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                             >> 0x1bU)) 
                                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1fU)
                                                     : 0ULL))))) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_ha96238eb__0[0x3aU] = __Vtemp_ha5dfaff8__0[0x3aU];
    __Vtemp_ha96238eb__0[0x3bU] = ((IData)(((0x1fffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x10000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                       | (IData)(
                                                                 (0x8000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1eU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x18000000U 
                                                                 == 
                                                                 (0x38000000U 
                                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                        | ((~ 
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                             >> 0x1bU)) 
                                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1fU)
                                                     : 0ULL)))) 
                                            >> 0x20U)) 
                                   >> 0x1aU);
    __Vtemp_ha96238eb__0[0x3cU] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_ha96238eb__0[0x3dU] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_ha96238eb__0[0x3eU] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                           >> 0x20U));
    VL_EXTEND_WW(2072,2013, __Vtemp_h22d0bb2d__0, __Vtemp_ha96238eb__0);
    VL_CONCAT_WIW(2073,1,2072, __Vtemp_h0b483c84__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg), __Vtemp_h22d0bb2d__0);
    VL_EXTEND_WW(2074,2073, __Vtemp_hac3a406e__0, __Vtemp_h0b483c84__0);
    VL_CONCAT_WQW(2135,61,2074, __Vtemp_ha5c20c1a__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod, __Vtemp_hac3a406e__0);
    VL_EXTEND_WW(2194,2135, __Vtemp_hceb74099__0, __Vtemp_ha5c20c1a__0);
    VL_CONCAT_WIW(2195,1,2194, __Vtemp_h67c67f14__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_hceb74099__0);
    VL_EXTEND_WW(2196,2195, __Vtemp_hc9c956a3__0, __Vtemp_h67c67f14__0);
    VL_CONCAT_WQW(2257,61,2196, __Vtemp_hf4cefdfc__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_hc9c956a3__0);
    VL_EXTEND_WW(2316,2257, __Vtemp_hcdcc479a__0, __Vtemp_hf4cefdfc__0);
    VL_CONCAT_WIW(2317,1,2316, __Vtemp_h11053d10__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_hcdcc479a__0);
    VL_EXTEND_WW(2318,2317, __Vtemp_h39912dfa__0, __Vtemp_h11053d10__0);
    VL_CONCAT_WQW(2379,61,2318, __Vtemp_h95ecafcb__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h39912dfa__0);
    VL_EXTEND_WW(2438,2379, __Vtemp_h00d7f6cf__0, __Vtemp_h95ecafcb__0);
    VL_CONCAT_WIW(2439,1,2438, __Vtemp_hb960510d__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_h00d7f6cf__0);
    VL_EXTEND_WW(2440,2439, __Vtemp_h8179f328__0, __Vtemp_hb960510d__0);
    VL_CONCAT_WQW(2501,61,2440, __Vtemp_h448a4c64__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_h8179f328__0);
    VL_EXTEND_WW(2560,2501, __Vtemp_h91df3ee4__0, __Vtemp_h448a4c64__0);
    VL_CONCAT_WIW(2561,1,2560, __Vtemp_haa774b67__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_h91df3ee4__0);
    VL_EXTEND_WW(2562,2561, __Vtemp_h7977f354__0, __Vtemp_haa774b67__0);
    VL_CONCAT_WQW(2623,61,2562, __Vtemp_h58a39ad5__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h7977f354__0);
    VL_EXTEND_WW(2682,2623, __Vtemp_h27c9078c__0, __Vtemp_h58a39ad5__0);
    VL_CONCAT_WIW(2683,1,2682, __Vtemp_h16d3413b__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_h27c9078c__0);
    VL_EXTEND_WW(2684,2683, __Vtemp_he842d4a8__0, __Vtemp_h16d3413b__0);
    VL_CONCAT_WQW(2745,61,2684, __Vtemp_h5469c348__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_he842d4a8__0);
    VL_EXTEND_WW(2804,2745, __Vtemp_h29676282__0, __Vtemp_h5469c348__0);
    VL_CONCAT_WIW(2805,1,2804, __Vtemp_h594d3cf7__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h29676282__0);
    VL_EXTEND_WW(2806,2805, __Vtemp_h2832a0c2__0, __Vtemp_h594d3cf7__0);
    VL_CONCAT_WQW(2867,61,2806, __Vtemp_h56746e53__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_h2832a0c2__0);
    VL_EXTEND_WW(2926,2867, __Vtemp_he84d6640__0, __Vtemp_h56746e53__0);
    VL_CONCAT_WIW(2927,1,2926, __Vtemp_h5ab9ec31__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_he84d6640__0);
    VL_EXTEND_WW(2928,2927, __Vtemp_h67056666__0, __Vtemp_h5ab9ec31__0);
    VL_CONCAT_WQW(2989,61,2928, __Vtemp_h83ff4566__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_h67056666__0);
    VL_EXTEND_WW(3048,2989, __Vtemp_haa16b424__0, __Vtemp_h83ff4566__0);
    VL_CONCAT_WIW(3049,1,3048, __Vtemp_h2ce970a1__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_haa16b424__0);
    VL_EXTEND_WW(3050,3049, __Vtemp_h309dfd3f__0, __Vtemp_h2ce970a1__0);
    VL_CONCAT_WQW(3111,61,3050, __Vtemp_h3269b9da__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_h309dfd3f__0);
    VL_EXTEND_WW(3170,3111, __Vtemp_he826145f__0, __Vtemp_h3269b9da__0);
    VL_CONCAT_WIW(3171,1,3170, __Vtemp_ha0eb09d8__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_he826145f__0);
    VL_EXTEND_WW(3172,3171, __Vtemp_hd42abbcf__0, __Vtemp_ha0eb09d8__0);
    VL_CONCAT_WQW(3233,61,3172, __Vtemp_hae442ab6__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_hd42abbcf__0);
    VL_EXTEND_WW(3292,3233, __Vtemp_h924a82ea__0, __Vtemp_hae442ab6__0);
    VL_CONCAT_WIW(3293,1,3292, __Vtemp_h228a44f3__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_h924a82ea__0);
    VL_EXTEND_WW(3294,3293, __Vtemp_h6eaf3d7e__0, __Vtemp_h228a44f3__0);
    VL_CONCAT_WQW(3355,61,3294, __Vtemp_hec0cfaf0__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_h6eaf3d7e__0);
    VL_EXTEND_WW(3414,3355, __Vtemp_h212ad777__0, __Vtemp_hec0cfaf0__0);
    VL_CONCAT_WIW(3415,1,3414, __Vtemp_hb5116ac0__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h212ad777__0);
    VL_EXTEND_WW(3416,3415, __Vtemp_hc888ff4a__0, __Vtemp_hb5116ac0__0);
    VL_CONCAT_WQW(3477,61,3416, __Vtemp_h7c099af7__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod, __Vtemp_hc888ff4a__0);
    VL_EXTEND_WW(3536,3477, __Vtemp_haf20040b__0, __Vtemp_h7c099af7__0);
    VL_CONCAT_WIW(3537,1,3536, __Vtemp_h6e8ffde9__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg), __Vtemp_haf20040b__0);
    VL_EXTEND_WW(3538,3537, __Vtemp_h5a35645d__0, __Vtemp_h6e8ffde9__0);
    VL_CONCAT_WQW(3599,61,3538, __Vtemp_h328aef96__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod, __Vtemp_h5a35645d__0);
    VL_EXTEND_WW(3658,3599, __Vtemp_h22c386fb__0, __Vtemp_h328aef96__0);
    VL_CONCAT_WIW(3659,1,3658, __Vtemp_h64c96c8e__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_28__DOT___boothEncoder_io_neg), __Vtemp_h22c386fb__0);
    VL_EXTEND_WW(3660,3659, __Vtemp_h93500b80__0, __Vtemp_h64c96c8e__0);
    VL_CONCAT_WQW(3720,60,3660, __Vtemp_hd1cf2aea__0, 
                  ((0x2000000U & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                    ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                       << 0x1eU) : 0ULL), __Vtemp_h93500b80__0);
    bufp->fullWData(oldp+11,(__Vtemp_hd1cf2aea__0),3720);
    __Vtemp_hc39d1ab4__0[0U] = vlSelf->__VdfgTmp_hbafd11bf__0[0U];
    __Vtemp_hc39d1ab4__0[1U] = vlSelf->__VdfgTmp_hbafd11bf__0[1U];
    __Vtemp_hc39d1ab4__0[2U] = vlSelf->__VdfgTmp_hbafd11bf__0[2U];
    __Vtemp_hc39d1ab4__0[3U] = 0U;
    __Vtemp_hc39d1ab4__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_hc39d1ab4__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_hc39d1ab4__0[6U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                         >> 0x20U)) 
                                >> 8U);
    __Vtemp_hc39d1ab4__0[7U] = 0U;
    __Vtemp_hc39d1ab4__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_hc39d1ab4__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_hc39d1ab4__0[0xaU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0xeU);
    __Vtemp_hc39d1ab4__0[0xbU] = 0U;
    __Vtemp_hc39d1ab4__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 0xaU));
    __Vtemp_hc39d1ab4__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xcU));
    __Vtemp_hc39d1ab4__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x14U);
    __Vtemp_hc39d1ab4__0[0xfU] = 0U;
    __Vtemp_hc39d1ab4__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_hc39d1ab4__0[0x11U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_hc39d1ab4__0[0x12U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1aU);
    __Vtemp_hc39d1ab4__0[0x13U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_hc39d1ab4__0[0x14U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod);
    __Vtemp_hc39d1ab4__0[0x15U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                           >> 0x20U));
    __Vtemp_hc39d1ab4__0[0x16U] = 0U;
    __Vtemp_hc39d1ab4__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg) 
                                                 << 0x18U));
    __Vtemp_hc39d1ab4__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    >> 6U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_hc39d1ab4__0[0x19U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 6U);
    __Vtemp_hc39d1ab4__0[0x1aU] = 0U;
    __Vtemp_hc39d1ab4__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_hc39d1ab4__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_hc39d1ab4__0[0x1dU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xcU);
    __Vtemp_hc39d1ab4__0[0x1eU] = 0U;
    __Vtemp_hc39d1ab4__0[0x1fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_hc39d1ab4__0[0x20U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_hc39d1ab4__0[0x21U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x12U);
    __Vtemp_hc39d1ab4__0[0x22U] = 0U;
    __Vtemp_hc39d1ab4__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                              << 6U));
    __Vtemp_hc39d1ab4__0[0x24U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_hc39d1ab4__0[0x25U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U);
    __Vtemp_hc39d1ab4__0[0x26U] = 0U;
    __Vtemp_hc39d1ab4__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg));
    __Vtemp_hc39d1ab4__0[0x28U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U));
    __Vtemp_hc39d1ab4__0[0x29U] = 0U;
    __Vtemp_hc39d1ab4__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_hc39d1ab4__0[0x2bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_hc39d1ab4__0[0x2cU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 4U);
    __Vtemp_hc39d1ab4__0[0x2dU] = 0U;
    __Vtemp_hc39d1ab4__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_hc39d1ab4__0[0x2fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_hc39d1ab4__0[0x30U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xaU);
    __Vtemp_hc39d1ab4__0[0x31U] = 0U;
    __Vtemp_hc39d1ab4__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_hc39d1ab4__0[0x33U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_hc39d1ab4__0[0x34U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x10U);
    __Vtemp_hc39d1ab4__0[0x35U] = 0U;
    __Vtemp_hc39d1ab4__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_hc39d1ab4__0[0x37U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_hc39d1ab4__0[0x38U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x16U);
    __Vtemp_hc39d1ab4__0[0x39U] = 0U;
    __Vtemp_hc39d1ab4__0[0x3aU] = (((IData)(((0x2000000U 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                              ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                 << 0x1eU)
                                              : 0ULL)) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_28__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_hc39d1ab4__0[0x3bU] = (((IData)(((0x2000000U 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                              ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                 << 0x1eU)
                                              : 0ULL)) 
                                    >> 0x1cU) | ((IData)(
                                                         (((0x2000000U 
                                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                                            ? 
                                                           ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                            << 0x1eU)
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 4U));
    bufp->fullWData(oldp+128,(__Vtemp_hc39d1ab4__0),1920);
    __Vtemp_h62903cbb__0[0U] = vlSelf->__VdfgTmp_h67d86824__0[0U];
    __Vtemp_h62903cbb__0[1U] = vlSelf->__VdfgTmp_h67d86824__0[1U];
    __Vtemp_h62903cbb__0[2U] = vlSelf->__VdfgTmp_h67d86824__0[2U];
    __Vtemp_h62903cbb__0[3U] = vlSelf->__VdfgTmp_h67d86824__0[3U];
    __Vtemp_h62903cbb__0[4U] = 0U;
    __Vtemp_h62903cbb__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h62903cbb__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h62903cbb__0[7U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0x18U);
    __Vtemp_h62903cbb__0[8U] = 0U;
    __Vtemp_h62903cbb__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg));
    __Vtemp_h62903cbb__0[0xaU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                   >> 0x1eU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 2U));
    __Vtemp_h62903cbb__0[0xbU] = 0U;
    __Vtemp_h62903cbb__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h62903cbb__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                   >> 4U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h62903cbb__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 4U);
    __Vtemp_h62903cbb__0[0xfU] = 0U;
    __Vtemp_h62903cbb__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_h62903cbb__0[0x11U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h62903cbb__0[0x12U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xaU);
    __Vtemp_h62903cbb__0[0x13U] = 0U;
    __Vtemp_h62903cbb__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h62903cbb__0[0x15U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h62903cbb__0[0x16U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x10U);
    __Vtemp_h62903cbb__0[0x17U] = 0U;
    __Vtemp_h62903cbb__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h62903cbb__0[0x19U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h62903cbb__0[0x1aU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x16U);
    __Vtemp_h62903cbb__0[0x1bU] = 0U;
    __Vtemp_h62903cbb__0[0x1cU] = (((IData)(((0x2000000U 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                              ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                 << 0x1eU)
                                              : 0ULL)) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_28__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h62903cbb__0[0x1dU] = (((IData)(((0x2000000U 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                              ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                 << 0x1eU)
                                              : 0ULL)) 
                                    >> 0x1cU) | ((IData)(
                                                         (((0x2000000U 
                                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                                            ? 
                                                           ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                            << 0x1eU)
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 4U));
    bufp->fullWData(oldp+188,(__Vtemp_h62903cbb__0),960);
    __Vtemp_hbed1a62e__0[0U] = vlSelf->__VdfgTmp_h28c2c0c7__0[0U];
    __Vtemp_hbed1a62e__0[1U] = vlSelf->__VdfgTmp_h28c2c0c7__0[1U];
    __Vtemp_hbed1a62e__0[2U] = vlSelf->__VdfgTmp_h28c2c0c7__0[2U];
    __Vtemp_hbed1a62e__0[3U] = vlSelf->__VdfgTmp_h28c2c0c7__0[3U];
    __Vtemp_hbed1a62e__0[4U] = 0U;
    __Vtemp_hbed1a62e__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                 << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                                              << 0xeU));
    __Vtemp_hbed1a62e__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hbed1a62e__0[7U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0x10U);
    __Vtemp_hbed1a62e__0[8U] = 0U;
    __Vtemp_hbed1a62e__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod) 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_hbed1a62e__0[0xaU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod) 
                                   >> 0x16U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xaU));
    __Vtemp_hbed1a62e__0[0xbU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x16U);
    __Vtemp_hbed1a62e__0[0xcU] = 0U;
    __Vtemp_hbed1a62e__0[0xdU] = (((IData)(((0x2000000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                             ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                << 0x1eU)
                                             : 0ULL)) 
                                   << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_28__DOT___boothEncoder_io_neg) 
                                             << 2U));
    __Vtemp_hbed1a62e__0[0xeU] = (((IData)(((0x2000000U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                             ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                << 0x1eU)
                                             : 0ULL)) 
                                   >> 0x1cU) | ((IData)(
                                                        (((0x2000000U 
                                                           & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                                           ? 
                                                          ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                           << 0x1eU)
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                << 4U));
    bufp->fullWData(oldp+218,(__Vtemp_hbed1a62e__0),480);
    __Vtemp_h4fbe89fd__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                         << 0x3cU) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod))));
    __Vtemp_h4fbe89fd__0[1U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                        << 0x3cU) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                      >> 0x20U)));
    __Vtemp_h4fbe89fd__0[2U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                >> 2U);
    __Vtemp_h4fbe89fd__0[3U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_h4fbe89fd__0[4U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                >> 4U);
    __Vtemp_h4fbe89fd__0[5U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h4fbe89fd__0[6U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                >> 6U);
    __Vtemp_h4fbe89fd__0[7U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h4fbe89fd__0[8U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                >> 8U);
    __Vtemp_h4fbe89fd__0[9U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x14U));
    __Vtemp_h4fbe89fd__0[0xaU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0xaU);
    __Vtemp_h4fbe89fd__0[0xbU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_h4fbe89fd__0[0xcU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0xcU);
    __Vtemp_h4fbe89fd__0[0xdU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                   << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                << 0x10U));
    __Vtemp_h4fbe89fd__0[0xeU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                  >> 0xeU);
    __Vtemp_h4fbe89fd__0[0xfU] = ((((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                    ^ ((1U & ((IData)(
                                                      (0x40000U 
                                                       == 
                                                       (0x60000U 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                              | (IData)(
                                                        (0x20000U 
                                                         == 
                                                         (0x60000U 
                                                          & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))
                                        ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                        : ((1U & ((IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0xe0000U 
                                                            & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                                  | ((~ 
                                                      (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                       >> 0x11U)) 
                                                     & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                            ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                               << 1U)
                                            : 0U))) 
                                   << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                << 0xeU));
    __Vtemp_h4fbe89fd__0[0x10U] = (0x7fffU & (((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000U 
                                                               == 
                                                               (0x60000U 
                                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                                      | (IData)(
                                                                (0x20000U 
                                                                 == 
                                                                 (0x60000U 
                                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))
                                                   ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000U 
                                                                == 
                                                                (0xe0000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                                       | ((~ 
                                                           (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                            >> 0x11U)) 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                    << 1U)
                                                    : 0U))) 
                                              >> 0x10U));
    __Vtemp_h4fbe89fd__0[0x11U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                    << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h4fbe89fd__0[0x12U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                   >> 0x12U);
    __Vtemp_h4fbe89fd__0[0x13U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_h4fbe89fd__0[0x14U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                   >> 0x14U);
    __Vtemp_h4fbe89fd__0[0x15U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h4fbe89fd__0[0x16U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                   >> 0x16U);
    __Vtemp_h4fbe89fd__0[0x17U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 6U));
    __Vtemp_h4fbe89fd__0[0x18U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                   >> 0x18U);
    __Vtemp_h4fbe89fd__0[0x19U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h4fbe89fd__0[0x1aU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   >> 0x1aU);
    __Vtemp_h4fbe89fd__0[0x1bU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h4fbe89fd__0[0x1cU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                   >> 0x1cU);
    __Vtemp_h4fbe89fd__0[0x1dU] = 0U;
    bufp->fullWData(oldp+233,(__Vtemp_h4fbe89fd__0),960);
    __Vtemp_h7d0890c9__0[0U] = (IData)(vlSelf->__VdfgTmp_hef3c7486__0);
    __Vtemp_h7d0890c9__0[1U] = (IData)((vlSelf->__VdfgTmp_hef3c7486__0 
                                        >> 0x20U));
    __Vtemp_h7d0890c9__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    __Vtemp_h7d0890c9__0[3U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                >> 0x12U);
    __Vtemp_h7d0890c9__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                             << 0xaU));
    __Vtemp_h7d0890c9__0[5U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                >> 0x14U);
    __Vtemp_h7d0890c9__0[6U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_h7d0890c9__0[7U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                >> 0x16U);
    __Vtemp_h7d0890c9__0[8U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h7d0890c9__0[9U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                >> 0x18U);
    __Vtemp_h7d0890c9__0[0xaU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   << 6U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                             << 4U));
    __Vtemp_h7d0890c9__0[0xbU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                  >> 0x1aU);
    __Vtemp_h7d0890c9__0[0xcU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                   << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 2U));
    __Vtemp_h7d0890c9__0[0xdU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                  >> 0x1cU);
    __Vtemp_h7d0890c9__0[0xeU] = 0U;
    bufp->fullWData(oldp+263,(__Vtemp_h7d0890c9__0),480);
    __Vtemp_h1e51c69c__0[0U] = (IData)(vlSelf->__VdfgTmp_ha7933f88__0);
    __Vtemp_h1e51c69c__0[1U] = (IData)((vlSelf->__VdfgTmp_ha7933f88__0 
                                        >> 0x20U));
    __Vtemp_h1e51c69c__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                 << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                              << 0x14U));
    __Vtemp_h1e51c69c__0[3U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                >> 0xaU);
    __Vtemp_h1e51c69c__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h1e51c69c__0[5U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                >> 0xcU);
    __Vtemp_h1e51c69c__0[6U] = 0U;
    __Vtemp_h1e51c69c__0[7U] = 0U;
    bufp->fullWData(oldp+278,(__Vtemp_h1e51c69c__0),240);
    bufp->fullCData(oldp+286,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp),8);
    bufp->fullIData(oldp+287,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),28);
    bufp->fullIData(oldp+288,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+289,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),30);
    bufp->fullQData(oldp+290,(((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                               << 0x1eU)),60);
    bufp->fullIData(oldp+292,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_13_io_partial_prod),31);
    __Vtemp_h706c5f20__0[0U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod);
    __Vtemp_h706c5f20__0[1U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                        >> 0x20U));
    __Vtemp_h706c5f20__0[2U] = 0U;
    __Vtemp_h706c5f20__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h706c5f20__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h706c5f20__0[5U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                         >> 0x20U)) 
                                >> 6U);
    __Vtemp_h706c5f20__0[6U] = 0U;
    __Vtemp_h706c5f20__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h706c5f20__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h706c5f20__0[9U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0xcU);
    __Vtemp_h706c5f20__0[0xaU] = 0U;
    __Vtemp_h706c5f20__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_h706c5f20__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_h706c5f20__0[0xdU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x12U);
    __Vtemp_h706c5f20__0[0xeU] = 0U;
    __Vtemp_h706c5f20__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_h706c5f20__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h706c5f20__0[0x11U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U);
    __Vtemp_h706c5f20__0[0x12U] = 0U;
    __Vtemp_h706c5f20__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h706c5f20__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U));
    __Vtemp_h706c5f20__0[0x15U] = 0U;
    __Vtemp_h706c5f20__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h706c5f20__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h706c5f20__0[0x18U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 4U);
    __Vtemp_h706c5f20__0[0x19U] = 0U;
    __Vtemp_h706c5f20__0[0x1aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_h706c5f20__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h706c5f20__0[0x1cU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xaU);
    __Vtemp_h706c5f20__0[0x1dU] = 0U;
    __Vtemp_h706c5f20__0[0x1eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h706c5f20__0[0x1fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h706c5f20__0[0x20U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x10U);
    __Vtemp_h706c5f20__0[0x21U] = 0U;
    __Vtemp_h706c5f20__0[0x22U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h706c5f20__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h706c5f20__0[0x24U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x16U);
    __Vtemp_h706c5f20__0[0x25U] = 0U;
    __Vtemp_h706c5f20__0[0x26U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h706c5f20__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h706c5f20__0[0x28U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1cU);
    __Vtemp_h706c5f20__0[0x29U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h706c5f20__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h706c5f20__0[0x2bU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 2U);
    __Vtemp_h706c5f20__0[0x2cU] = 0U;
    __Vtemp_h706c5f20__0[0x2dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h706c5f20__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h706c5f20__0[0x2fU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 8U);
    __Vtemp_h706c5f20__0[0x30U] = 0U;
    __Vtemp_h706c5f20__0[0x31U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h706c5f20__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h706c5f20__0[0x33U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xeU);
    __Vtemp_h706c5f20__0[0x34U] = 0U;
    __Vtemp_h706c5f20__0[0x35U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_h706c5f20__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_h706c5f20__0[0x37U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x14U);
    __Vtemp_h706c5f20__0[0x38U] = 0U;
    bufp->fullWData(oldp+293,(__Vtemp_h706c5f20__0),1800);
    __Vtemp_hac1009e4__0[0U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod);
    __Vtemp_hac1009e4__0[1U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                        >> 0x20U));
    __Vtemp_hac1009e4__0[2U] = 0U;
    __Vtemp_hac1009e4__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_hac1009e4__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_hac1009e4__0[5U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                         >> 0x20U)) 
                                >> 6U);
    __Vtemp_hac1009e4__0[6U] = 0U;
    __Vtemp_hac1009e4__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_hac1009e4__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hac1009e4__0[9U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0xcU);
    __Vtemp_hac1009e4__0[0xaU] = 0U;
    __Vtemp_hac1009e4__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_hac1009e4__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_hac1009e4__0[0xdU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x12U);
    __Vtemp_hac1009e4__0[0xeU] = 0U;
    __Vtemp_hac1009e4__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_hac1009e4__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_hac1009e4__0[0x11U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U);
    __Vtemp_hac1009e4__0[0x12U] = 0U;
    __Vtemp_hac1009e4__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_hac1009e4__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 2U));
    __Vtemp_hac1009e4__0[0x15U] = 0U;
    __Vtemp_hac1009e4__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_hac1009e4__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_hac1009e4__0[0x18U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 4U);
    __Vtemp_hac1009e4__0[0x19U] = 0U;
    __Vtemp_hac1009e4__0[0x1aU] = 0U;
    bufp->fullWData(oldp+350,(__Vtemp_hac1009e4__0),840);
    __Vtemp_h754afc9a__0[0U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod);
    __Vtemp_h754afc9a__0[1U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                        >> 0x20U));
    __Vtemp_h754afc9a__0[2U] = 0U;
    __Vtemp_h754afc9a__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h754afc9a__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h754afc9a__0[5U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                         >> 0x20U)) 
                                >> 6U);
    __Vtemp_h754afc9a__0[6U] = 0U;
    __Vtemp_h754afc9a__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h754afc9a__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h754afc9a__0[9U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0xcU);
    __Vtemp_h754afc9a__0[0xaU] = 0U;
    __Vtemp_h754afc9a__0[0xbU] = 0U;
    bufp->fullWData(oldp+377,(__Vtemp_h754afc9a__0),360);
    __Vtemp_h8f513eb4__0[0U] = vlSelf->__VdfgTmp_hfbb865e1__0[0U];
    __Vtemp_h8f513eb4__0[1U] = vlSelf->__VdfgTmp_hfbb865e1__0[1U];
    __Vtemp_h8f513eb4__0[2U] = vlSelf->__VdfgTmp_hfbb865e1__0[2U];
    __Vtemp_h8f513eb4__0[3U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                << 0x1eU);
    __Vtemp_h8f513eb4__0[4U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod);
    __Vtemp_h8f513eb4__0[5U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                        >> 0x20U));
    __Vtemp_h8f513eb4__0[6U] = 0U;
    __Vtemp_h8f513eb4__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h8f513eb4__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h8f513eb4__0[9U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                         >> 0x20U)) 
                                >> 6U);
    __Vtemp_h8f513eb4__0[0xaU] = 0U;
    __Vtemp_h8f513eb4__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_h8f513eb4__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                   >> 0xcU) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_h8f513eb4__0[0xdU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0xcU);
    __Vtemp_h8f513eb4__0[0xeU] = 0U;
    bufp->fullWData(oldp+389,(__Vtemp_h8f513eb4__0),480);
    __Vtemp_h0840d99f__0[0U] = vlSelf->__VdfgTmp_hcda3cd59__0[0U];
    __Vtemp_h0840d99f__0[1U] = vlSelf->__VdfgTmp_hcda3cd59__0[1U];
    __Vtemp_h0840d99f__0[2U] = vlSelf->__VdfgTmp_hcda3cd59__0[2U];
    __Vtemp_h0840d99f__0[3U] = 0U;
    __Vtemp_h0840d99f__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h0840d99f__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h0840d99f__0[6U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0x18U);
    __Vtemp_h0840d99f__0[7U] = 0U;
    __Vtemp_h0840d99f__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h0840d99f__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h0840d99f__0[0xaU] = 0U;
    __Vtemp_h0840d99f__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h0840d99f__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   >> 4U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h0840d99f__0[0xdU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 4U);
    __Vtemp_h0840d99f__0[0xeU] = 0U;
    __Vtemp_h0840d99f__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                   << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    __Vtemp_h0840d99f__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h0840d99f__0[0x11U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xaU);
    __Vtemp_h0840d99f__0[0x12U] = 0U;
    __Vtemp_h0840d99f__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h0840d99f__0[0x14U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h0840d99f__0[0x15U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x10U);
    __Vtemp_h0840d99f__0[0x16U] = 0U;
    __Vtemp_h0840d99f__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h0840d99f__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h0840d99f__0[0x19U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x16U);
    __Vtemp_h0840d99f__0[0x1aU] = 0U;
    __Vtemp_h0840d99f__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h0840d99f__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h0840d99f__0[0x1dU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1cU);
    bufp->fullWData(oldp+404,(__Vtemp_h0840d99f__0),960);
    __Vtemp_h60336926__0[0U] = vlSelf->__VdfgTmp_hcda3cd59__0[0U];
    __Vtemp_h60336926__0[1U] = vlSelf->__VdfgTmp_hcda3cd59__0[1U];
    __Vtemp_h60336926__0[2U] = vlSelf->__VdfgTmp_hcda3cd59__0[2U];
    __Vtemp_h60336926__0[3U] = 0U;
    __Vtemp_h60336926__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h60336926__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h60336926__0[6U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0x18U);
    __Vtemp_h60336926__0[7U] = 0U;
    __Vtemp_h60336926__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h60336926__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h60336926__0[0xaU] = 0U;
    __Vtemp_h60336926__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h60336926__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                   >> 4U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h60336926__0[0xdU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 4U);
    __Vtemp_h60336926__0[0xeU] = 0U;
    bufp->fullWData(oldp+434,(__Vtemp_h60336926__0),480);
    __Vtemp_h7045d0b6__0[0U] = vlSelf->__VdfgTmp_hbcf125b5__0[0U];
    __Vtemp_h7045d0b6__0[1U] = vlSelf->__VdfgTmp_hbcf125b5__0[1U];
    __Vtemp_h7045d0b6__0[2U] = vlSelf->__VdfgTmp_hbcf125b5__0[2U];
    __Vtemp_h7045d0b6__0[3U] = 0U;
    __Vtemp_h7045d0b6__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                 << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 0xeU));
    __Vtemp_h7045d0b6__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h7045d0b6__0[6U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0x10U);
    __Vtemp_h7045d0b6__0[7U] = 0U;
    __Vtemp_h7045d0b6__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_h7045d0b6__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                 >> 0x16U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h7045d0b6__0[0xaU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x16U);
    __Vtemp_h7045d0b6__0[0xbU] = 0U;
    __Vtemp_h7045d0b6__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                   << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 2U));
    __Vtemp_h7045d0b6__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                   >> 0x1cU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 4U));
    __Vtemp_h7045d0b6__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x1cU);
    bufp->fullWData(oldp+449,(__Vtemp_h7045d0b6__0),480);
    __Vtemp_h5fd67438__0[0U] = vlSelf->__VdfgTmp_hbafd11bf__0[0U];
    __Vtemp_h5fd67438__0[1U] = vlSelf->__VdfgTmp_hbafd11bf__0[1U];
    __Vtemp_h5fd67438__0[2U] = vlSelf->__VdfgTmp_hbafd11bf__0[2U];
    __Vtemp_h5fd67438__0[3U] = 0U;
    __Vtemp_h5fd67438__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h5fd67438__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h5fd67438__0[6U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                         >> 0x20U)) 
                                >> 8U);
    __Vtemp_h5fd67438__0[7U] = 0U;
    __Vtemp_h5fd67438__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_h5fd67438__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h5fd67438__0[0xaU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0xeU);
    __Vtemp_h5fd67438__0[0xbU] = 0U;
    __Vtemp_h5fd67438__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 0xaU));
    __Vtemp_h5fd67438__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xcU));
    __Vtemp_h5fd67438__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x14U);
    __Vtemp_h5fd67438__0[0xfU] = 0U;
    __Vtemp_h5fd67438__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h5fd67438__0[0x11U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_h5fd67438__0[0x12U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1aU);
    __Vtemp_h5fd67438__0[0x13U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h5fd67438__0[0x14U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod);
    __Vtemp_h5fd67438__0[0x15U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                           >> 0x20U));
    __Vtemp_h5fd67438__0[0x16U] = 0U;
    __Vtemp_h5fd67438__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg) 
                                                 << 0x18U));
    __Vtemp_h5fd67438__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                    >> 6U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_h5fd67438__0[0x19U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 6U);
    __Vtemp_h5fd67438__0[0x1aU] = 0U;
    __Vtemp_h5fd67438__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h5fd67438__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h5fd67438__0[0x1dU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0xcU);
    bufp->fullWData(oldp+464,(__Vtemp_h5fd67438__0),960);
    __Vtemp_h19005271__0[0U] = vlSelf->__VdfgTmp_hbafd11bf__0[0U];
    __Vtemp_h19005271__0[1U] = vlSelf->__VdfgTmp_hbafd11bf__0[1U];
    __Vtemp_h19005271__0[2U] = vlSelf->__VdfgTmp_hbafd11bf__0[2U];
    __Vtemp_h19005271__0[3U] = 0U;
    __Vtemp_h19005271__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h19005271__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h19005271__0[6U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                         >> 0x20U)) 
                                >> 8U);
    __Vtemp_h19005271__0[7U] = 0U;
    __Vtemp_h19005271__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                              << 0x10U));
    __Vtemp_h19005271__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                 >> 0xeU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h19005271__0[0xaU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0xeU);
    __Vtemp_h19005271__0[0xbU] = 0U;
    __Vtemp_h19005271__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 0xaU));
    __Vtemp_h19005271__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xcU));
    __Vtemp_h19005271__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0x14U);
    bufp->fullWData(oldp+494,(__Vtemp_h19005271__0),480);
    __Vtemp_h0f4bb4eb__0[0U] = vlSelf->__VdfgTmp_h43d778ae__0[0U];
    __Vtemp_h0f4bb4eb__0[1U] = vlSelf->__VdfgTmp_h43d778ae__0[1U];
    __Vtemp_h0f4bb4eb__0[2U] = vlSelf->__VdfgTmp_h43d778ae__0[2U];
    __Vtemp_h0f4bb4eb__0[3U] = vlSelf->__VdfgTmp_h43d778ae__0[3U];
    __Vtemp_h0f4bb4eb__0[4U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                << 0x1eU);
    __Vtemp_h0f4bb4eb__0[5U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod);
    __Vtemp_h0f4bb4eb__0[6U] = (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                        >> 0x20U));
    __Vtemp_h0f4bb4eb__0[7U] = 0U;
    __Vtemp_h0f4bb4eb__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h0f4bb4eb__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h0f4bb4eb__0[0xaU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 6U);
    __Vtemp_h0f4bb4eb__0[0xbU] = 0U;
    __Vtemp_h0f4bb4eb__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_h0f4bb4eb__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                   >> 0xcU) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_h0f4bb4eb__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 0xcU);
    bufp->fullWData(oldp+509,(__Vtemp_h0f4bb4eb__0),480);
    __Vtemp_h43949df8__0[0U] = vlSelf->__VdfgTmp_h67d86824__0[0U];
    __Vtemp_h43949df8__0[1U] = vlSelf->__VdfgTmp_h67d86824__0[1U];
    __Vtemp_h43949df8__0[2U] = vlSelf->__VdfgTmp_h67d86824__0[2U];
    __Vtemp_h43949df8__0[3U] = vlSelf->__VdfgTmp_h67d86824__0[3U];
    __Vtemp_h43949df8__0[4U] = 0U;
    __Vtemp_h43949df8__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h43949df8__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h43949df8__0[7U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                         >> 0x20U)) 
                                >> 0x18U);
    __Vtemp_h43949df8__0[8U] = 0U;
    __Vtemp_h43949df8__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg));
    __Vtemp_h43949df8__0[0xaU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                   >> 0x1eU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 2U));
    __Vtemp_h43949df8__0[0xbU] = 0U;
    __Vtemp_h43949df8__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h43949df8__0[0xdU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                   >> 4U) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h43949df8__0[0xeU] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                           >> 0x20U)) 
                                  >> 4U);
    bufp->fullWData(oldp+524,(__Vtemp_h43949df8__0),480);
    __Vtemp_h7ec81ae8__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                         << 0x3cU) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod))));
    __Vtemp_h7ec81ae8__0[1U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                        << 0x3cU) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                      >> 0x20U)));
    __Vtemp_h7ec81ae8__0[2U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                >> 2U);
    __Vtemp_h7ec81ae8__0[3U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_h7ec81ae8__0[4U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                >> 4U);
    __Vtemp_h7ec81ae8__0[5U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h7ec81ae8__0[6U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                >> 6U);
    __Vtemp_h7ec81ae8__0[7U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                              << 0x16U));
    __Vtemp_h7ec81ae8__0[8U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                >> 8U);
    __Vtemp_h7ec81ae8__0[9U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x14U));
    __Vtemp_h7ec81ae8__0[0xaU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0xaU);
    __Vtemp_h7ec81ae8__0[0xbU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                   << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x12U));
    __Vtemp_h7ec81ae8__0[0xcU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0xcU);
    __Vtemp_h7ec81ae8__0[0xdU] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                   << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                << 0x10U));
    __Vtemp_h7ec81ae8__0[0xeU] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                  >> 0xeU);
    bufp->fullWData(oldp+539,(__Vtemp_h7ec81ae8__0),480);
    __Vtemp_h1c4ca0ea__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                         << 0x3cU) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod))));
    __Vtemp_h1c4ca0ea__0[1U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                        << 0x3cU) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                      >> 0x20U)));
    __Vtemp_h1c4ca0ea__0[2U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                >> 2U);
    __Vtemp_h1c4ca0ea__0[3U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_h1c4ca0ea__0[4U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                >> 4U);
    __Vtemp_h1c4ca0ea__0[5U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h1c4ca0ea__0[6U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                >> 6U);
    __Vtemp_h1c4ca0ea__0[7U] = 0U;
    bufp->fullWData(oldp+554,(__Vtemp_h1c4ca0ea__0),240);
    __Vtemp_h7ad596e8__0[0U] = (IData)(vlSelf->__VdfgTmp_h5ab23d26__0);
    __Vtemp_h7ad596e8__0[1U] = (IData)((vlSelf->__VdfgTmp_h5ab23d26__0 
                                        >> 0x20U));
    __Vtemp_h7ad596e8__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 6U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                           << 4U));
    __Vtemp_h7ad596e8__0[3U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                >> 0x1aU);
    __Vtemp_h7ad596e8__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                 << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                           << 2U));
    __Vtemp_h7ad596e8__0[5U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                >> 0x1cU);
    __Vtemp_h7ad596e8__0[6U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    __Vtemp_h7ad596e8__0[7U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                >> 0x1eU);
    bufp->fullWData(oldp+562,(__Vtemp_h7ad596e8__0),240);
    __Vtemp_h74cead56__0[0U] = (IData)(vlSelf->__VdfgTmp_hef3c7486__0);
    __Vtemp_h74cead56__0[1U] = (IData)((vlSelf->__VdfgTmp_hef3c7486__0 
                                        >> 0x20U));
    __Vtemp_h74cead56__0[2U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    __Vtemp_h74cead56__0[3U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                >> 0x12U);
    __Vtemp_h74cead56__0[4U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                             << 0xaU));
    __Vtemp_h74cead56__0[5U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                >> 0x14U);
    __Vtemp_h74cead56__0[6U] = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_h74cead56__0[7U] = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                >> 0x16U);
    bufp->fullWData(oldp+570,(__Vtemp_h74cead56__0),240);
    bufp->fullCData(oldp+578,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp),8);
    bufp->fullIData(oldp+579,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),28);
    bufp->fullIData(oldp+580,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+581,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),30);
    bufp->fullQData(oldp+582,((0xfffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                   >> 0x1eU))))),60);
    bufp->fullCData(oldp+584,((7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                      << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1fU)))),3);
    bufp->fullBit(oldp+585,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+586,(((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                            << 1U) 
                                           | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                              >> 0x1fU)))) 
                             | (7U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              << 1U) 
                                             | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1fU)))))));
    bufp->fullBit(oldp+587,((1U & (((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1fU)) 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                   | ((~ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                         >> 0x1fU))))));
    bufp->fullBit(oldp+588,((1U & (((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                     >> 0x1fU) & (1U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+589,((6U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                     >> 0x1dU))),3);
    bufp->fullBit(oldp+590,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+591,((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+592,((1U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+593,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+594,((1U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+595,((1U & (~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+596,((1U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                   >> 0x19U))));
    bufp->fullCData(oldp+597,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+598,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+599,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 1U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 1U))))));
    bufp->fullBit(oldp+600,((1U & ((IData)((4U == (6U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((2U == 
                                              (6U & 
                                               vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+601,((1U & ((IData)((6U == (0xeU 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 1U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+602,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x13U))),3);
    bufp->fullBit(oldp+603,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+604,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x13U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x13U))))));
    bufp->fullBit(oldp+605,((1U & ((IData)((0x100000U 
                                            == (0x180000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x80000U 
                                              == (0x180000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+606,((1U & ((IData)((0x180000U 
                                            == (0x380000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x13U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+607,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x15U))),3);
    bufp->fullBit(oldp+608,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+609,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x15U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x15U))))));
    bufp->fullBit(oldp+610,((1U & ((IData)((0x400000U 
                                            == (0x600000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x200000U 
                                              == (0x600000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+611,((1U & ((IData)((0x600000U 
                                            == (0xe00000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x15U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+612,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+613,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+614,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x17U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+615,((1U & ((IData)((0x1000000U 
                                            == (0x1800000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x800000U 
                                              == (0x1800000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+616,((1U & ((IData)((0x1800000U 
                                            == (0x3800000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x17U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+617,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+618,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+619,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x19U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x19U))))));
    bufp->fullBit(oldp+620,((1U & ((IData)((0x4000000U 
                                            == (0x6000000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+621,((1U & ((IData)((0x6000000U 
                                            == (0xe000000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x19U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+622,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x1bU))),3);
    bufp->fullBit(oldp+623,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+624,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x1bU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x1bU))))));
    bufp->fullBit(oldp+625,((1U & ((IData)((0x10000000U 
                                            == (0x18000000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x8000000U 
                                              == (0x18000000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+626,((1U & ((IData)((0x18000000U 
                                            == (0x38000000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x1bU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+627,((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                               >> 0x1dU)),3);
    bufp->fullBit(oldp+628,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+629,(((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x1dU)) | (7U 
                                                   == 
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x1dU)))));
    bufp->fullBit(oldp+630,((1U & ((IData)((0x40000000U 
                                            == (0x60000000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x20000000U 
                                              == (0x60000000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+631,((1U & ((IData)((0x60000000U 
                                            == (0xe0000000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x1dU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+632,((7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                      << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1fU)))),3);
    bufp->fullBit(oldp+633,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+634,(((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                            << 1U) 
                                           | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              >> 0x1fU)))) 
                             | (7U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                              << 1U) 
                                             | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1fU)))))));
    bufp->fullBit(oldp+635,((1U & (((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1fU)) 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                   | ((~ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                         >> 0x1fU))))));
    bufp->fullBit(oldp+636,((1U & (((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x1fU) & (1U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+637,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+638,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+639,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 1U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 1U))))));
    bufp->fullBit(oldp+640,((1U & ((IData)((4U == (6U 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((2U == 
                                              (6U & 
                                               vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+641,((1U & ((IData)((6U == (0xeU 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 1U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+642,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 3U))),3);
    bufp->fullBit(oldp+643,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+644,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 3U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 3U))))));
    bufp->fullBit(oldp+645,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+646,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 3U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+647,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+648,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+649,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 5U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 5U))))));
    bufp->fullBit(oldp+650,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+651,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 5U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+652,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 3U))),3);
    bufp->fullBit(oldp+653,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+654,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 3U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 3U))))));
    bufp->fullBit(oldp+655,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+656,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 3U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+657,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 7U))),3);
    bufp->fullBit(oldp+658,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+659,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 7U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 7U))))));
    bufp->fullBit(oldp+660,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+661,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 7U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+662,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 9U))),3);
    bufp->fullBit(oldp+663,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+664,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 9U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 9U))))));
    bufp->fullBit(oldp+665,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+666,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 9U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+667,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+668,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+669,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xbU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0xbU))))));
    bufp->fullBit(oldp+670,((1U & ((IData)((0x1000U 
                                            == (0x1800U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x800U 
                                              == (0x1800U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+671,((1U & ((IData)((0x1800U 
                                            == (0x3800U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0xbU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+672,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0xdU))),3);
    bufp->fullBit(oldp+673,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+674,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xdU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0xdU))))));
    bufp->fullBit(oldp+675,((1U & ((IData)((0x4000U 
                                            == (0x6000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+676,((1U & ((IData)((0x6000U 
                                            == (0xe000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0xdU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+677,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0xfU))),3);
    bufp->fullBit(oldp+678,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+679,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0xfU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0xfU))))));
    bufp->fullBit(oldp+680,((1U & ((IData)((0x10000U 
                                            == (0x18000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x8000U 
                                              == (0x18000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+681,((1U & ((IData)((0x18000U 
                                            == (0x38000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+682,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x11U))),3);
    bufp->fullBit(oldp+683,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+684,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x11U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0x11U))))));
    bufp->fullBit(oldp+685,((1U & ((IData)((0x40000U 
                                            == (0x60000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x20000U 
                                              == (0x60000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+686,((1U & ((IData)((0x60000U 
                                            == (0xe0000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0x11U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+687,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x13U))),3);
    bufp->fullBit(oldp+688,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+689,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x13U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0x13U))))));
    bufp->fullBit(oldp+690,((1U & ((IData)((0x100000U 
                                            == (0x180000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x80000U 
                                              == (0x180000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+691,((1U & ((IData)((0x180000U 
                                            == (0x380000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0x13U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+692,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x15U))),3);
    bufp->fullBit(oldp+693,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+694,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x15U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0x15U))))));
    bufp->fullBit(oldp+695,((1U & ((IData)((0x400000U 
                                            == (0x600000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x200000U 
                                              == (0x600000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+696,((1U & ((IData)((0x600000U 
                                            == (0xe00000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0x15U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+697,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+698,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_28__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+699,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                           >> 0x17U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+700,((1U & ((IData)((0x1000000U 
                                            == (0x1800000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | (IData)((0x800000U 
                                              == (0x1800000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])))))));
    bufp->fullBit(oldp+701,((1U & ((IData)((0x1800000U 
                                            == (0x3800000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                          >> 0x17U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_28__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+702,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+703,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+704,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 5U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 5U))))));
    bufp->fullBit(oldp+705,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+706,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 5U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+707,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 7U))),3);
    bufp->fullBit(oldp+708,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+709,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 7U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 7U))))));
    bufp->fullBit(oldp+710,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+711,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 7U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+712,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 9U))),3);
    bufp->fullBit(oldp+713,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+714,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 9U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 9U))))));
    bufp->fullBit(oldp+715,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+716,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 9U)) & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+717,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+718,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+719,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xbU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0xbU))))));
    bufp->fullBit(oldp+720,((1U & ((IData)((0x1000U 
                                            == (0x1800U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x800U 
                                              == (0x1800U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+721,((1U & ((IData)((0x1800U 
                                            == (0x3800U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0xbU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+722,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0xdU))),3);
    bufp->fullBit(oldp+723,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+724,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xdU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0xdU))))));
    bufp->fullBit(oldp+725,((1U & ((IData)((0x4000U 
                                            == (0x6000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+726,((1U & ((IData)((0x6000U 
                                            == (0xe000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0xdU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+727,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0xfU))),3);
    bufp->fullBit(oldp+728,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+729,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0xfU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0xfU))))));
    bufp->fullBit(oldp+730,((1U & ((IData)((0x10000U 
                                            == (0x18000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x8000U 
                                              == (0x18000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+731,((1U & ((IData)((0x18000U 
                                            == (0x38000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+732,((7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                     >> 0x11U))),3);
    bufp->fullBit(oldp+733,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+734,(((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x11U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x11U))))));
    bufp->fullBit(oldp+735,((1U & ((IData)((0x40000U 
                                            == (0x60000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | (IData)((0x20000U 
                                              == (0x60000U 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))));
    bufp->fullBit(oldp+736,((1U & ((IData)((0x60000U 
                                            == (0xe0000U 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                   | ((~ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                          >> 0x11U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullQData(oldp+737,((0xfffffffffffffffULL 
                               & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))),60);
    bufp->fullWData(oldp+739,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full),90);
    bufp->fullWData(oldp+742,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full),90);
    bufp->fullWData(oldp+745,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full),90);
    bufp->fullCData(oldp+748,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 3U))),3);
    bufp->fullBit(oldp+749,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+750,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 3U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 3U))))));
    bufp->fullBit(oldp+751,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+752,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 3U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+753,((6U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 1U))),3);
    bufp->fullBit(oldp+754,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+755,((0U == (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 2U)))));
    bufp->fullBit(oldp+756,((1U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                   >> 2U))));
    bufp->fullBit(oldp+757,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+758,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 5U))),3);
    bufp->fullBit(oldp+759,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+760,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 5U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 5U))))));
    bufp->fullBit(oldp+761,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+762,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 5U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+763,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+764,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+765,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x17U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+766,((1U & ((IData)((0x1000000U 
                                            == (0x1800000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x800000U 
                                              == (0x1800000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+767,((1U & ((IData)((0x1800000U 
                                            == (0x3800000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0x17U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+768,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+769,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+770,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x19U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0x19U))))));
    bufp->fullBit(oldp+771,((1U & ((IData)((0x4000000U 
                                            == (0x6000000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+772,((1U & ((IData)((0x6000000U 
                                            == (0xe000000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0x19U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+773,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code),3);
    bufp->fullBit(oldp+774,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+775,(((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                             | (7U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)))));
    bufp->fullBit(oldp+776,((1U & ((IData)((0x10000000U 
                                            == (0x18000000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x8000000U 
                                              == (0x18000000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullCData(oldp+777,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 7U))),3);
    bufp->fullBit(oldp+778,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+779,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 7U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 7U))))));
    bufp->fullBit(oldp+780,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+781,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 7U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+782,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 9U))),3);
    bufp->fullBit(oldp+783,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+784,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 9U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 9U))))));
    bufp->fullBit(oldp+785,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+786,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 9U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+787,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+788,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+789,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xbU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0xbU))))));
    bufp->fullBit(oldp+790,((1U & ((IData)((0x1000U 
                                            == (0x1800U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x800U 
                                              == (0x1800U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+791,((1U & ((IData)((0x1800U 
                                            == (0x3800U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0xbU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+792,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0xdU))),3);
    bufp->fullBit(oldp+793,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+794,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xdU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0xdU))))));
    bufp->fullBit(oldp+795,((1U & ((IData)((0x4000U 
                                            == (0x6000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+796,((1U & ((IData)((0x6000U 
                                            == (0xe000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0xdU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+797,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0xfU))),3);
    bufp->fullBit(oldp+798,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+799,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0xfU))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0xfU))))));
    bufp->fullBit(oldp+800,((1U & ((IData)((0x10000U 
                                            == (0x18000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x8000U 
                                              == (0x18000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+801,((1U & ((IData)((0x18000U 
                                            == (0x38000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+802,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x11U))),3);
    bufp->fullBit(oldp+803,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+804,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x11U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0x11U))))));
    bufp->fullBit(oldp+805,((1U & ((IData)((0x40000U 
                                            == (0x60000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x20000U 
                                              == (0x60000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+806,((1U & ((IData)((0x60000U 
                                            == (0xe0000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0x11U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+807,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x13U))),3);
    bufp->fullBit(oldp+808,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+809,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x13U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0x13U))))));
    bufp->fullBit(oldp+810,((1U & ((IData)((0x100000U 
                                            == (0x180000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x80000U 
                                              == (0x180000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+811,((1U & ((IData)((0x180000U 
                                            == (0x380000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0x13U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+812,((7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                     >> 0x15U))),3);
    bufp->fullBit(oldp+813,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+814,(((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x15U))) 
                             | (7U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                             >> 0x15U))))));
    bufp->fullBit(oldp+815,((1U & ((IData)((0x400000U 
                                            == (0x600000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | (IData)((0x200000U 
                                              == (0x600000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))));
    bufp->fullBit(oldp+816,((1U & ((IData)((0x600000U 
                                            == (0xe00000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                   | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 0x15U)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+817,((0x1fU & ((IData)(1U) 
                                        + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullCData(oldp+818,((0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+819,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+824,((0x1fU & ((IData)(1U) 
                                        + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullCData(oldp+825,((0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+826,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+831,(((0x1ffffffeU & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                                        >> 0x22U)) 
                                               << 1U)) 
                               | (0U != (0x1ffffffffULL 
                                         & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))),29);
    bufp->fullCData(oldp+832,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+833,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+845,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o),62);
    bufp->fullIData(oldp+847,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align),30);
    bufp->fullIData(oldp+848,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align),30);
    bufp->fullBit(oldp+849,(vlSelf->PvuTop__DOT__add__DOT__io_overflow));
    bufp->fullBit(oldp+850,(((IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow) 
                             & (0U != (0x3fffffffU 
                                       & vlSelf->PvuTop__DOT__add__DOT__sum)))));
    bufp->fullIData(oldp+851,(vlSelf->PvuTop__DOT__add__DOT__sum),31);
    bufp->fullBit(oldp+852,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
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
    bufp->fullQData(oldp+853,((0xfffffffffffffffULL 
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
    bufp->fullQData(oldp+855,((0xfffffffffffffffULL 
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
    bufp->fullWData(oldp+857,(__Vtemp_he287537c__0),120);
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
    bufp->fullWData(oldp+861,(__Vtemp_hc427fdde__0),120);
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
    bufp->fullWData(oldp+865,(__Vtemp_heb380a01__0),125);
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
    bufp->fullWData(oldp+869,(__Vtemp_h2082a094__0),125);
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
    bufp->fullWData(oldp+873,(__Vtemp_hb9925c6b__0),500);
    bufp->fullWData(oldp+889,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),124);
    bufp->fullWData(oldp+893,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),124);
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
    bufp->fullWData(oldp+897,(__Vtemp_haa669efa__0),496);
    bufp->fullWData(oldp+913,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o),123);
    bufp->fullWData(oldp+917,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o),123);
    __Vtemp_hf567ea9d__0[0U] = vlSelf->__VdfgTmp_h6cb28b22__0[0U];
    __Vtemp_hf567ea9d__0[1U] = vlSelf->__VdfgTmp_h6cb28b22__0[1U];
    __Vtemp_hf567ea9d__0[2U] = vlSelf->__VdfgTmp_h6cb28b22__0[2U];
    __Vtemp_hf567ea9d__0[3U] = ((vlSelf->__VdfgTmp_hdef31e71__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h6cb28b22__0[3U]);
    __Vtemp_hf567ea9d__0[4U] = ((vlSelf->__VdfgTmp_hdef31e71__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_hdef31e71__0[1U] 
                                           << 0x1bU));
    __Vtemp_hf567ea9d__0[5U] = ((vlSelf->__VdfgTmp_hdef31e71__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_hdef31e71__0[2U] 
                                           << 0x1bU));
    __Vtemp_hf567ea9d__0[6U] = ((vlSelf->__VdfgTmp_hdef31e71__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_hdef31e71__0[3U] 
                                           << 0x1bU));
    __Vtemp_hf567ea9d__0[7U] = ((vlSelf->__VdfgTmp_hee0a9656__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_hdef31e71__0[3U] 
                                              >> 5U));
    __Vtemp_hf567ea9d__0[8U] = ((vlSelf->__VdfgTmp_hee0a9656__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hee0a9656__0[1U] 
                                             << 0x16U));
    __Vtemp_hf567ea9d__0[9U] = ((vlSelf->__VdfgTmp_hee0a9656__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hee0a9656__0[2U] 
                                             << 0x16U));
    __Vtemp_hf567ea9d__0[0xaU] = ((vlSelf->__VdfgTmp_hee0a9656__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_hee0a9656__0[3U] 
                                               << 0x16U));
    __Vtemp_hf567ea9d__0[0xbU] = ((vlSelf->__VdfgTmp_hb7d827fe__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_hee0a9656__0[3U] 
                                                >> 0xaU));
    __Vtemp_hf567ea9d__0[0xcU] = ((vlSelf->__VdfgTmp_hb7d827fe__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hb7d827fe__0[1U] 
                                               << 0x11U));
    __Vtemp_hf567ea9d__0[0xdU] = ((vlSelf->__VdfgTmp_hb7d827fe__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hb7d827fe__0[2U] 
                                               << 0x11U));
    __Vtemp_hf567ea9d__0[0xeU] = ((vlSelf->__VdfgTmp_hb7d827fe__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hb7d827fe__0[3U] 
                                               << 0x11U));
    __Vtemp_hf567ea9d__0[0xfU] = (vlSelf->__VdfgTmp_hb7d827fe__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+921,(__Vtemp_hf567ea9d__0),492);
    __Vtemp_h1c3e9fd5__1[0U] = vlSelf->__VdfgTmp_h6cb28b22__0[0U];
    __Vtemp_h1c3e9fd5__1[1U] = vlSelf->__VdfgTmp_h6cb28b22__0[1U];
    __Vtemp_h1c3e9fd5__1[2U] = vlSelf->__VdfgTmp_h6cb28b22__0[2U];
    __Vtemp_h1c3e9fd5__1[3U] = vlSelf->__VdfgTmp_h6cb28b22__0[3U];
    bufp->fullWData(oldp+937,(__Vtemp_h1c3e9fd5__1),122);
    __Vtemp_hd2a87b9c__1[0U] = vlSelf->__VdfgTmp_hdef31e71__0[0U];
    __Vtemp_hd2a87b9c__1[1U] = vlSelf->__VdfgTmp_hdef31e71__0[1U];
    __Vtemp_hd2a87b9c__1[2U] = vlSelf->__VdfgTmp_hdef31e71__0[2U];
    __Vtemp_hd2a87b9c__1[3U] = vlSelf->__VdfgTmp_hdef31e71__0[3U];
    bufp->fullWData(oldp+941,(__Vtemp_hd2a87b9c__1),122);
    __Vtemp_h3021675c__1[0U] = vlSelf->__VdfgTmp_hee0a9656__0[0U];
    __Vtemp_h3021675c__1[1U] = vlSelf->__VdfgTmp_hee0a9656__0[1U];
    __Vtemp_h3021675c__1[2U] = vlSelf->__VdfgTmp_hee0a9656__0[2U];
    __Vtemp_h3021675c__1[3U] = vlSelf->__VdfgTmp_hee0a9656__0[3U];
    bufp->fullWData(oldp+945,(__Vtemp_h3021675c__1),122);
    __Vtemp_hd1689825__1[0U] = vlSelf->__VdfgTmp_hb7d827fe__0[0U];
    __Vtemp_hd1689825__1[1U] = vlSelf->__VdfgTmp_hb7d827fe__0[1U];
    __Vtemp_hd1689825__1[2U] = vlSelf->__VdfgTmp_hb7d827fe__0[2U];
    __Vtemp_hd1689825__1[3U] = vlSelf->__VdfgTmp_hb7d827fe__0[3U];
    bufp->fullWData(oldp+949,(__Vtemp_hd1689825__1),122);
    bufp->fullWData(oldp+953,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o),123);
    bufp->fullWData(oldp+957,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o),123);
    __Vtemp_h11e7a323__0[0U] = vlSelf->__VdfgTmp_h35346a69__0[0U];
    __Vtemp_h11e7a323__0[1U] = vlSelf->__VdfgTmp_h35346a69__0[1U];
    __Vtemp_h11e7a323__0[2U] = vlSelf->__VdfgTmp_h35346a69__0[2U];
    __Vtemp_h11e7a323__0[3U] = ((vlSelf->__VdfgTmp_ha9cd07d3__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h35346a69__0[3U]);
    __Vtemp_h11e7a323__0[4U] = ((vlSelf->__VdfgTmp_ha9cd07d3__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_ha9cd07d3__0[1U] 
                                           << 0x1bU));
    __Vtemp_h11e7a323__0[5U] = ((vlSelf->__VdfgTmp_ha9cd07d3__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_ha9cd07d3__0[2U] 
                                           << 0x1bU));
    __Vtemp_h11e7a323__0[6U] = ((vlSelf->__VdfgTmp_ha9cd07d3__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_ha9cd07d3__0[3U] 
                                           << 0x1bU));
    __Vtemp_h11e7a323__0[7U] = ((vlSelf->__VdfgTmp_hd1612ac3__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_ha9cd07d3__0[3U] 
                                              >> 5U));
    __Vtemp_h11e7a323__0[8U] = ((vlSelf->__VdfgTmp_hd1612ac3__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hd1612ac3__0[1U] 
                                             << 0x16U));
    __Vtemp_h11e7a323__0[9U] = ((vlSelf->__VdfgTmp_hd1612ac3__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hd1612ac3__0[2U] 
                                             << 0x16U));
    __Vtemp_h11e7a323__0[0xaU] = ((vlSelf->__VdfgTmp_hd1612ac3__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_hd1612ac3__0[3U] 
                                               << 0x16U));
    __Vtemp_h11e7a323__0[0xbU] = ((vlSelf->__VdfgTmp_h829f4592__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_hd1612ac3__0[3U] 
                                                >> 0xaU));
    __Vtemp_h11e7a323__0[0xcU] = ((vlSelf->__VdfgTmp_h829f4592__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h829f4592__0[1U] 
                                               << 0x11U));
    __Vtemp_h11e7a323__0[0xdU] = ((vlSelf->__VdfgTmp_h829f4592__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h829f4592__0[2U] 
                                               << 0x11U));
    __Vtemp_h11e7a323__0[0xeU] = ((vlSelf->__VdfgTmp_h829f4592__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h829f4592__0[3U] 
                                               << 0x11U));
    __Vtemp_h11e7a323__0[0xfU] = (vlSelf->__VdfgTmp_h829f4592__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+961,(__Vtemp_h11e7a323__0),492);
    __Vtemp_h40185b32__1[0U] = vlSelf->__VdfgTmp_h35346a69__0[0U];
    __Vtemp_h40185b32__1[1U] = vlSelf->__VdfgTmp_h35346a69__0[1U];
    __Vtemp_h40185b32__1[2U] = vlSelf->__VdfgTmp_h35346a69__0[2U];
    __Vtemp_h40185b32__1[3U] = vlSelf->__VdfgTmp_h35346a69__0[3U];
    bufp->fullWData(oldp+977,(__Vtemp_h40185b32__1),122);
    __Vtemp_h2c1c2ac0__1[0U] = vlSelf->__VdfgTmp_ha9cd07d3__0[0U];
    __Vtemp_h2c1c2ac0__1[1U] = vlSelf->__VdfgTmp_ha9cd07d3__0[1U];
    __Vtemp_h2c1c2ac0__1[2U] = vlSelf->__VdfgTmp_ha9cd07d3__0[2U];
    __Vtemp_h2c1c2ac0__1[3U] = vlSelf->__VdfgTmp_ha9cd07d3__0[3U];
    bufp->fullWData(oldp+981,(__Vtemp_h2c1c2ac0__1),122);
    __Vtemp_hc1e7894e__1[0U] = vlSelf->__VdfgTmp_hd1612ac3__0[0U];
    __Vtemp_hc1e7894e__1[1U] = vlSelf->__VdfgTmp_hd1612ac3__0[1U];
    __Vtemp_hc1e7894e__1[2U] = vlSelf->__VdfgTmp_hd1612ac3__0[2U];
    __Vtemp_hc1e7894e__1[3U] = vlSelf->__VdfgTmp_hd1612ac3__0[3U];
    bufp->fullWData(oldp+985,(__Vtemp_hc1e7894e__1),122);
    __Vtemp_h53161dfe__1[0U] = vlSelf->__VdfgTmp_h829f4592__0[0U];
    __Vtemp_h53161dfe__1[1U] = vlSelf->__VdfgTmp_h829f4592__0[1U];
    __Vtemp_h53161dfe__1[2U] = vlSelf->__VdfgTmp_h829f4592__0[2U];
    __Vtemp_h53161dfe__1[3U] = vlSelf->__VdfgTmp_h829f4592__0[3U];
    bufp->fullWData(oldp+989,(__Vtemp_h53161dfe__1),122);
    bufp->fullWData(oldp+993,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),124);
    bufp->fullWData(oldp+997,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),124);
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
    bufp->fullWData(oldp+1001,(__Vtemp_hfa618b5e__0),496);
    bufp->fullWData(oldp+1017,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o),123);
    bufp->fullWData(oldp+1021,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o),123);
    __Vtemp_h9f5098ab__0[0U] = vlSelf->__VdfgTmp_h8e523818__0[0U];
    __Vtemp_h9f5098ab__0[1U] = vlSelf->__VdfgTmp_h8e523818__0[1U];
    __Vtemp_h9f5098ab__0[2U] = vlSelf->__VdfgTmp_h8e523818__0[2U];
    __Vtemp_h9f5098ab__0[3U] = ((vlSelf->__VdfgTmp_h024c0c7f__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h8e523818__0[3U]);
    __Vtemp_h9f5098ab__0[4U] = ((vlSelf->__VdfgTmp_h024c0c7f__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h024c0c7f__0[1U] 
                                           << 0x1bU));
    __Vtemp_h9f5098ab__0[5U] = ((vlSelf->__VdfgTmp_h024c0c7f__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h024c0c7f__0[2U] 
                                           << 0x1bU));
    __Vtemp_h9f5098ab__0[6U] = ((vlSelf->__VdfgTmp_h024c0c7f__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_h024c0c7f__0[3U] 
                                           << 0x1bU));
    __Vtemp_h9f5098ab__0[7U] = ((vlSelf->__VdfgTmp_h5b14d969__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_h024c0c7f__0[3U] 
                                              >> 5U));
    __Vtemp_h9f5098ab__0[8U] = ((vlSelf->__VdfgTmp_h5b14d969__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_h5b14d969__0[1U] 
                                             << 0x16U));
    __Vtemp_h9f5098ab__0[9U] = ((vlSelf->__VdfgTmp_h5b14d969__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_h5b14d969__0[2U] 
                                             << 0x16U));
    __Vtemp_h9f5098ab__0[0xaU] = ((vlSelf->__VdfgTmp_h5b14d969__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_h5b14d969__0[3U] 
                                               << 0x16U));
    __Vtemp_h9f5098ab__0[0xbU] = ((vlSelf->__VdfgTmp_h9d524e68__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_h5b14d969__0[3U] 
                                                >> 0xaU));
    __Vtemp_h9f5098ab__0[0xcU] = ((vlSelf->__VdfgTmp_h9d524e68__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h9d524e68__0[1U] 
                                               << 0x11U));
    __Vtemp_h9f5098ab__0[0xdU] = ((vlSelf->__VdfgTmp_h9d524e68__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h9d524e68__0[2U] 
                                               << 0x11U));
    __Vtemp_h9f5098ab__0[0xeU] = ((vlSelf->__VdfgTmp_h9d524e68__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_h9d524e68__0[3U] 
                                               << 0x11U));
    __Vtemp_h9f5098ab__0[0xfU] = (vlSelf->__VdfgTmp_h9d524e68__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+1025,(__Vtemp_h9f5098ab__0),492);
    __Vtemp_hece6169c__1[0U] = vlSelf->__VdfgTmp_h8e523818__0[0U];
    __Vtemp_hece6169c__1[1U] = vlSelf->__VdfgTmp_h8e523818__0[1U];
    __Vtemp_hece6169c__1[2U] = vlSelf->__VdfgTmp_h8e523818__0[2U];
    __Vtemp_hece6169c__1[3U] = vlSelf->__VdfgTmp_h8e523818__0[3U];
    bufp->fullWData(oldp+1041,(__Vtemp_hece6169c__1),122);
    __Vtemp_h236d3c48__1[0U] = vlSelf->__VdfgTmp_h024c0c7f__0[0U];
    __Vtemp_h236d3c48__1[1U] = vlSelf->__VdfgTmp_h024c0c7f__0[1U];
    __Vtemp_h236d3c48__1[2U] = vlSelf->__VdfgTmp_h024c0c7f__0[2U];
    __Vtemp_h236d3c48__1[3U] = vlSelf->__VdfgTmp_h024c0c7f__0[3U];
    bufp->fullWData(oldp+1045,(__Vtemp_h236d3c48__1),122);
    __Vtemp_ha0d41819__1[0U] = vlSelf->__VdfgTmp_h5b14d969__0[0U];
    __Vtemp_ha0d41819__1[1U] = vlSelf->__VdfgTmp_h5b14d969__0[1U];
    __Vtemp_ha0d41819__1[2U] = vlSelf->__VdfgTmp_h5b14d969__0[2U];
    __Vtemp_ha0d41819__1[3U] = vlSelf->__VdfgTmp_h5b14d969__0[3U];
    bufp->fullWData(oldp+1049,(__Vtemp_ha0d41819__1),122);
    __Vtemp_h5f8bc438__1[0U] = vlSelf->__VdfgTmp_h9d524e68__0[0U];
    __Vtemp_h5f8bc438__1[1U] = vlSelf->__VdfgTmp_h9d524e68__0[1U];
    __Vtemp_h5f8bc438__1[2U] = vlSelf->__VdfgTmp_h9d524e68__0[2U];
    __Vtemp_h5f8bc438__1[3U] = vlSelf->__VdfgTmp_h9d524e68__0[3U];
    bufp->fullWData(oldp+1053,(__Vtemp_h5f8bc438__1),122);
    bufp->fullWData(oldp+1057,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o),123);
    bufp->fullWData(oldp+1061,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o),123);
    __Vtemp_h25b5643e__0[0U] = vlSelf->__VdfgTmp_h2fcaabc3__0[0U];
    __Vtemp_h25b5643e__0[1U] = vlSelf->__VdfgTmp_h2fcaabc3__0[1U];
    __Vtemp_h25b5643e__0[2U] = vlSelf->__VdfgTmp_h2fcaabc3__0[2U];
    __Vtemp_h25b5643e__0[3U] = ((vlSelf->__VdfgTmp_hb8bcc475__0[0U] 
                                 << 0x1bU) | vlSelf->__VdfgTmp_h2fcaabc3__0[3U]);
    __Vtemp_h25b5643e__0[4U] = ((vlSelf->__VdfgTmp_hb8bcc475__0[0U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_hb8bcc475__0[1U] 
                                           << 0x1bU));
    __Vtemp_h25b5643e__0[5U] = ((vlSelf->__VdfgTmp_hb8bcc475__0[1U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_hb8bcc475__0[2U] 
                                           << 0x1bU));
    __Vtemp_h25b5643e__0[6U] = ((vlSelf->__VdfgTmp_hb8bcc475__0[2U] 
                                 >> 5U) | (vlSelf->__VdfgTmp_hb8bcc475__0[3U] 
                                           << 0x1bU));
    __Vtemp_h25b5643e__0[7U] = ((vlSelf->__VdfgTmp_hb19116fe__0[0U] 
                                 << 0x16U) | (vlSelf->__VdfgTmp_hb8bcc475__0[3U] 
                                              >> 5U));
    __Vtemp_h25b5643e__0[8U] = ((vlSelf->__VdfgTmp_hb19116fe__0[0U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hb19116fe__0[1U] 
                                             << 0x16U));
    __Vtemp_h25b5643e__0[9U] = ((vlSelf->__VdfgTmp_hb19116fe__0[1U] 
                                 >> 0xaU) | (vlSelf->__VdfgTmp_hb19116fe__0[2U] 
                                             << 0x16U));
    __Vtemp_h25b5643e__0[0xaU] = ((vlSelf->__VdfgTmp_hb19116fe__0[2U] 
                                   >> 0xaU) | (vlSelf->__VdfgTmp_hb19116fe__0[3U] 
                                               << 0x16U));
    __Vtemp_h25b5643e__0[0xbU] = ((vlSelf->__VdfgTmp_hee0e3ea8__0[0U] 
                                   << 0x11U) | (vlSelf->__VdfgTmp_hb19116fe__0[3U] 
                                                >> 0xaU));
    __Vtemp_h25b5643e__0[0xcU] = ((vlSelf->__VdfgTmp_hee0e3ea8__0[0U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hee0e3ea8__0[1U] 
                                               << 0x11U));
    __Vtemp_h25b5643e__0[0xdU] = ((vlSelf->__VdfgTmp_hee0e3ea8__0[1U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hee0e3ea8__0[2U] 
                                               << 0x11U));
    __Vtemp_h25b5643e__0[0xeU] = ((vlSelf->__VdfgTmp_hee0e3ea8__0[2U] 
                                   >> 0xfU) | (vlSelf->__VdfgTmp_hee0e3ea8__0[3U] 
                                               << 0x11U));
    __Vtemp_h25b5643e__0[0xfU] = (vlSelf->__VdfgTmp_hee0e3ea8__0[3U] 
                                  >> 0xfU);
    bufp->fullWData(oldp+1065,(__Vtemp_h25b5643e__0),492);
    __Vtemp_h527ba76e__1[0U] = vlSelf->__VdfgTmp_h2fcaabc3__0[0U];
    __Vtemp_h527ba76e__1[1U] = vlSelf->__VdfgTmp_h2fcaabc3__0[1U];
    __Vtemp_h527ba76e__1[2U] = vlSelf->__VdfgTmp_h2fcaabc3__0[2U];
    __Vtemp_h527ba76e__1[3U] = vlSelf->__VdfgTmp_h2fcaabc3__0[3U];
    bufp->fullWData(oldp+1081,(__Vtemp_h527ba76e__1),122);
    __Vtemp_h7437fd0e__1[0U] = vlSelf->__VdfgTmp_hb8bcc475__0[0U];
    __Vtemp_h7437fd0e__1[1U] = vlSelf->__VdfgTmp_hb8bcc475__0[1U];
    __Vtemp_h7437fd0e__1[2U] = vlSelf->__VdfgTmp_hb8bcc475__0[2U];
    __Vtemp_h7437fd0e__1[3U] = vlSelf->__VdfgTmp_hb8bcc475__0[3U];
    bufp->fullWData(oldp+1085,(__Vtemp_h7437fd0e__1),122);
    __Vtemp_h1e9b504f__1[0U] = vlSelf->__VdfgTmp_hb19116fe__0[0U];
    __Vtemp_h1e9b504f__1[1U] = vlSelf->__VdfgTmp_hb19116fe__0[1U];
    __Vtemp_h1e9b504f__1[2U] = vlSelf->__VdfgTmp_hb19116fe__0[2U];
    __Vtemp_h1e9b504f__1[3U] = vlSelf->__VdfgTmp_hb19116fe__0[3U];
    bufp->fullWData(oldp+1089,(__Vtemp_h1e9b504f__1),122);
    __Vtemp_h9e7dfe3b__1[0U] = vlSelf->__VdfgTmp_hee0e3ea8__0[0U];
    __Vtemp_h9e7dfe3b__1[1U] = vlSelf->__VdfgTmp_hee0e3ea8__0[1U];
    __Vtemp_h9e7dfe3b__1[2U] = vlSelf->__VdfgTmp_hee0e3ea8__0[2U];
    __Vtemp_h9e7dfe3b__1[3U] = vlSelf->__VdfgTmp_hee0e3ea8__0[3U];
    bufp->fullWData(oldp+1093,(__Vtemp_h9e7dfe3b__1),122);
    bufp->fullQData(oldp+1097,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod),61);
    bufp->fullQData(oldp+1099,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),61);
    bufp->fullQData(oldp+1101,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod),61);
    bufp->fullQData(oldp+1103,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod),61);
    bufp->fullQData(oldp+1105,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod),61);
    bufp->fullQData(oldp+1107,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod),61);
    bufp->fullQData(oldp+1109,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod),61);
    bufp->fullQData(oldp+1111,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod),61);
    bufp->fullQData(oldp+1113,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod),61);
    bufp->fullQData(oldp+1115,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod),61);
    bufp->fullQData(oldp+1117,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod),61);
    bufp->fullQData(oldp+1119,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod),61);
    bufp->fullQData(oldp+1121,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod),61);
    bufp->fullQData(oldp+1123,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod),61);
    bufp->fullQData(oldp+1125,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod),61);
    bufp->fullQData(oldp+1127,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod),61);
    bufp->fullQData(oldp+1129,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod),61);
    bufp->fullQData(oldp+1131,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod),61);
    bufp->fullQData(oldp+1133,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod),61);
    bufp->fullQData(oldp+1135,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod),61);
    bufp->fullQData(oldp+1137,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod),61);
    bufp->fullQData(oldp+1139,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_28_io_partial_prod),61);
    bufp->fullQData(oldp+1141,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod),61);
    bufp->fullQData(oldp+1143,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod),61);
    bufp->fullQData(oldp+1145,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod),61);
    bufp->fullQData(oldp+1147,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod),61);
    bufp->fullQData(oldp+1149,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod),61);
    bufp->fullQData(oldp+1151,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod),61);
    bufp->fullQData(oldp+1153,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod),61);
    bufp->fullCData(oldp+1155,(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                 ? 0x7fU : (0xffU & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum)))),8);
    bufp->fullQData(oldp+1156,(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
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
    bufp->fullQData(oldp+1158,((0x3ffffffffffffffULL 
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
    bufp->fullQData(oldp+1160,(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
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
    bufp->fullSData(oldp+1162,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum),9);
    bufp->fullQData(oldp+1163,((0xfffffffffffffffULL 
                                & (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),60);
    bufp->fullQData(oldp+1165,((0xfffffffffffffffULL 
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
    bufp->fullQData(oldp+1167,((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),64);
    bufp->fullQData(oldp+1169,(((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
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
    bufp->fullWData(oldp+1171,(__Vtemp_h888287a4__0),256);
    bufp->fullQData(oldp+1179,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o),63);
    bufp->fullQData(oldp+1181,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o),63);
    __Vtemp_h82c3937f__0[0U] = (IData)(vlSelf->__VdfgTmp_hf45dcffc__0);
    __Vtemp_h82c3937f__0[1U] = (((IData)(vlSelf->__VdfgTmp_h9d54746e__0) 
                                 << 0x1fU) | (IData)(
                                                     (vlSelf->__VdfgTmp_hf45dcffc__0 
                                                      >> 0x20U)));
    __Vtemp_h82c3937f__0[2U] = (((IData)(vlSelf->__VdfgTmp_h9d54746e__0) 
                                 >> 1U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h9d54746e__0 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_h82c3937f__0[3U] = (((IData)(vlSelf->__VdfgTmp_hc50c33be__0) 
                                 << 0x1eU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h9d54746e__0 
                                                       >> 0x20U)) 
                                              >> 1U));
    __Vtemp_h82c3937f__0[4U] = (((IData)(vlSelf->__VdfgTmp_hc50c33be__0) 
                                 >> 2U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_hc50c33be__0 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    __Vtemp_h82c3937f__0[5U] = (((IData)(vlSelf->__VdfgTmp_h6bf2b2ef__0) 
                                 << 0x1dU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_hc50c33be__0 
                                                       >> 0x20U)) 
                                              >> 2U));
    __Vtemp_h82c3937f__0[6U] = (((IData)(vlSelf->__VdfgTmp_h6bf2b2ef__0) 
                                 >> 3U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h6bf2b2ef__0 
                                                    >> 0x20U)) 
                                           << 0x1dU));
    __Vtemp_h82c3937f__0[7U] = ((IData)((vlSelf->__VdfgTmp_h6bf2b2ef__0 
                                         >> 0x20U)) 
                                >> 3U);
    bufp->fullWData(oldp+1183,(__Vtemp_h82c3937f__0),252);
    bufp->fullQData(oldp+1191,(vlSelf->__VdfgTmp_hf45dcffc__0),62);
    bufp->fullQData(oldp+1193,(vlSelf->__VdfgTmp_h9d54746e__0),62);
    bufp->fullQData(oldp+1195,(vlSelf->__VdfgTmp_hc50c33be__0),62);
    bufp->fullQData(oldp+1197,(vlSelf->__VdfgTmp_h6bf2b2ef__0),62);
    bufp->fullQData(oldp+1199,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o),63);
    bufp->fullQData(oldp+1201,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o),63);
    __Vtemp_h12532a88__0[0U] = (IData)(vlSelf->__VdfgTmp_h4a1255a5__0);
    __Vtemp_h12532a88__0[1U] = (((IData)(vlSelf->__VdfgTmp_he272fe7c__0) 
                                 << 0x1fU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h4a1255a5__0 
                                                      >> 0x20U)));
    __Vtemp_h12532a88__0[2U] = (((IData)(vlSelf->__VdfgTmp_he272fe7c__0) 
                                 >> 1U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_he272fe7c__0 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_h12532a88__0[3U] = (((IData)(vlSelf->__VdfgTmp_h20bdfbc9__0) 
                                 << 0x1eU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_he272fe7c__0 
                                                       >> 0x20U)) 
                                              >> 1U));
    __Vtemp_h12532a88__0[4U] = (((IData)(vlSelf->__VdfgTmp_h20bdfbc9__0) 
                                 >> 2U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h20bdfbc9__0 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    __Vtemp_h12532a88__0[5U] = (((IData)(vlSelf->__VdfgTmp_ha4082dbe__0) 
                                 << 0x1dU) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h20bdfbc9__0 
                                                       >> 0x20U)) 
                                              >> 2U));
    __Vtemp_h12532a88__0[6U] = (((IData)(vlSelf->__VdfgTmp_ha4082dbe__0) 
                                 >> 3U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_ha4082dbe__0 
                                                    >> 0x20U)) 
                                           << 0x1dU));
    __Vtemp_h12532a88__0[7U] = ((IData)((vlSelf->__VdfgTmp_ha4082dbe__0 
                                         >> 0x20U)) 
                                >> 3U);
    bufp->fullWData(oldp+1203,(__Vtemp_h12532a88__0),252);
    bufp->fullQData(oldp+1211,(vlSelf->__VdfgTmp_h4a1255a5__0),62);
    bufp->fullQData(oldp+1213,(vlSelf->__VdfgTmp_he272fe7c__0),62);
    bufp->fullQData(oldp+1215,(vlSelf->__VdfgTmp_h20bdfbc9__0),62);
    bufp->fullQData(oldp+1217,(vlSelf->__VdfgTmp_ha4082dbe__0),62);
    bufp->fullIData(oldp+1219,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod),31);
    bufp->fullIData(oldp+1220,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),31);
    bufp->fullIData(oldp+1221,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod),31);
    bufp->fullIData(oldp+1222,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod),31);
    bufp->fullIData(oldp+1223,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod),31);
    bufp->fullIData(oldp+1224,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod),31);
    bufp->fullIData(oldp+1225,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod),31);
    bufp->fullIData(oldp+1226,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod),31);
    bufp->fullIData(oldp+1227,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod),31);
    bufp->fullIData(oldp+1228,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod),31);
    bufp->fullIData(oldp+1229,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_6_io_partial_prod),31);
    bufp->fullIData(oldp+1230,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod),31);
    bufp->fullIData(oldp+1231,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod),31);
    bufp->fullQData(oldp+1232,(vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i),62);
    bufp->fullQData(oldp+1234,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),62);
    bufp->fullIData(oldp+1236,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+1237,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+1238,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+1239,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+1240,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp),8);
    bufp->fullWData(oldp+1241,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),92);
    bufp->fullCData(oldp+1244,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+1245,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),92);
    bufp->fullIData(oldp+1248,(((0x1ffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                         >> 0x22U)) 
                                                << 1U)) 
                                | (0U != (0x1ffffffffULL 
                                          & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))),29);
    bufp->fullCData(oldp+1249,((0x3fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+1250,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+1262,(vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o),62);
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
    bufp->fullQData(oldp+1303,(((0x2000000U & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U])
                                 ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                    << 0x1eU) : 0ULL)),61);
    bufp->fullQData(oldp+1305,((0x1fffffffffffffffULL 
                                & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000000U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000000U 
                                                        == 
                                                        (0x18000000U 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                          << 0x1eU)
                                       : ((1U & ((IData)(
                                                         (0x18000000U 
                                                          == 
                                                          (0x38000000U 
                                                           & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1fU)
                                           : 0ULL))))),61);
    bufp->fullQData(oldp+1307,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i),62);
    bufp->fullQData(oldp+1309,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp),62);
    bufp->fullBit(oldp+1311,((1U & (((~ (IData)((0U 
                                                 != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))) 
                                     & (IData)((0x18000000U 
                                                == 
                                                (0x18000000U 
                                                 & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                    | ((~ (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                           >> 0x1bU)) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+1312,((0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000U 
                                                               == 
                                                               (0x60000U 
                                                                & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                                      | (IData)(
                                                                (0x20000U 
                                                                 == 
                                                                 (0x60000U 
                                                                  & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))))
                                                   ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000U 
                                                                == 
                                                                (0xe0000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))) 
                                                       | ((~ 
                                                           (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                            >> 0x11U)) 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                    << 1U)
                                                    : 0U))))),31);
    bufp->fullBit(oldp+1313,((1U & ((1U == (IData)(vlSelf->io_op))
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
    bufp->fullCData(oldp+1314,(((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_hdc986cf4__0))),8);
    bufp->fullIData(oldp+1315,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac),29);
    bufp->fullIData(oldp+1316,(((0x10000000U & vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac)
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
    bufp->fullCData(oldp+1317,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+1318,(((5U == (IData)(vlSelf->io_op))
                                 ? ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (0xffU & (IData)(vlSelf->__VdfgTmp_h0a432aee__0))
                                     : 0U) : 0U)),8);
    bufp->fullIData(oldp+1319,(((5U == (IData)(vlSelf->io_op))
                                 ? ((0x1ffffffeU & 
                                     ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                               >> 0x22U)) 
                                      << 1U)) | (0U 
                                                 != 
                                                 (0x1ffffffffULL 
                                                  & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))
                                 : 0U)),29);
    bufp->fullIData(oldp+1320,((((5U == (IData)(vlSelf->io_op)) 
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
    bufp->fullSData(oldp+1321,((0x1ffU & ((IData)(0x22U) 
                                          + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                              ? ((0U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                  ? 
                                                 ((0x1c0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(1U) 
                                                                       - 
                                                                       vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 5U)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((IData)(1U) 
                                                         - 
                                                         vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                                  : 
                                                 ((0x1c0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     >> 5U)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (- 
                                                        vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                              : 0U)))),9);
    bufp->fullBit(oldp+1322,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+1323,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullCData(oldp+1325,((0xffU & ((IData)(2U) 
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
    bufp->fullBit(oldp+1326,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1327,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullQData(oldp+1328,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),62);
    bufp->fullSData(oldp+1330,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (IData)(vlSelf->__VdfgTmp_h0a432aee__0)
                                 : 0U)),9);
    bufp->fullQData(oldp+1331,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i),61);
    bufp->fullBit(oldp+1333,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+1334,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+1336,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),61);
    bufp->fullCData(oldp+1338,((0xffU & ((IData)(2U) 
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
    bufp->fullBit(oldp+1339,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1340,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+1341,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                     & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                    ^ (vlSelf->io_posit_i1_0 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1342,((0xffU & ((1U & ((~ 
                                                 (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                  >> 0x1eU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp))))),8);
    bufp->fullIData(oldp+1343,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                 ? vlSelf->__VdfgTmp_hf0a27d07__0
                                 : vlSelf->__VdfgTmp_hf87afcc4__0)),30);
    bufp->fullBit(oldp+1344,(((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                              & (vlSelf->PvuTop__DOT__add__DOT__sum 
                                 >> 0x1eU))));
    bufp->fullBit(oldp+1345,((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                               & (vlSelf->PvuTop__DOT__add__DOT__sum 
                                  >> 0x1eU)) & (0U 
                                                != 
                                                (0x3fffffffU 
                                                 & vlSelf->PvuTop__DOT__add__DOT__sum)))));
    bufp->fullIData(oldp+1346,(0x1fU),32);
    bufp->fullBit(oldp+1347,(1U));
    bufp->fullIData(oldp+1348,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+1349,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+1354,(0U));
    bufp->fullCData(oldp+1355,(0U),8);
    bufp->fullCData(oldp+1356,(0U),3);
    bufp->fullIData(oldp+1357,(0U),31);
    bufp->fullBit(oldp+1358,(1U));
    bufp->fullIData(oldp+1359,(0x3eU),32);
    bufp->fullIData(oldp+1360,(6U),32);
    bufp->fullWData(oldp+1361,(VPvuTop__ConstPool__CONST_hc5a1c501_0),372);
    bufp->fullIData(oldp+1373,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+1374,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+1379,(0x3dU),32);
    bufp->fullWData(oldp+1380,(VPvuTop__ConstPool__CONST_hc5537591_0),366);
}
