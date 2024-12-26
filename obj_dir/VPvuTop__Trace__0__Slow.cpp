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
    tracep->declBit(c+349,"clock", false,-1);
    tracep->declBit(c+350,"reset", false,-1);
    tracep->declBus(c+351,"io_posit_i1_0", false,-1, 15,0);
    tracep->declBus(c+352,"io_posit_i2_0", false,-1, 15,0);
    tracep->declBus(c+353,"io_op", false,-1, 2,0);
    tracep->declBus(c+354,"io_posit_o_0", false,-1, 15,0);
    tracep->declBus(c+355,"io_posit_dot_o", false,-1, 15,0);
    tracep->pushNamePrefix("PvuTop ");
    tracep->declBit(c+349,"clock", false,-1);
    tracep->declBit(c+350,"reset", false,-1);
    tracep->declBus(c+351,"io_posit_i1_0", false,-1, 15,0);
    tracep->declBus(c+352,"io_posit_i2_0", false,-1, 15,0);
    tracep->declBus(c+353,"io_op", false,-1, 2,0);
    tracep->declBus(c+354,"io_posit_o_0", false,-1, 15,0);
    tracep->declBus(c+355,"io_posit_dot_o", false,-1, 15,0);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+356,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+357,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+235,"io_pir_frac1_aligned", false,-1, 13,0);
    tracep->declBus(c+236,"io_pir_frac2_aligned", false,-1, 13,0);
    tracep->declBus(c+358,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+359,"io_pir_exp_o", false,-1, 6,0);
    tracep->declBus(c+360,"io_pir_frac_o", false,-1, 13,0);
    tracep->declBus(c+237,"io_overflow", false,-1, 0,0);
    tracep->declBus(c+238,"io_frac_truncate", false,-1, 0,0);
    tracep->declBus(c+239,"sum", false,-1, 14,0);
    tracep->declBit(c+240,"mant1_greater", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode1 ");
    tracep->declBus(c+351,"io_posit", false,-1, 15,0);
    tracep->declBus(c+356,"io_Sign", false,-1, 0,0);
    tracep->declBus(c+70,"io_Exp", false,-1, 6,0);
    tracep->declBus(c+71,"io_Frac", false,-1, 11,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+1,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+361,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+72,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+427,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+428,"MODE", false,-1);
    tracep->declBus(c+429,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"in_i", false,-1, 14,0);
    tracep->declBus(c+362,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+363,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+429,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+430,"index_lut", false,-1, 59,0);
    tracep->declBus(c+364,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+365,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+3,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+427,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("decode2 ");
    tracep->declBus(c+352,"io_posit", false,-1, 15,0);
    tracep->declBus(c+357,"io_Sign", false,-1, 0,0);
    tracep->declBus(c+113,"io_Exp", false,-1, 6,0);
    tracep->declBus(c+114,"io_Frac", false,-1, 11,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+4,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+367,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+115,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+427,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+428,"MODE", false,-1);
    tracep->declBus(c+429,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"in_i", false,-1, 14,0);
    tracep->declBus(c+368,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+369,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+429,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+430,"index_lut", false,-1, 59,0);
    tracep->declBus(c+370,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+371,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+6,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+427,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("div ");
    tracep->declBus(c+356,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+357,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+73,"io_pir_frac1_i", false,-1, 13,0);
    tracep->declBus(c+116,"io_pir_frac2_i", false,-1, 13,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+373,"io_pir_exp_o", false,-1, 6,0);
    tracep->declBus(c+241,"io_pir_frac_o", false,-1, 29,0);
    tracep->pushNamePrefix("intdivider ");
    tracep->declBus(c+73,"io_dividend", false,-1, 13,0);
    tracep->declBus(c+116,"io_divisor", false,-1, 13,0);
    tracep->declBus(c+242,"io_quotient", false,-1, 27,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declBus(c+74,"io_operand_a", false,-1, 27,0);
    tracep->declBus(c+117,"io_operand_b", false,-1, 27,0);
    tracep->declQuad(c+243,"io_sum_o", false,-1, 55,0);
    tracep->declQuad(c+245,"io_carry_o", false,-1, 55,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+11,"io_operands_i", false,-1, 839,0);
    tracep->declQuad(c+247,"io_sum_o", false,-1, 59,0);
    tracep->declQuad(c+249,"io_carry_o", false,-1, 59,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+251,"io_operands_i", false,-1, 239,0);
    tracep->declQuad(c+247,"io_sum_o", false,-1, 59,0);
    tracep->declQuad(c+249,"io_carry_o", false,-1, 59,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+76,"io_operands_i", false,-1, 391,0);
    tracep->declQuad(c+259,"io_sum_o", false,-1, 58,0);
    tracep->declQuad(c+261,"io_carry_o", false,-1, 58,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+263,"io_operands_i", false,-1, 235,0);
    tracep->declQuad(c+259,"io_sum_o", false,-1, 58,0);
    tracep->declQuad(c+261,"io_carry_o", false,-1, 58,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+89,"io_operands_i", false,-1, 167,0);
    tracep->declQuad(c+271,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+273,"io_carry_o", false,-1, 57,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+89,"io_operands_i", false,-1, 167,0);
    tracep->declQuad(c+271,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+273,"io_carry_o", false,-1, 57,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+95,"io_operands_i", false,-1, 223,0);
    tracep->declQuad(c+275,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+277,"io_carry_o", false,-1, 57,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+95,"io_operands_i", false,-1, 223,0);
    tracep->declQuad(c+275,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+277,"io_carry_o", false,-1, 57,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+38,"io_operands_i", false,-1, 447,0);
    tracep->declQuad(c+279,"io_sum_o", false,-1, 58,0);
    tracep->declQuad(c+281,"io_carry_o", false,-1, 58,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+283,"io_operands_i", false,-1, 235,0);
    tracep->declQuad(c+279,"io_sum_o", false,-1, 58,0);
    tracep->declQuad(c+281,"io_carry_o", false,-1, 58,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+102,"io_operands_i", false,-1, 223,0);
    tracep->declQuad(c+291,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+293,"io_carry_o", false,-1, 57,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+102,"io_operands_i", false,-1, 223,0);
    tracep->declQuad(c+291,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+293,"io_carry_o", false,-1, 57,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+52,"io_operands_i", false,-1, 223,0);
    tracep->declQuad(c+295,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+297,"io_carry_o", false,-1, 57,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+52,"io_operands_i", false,-1, 223,0);
    tracep->declQuad(c+295,"io_sum_o", false,-1, 57,0);
    tracep->declQuad(c+297,"io_carry_o", false,-1, 57,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+74,"io_operand_a", false,-1, 27,0);
    tracep->declBus(c+117,"io_operand_b", false,-1, 27,0);
    tracep->declArray(c+11,"io_partial_prods", false,-1, 839,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+118,"io_code", false,-1, 2,0);
    tracep->declBus(c+299,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+119,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+118,"io_code", false,-1, 2,0);
    tracep->declBit(c+119,"io_neg", false,-1);
    tracep->declBit(c+120,"io_zero", false,-1);
    tracep->declBit(c+121,"io_one", false,-1);
    tracep->declBit(c+122,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+123,"io_code", false,-1, 2,0);
    tracep->declBus(c+300,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+124,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+123,"io_code", false,-1, 2,0);
    tracep->declBit(c+124,"io_neg", false,-1);
    tracep->declBit(c+125,"io_zero", false,-1);
    tracep->declBit(c+126,"io_one", false,-1);
    tracep->declBit(c+127,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+128,"io_code", false,-1, 2,0);
    tracep->declBus(c+374,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+432,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+128,"io_code", false,-1, 2,0);
    tracep->declBit(c+432,"io_neg", false,-1);
    tracep->declBit(c+129,"io_zero", false,-1);
    tracep->declBit(c+130,"io_one", false,-1);
    tracep->declBit(c+432,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+131,"io_code", false,-1, 2,0);
    tracep->declBus(c+301,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+132,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+131,"io_code", false,-1, 2,0);
    tracep->declBit(c+132,"io_neg", false,-1);
    tracep->declBit(c+133,"io_zero", false,-1);
    tracep->declBit(c+134,"io_one", false,-1);
    tracep->declBit(c+135,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+136,"io_code", false,-1, 2,0);
    tracep->declBus(c+302,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+137,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+136,"io_code", false,-1, 2,0);
    tracep->declBit(c+137,"io_neg", false,-1);
    tracep->declBit(c+138,"io_zero", false,-1);
    tracep->declBit(c+139,"io_one", false,-1);
    tracep->declBit(c+140,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_11 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+141,"io_code", false,-1, 2,0);
    tracep->declBus(c+303,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+142,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+141,"io_code", false,-1, 2,0);
    tracep->declBit(c+142,"io_neg", false,-1);
    tracep->declBit(c+143,"io_zero", false,-1);
    tracep->declBit(c+144,"io_one", false,-1);
    tracep->declBit(c+145,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_12 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+146,"io_code", false,-1, 2,0);
    tracep->declBus(c+304,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+147,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+146,"io_code", false,-1, 2,0);
    tracep->declBit(c+147,"io_neg", false,-1);
    tracep->declBit(c+148,"io_zero", false,-1);
    tracep->declBit(c+149,"io_one", false,-1);
    tracep->declBit(c+150,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+151,"io_code", false,-1, 2,0);
    tracep->declBus(c+305,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+152,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+151,"io_code", false,-1, 2,0);
    tracep->declBit(c+152,"io_neg", false,-1);
    tracep->declBit(c+153,"io_zero", false,-1);
    tracep->declBit(c+154,"io_one", false,-1);
    tracep->declBit(c+155,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+156,"io_code", false,-1, 2,0);
    tracep->declBus(c+306,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+157,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+156,"io_code", false,-1, 2,0);
    tracep->declBit(c+157,"io_neg", false,-1);
    tracep->declBit(c+158,"io_zero", false,-1);
    tracep->declBit(c+159,"io_one", false,-1);
    tracep->declBit(c+160,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+161,"io_code", false,-1, 2,0);
    tracep->declBus(c+307,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+162,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+161,"io_code", false,-1, 2,0);
    tracep->declBit(c+162,"io_neg", false,-1);
    tracep->declBit(c+163,"io_zero", false,-1);
    tracep->declBit(c+164,"io_one", false,-1);
    tracep->declBit(c+165,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+166,"io_code", false,-1, 2,0);
    tracep->declBus(c+308,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+167,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+166,"io_code", false,-1, 2,0);
    tracep->declBit(c+167,"io_neg", false,-1);
    tracep->declBit(c+168,"io_zero", false,-1);
    tracep->declBit(c+169,"io_one", false,-1);
    tracep->declBit(c+170,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+171,"io_code", false,-1, 2,0);
    tracep->declBus(c+375,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+172,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+171,"io_code", false,-1, 2,0);
    tracep->declBit(c+172,"io_neg", false,-1);
    tracep->declBit(c+173,"io_zero", false,-1);
    tracep->declBit(c+174,"io_one", false,-1);
    tracep->declBit(c+175,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+176,"io_code", false,-1, 2,0);
    tracep->declBus(c+309,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+177,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+176,"io_code", false,-1, 2,0);
    tracep->declBit(c+177,"io_neg", false,-1);
    tracep->declBit(c+178,"io_zero", false,-1);
    tracep->declBit(c+179,"io_one", false,-1);
    tracep->declBit(c+180,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+181,"io_code", false,-1, 2,0);
    tracep->declBus(c+310,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+182,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+181,"io_code", false,-1, 2,0);
    tracep->declBit(c+182,"io_neg", false,-1);
    tracep->declBit(c+183,"io_zero", false,-1);
    tracep->declBit(c+184,"io_one", false,-1);
    tracep->declBit(c+185,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+74,"io_multiplicand", false,-1, 27,0);
    tracep->declBus(c+186,"io_code", false,-1, 2,0);
    tracep->declBus(c+311,"io_partial_prod", false,-1, 28,0);
    tracep->declBit(c+187,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+186,"io_code", false,-1, 2,0);
    tracep->declBit(c+187,"io_neg", false,-1);
    tracep->declBit(c+188,"io_zero", false,-1);
    tracep->declBit(c+189,"io_one", false,-1);
    tracep->declBit(c+190,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+116,"io_num_i", false,-1, 13,0);
    tracep->declBus(c+117,"io_reciprocal_o", false,-1, 27,0);
    tracep->declBus(c+191,"x0", false,-1, 27,0);
    tracep->declQuad(c+192,"x1_x_new_full", false,-1, 41,0);
    tracep->declQuad(c+194,"x2_x_new_full", false,-1, 41,0);
    tracep->declQuad(c+196,"x3_x_new_full", false,-1, 41,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dotproduct ");
    tracep->declBit(c+349,"clock", false,-1);
    tracep->declBit(c+350,"reset", false,-1);
    tracep->declBus(c+356,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+357,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+71,"io_pir_frac1_i", false,-1, 11,0);
    tracep->declBus(c+114,"io_pir_frac2_i", false,-1, 11,0);
    tracep->declBit(c+432,"io_pir_sign_o", false,-1);
    tracep->declBus(c+312,"io_pir_exp_o", false,-1, 6,0);
    tracep->declBus(c+376,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+377,"pir_frac_cmp_tmp", false,-1, 29,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+376,"io_operands_i", false,-1, 29,0);
    tracep->declBus(c+376,"io_sum_o", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("frac_compare ");
    tracep->declBus(c+313,"io_pir_frac_i", false,-1, 25,0);
    tracep->declBus(c+312,"io_pir_exp_i", false,-1, 6,0);
    tracep->declBus(c+314,"io_pir_frac_align", false,-1, 25,0);
    tracep->declBus(c+312,"io_pir_max_exp", false,-1, 6,0);
    tracep->declBus(c+433,"shift_amount", false,-1, 6,0);
    tracep->pushNamePrefix("comptree ");
    tracep->declBus(c+312,"io_operands_i", false,-1, 6,0);
    tracep->declBus(c+312,"io_result_o", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+356,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+357,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+73,"io_pir_frac1_i", false,-1, 13,0);
    tracep->declBus(c+116,"io_pir_frac2_i", false,-1, 13,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+312,"io_pir_exp_o", false,-1, 6,0);
    tracep->declBus(c+315,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+316,"sum", false,-1, 7,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBus(c+73,"io_operand_a", false,-1, 13,0);
    tracep->declBus(c+116,"io_operand_b", false,-1, 13,0);
    tracep->declBus(c+317,"io_sum_o", false,-1, 27,0);
    tracep->declBus(c+318,"io_carry_o", false,-1, 27,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+59,"io_operands_i", false,-1, 223,0);
    tracep->declBus(c+319,"io_sum_o", false,-1, 30,0);
    tracep->declBus(c+320,"io_carry_o", false,-1, 30,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+321,"io_operands_i", false,-1, 123,0);
    tracep->declBus(c+319,"io_sum_o", false,-1, 30,0);
    tracep->declBus(c+320,"io_carry_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+109,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+325,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+326,"io_carry_o", false,-1, 29,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+109,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+325,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+326,"io_carry_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+66,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+327,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+328,"io_carry_o", false,-1, 29,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+66,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+327,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+328,"io_carry_o", false,-1, 29,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+73,"io_operand_a", false,-1, 13,0);
    tracep->declBus(c+116,"io_operand_b", false,-1, 13,0);
    tracep->declArray(c+59,"io_partial_prods", false,-1, 223,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+198,"io_code", false,-1, 2,0);
    tracep->declBus(c+329,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+199,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+198,"io_code", false,-1, 2,0);
    tracep->declBit(c+199,"io_neg", false,-1);
    tracep->declBit(c+200,"io_zero", false,-1);
    tracep->declBit(c+201,"io_one", false,-1);
    tracep->declBit(c+202,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+203,"io_code", false,-1, 2,0);
    tracep->declBus(c+330,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+204,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+203,"io_code", false,-1, 2,0);
    tracep->declBit(c+204,"io_neg", false,-1);
    tracep->declBit(c+205,"io_zero", false,-1);
    tracep->declBit(c+206,"io_one", false,-1);
    tracep->declBit(c+207,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+434,"io_code", false,-1, 2,0);
    tracep->declBus(c+435,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+432,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+434,"io_code", false,-1, 2,0);
    tracep->declBit(c+432,"io_neg", false,-1);
    tracep->declBit(c+436,"io_zero", false,-1);
    tracep->declBit(c+432,"io_one", false,-1);
    tracep->declBit(c+432,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+208,"io_code", false,-1, 2,0);
    tracep->declBus(c+331,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+209,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+208,"io_code", false,-1, 2,0);
    tracep->declBit(c+209,"io_neg", false,-1);
    tracep->declBit(c+210,"io_zero", false,-1);
    tracep->declBit(c+211,"io_one", false,-1);
    tracep->declBit(c+212,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+213,"io_code", false,-1, 2,0);
    tracep->declBus(c+332,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+214,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+213,"io_code", false,-1, 2,0);
    tracep->declBit(c+214,"io_neg", false,-1);
    tracep->declBit(c+215,"io_zero", false,-1);
    tracep->declBit(c+216,"io_one", false,-1);
    tracep->declBit(c+217,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+218,"io_code", false,-1, 2,0);
    tracep->declBus(c+378,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+219,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+218,"io_code", false,-1, 2,0);
    tracep->declBit(c+219,"io_neg", false,-1);
    tracep->declBit(c+220,"io_zero", false,-1);
    tracep->declBit(c+221,"io_one", false,-1);
    tracep->declBit(c+222,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+223,"io_code", false,-1, 2,0);
    tracep->declBus(c+333,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+224,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+223,"io_code", false,-1, 2,0);
    tracep->declBit(c+224,"io_neg", false,-1);
    tracep->declBit(c+225,"io_zero", false,-1);
    tracep->declBit(c+226,"io_one", false,-1);
    tracep->declBit(c+379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBus(c+75,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+432,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBit(c+432,"io_neg", false,-1);
    tracep->declBit(c+9,"io_zero", false,-1);
    tracep->declBit(c+10,"io_one", false,-1);
    tracep->declBit(c+432,"io_two", false,-1);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("encode ");
    tracep->declBus(c+380,"io_pir_sign", false,-1, 0,0);
    tracep->declBus(c+381,"io_pir_exp", false,-1, 6,0);
    tracep->declBus(c+382,"io_pir_frac", false,-1, 12,0);
    tracep->declBus(c+383,"io_posit", false,-1, 15,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declQuad(c+384,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+386,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+387,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encode_dot ");
    tracep->declBit(c+432,"io_pir_sign", false,-1);
    tracep->declBus(c+389,"io_pir_exp", false,-1, 6,0);
    tracep->declBus(c+390,"io_pir_frac", false,-1, 12,0);
    tracep->declBus(c+391,"io_posit", false,-1, 15,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declQuad(c+392,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+394,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+395,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm ");
    tracep->declBus(c+334,"io_pir_frac_i", false,-1, 29,0);
    tracep->declBus(c+397,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+341,"io_pir_frac_o", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+437,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+428,"MODE", false,-1);
    tracep->declBus(c+438,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+334,"in_i", false,-1, 29,0);
    tracep->declBus(c+342,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+398,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+438,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+439,"index_lut", false,-1, 149,0);
    tracep->declBus(c+399,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+343,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+335,"in_tmp", false,-1, 29,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+437,"i", false,-1, 31,0);
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
    tracep->declBus(c+334,"io_operand_i", false,-1, 29,0);
    tracep->declBus(c+342,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+348,"io_result_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_add ");
    tracep->declBus(c+336,"io_pir_frac_i", false,-1, 13,0);
    tracep->declBus(c+400,"io_exp_adjust", false,-1, 6,0);
    tracep->declBus(c+401,"io_pir_frac_o", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+444,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+428,"MODE", false,-1);
    tracep->declBus(c+429,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+336,"in_i", false,-1, 13,0);
    tracep->declBus(c+402,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+403,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+429,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+445,"index_lut", false,-1, 55,0);
    tracep->declBus(c+404,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+405,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+337,"in_tmp", false,-1, 13,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+444,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declBus(c+336,"io_operand_i", false,-1, 13,0);
    tracep->declBus(c+402,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+407,"io_result_o", false,-1, 13,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_dot ");
    tracep->declBus(c+408,"io_pir_frac_i", false,-1, 29,0);
    tracep->declBus(c+409,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+227,"io_pir_frac_o", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+447,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+428,"MODE", false,-1);
    tracep->declBus(c+438,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"in_i", false,-1, 28,0);
    tracep->declBus(c+228,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+411,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+438,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+448,"index_lut", false,-1, 144,0);
    tracep->declBus(c+412,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+229,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+413,"in_tmp", false,-1, 28,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+447,"i", false,-1, 31,0);
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
    tracep->declBus(c+408,"io_operand_i", false,-1, 29,0);
    tracep->declBus(c+228,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+234,"io_result_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_sub ");
    tracep->declBus(c+338,"io_pir_frac_i", false,-1, 13,0);
    tracep->declBus(c+414,"io_exp_adjust", false,-1, 6,0);
    tracep->declBus(c+415,"io_pir_frac_o", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+444,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+428,"MODE", false,-1);
    tracep->declBus(c+429,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+338,"in_i", false,-1, 13,0);
    tracep->declBus(c+416,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+417,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+429,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+445,"index_lut", false,-1, 55,0);
    tracep->declBus(c+418,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+419,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+339,"in_tmp", false,-1, 13,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+444,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("shifter ");
    tracep->declBus(c+338,"io_operand_i", false,-1, 13,0);
    tracep->declBus(c+416,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+421,"io_result_o", false,-1, 13,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fracalign ");
    tracep->declBus(c+71,"io_pir_frac1_i", false,-1, 11,0);
    tracep->declBus(c+114,"io_pir_frac2_i", false,-1, 11,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+235,"io_pir_frac1_align", false,-1, 13,0);
    tracep->declBus(c+236,"io_pir_frac2_align", false,-1, 13,0);
    tracep->declBus(c+340,"io_pir_max_exp", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fracalign_1 ");
    tracep->declBus(c+71,"io_pir_frac1_i", false,-1, 11,0);
    tracep->declBus(c+114,"io_pir_frac2_i", false,-1, 11,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+235,"io_pir_frac1_align", false,-1, 13,0);
    tracep->declBus(c+236,"io_pir_frac2_align", false,-1, 13,0);
    tracep->declBus(c+340,"io_pir_max_exp", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+356,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+357,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+73,"io_pir_frac1_i", false,-1, 13,0);
    tracep->declBus(c+116,"io_pir_frac2_i", false,-1, 13,0);
    tracep->declBus(c+7,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+312,"io_pir_exp_o", false,-1, 6,0);
    tracep->declBus(c+315,"io_pir_frac_o", false,-1, 29,0);
    tracep->declBus(c+316,"sum", false,-1, 7,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBus(c+73,"io_operand_a", false,-1, 13,0);
    tracep->declBus(c+116,"io_operand_b", false,-1, 13,0);
    tracep->declBus(c+317,"io_sum_o", false,-1, 27,0);
    tracep->declBus(c+318,"io_carry_o", false,-1, 27,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declArray(c+59,"io_operands_i", false,-1, 223,0);
    tracep->declBus(c+319,"io_sum_o", false,-1, 30,0);
    tracep->declBus(c+320,"io_carry_o", false,-1, 30,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+321,"io_operands_i", false,-1, 123,0);
    tracep->declBus(c+319,"io_sum_o", false,-1, 30,0);
    tracep->declBus(c+320,"io_carry_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declArray(c+109,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+325,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+326,"io_carry_o", false,-1, 29,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+109,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+325,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+326,"io_carry_o", false,-1, 29,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declArray(c+66,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+327,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+328,"io_carry_o", false,-1, 29,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declArray(c+66,"io_operands_i", false,-1, 111,0);
    tracep->declBus(c+327,"io_sum_o", false,-1, 29,0);
    tracep->declBus(c+328,"io_carry_o", false,-1, 29,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+73,"io_operand_a", false,-1, 13,0);
    tracep->declBus(c+116,"io_operand_b", false,-1, 13,0);
    tracep->declArray(c+59,"io_partial_prods", false,-1, 223,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+198,"io_code", false,-1, 2,0);
    tracep->declBus(c+329,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+199,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+198,"io_code", false,-1, 2,0);
    tracep->declBit(c+199,"io_neg", false,-1);
    tracep->declBit(c+200,"io_zero", false,-1);
    tracep->declBit(c+201,"io_one", false,-1);
    tracep->declBit(c+202,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+203,"io_code", false,-1, 2,0);
    tracep->declBus(c+330,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+204,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+203,"io_code", false,-1, 2,0);
    tracep->declBit(c+204,"io_neg", false,-1);
    tracep->declBit(c+205,"io_zero", false,-1);
    tracep->declBit(c+206,"io_one", false,-1);
    tracep->declBit(c+207,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+434,"io_code", false,-1, 2,0);
    tracep->declBus(c+435,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+432,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+434,"io_code", false,-1, 2,0);
    tracep->declBit(c+432,"io_neg", false,-1);
    tracep->declBit(c+436,"io_zero", false,-1);
    tracep->declBit(c+432,"io_one", false,-1);
    tracep->declBit(c+432,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+208,"io_code", false,-1, 2,0);
    tracep->declBus(c+331,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+209,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+208,"io_code", false,-1, 2,0);
    tracep->declBit(c+209,"io_neg", false,-1);
    tracep->declBit(c+210,"io_zero", false,-1);
    tracep->declBit(c+211,"io_one", false,-1);
    tracep->declBit(c+212,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+213,"io_code", false,-1, 2,0);
    tracep->declBus(c+332,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+214,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+213,"io_code", false,-1, 2,0);
    tracep->declBit(c+214,"io_neg", false,-1);
    tracep->declBit(c+215,"io_zero", false,-1);
    tracep->declBit(c+216,"io_one", false,-1);
    tracep->declBit(c+217,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+218,"io_code", false,-1, 2,0);
    tracep->declBus(c+378,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+219,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+218,"io_code", false,-1, 2,0);
    tracep->declBit(c+219,"io_neg", false,-1);
    tracep->declBit(c+220,"io_zero", false,-1);
    tracep->declBit(c+221,"io_one", false,-1);
    tracep->declBit(c+222,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+223,"io_code", false,-1, 2,0);
    tracep->declBus(c+333,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+224,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+223,"io_code", false,-1, 2,0);
    tracep->declBit(c+224,"io_neg", false,-1);
    tracep->declBit(c+225,"io_zero", false,-1);
    tracep->declBit(c+226,"io_one", false,-1);
    tracep->declBit(c+379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+73,"io_multiplicand", false,-1, 13,0);
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBus(c+75,"io_partial_prod", false,-1, 14,0);
    tracep->declBit(c+432,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+8,"io_code", false,-1, 2,0);
    tracep->declBit(c+432,"io_neg", false,-1);
    tracep->declBit(c+9,"io_zero", false,-1);
    tracep->declBit(c+10,"io_one", false,-1);
    tracep->declBit(c+432,"io_two", false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("sub ");
    tracep->declBus(c+356,"io_pir_sign1_i", false,-1, 0,0);
    tracep->declBus(c+357,"io_pir_sign2_i", false,-1, 0,0);
    tracep->declBus(c+70,"io_pir_exp1_i", false,-1, 6,0);
    tracep->declBus(c+113,"io_pir_exp2_i", false,-1, 6,0);
    tracep->declBus(c+235,"io_pir_frac1_aligned", false,-1, 13,0);
    tracep->declBus(c+236,"io_pir_frac2_aligned", false,-1, 13,0);
    tracep->declBus(c+422,"io_pir_sign_o", false,-1, 0,0);
    tracep->declBus(c+423,"io_pir_exp_o", false,-1, 6,0);
    tracep->declBus(c+424,"io_pir_frac_o", false,-1, 13,0);
    tracep->declBus(c+425,"io_overflow", false,-1, 0,0);
    tracep->declBus(c+426,"io_frac_truncate", false,-1, 0,0);
    tracep->declBit(c+240,"mant1_greater", false,-1);
    tracep->declBus(c+239,"sum", false,-1, 14,0);
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

VL_ATTR_COLD void VPvuTop___024root__trace_full_sub_0(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<27>/*863:0*/ __Vtemp_h0e2f7bf6__0;
    VlWide<14>/*447:0*/ __Vtemp_hccd079ab__0;
    VlWide<7>/*223:0*/ __Vtemp_h0cd1d838__0;
    VlWide<7>/*223:0*/ __Vtemp_hb8497458__0;
    VlWide<4>/*127:0*/ __Vtemp_h647cbbf2__0;
    VlWide<13>/*415:0*/ __Vtemp_h8d902b43__0;
    VlWide<6>/*191:0*/ __Vtemp_hd853608c__0;
    VlWide<7>/*223:0*/ __Vtemp_h17bc6dc6__0;
    VlWide<7>/*223:0*/ __Vtemp_hf816dff2__0;
    VlWide<4>/*127:0*/ __Vtemp_h81d1b9e4__0;
    VlWide<8>/*255:0*/ __Vtemp_h0c422b7f__0;
    VlWide<8>/*255:0*/ __Vtemp_h4933e7c7__0;
    VlWide<8>/*255:0*/ __Vtemp_hbca8450e__0;
    VlWide<4>/*127:0*/ __Vtemp_heafba450__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    VlWide<5>/*159:0*/ __Vtemp_h25939dc4__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6),15);
    bufp->fullSData(oldp+2,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),15);
    bufp->fullSData(oldp+3,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+4,(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6),15);
    bufp->fullSData(oldp+5,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),15);
    bufp->fullSData(oldp+6,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullBit(oldp+7,(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o));
    bufp->fullCData(oldp+8,((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))),3);
    bufp->fullBit(oldp+9,((1U & (~ (IData)((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)))))));
    bufp->fullBit(oldp+10,((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))));
    __Vtemp_h0e2f7bf6__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                         << 0x38U) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))));
    __Vtemp_h0e2f7bf6__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1aU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                        << 0x38U) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                      >> 0x20U)));
    __Vtemp_h0e2f7bf6__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                >> 6U);
    __Vtemp_h0e2f7bf6__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h0e2f7bf6__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                >> 0xcU);
    __Vtemp_h0e2f7bf6__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    __Vtemp_h0e2f7bf6__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                >> 0x12U);
    __Vtemp_h0e2f7bf6__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h0e2f7bf6__0[8U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                >> 0x18U);
    __Vtemp_h0e2f7bf6__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h0e2f7bf6__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h0e2f7bf6__0[0xbU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 4U);
    __Vtemp_h0e2f7bf6__0[0xcU] = ((((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                    ^ ((1U & ((IData)(
                                                      (0x10000000ULL 
                                                       == 
                                                       (0x18000000ULL 
                                                        & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                              | (IData)(
                                                        (0x8000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                                        ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                           << 0xeU)
                                        : ((1U & ((IData)(
                                                          (0x18000000ULL 
                                                           == 
                                                           (0x38000000ULL 
                                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                  | ((~ (IData)(
                                                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                                 >> 0x1bU))) 
                                                     & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                            ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                               << 0xfU)
                                            : 0U))) 
                                   << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    __Vtemp_h0e2f7bf6__0[0xdU] = (0x7ffffU & (((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000000ULL 
                                                               == 
                                                               (0x18000000ULL 
                                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000000ULL 
                                                                 == 
                                                                 (0x18000000ULL 
                                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                   << 0xeU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                    << 0xfU)
                                                    : 0U))) 
                                              >> 0xaU));
    __Vtemp_h0e2f7bf6__0[0xeU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                   << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                << 0xeU));
    __Vtemp_h0e2f7bf6__0[0xfU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x10U);
    __Vtemp_h0e2f7bf6__0[0x10U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h0e2f7bf6__0[0x11U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                   >> 0x16U);
    __Vtemp_h0e2f7bf6__0[0x12U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h0e2f7bf6__0[0x13U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                    << 0x1eU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                    >> 0x1cU)));
    __Vtemp_h0e2f7bf6__0[0x14U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                   >> 2U);
    __Vtemp_h0e2f7bf6__0[0x15U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                    << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h0e2f7bf6__0[0x16U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                   >> 8U);
    __Vtemp_h0e2f7bf6__0[0x17U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                    << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h0e2f7bf6__0[0x18U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   >> 0xeU);
    __Vtemp_h0e2f7bf6__0[0x19U] = ((((1U & (IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                    >> 0x29U)))
                                      ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                         << 0xeU) : 0U) 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_h0e2f7bf6__0[0x1aU] = (((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x29U)))
                                     ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                        << 0xeU) : 0U) 
                                   >> 0x14U);
    bufp->fullWData(oldp+11,(__Vtemp_h0e2f7bf6__0),840);
    __Vtemp_hccd079ab__0[0U] = (IData)(vlSelf->__VdfgTmp_h2ac9f9df__0);
    __Vtemp_hccd079ab__0[1U] = (IData)((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                        >> 0x20U));
    __Vtemp_hccd079ab__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_hccd079ab__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                >> 0x18U);
    __Vtemp_hccd079ab__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_hccd079ab__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_hccd079ab__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                >> 4U);
    __Vtemp_hccd079ab__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                              << 0x14U));
    __Vtemp_hccd079ab__0[8U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                >> 0xaU);
    __Vtemp_hccd079ab__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                 << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 0xeU));
    __Vtemp_hccd079ab__0[0xaU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x10U);
    __Vtemp_hccd079ab__0[0xbU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                               << 8U));
    __Vtemp_hccd079ab__0[0xcU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                  >> 0x16U);
    __Vtemp_hccd079ab__0[0xdU] = ((((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x29U)))
                                     ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                        << 0xeU) : 0U) 
                                   << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 2U));
    bufp->fullWData(oldp+38,(__Vtemp_hccd079ab__0),448);
    __Vtemp_h0cd1d838__0[0U] = (IData)(vlSelf->__VdfgTmp_h9e108f72__0);
    __Vtemp_h0cd1d838__0[1U] = (IData)((vlSelf->__VdfgTmp_h9e108f72__0 
                                        >> 0x20U));
    __Vtemp_h0cd1d838__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                 << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                              << 0xeU));
    __Vtemp_h0cd1d838__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                >> 0x10U);
    __Vtemp_h0cd1d838__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                 << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                             << 8U));
    __Vtemp_h0cd1d838__0[5U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                >> 0x16U);
    __Vtemp_h0cd1d838__0[6U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0x29U)))
                                   ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                      << 0xeU) : 0U) 
                                 << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                           << 2U));
    bufp->fullWData(oldp+52,(__Vtemp_h0cd1d838__0),224);
    __Vtemp_hb8497458__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                               << 0x1cU) 
                                                              | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))));
    __Vtemp_hb8497458__0[1U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                                           << 0x1eU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                                              << 0x1cU) 
                                                                             | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))) 
                                                      >> 0x20U)));
    __Vtemp_hb8497458__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                                 >> 4U)));
    __Vtemp_hb8497458__0[3U] = ((((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                  ^ ((1U & ((IData)(
                                                    (0x400U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                            | (IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x600U 
                                                        & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                                      ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                                      : ((1U & ((IData)(
                                                        (0x600U 
                                                         == 
                                                         (0xe00U 
                                                          & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                                | ((~ 
                                                    ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                     >> 9U)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                          ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                             << 1U)
                                          : 0U))) << 0x18U) 
                                | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                                 >> 6U)));
    __Vtemp_hb8497458__0[4U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                 << 0x16U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                               << 0x14U) 
                                              | (0x7fU 
                                                 & (((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                     ^ 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0x400U 
                                                                   == 
                                                                   (0x600U 
                                                                    & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                                          | (IData)(
                                                                    (0x200U 
                                                                     == 
                                                                     (0x600U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                                                       ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                                                       : 
                                                      ((1U 
                                                        & ((IData)(
                                                                   (0x600U 
                                                                    == 
                                                                    (0xe00U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                                >> 9U)) 
                                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                        ? 
                                                       ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                        << 1U)
                                                        : 0U))) 
                                                    >> 8U))));
    __Vtemp_hb8497458__0[5U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                 << 0x14U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                 >> 0xaU)));
    __Vtemp_hb8497458__0[6U] = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                >> 0xcU);
    bufp->fullWData(oldp+59,(__Vtemp_hb8497458__0),224);
    __Vtemp_h647cbbf2__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
                                         << 0x26U) 
                                        | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                            << 0x24U) 
                                           | (QData)((IData)(vlSelf->__VdfgTmp_h2b13085d__0)))));
    __Vtemp_h647cbbf2__0[1U] = (IData)(((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
                                          << 0x26U) 
                                         | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                             << 0x24U) 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_h2b13085d__0)))) 
                                        >> 0x20U));
    __Vtemp_h647cbbf2__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                 << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                           << 2U));
    __Vtemp_h647cbbf2__0[3U] = 0U;
    bufp->fullWData(oldp+66,(__Vtemp_h647cbbf2__0),112);
    bufp->fullCData(oldp+70,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp),7);
    bufp->fullSData(oldp+71,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),12);
    bufp->fullSData(oldp+72,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),15);
    bufp->fullSData(oldp+73,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),14);
    bufp->fullIData(oldp+74,(((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                              << 0xeU)),28);
    bufp->fullSData(oldp+75,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod),15);
    __Vtemp_h8d902b43__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                         << 0x38U) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))));
    __Vtemp_h8d902b43__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1aU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                        << 0x38U) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                      >> 0x20U)));
    __Vtemp_h8d902b43__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                >> 6U);
    __Vtemp_h8d902b43__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h8d902b43__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                >> 0xcU);
    __Vtemp_h8d902b43__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                 << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    __Vtemp_h8d902b43__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                >> 0x12U);
    __Vtemp_h8d902b43__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_h8d902b43__0[8U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                >> 0x18U);
    __Vtemp_h8d902b43__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h8d902b43__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                   << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0x1aU));
    __Vtemp_h8d902b43__0[0xbU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 4U);
    __Vtemp_h8d902b43__0[0xcU] = 0U;
    bufp->fullWData(oldp+76,(__Vtemp_h8d902b43__0),392);
    __Vtemp_hd853608c__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                         << 0x38U) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))));
    __Vtemp_hd853608c__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                 << 0x1aU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                        << 0x38U) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                      >> 0x20U)));
    __Vtemp_hd853608c__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                >> 6U);
    __Vtemp_hd853608c__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_hd853608c__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                >> 0xcU);
    __Vtemp_hd853608c__0[5U] = 0U;
    bufp->fullWData(oldp+89,(__Vtemp_hd853608c__0),168);
    __Vtemp_h17bc6dc6__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                         << 0x3eU) 
                                        | vlSelf->__VdfgTmp_h7861aef0__0));
    __Vtemp_h17bc6dc6__0[1U] = (IData)(((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                          << 0x3eU) 
                                         | vlSelf->__VdfgTmp_h7861aef0__0) 
                                        >> 0x20U));
    __Vtemp_h17bc6dc6__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod;
    __Vtemp_h17bc6dc6__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                 << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                              << 0x18U));
    __Vtemp_h17bc6dc6__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                >> 6U);
    __Vtemp_h17bc6dc6__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h17bc6dc6__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                >> 0xcU);
    bufp->fullWData(oldp+95,(__Vtemp_h17bc6dc6__0),224);
    __Vtemp_hf816dff2__0[0U] = (IData)(vlSelf->__VdfgTmp_h2ac9f9df__0);
    __Vtemp_hf816dff2__0[1U] = (IData)((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                        >> 0x20U));
    __Vtemp_hf816dff2__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                 << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    __Vtemp_hf816dff2__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                >> 0x18U);
    __Vtemp_hf816dff2__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_hf816dff2__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 0x1aU));
    __Vtemp_hf816dff2__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                >> 4U);
    bufp->fullWData(oldp+102,(__Vtemp_hf816dff2__0),224);
    __Vtemp_h81d1b9e4__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                               << 0x1cU) 
                                                              | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))));
    __Vtemp_h81d1b9e4__0[1U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                                           << 0x1eU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                                              << 0x1cU) 
                                                                             | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))) 
                                                      >> 0x20U)));
    __Vtemp_h81d1b9e4__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                                 >> 4U)));
    __Vtemp_h81d1b9e4__0[3U] = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                >> 6U);
    bufp->fullWData(oldp+109,(__Vtemp_h81d1b9e4__0),112);
    bufp->fullCData(oldp+113,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp),7);
    bufp->fullSData(oldp+114,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),12);
    bufp->fullSData(oldp+115,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),15);
    bufp->fullSData(oldp+116,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),14);
    bufp->fullIData(oldp+117,((0xfffffffU & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xeU)))),28);
    bufp->fullCData(oldp+118,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xfU)))),3);
    bufp->fullBit(oldp+119,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+120,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0xfU)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xfU)))))));
    bufp->fullBit(oldp+121,((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+122,((1U & ((IData)((0x18000ULL 
                                            == (0x38000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xfU))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+123,((6U & ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xeU)) 
                                     << 1U))),3);
    bufp->fullBit(oldp+124,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+125,((0U == (3U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xeU))))));
    bufp->fullBit(oldp+126,((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+127,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+128,((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x29U)))),3);
    bufp->fullBit(oldp+129,((1U & (~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+130,((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0x29U)))));
    bufp->fullCData(oldp+131,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x11U)))),3);
    bufp->fullBit(oldp+132,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+133,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x11U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x11U)))))));
    bufp->fullBit(oldp+134,((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+135,((1U & ((IData)((0x60000ULL 
                                            == (0xe0000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x11U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+136,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))),3);
    bufp->fullBit(oldp+137,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+138,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x23U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x23U)))))));
    bufp->fullBit(oldp+139,((1U & ((IData)((0x1000000000ULL 
                                            == (0x1800000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x800000000ULL 
                                              == (0x1800000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+140,((1U & ((IData)((0x1800000000ULL 
                                            == (0x3800000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x23U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+141,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x25U)))),3);
    bufp->fullBit(oldp+142,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+143,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x25U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x25U)))))));
    bufp->fullBit(oldp+144,((1U & ((IData)((0x4000000000ULL 
                                            == (0x6000000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000000ULL 
                                              == (0x6000000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+145,((1U & ((IData)((0x6000000000ULL 
                                            == (0xe000000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x25U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+146,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x27U)))),3);
    bufp->fullBit(oldp+147,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+148,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x27U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x27U)))))));
    bufp->fullBit(oldp+149,((1U & ((IData)((0x10000000000ULL 
                                            == (0x18000000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000000ULL 
                                              == (0x18000000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+150,((1U & ((IData)((0x18000000000ULL 
                                            == (0x38000000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x27U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+151,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x13U)))),3);
    bufp->fullBit(oldp+152,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+153,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x13U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x13U)))))));
    bufp->fullBit(oldp+154,((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+155,((1U & ((IData)((0x180000ULL 
                                            == (0x380000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x13U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+156,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x15U)))),3);
    bufp->fullBit(oldp+157,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+158,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x15U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x15U)))))));
    bufp->fullBit(oldp+159,((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+160,((1U & ((IData)((0x600000ULL 
                                            == (0xe00000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x15U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+161,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x17U)))),3);
    bufp->fullBit(oldp+162,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+163,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x17U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x17U)))))));
    bufp->fullBit(oldp+164,((1U & ((IData)((0x1000000ULL 
                                            == (0x1800000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x800000ULL 
                                              == (0x1800000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+165,((1U & ((IData)((0x1800000ULL 
                                            == (0x3800000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x17U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+166,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x19U)))),3);
    bufp->fullBit(oldp+167,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+168,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x19U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x19U)))))));
    bufp->fullBit(oldp+169,((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+170,((1U & ((IData)((0x6000000ULL 
                                            == (0xe000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x19U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+171,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1bU)))),3);
    bufp->fullBit(oldp+172,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+173,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x1bU)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1bU)))))));
    bufp->fullBit(oldp+174,((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+175,((1U & ((IData)((0x18000000ULL 
                                            == (0x38000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1bU))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+176,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1dU)))),3);
    bufp->fullBit(oldp+177,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+178,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x1dU)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1dU)))))));
    bufp->fullBit(oldp+179,((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+180,((1U & ((IData)((0x60000000ULL 
                                            == (0xe0000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1dU))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+181,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1fU)))),3);
    bufp->fullBit(oldp+182,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+183,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x1fU)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1fU)))))));
    bufp->fullBit(oldp+184,((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+185,((1U & ((IData)((0x180000000ULL 
                                            == (0x380000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+186,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x21U)))),3);
    bufp->fullBit(oldp+187,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+188,(((0U == (7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                   >> 0x21U)))) 
                             | (7U == (7U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x21U)))))));
    bufp->fullBit(oldp+189,((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+190,((1U & ((IData)((0x600000000ULL 
                                            == (0xe00000000ULL 
                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x21U))) 
                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+191,((0xfffffffU & VL_DIV_III(28, (IData)(0x4000U), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)))),28);
    bufp->fullQData(oldp+192,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full),42);
    bufp->fullQData(oldp+194,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full),42);
    bufp->fullQData(oldp+196,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full),42);
    bufp->fullCData(oldp+198,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+199,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+200,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 3U))) 
                             | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 3U))))));
    bufp->fullBit(oldp+201,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
    bufp->fullBit(oldp+202,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 3U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+203,((6U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+204,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+205,((0U == (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 2U)))));
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                   >> 2U))));
    bufp->fullBit(oldp+207,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+208,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                     >> 5U))),3);
    bufp->fullBit(oldp+209,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+210,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 5U))) 
                             | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 5U))))));
    bufp->fullBit(oldp+211,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
    bufp->fullBit(oldp+212,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 5U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+213,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                     >> 7U))),3);
    bufp->fullBit(oldp+214,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+215,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 7U))) 
                             | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 7U))))));
    bufp->fullBit(oldp+216,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
    bufp->fullBit(oldp+217,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 7U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+218,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                     >> 9U))),3);
    bufp->fullBit(oldp+219,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+220,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 9U))) 
                             | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 9U))))));
    bufp->fullBit(oldp+221,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
    bufp->fullBit(oldp+222,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 9U)) & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+223,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code),3);
    bufp->fullBit(oldp+224,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+225,(((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                             | (7U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)))));
    bufp->fullBit(oldp+226,((1U & ((IData)((0x1000U 
                                            == (0x1800U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                   | (IData)((0x800U 
                                              == (0x1800U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
    bufp->fullSData(oldp+227,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                           >> 0x11U)) 
                               | (0U != (0x1ffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))),13);
    bufp->fullCData(oldp+228,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+229,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+234,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o),30);
    bufp->fullSData(oldp+235,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align),14);
    bufp->fullSData(oldp+236,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align),14);
    bufp->fullBit(oldp+237,(vlSelf->PvuTop__DOT__add__DOT__io_overflow));
    bufp->fullBit(oldp+238,(((IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow) 
                             & (0U != (0x3fffU & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum))))));
    bufp->fullSData(oldp+239,(vlSelf->PvuTop__DOT__add__DOT__sum),15);
    bufp->fullBit(oldp+240,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
    bufp->fullIData(oldp+241,((0xfffffffU & (IData)(
                                                    (0xfffffffULL 
                                                     & (((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          ^ 
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                           ^ 
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                            ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                         + 
                                                         ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                           & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                          | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                             | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                       | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                        >> 0xeU))))),30);
    bufp->fullIData(oldp+242,((0xfffffffU & (IData)(
                                                    (0xfffffffULL 
                                                     & (((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          ^ 
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                           ^ 
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                            ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                         + 
                                                         ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                           & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                          | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                             | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                       | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                        >> 0xeU))))),28);
    bufp->fullQData(oldp+243,((0xffffffffffffffULL 
                               & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                  ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                     ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),56);
    bufp->fullQData(oldp+245,((0xffffffffffffffULL 
                               & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                  | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                        | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),56);
    bufp->fullQData(oldp+247,((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                               ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                  ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                     ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),60);
    bufp->fullQData(oldp+249,(((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                               | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                  | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                           & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),60);
    __Vtemp_h0c422b7f__0[0U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o);
    __Vtemp_h0c422b7f__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                 << 0x1cU) | (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                      >> 0x20U)));
    __Vtemp_h0c422b7f__0[2U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                 >> 4U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    __Vtemp_h0c422b7f__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                 << 0x18U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                       >> 0x20U)) 
                                              >> 4U));
    __Vtemp_h0c422b7f__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h0c422b7f__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                 << 0x14U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h0c422b7f__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h0c422b7f__0[7U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
                                         >> 0x20U)) 
                                >> 0xcU);
    bufp->fullWData(oldp+251,(__Vtemp_h0c422b7f__0),240);
    bufp->fullQData(oldp+259,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),59);
    bufp->fullQData(oldp+261,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),59);
    __Vtemp_h4933e7c7__0[0U] = (IData)(vlSelf->__VdfgTmp_h4535eaf9__0);
    __Vtemp_h4933e7c7__0[1U] = (((IData)(vlSelf->__VdfgTmp_h2d675acb__0) 
                                 << 0x1bU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h4535eaf9__0 
                                                      >> 0x20U)));
    __Vtemp_h4933e7c7__0[2U] = (((IData)(vlSelf->__VdfgTmp_h2d675acb__0) 
                                 >> 5U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h2d675acb__0 
                                                    >> 0x20U)) 
                                           << 0x1bU));
    __Vtemp_h4933e7c7__0[3U] = (((IData)(vlSelf->__VdfgTmp_h692db4f3__0) 
                                 << 0x16U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h2d675acb__0 
                                                       >> 0x20U)) 
                                              >> 5U));
    __Vtemp_h4933e7c7__0[4U] = (((IData)(vlSelf->__VdfgTmp_h692db4f3__0) 
                                 >> 0xaU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h692db4f3__0 
                                                      >> 0x20U)) 
                                             << 0x16U));
    __Vtemp_h4933e7c7__0[5U] = (((IData)(vlSelf->__VdfgTmp_h509c563d__0) 
                                 << 0x11U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h692db4f3__0 
                                                       >> 0x20U)) 
                                              >> 0xaU));
    __Vtemp_h4933e7c7__0[6U] = (((IData)(vlSelf->__VdfgTmp_h509c563d__0) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h509c563d__0 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_h4933e7c7__0[7U] = ((IData)((vlSelf->__VdfgTmp_h509c563d__0 
                                         >> 0x20U)) 
                                >> 0xfU);
    bufp->fullWData(oldp+263,(__Vtemp_h4933e7c7__0),236);
    bufp->fullQData(oldp+271,(vlSelf->__VdfgTmp_h4535eaf9__0),58);
    bufp->fullQData(oldp+273,(vlSelf->__VdfgTmp_h2d675acb__0),58);
    bufp->fullQData(oldp+275,(vlSelf->__VdfgTmp_h692db4f3__0),58);
    bufp->fullQData(oldp+277,(vlSelf->__VdfgTmp_h509c563d__0),58);
    bufp->fullQData(oldp+279,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),59);
    bufp->fullQData(oldp+281,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),59);
    __Vtemp_hbca8450e__0[0U] = (IData)(vlSelf->__VdfgTmp_h1cd9f180__0);
    __Vtemp_hbca8450e__0[1U] = (((IData)(vlSelf->__VdfgTmp_hd62918e5__0) 
                                 << 0x1bU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h1cd9f180__0 
                                                      >> 0x20U)));
    __Vtemp_hbca8450e__0[2U] = (((IData)(vlSelf->__VdfgTmp_hd62918e5__0) 
                                 >> 5U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_hd62918e5__0 
                                                    >> 0x20U)) 
                                           << 0x1bU));
    __Vtemp_hbca8450e__0[3U] = (((IData)(vlSelf->__VdfgTmp_h764cf51b__0) 
                                 << 0x16U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_hd62918e5__0 
                                                       >> 0x20U)) 
                                              >> 5U));
    __Vtemp_hbca8450e__0[4U] = (((IData)(vlSelf->__VdfgTmp_h764cf51b__0) 
                                 >> 0xaU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h764cf51b__0 
                                                      >> 0x20U)) 
                                             << 0x16U));
    __Vtemp_hbca8450e__0[5U] = (((IData)(vlSelf->__VdfgTmp_h27cac1ce__0) 
                                 << 0x11U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h764cf51b__0 
                                                       >> 0x20U)) 
                                              >> 0xaU));
    __Vtemp_hbca8450e__0[6U] = (((IData)(vlSelf->__VdfgTmp_h27cac1ce__0) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h27cac1ce__0 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_hbca8450e__0[7U] = ((IData)((vlSelf->__VdfgTmp_h27cac1ce__0 
                                         >> 0x20U)) 
                                >> 0xfU);
    bufp->fullWData(oldp+283,(__Vtemp_hbca8450e__0),236);
    bufp->fullQData(oldp+291,(vlSelf->__VdfgTmp_h1cd9f180__0),58);
    bufp->fullQData(oldp+293,(vlSelf->__VdfgTmp_hd62918e5__0),58);
    bufp->fullQData(oldp+295,(vlSelf->__VdfgTmp_h764cf51b__0),58);
    bufp->fullQData(oldp+297,(vlSelf->__VdfgTmp_h27cac1ce__0),58);
    bufp->fullIData(oldp+299,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod),29);
    bufp->fullIData(oldp+300,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),29);
    bufp->fullIData(oldp+301,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod),29);
    bufp->fullIData(oldp+302,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod),29);
    bufp->fullIData(oldp+303,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod),29);
    bufp->fullIData(oldp+304,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod),29);
    bufp->fullIData(oldp+305,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod),29);
    bufp->fullIData(oldp+306,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod),29);
    bufp->fullIData(oldp+307,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod),29);
    bufp->fullIData(oldp+308,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod),29);
    bufp->fullIData(oldp+309,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod),29);
    bufp->fullIData(oldp+310,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod),29);
    bufp->fullIData(oldp+311,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod),29);
    bufp->fullCData(oldp+312,(((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                ? 0x3fU : (0x7fU & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum)))),7);
    bufp->fullIData(oldp+313,(((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                ? 0U : (0x3ffffffU 
                                        & ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                            ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                               ^ (vlSelf->__VdfgTmp_h76900ab1__0 
                                                  ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                           + ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                               & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                              | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                  & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                 | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                                     & vlSelf->__VdfgTmp_h1ba49810__0) 
                                                    | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                        & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                       | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                           | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                          & vlSelf->__VdfgTmp_h1ba49810__0))))))))),26);
    bufp->fullIData(oldp+314,((0x3ffffffU & (((0x80U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                               ? 0U
                                               : ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                   ^ 
                                                   (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                    ^ 
                                                    (vlSelf->__VdfgTmp_h76900ab1__0 
                                                     ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                                  + 
                                                  ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                    & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                   | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                       & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                      | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                                          & vlSelf->__VdfgTmp_h1ba49810__0) 
                                                         | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                             & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                            | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                                | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                               & vlSelf->__VdfgTmp_h1ba49810__0))))))) 
                                             << 2U))),26);
    bufp->fullIData(oldp+315,(((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                ? 0U : (0x3fffffffU 
                                        & ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                            ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                               ^ (vlSelf->__VdfgTmp_h76900ab1__0 
                                                  ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                           + ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                               & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                              | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                  & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                 | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                                     & vlSelf->__VdfgTmp_h1ba49810__0) 
                                                    | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                        & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                       | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                           | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                          & vlSelf->__VdfgTmp_h1ba49810__0))))))))),30);
    bufp->fullCData(oldp+316,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum),8);
    bufp->fullIData(oldp+317,((vlSelf->__VdfgTmp_h6b6721ad__0 
                               ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                  ^ (vlSelf->__VdfgTmp_h76900ab1__0 
                                     ^ vlSelf->__VdfgTmp_h1ba49810__0)))),28);
    bufp->fullIData(oldp+318,(((vlSelf->__VdfgTmp_h6b6721ad__0 
                                & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                               | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                   & vlSelf->__VdfgTmp_h76900ab1__0) 
                                  | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                      & vlSelf->__VdfgTmp_h1ba49810__0) 
                                     | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                         & vlSelf->__VdfgTmp_h76900ab1__0) 
                                        | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                            | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                           & vlSelf->__VdfgTmp_h1ba49810__0)))))),28);
    bufp->fullIData(oldp+319,((vlSelf->__VdfgTmp_h6b6721ad__0 
                               ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                  ^ (vlSelf->__VdfgTmp_h76900ab1__0 
                                     ^ vlSelf->__VdfgTmp_h1ba49810__0)))),31);
    bufp->fullIData(oldp+320,(((vlSelf->__VdfgTmp_h6b6721ad__0 
                                & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                               | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                   & vlSelf->__VdfgTmp_h76900ab1__0) 
                                  | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                      & vlSelf->__VdfgTmp_h1ba49810__0) 
                                     | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                         & vlSelf->__VdfgTmp_h76900ab1__0) 
                                        | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                            | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                           & vlSelf->__VdfgTmp_h1ba49810__0)))))),31);
    __Vtemp_heafba450__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h3bbcfaf3__0)) 
                                         << 0x1fU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h6b6721ad__0))));
    __Vtemp_heafba450__0[1U] = ((vlSelf->__VdfgTmp_h76900ab1__0 
                                 << 0x1eU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->__VdfgTmp_h3bbcfaf3__0)) 
                                                        << 0x1fU) 
                                                       | (QData)((IData)(vlSelf->__VdfgTmp_h6b6721ad__0))) 
                                                      >> 0x20U)));
    __Vtemp_heafba450__0[2U] = ((vlSelf->__VdfgTmp_h1ba49810__0 
                                 << 0x1dU) | (vlSelf->__VdfgTmp_h76900ab1__0 
                                              >> 2U));
    __Vtemp_heafba450__0[3U] = (vlSelf->__VdfgTmp_h1ba49810__0 
                                >> 3U);
    bufp->fullWData(oldp+321,(__Vtemp_heafba450__0),124);
    bufp->fullIData(oldp+325,(vlSelf->__VdfgTmp_h6b6721ad__0),30);
    bufp->fullIData(oldp+326,(vlSelf->__VdfgTmp_h3bbcfaf3__0),30);
    bufp->fullIData(oldp+327,(vlSelf->__VdfgTmp_h76900ab1__0),30);
    bufp->fullIData(oldp+328,(vlSelf->__VdfgTmp_h1ba49810__0),30);
    bufp->fullSData(oldp+329,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod),15);
    bufp->fullSData(oldp+330,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),15);
    bufp->fullSData(oldp+331,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod),15);
    bufp->fullSData(oldp+332,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod),15);
    bufp->fullSData(oldp+333,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod),15);
    bufp->fullIData(oldp+334,(vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+335,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullSData(oldp+336,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),14);
    bufp->fullSData(oldp+337,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),14);
    bufp->fullSData(oldp+338,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),14);
    bufp->fullSData(oldp+339,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),14);
    bufp->fullCData(oldp+340,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp),7);
    bufp->fullSData(oldp+341,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                           >> 0x11U)) 
                               | (0U != (0x1ffffU & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))),13);
    bufp->fullCData(oldp+342,((0x1fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+343,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+348,(vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o),30);
    bufp->fullBit(oldp+349,(vlSelf->clock));
    bufp->fullBit(oldp+350,(vlSelf->reset));
    bufp->fullSData(oldp+351,(vlSelf->io_posit_i1_0),16);
    bufp->fullSData(oldp+352,(vlSelf->io_posit_i2_0),16);
    bufp->fullCData(oldp+353,(vlSelf->io_op),3);
    bufp->fullSData(oldp+354,(vlSelf->io_posit_o_0),16);
    bufp->fullSData(oldp+355,(vlSelf->io_posit_dot_o),16);
    bufp->fullBit(oldp+356,((1U & ((IData)(vlSelf->io_posit_i1_0) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+357,((1U & ((IData)(vlSelf->io_posit_i2_0) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+358,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                    | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                    ? ((IData)(vlSelf->io_posit_i1_0) 
                                       >> 0xfU) : ((IData)(vlSelf->io_posit_i2_0) 
                                                   >> 0xfU)))));
    bufp->fullCData(oldp+359,((0x7fU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                        + (IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow)))),7);
    bufp->fullSData(oldp+360,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                ? (IData)(vlSelf->__VdfgTmp_hf89a3cfa__0)
                                : (IData)(vlSelf->__VdfgTmp_h132b72d8__0))),14);
    bufp->fullCData(oldp+361,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))),4);
    bufp->fullCData(oldp+362,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+364,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+365,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+367,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))),4);
    bufp->fullCData(oldp+368,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+370,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+371,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+373,((0x7fU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                        - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp)))),7);
    bufp->fullIData(oldp+374,(((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x29U)))
                                ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   << 0xeU) : 0U)),29);
    bufp->fullIData(oldp+375,((0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                              ^ ((1U 
                                                  & ((IData)(
                                                             (0x10000000ULL 
                                                              == 
                                                              (0x18000000ULL 
                                                               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | (IData)(
                                                               (0x8000000ULL 
                                                                == 
                                                                (0x18000000ULL 
                                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                  << 0xeU)
                                                  : 
                                                 ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                   << 0xfU)
                                                   : 0U))))),29);
    bufp->fullIData(oldp+376,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i),30);
    bufp->fullIData(oldp+377,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp),30);
    bufp->fullSData(oldp+378,((0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x400U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                               | (IData)(
                                                         (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                                              ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x600U 
                                                              == 
                                                              (0xe00U 
                                                               & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                          >> 9U)) 
                                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                  << 1U)
                                                  : 0U))))),15);
    bufp->fullBit(oldp+379,((1U & (((~ (IData)((0U 
                                                != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)))) 
                                    & (IData)((0x1800U 
                                               == (0x1800U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 0xbU)) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+380,((1U & ((1U == (IData)(vlSelf->io_op))
                                    ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                        ? ((IData)(vlSelf->io_posit_i1_0) 
                                           >> 0xfU)
                                        : ((IData)(vlSelf->io_posit_i2_0) 
                                           >> 0xfU))
                                    : ((2U == (IData)(vlSelf->io_op))
                                        ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                            & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                           ^ ((IData)(vlSelf->io_posit_i1_0) 
                                              >> 0xfU))
                                        : ((3U == (IData)(vlSelf->io_op))
                                            ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                            : ((4U 
                                                == (IData)(vlSelf->io_op)) 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))));
    bufp->fullCData(oldp+381,(((5U == (IData)(vlSelf->io_op))
                                ? 0U : (IData)(vlSelf->__VdfgTmp_h8f00dd97__0))),7);
    bufp->fullSData(oldp+382,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac),13);
    bufp->fullSData(oldp+383,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac))
                                ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                           ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                               ? ((IData)(vlSelf->io_posit_i1_0) 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->io_posit_i2_0) 
                                                  >> 0xfU))
                                           : ((2U == (IData)(vlSelf->io_op))
                                               ? ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_0) 
                                                   >> 0xfU))
                                               : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))
                                    ? (0x8000U | (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)))))
                                    : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))
                                : 0U)),16);
    bufp->fullQData(oldp+384,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->fullCData(oldp+386,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->fullQData(oldp+387,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),44);
    bufp->fullCData(oldp+389,(((5U == (IData)(vlSelf->io_op))
                                ? ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                    ? (0x7fU & (IData)(vlSelf->__VdfgTmp_hebc8eb6b__0))
                                    : 0U) : 0U)),7);
    bufp->fullSData(oldp+390,(((5U == (IData)(vlSelf->io_op))
                                ? ((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                               >> 0x11U)) 
                                   | (0U != (0x1ffffU 
                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))
                                : 0U)),13);
    bufp->fullSData(oldp+391,((((5U == (IData)(vlSelf->io_op)) 
                                & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                   >> 0x1dU)) ? (0x7fffU 
                                                 & ((IData)(
                                                            (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
                                                             >> 0xfU)) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(
                                                                (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
                                                                 >> 0xeU)) 
                                                        & (IData)(
                                                                  (0ULL 
                                                                   != 
                                                                   (0xbfffULL 
                                                                    & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o)))))))
                                : 0U)),16);
    bufp->fullQData(oldp+392,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->fullCData(oldp+394,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->fullQData(oldp+395,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),44);
    bufp->fullCData(oldp+397,((0xffU & ((IData)(0x12U) 
                                        + ((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                ? (
                                                   (0xe0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(1U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U)) 
                                                                      >> 4U)))) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & (((IData)(1U) 
                                                          - 
                                                          vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                         - (IData)(1U))))
                                                : (
                                                   (0xe0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- 
                                                                       vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      >> 4U)))) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & (- 
                                                         vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                            : 0U)))),8);
    bufp->fullBit(oldp+398,((1U & (~ vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+399,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullCData(oldp+400,((0x7fU & ((IData)(2U) 
                                        + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                            ? ((0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))
                                                ? (
                                                   (0x70U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(1U) 
                                                                        - (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                       - (IData)(1U)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (((IData)(1U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                         - (IData)(1U))))
                                                : (
                                                   (0x70U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))))
                                            : 0U)))),7);
    bufp->fullSData(oldp+401,(((0x1ffeU & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                           >> 1U)) 
                               | (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))),13);
    bufp->fullCData(oldp+402,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+404,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+405,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullSData(oldp+407,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),14);
    bufp->fullIData(oldp+408,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),30);
    bufp->fullCData(oldp+409,(((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                ? (IData)(vlSelf->__VdfgTmp_hebc8eb6b__0)
                                : 0U)),8);
    bufp->fullIData(oldp+410,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i),29);
    bufp->fullBit(oldp+411,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+412,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+413,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),29);
    bufp->fullCData(oldp+414,((0x7fU & ((IData)(2U) 
                                        + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                            ? ((0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))
                                                ? (
                                                   (0x70U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(1U) 
                                                                        - (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                       - (IData)(1U)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (((IData)(1U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                         - (IData)(1U))))
                                                : (
                                                   (0x70U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))))
                                            : 0U)))),7);
    bufp->fullSData(oldp+415,(((0x1ffeU & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o) 
                                           >> 1U)) 
                               | (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))),13);
    bufp->fullCData(oldp+416,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+418,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+419,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullSData(oldp+421,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),14);
    bufp->fullBit(oldp+422,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                   ^ ((IData)(vlSelf->io_posit_i1_0) 
                                      >> 0xfU)))));
    bufp->fullCData(oldp+423,((0x7fU & ((1U & ((~ ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                   >> 0xeU)) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                         ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp))))),7);
    bufp->fullSData(oldp+424,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                ? (IData)(vlSelf->__VdfgTmp_h132b72d8__0)
                                : (IData)(vlSelf->__VdfgTmp_hf89a3cfa__0))),14);
    bufp->fullBit(oldp+425,(((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                             & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                >> 0xeU))));
    bufp->fullBit(oldp+426,((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                              & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                 >> 0xeU)) & (0U != 
                                              (0x3fffU 
                                               & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum))))));
    bufp->fullIData(oldp+427,(0xfU),32);
    bufp->fullBit(oldp+428,(1U));
    bufp->fullIData(oldp+429,(4U),32);
    bufp->fullQData(oldp+430,(0xedcba9876543210ULL),60);
    bufp->fullBit(oldp+432,(0U));
    bufp->fullCData(oldp+433,(0U),7);
    bufp->fullCData(oldp+434,(0U),3);
    bufp->fullSData(oldp+435,(0U),15);
    bufp->fullBit(oldp+436,(1U));
    bufp->fullIData(oldp+437,(0x1eU),32);
    bufp->fullIData(oldp+438,(5U),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+439,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+444,(0xeU),32);
    bufp->fullQData(oldp+445,(0xdcba9876543210ULL),56);
    bufp->fullIData(oldp+447,(0x1dU),32);
    __Vtemp_h25939dc4__0[0U] = 0x8a418820U;
    __Vtemp_h25939dc4__0[1U] = 0xc5a92839U;
    __Vtemp_h25939dc4__0[2U] = 0xca307b9aU;
    __Vtemp_h25939dc4__0[3U] = 0x38bdab49U;
    __Vtemp_h25939dc4__0[4U] = 0x1cdebU;
    bufp->fullWData(oldp+448,(__Vtemp_h25939dc4__0),145);
}
