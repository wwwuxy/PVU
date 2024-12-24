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
    tracep->declBit(c+1121,"clock", false,-1);
    tracep->declBit(c+1122,"reset", false,-1);
    tracep->declBus(c+1123,"io_posit_i1_0", false,-1, 15,0);
    tracep->declBus(c+1124,"io_posit_i1_1", false,-1, 15,0);
    tracep->declBus(c+1125,"io_posit_i1_2", false,-1, 15,0);
    tracep->declBus(c+1126,"io_posit_i1_3", false,-1, 15,0);
    tracep->declBus(c+1127,"io_posit_i2_0", false,-1, 15,0);
    tracep->declBus(c+1128,"io_posit_i2_1", false,-1, 15,0);
    tracep->declBus(c+1129,"io_posit_i2_2", false,-1, 15,0);
    tracep->declBus(c+1130,"io_posit_i2_3", false,-1, 15,0);
    tracep->declBus(c+1131,"io_op", false,-1, 2,0);
    tracep->declBus(c+1132,"io_posit_o_0", false,-1, 15,0);
    tracep->declBus(c+1133,"io_posit_o_1", false,-1, 15,0);
    tracep->declBus(c+1134,"io_posit_o_2", false,-1, 15,0);
    tracep->declBus(c+1135,"io_posit_o_3", false,-1, 15,0);
    tracep->declBus(c+1136,"io_posit_dot_o", false,-1, 15,0);
    tracep->pushNamePrefix("PvuTop ");
    tracep->declBit(c+1121,"clock", false,-1);
    tracep->declBit(c+1122,"reset", false,-1);
    tracep->declBus(c+1123,"io_posit_i1_0", false,-1, 15,0);
    tracep->declBus(c+1124,"io_posit_i1_1", false,-1, 15,0);
    tracep->declBus(c+1125,"io_posit_i1_2", false,-1, 15,0);
    tracep->declBus(c+1126,"io_posit_i1_3", false,-1, 15,0);
    tracep->declBus(c+1127,"io_posit_i2_0", false,-1, 15,0);
    tracep->declBus(c+1128,"io_posit_i2_1", false,-1, 15,0);
    tracep->declBus(c+1129,"io_posit_i2_2", false,-1, 15,0);
    tracep->declBus(c+1130,"io_posit_i2_3", false,-1, 15,0);
    tracep->declBus(c+1131,"io_op", false,-1, 2,0);
    tracep->declBus(c+1132,"io_posit_o_0", false,-1, 15,0);
    tracep->declBus(c+1133,"io_posit_o_1", false,-1, 15,0);
    tracep->declBus(c+1134,"io_posit_o_2", false,-1, 15,0);
    tracep->declBus(c+1135,"io_posit_o_3", false,-1, 15,0);
    tracep->declBus(c+1136,"io_posit_dot_o", false,-1, 15,0);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+1137,"io_pir_sign1_i_0", false,-1);
    tracep->declBit(c+1138,"io_pir_sign1_i_1", false,-1);
    tracep->declBit(c+1139,"io_pir_sign1_i_2", false,-1);
    tracep->declBit(c+1140,"io_pir_sign1_i_3", false,-1);
    tracep->declBit(c+1141,"io_pir_sign2_i_0", false,-1);
    tracep->declBit(c+1142,"io_pir_sign2_i_1", false,-1);
    tracep->declBit(c+1143,"io_pir_sign2_i_2", false,-1);
    tracep->declBit(c+1144,"io_pir_sign2_i_3", false,-1);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1031,"io_pir_frac1_aligned_0", false,-1, 11,0);
    tracep->declBus(c+1046,"io_pir_frac1_aligned_1", false,-1, 11,0);
    tracep->declBus(c+1061,"io_pir_frac1_aligned_2", false,-1, 11,0);
    tracep->declBus(c+1076,"io_pir_frac1_aligned_3", false,-1, 11,0);
    tracep->declBus(c+1032,"io_pir_frac2_aligned_0", false,-1, 11,0);
    tracep->declBus(c+1047,"io_pir_frac2_aligned_1", false,-1, 11,0);
    tracep->declBus(c+1062,"io_pir_frac2_aligned_2", false,-1, 11,0);
    tracep->declBus(c+1077,"io_pir_frac2_aligned_3", false,-1, 11,0);
    tracep->declBit(c+1149,"io_pir_sign_o_0", false,-1);
    tracep->declBit(c+1150,"io_pir_sign_o_1", false,-1);
    tracep->declBit(c+1151,"io_pir_sign_o_2", false,-1);
    tracep->declBit(c+1152,"io_pir_sign_o_3", false,-1);
    tracep->declBus(c+1153,"io_pir_exp_o_0", false,-1, 6,0);
    tracep->declBus(c+1154,"io_pir_exp_o_1", false,-1, 6,0);
    tracep->declBus(c+1155,"io_pir_exp_o_2", false,-1, 6,0);
    tracep->declBus(c+1156,"io_pir_exp_o_3", false,-1, 6,0);
    tracep->declBus(c+1157,"io_pir_frac_o_0", false,-1, 11,0);
    tracep->declBus(c+1158,"io_pir_frac_o_1", false,-1, 11,0);
    tracep->declBus(c+1159,"io_pir_frac_o_2", false,-1, 11,0);
    tracep->declBus(c+1160,"io_pir_frac_o_3", false,-1, 11,0);
    tracep->declBus(c+1033,"sum", false,-1, 12,0);
    tracep->declBit(c+1034,"mant1_greater", false,-1);
    tracep->declBus(c+1048,"sum_1", false,-1, 12,0);
    tracep->declBit(c+1049,"mant1_greater_1", false,-1);
    tracep->declBus(c+1063,"sum_2", false,-1, 12,0);
    tracep->declBit(c+1064,"mant1_greater_2", false,-1);
    tracep->declBus(c+1078,"sum_3", false,-1, 12,0);
    tracep->declBit(c+1079,"mant1_greater_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode1 ");
    tracep->declBus(c+1123,"io_posit_0", false,-1, 15,0);
    tracep->declBus(c+1124,"io_posit_1", false,-1, 15,0);
    tracep->declBus(c+1125,"io_posit_2", false,-1, 15,0);
    tracep->declBus(c+1126,"io_posit_3", false,-1, 15,0);
    tracep->declBit(c+1137,"io_Sign_0", false,-1);
    tracep->declBit(c+1138,"io_Sign_1", false,-1);
    tracep->declBit(c+1139,"io_Sign_2", false,-1);
    tracep->declBit(c+1140,"io_Sign_3", false,-1);
    tracep->declBus(c+1145,"io_Exp_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_Exp_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_Exp_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_Exp_3", false,-1, 6,0);
    tracep->declBus(c+1161,"io_Frac_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_Frac_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_Frac_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_Frac_3", false,-1, 11,0);
    tracep->declBus(c+1,"operand_0", false,-1, 14,0);
    tracep->declBus(c+2,"operand_1", false,-1, 14,0);
    tracep->declBus(c+3,"operand_2", false,-1, 14,0);
    tracep->declBus(c+4,"operand_3", false,-1, 14,0);
    tracep->declBus(c+1165,"same_length_0", false,-1, 3,0);
    tracep->declBus(c+1166,"same_length_1", false,-1, 3,0);
    tracep->declBus(c+1167,"same_length_2", false,-1, 3,0);
    tracep->declBus(c+1168,"same_length_3", false,-1, 3,0);
    tracep->declBus(c+1169,"es_value_0", false,-1, 1,0);
    tracep->declBus(c+1170,"es_value_1", false,-1, 1,0);
    tracep->declBus(c+1171,"es_value_2", false,-1, 1,0);
    tracep->declBus(c+1172,"es_value_3", false,-1, 1,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+1,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1173,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1174,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_1 ");
    tracep->declBus(c+2,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1175,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1176,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_2 ");
    tracep->declBus(c+3,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1177,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1178,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_3 ");
    tracep->declBus(c+4,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1179,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1180,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"in_i", false,-1, 14,0);
    tracep->declBus(c+1181,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1182,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1183,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1184,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+6,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcModule_1 ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"in_i", false,-1, 14,0);
    tracep->declBus(c+1186,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1187,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1188,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1189,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+8,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcModule_2 ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"in_i", false,-1, 14,0);
    tracep->declBus(c+1191,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1192,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1193,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1194,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+10,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcModule_3 ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"in_i", false,-1, 14,0);
    tracep->declBus(c+1196,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1197,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1198,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1199,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+12,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->declBus(c+1127,"io_posit_0", false,-1, 15,0);
    tracep->declBus(c+1128,"io_posit_1", false,-1, 15,0);
    tracep->declBus(c+1129,"io_posit_2", false,-1, 15,0);
    tracep->declBus(c+1130,"io_posit_3", false,-1, 15,0);
    tracep->declBit(c+1141,"io_Sign_0", false,-1);
    tracep->declBit(c+1142,"io_Sign_1", false,-1);
    tracep->declBit(c+1143,"io_Sign_2", false,-1);
    tracep->declBit(c+1144,"io_Sign_3", false,-1);
    tracep->declBus(c+1201,"io_Exp_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_Exp_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_Exp_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_Exp_3", false,-1, 6,0);
    tracep->declBus(c+121,"io_Frac_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_Frac_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_Frac_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_Frac_3", false,-1, 11,0);
    tracep->declBus(c+13,"operand_0", false,-1, 14,0);
    tracep->declBus(c+14,"operand_1", false,-1, 14,0);
    tracep->declBus(c+15,"operand_2", false,-1, 14,0);
    tracep->declBus(c+16,"operand_3", false,-1, 14,0);
    tracep->declBus(c+1205,"same_length_0", false,-1, 3,0);
    tracep->declBus(c+1206,"same_length_1", false,-1, 3,0);
    tracep->declBus(c+1207,"same_length_2", false,-1, 3,0);
    tracep->declBus(c+1208,"same_length_3", false,-1, 3,0);
    tracep->declBus(c+1209,"es_value_0", false,-1, 1,0);
    tracep->declBus(c+1210,"es_value_1", false,-1, 1,0);
    tracep->declBus(c+1211,"es_value_2", false,-1, 1,0);
    tracep->declBus(c+1212,"es_value_3", false,-1, 1,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+13,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1213,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+122,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_1 ");
    tracep->declBus(c+14,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1214,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+220,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_2 ");
    tracep->declBus(c+15,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1215,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+318,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_3 ");
    tracep->declBus(c+16,"io_operand_i", false,-1, 14,0);
    tracep->declBus(c+1216,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+416,"io_result_o", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"in_i", false,-1, 14,0);
    tracep->declBus(c+1217,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1218,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1219,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1220,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+18,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcModule_1 ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"in_i", false,-1, 14,0);
    tracep->declBus(c+1222,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1223,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1224,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1225,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+20,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcModule_2 ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"in_i", false,-1, 14,0);
    tracep->declBus(c+1227,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1228,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1229,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1230,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+22,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcModule_3 ");
    tracep->declBus(c+1374,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+23,"in_i", false,-1, 14,0);
    tracep->declBus(c+1232,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1233,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1377,"index_lut", false,-1, 59,0);
    tracep->declBus(c+1234,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1235,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+24,"in_tmp", false,-1, 14,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1374,"i", false,-1, 31,0);
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
    tracep->declBit(c+1137,"io_pir_sign1_i_0", false,-1);
    tracep->declBit(c+1138,"io_pir_sign1_i_1", false,-1);
    tracep->declBit(c+1139,"io_pir_sign1_i_2", false,-1);
    tracep->declBit(c+1140,"io_pir_sign1_i_3", false,-1);
    tracep->declBit(c+1141,"io_pir_sign2_i_0", false,-1);
    tracep->declBit(c+1142,"io_pir_sign2_i_1", false,-1);
    tracep->declBit(c+1143,"io_pir_sign2_i_2", false,-1);
    tracep->declBit(c+1144,"io_pir_sign2_i_3", false,-1);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1201,"io_pir_exp2_i_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_pir_exp2_i_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_pir_exp2_i_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_pir_exp2_i_3", false,-1, 6,0);
    tracep->declBus(c+1161,"io_pir_frac1_i_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_pir_frac1_i_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_pir_frac1_i_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_pir_frac1_i_3", false,-1, 11,0);
    tracep->declBus(c+121,"io_pir_frac2_i_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_pir_frac2_i_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_pir_frac2_i_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_pir_frac2_i_3", false,-1, 11,0);
    tracep->declBit(c+1237,"io_pir_sign_o_0", false,-1);
    tracep->declBit(c+1238,"io_pir_sign_o_1", false,-1);
    tracep->declBit(c+1239,"io_pir_sign_o_2", false,-1);
    tracep->declBit(c+1240,"io_pir_sign_o_3", false,-1);
    tracep->declBus(c+1241,"io_pir_exp_o_0", false,-1, 6,0);
    tracep->declBus(c+1242,"io_pir_exp_o_1", false,-1, 6,0);
    tracep->declBus(c+1243,"io_pir_exp_o_2", false,-1, 6,0);
    tracep->declBus(c+1244,"io_pir_exp_o_3", false,-1, 6,0);
    tracep->declBus(c+513,"io_pir_frac_o_0", false,-1, 25,0);
    tracep->declBus(c+638,"io_pir_frac_o_1", false,-1, 25,0);
    tracep->declBus(c+763,"io_pir_frac_o_2", false,-1, 25,0);
    tracep->declBus(c+888,"io_pir_frac_o_3", false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dotproduct ");
    tracep->declBit(c+1121,"clock", false,-1);
    tracep->declBit(c+1122,"reset", false,-1);
    tracep->declBit(c+1137,"io_pir_sign1_i_0", false,-1);
    tracep->declBit(c+1138,"io_pir_sign1_i_1", false,-1);
    tracep->declBit(c+1139,"io_pir_sign1_i_2", false,-1);
    tracep->declBit(c+1140,"io_pir_sign1_i_3", false,-1);
    tracep->declBit(c+1141,"io_pir_sign2_i_0", false,-1);
    tracep->declBit(c+1142,"io_pir_sign2_i_1", false,-1);
    tracep->declBit(c+1143,"io_pir_sign2_i_2", false,-1);
    tracep->declBit(c+1144,"io_pir_sign2_i_3", false,-1);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1201,"io_pir_exp2_i_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_pir_exp2_i_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_pir_exp2_i_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_pir_exp2_i_3", false,-1, 6,0);
    tracep->declBus(c+1161,"io_pir_frac1_i_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_pir_frac1_i_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_pir_frac1_i_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_pir_frac1_i_3", false,-1, 11,0);
    tracep->declBus(c+121,"io_pir_frac2_i_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_pir_frac2_i_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_pir_frac2_i_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_pir_frac2_i_3", false,-1, 11,0);
    tracep->declBit(c+1379,"io_pir_sign_o", false,-1);
    tracep->declBus(c+1013,"io_pir_frac_o", false,-1, 25,0);
    tracep->declBus(c+1117,"pir_frac_cmp_tmp_0", false,-1, 25,0);
    tracep->declBus(c+1118,"pir_frac_cmp_tmp_1", false,-1, 25,0);
    tracep->declBus(c+1119,"pir_frac_cmp_tmp_2", false,-1, 25,0);
    tracep->declBus(c+1120,"pir_frac_cmp_tmp_3", false,-1, 25,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+1014,"io_operands_i_0", false,-1, 25,0);
    tracep->declBus(c+1015,"io_operands_i_1", false,-1, 25,0);
    tracep->declBus(c+1016,"io_operands_i_2", false,-1, 25,0);
    tracep->declBus(c+1017,"io_operands_i_3", false,-1, 25,0);
    tracep->declBus(c+1018,"io_sum_o", false,-1, 27,0);
    tracep->declBus(c+1019,"io_carry_o", false,-1, 27,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+1014,"io_operands_i_0", false,-1, 25,0);
    tracep->declBus(c+1015,"io_operands_i_1", false,-1, 25,0);
    tracep->declBus(c+1016,"io_operands_i_2", false,-1, 25,0);
    tracep->declBus(c+1017,"io_operands_i_3", false,-1, 25,0);
    tracep->declBus(c+1018,"io_sum_o", false,-1, 27,0);
    tracep->declBus(c+1019,"io_carry_o", false,-1, 27,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encode ");
    tracep->declBit(c+1245,"io_pir_sign_0", false,-1);
    tracep->declBit(c+1246,"io_pir_sign_1", false,-1);
    tracep->declBit(c+1247,"io_pir_sign_2", false,-1);
    tracep->declBit(c+1248,"io_pir_sign_3", false,-1);
    tracep->declBus(c+1249,"io_pir_exp_0", false,-1, 6,0);
    tracep->declBus(c+1250,"io_pir_exp_1", false,-1, 6,0);
    tracep->declBus(c+1251,"io_pir_exp_2", false,-1, 6,0);
    tracep->declBus(c+1252,"io_pir_exp_3", false,-1, 6,0);
    tracep->declBus(c+1253,"io_pir_frac_0", false,-1, 12,0);
    tracep->declBus(c+1254,"io_pir_frac_1", false,-1, 12,0);
    tracep->declBus(c+1255,"io_pir_frac_2", false,-1, 12,0);
    tracep->declBus(c+1256,"io_pir_frac_3", false,-1, 12,0);
    tracep->declBus(c+1257,"io_posit_0", false,-1, 15,0);
    tracep->declBus(c+1258,"io_posit_1", false,-1, 15,0);
    tracep->declBus(c+1259,"io_posit_2", false,-1, 15,0);
    tracep->declBus(c+1260,"io_posit_3", false,-1, 15,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declQuad(c+1261,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+1263,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+1264,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_1 ");
    tracep->declQuad(c+1266,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+1268,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+1269,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_2 ");
    tracep->declQuad(c+1271,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+1273,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+1274,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_3 ");
    tracep->declQuad(c+1276,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+1278,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+1279,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encode_dot ");
    tracep->declBit(c+1379,"io_pir_sign", false,-1);
    tracep->declBus(c+1281,"io_pir_exp", false,-1, 6,0);
    tracep->declBus(c+1282,"io_pir_frac", false,-1, 12,0);
    tracep->declBus(c+1283,"io_posit", false,-1, 15,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declQuad(c+1284,"io_operand_i", false,-1, 43,0);
    tracep->declBus(c+1286,"io_shift_amount", false,-1, 3,0);
    tracep->declQuad(c+1287,"io_result_o", false,-1, 43,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm ");
    tracep->declBus(c+1020,"io_pir_frac_i", false,-1, 25,0);
    tracep->declBus(c+1289,"io_exp_adjust", false,-1, 7,0);
    tracep->declBus(c+1023,"io_pir_frac_o", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1380,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1381,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1021,"in_i", false,-1, 24,0);
    tracep->declBus(c+1024,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1290,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1381,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1382,"index_lut", false,-1, 124,0);
    tracep->declBus(c+1291,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1025,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1022,"in_tmp", false,-1, 24,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1380,"i", false,-1, 31,0);
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
    tracep->declBus(c+1020,"io_operand_i", false,-1, 25,0);
    tracep->declBus(c+1024,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1030,"io_result_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_1 ");
    tracep->declBus(c+1035,"io_pir_frac_i_0", false,-1, 11,0);
    tracep->declBus(c+1050,"io_pir_frac_i_1", false,-1, 11,0);
    tracep->declBus(c+1065,"io_pir_frac_i_2", false,-1, 11,0);
    tracep->declBus(c+1080,"io_pir_frac_i_3", false,-1, 11,0);
    tracep->declBus(c+1292,"io_exp_adjust_0", false,-1, 6,0);
    tracep->declBus(c+1293,"io_exp_adjust_1", false,-1, 6,0);
    tracep->declBus(c+1294,"io_exp_adjust_2", false,-1, 6,0);
    tracep->declBus(c+1295,"io_exp_adjust_3", false,-1, 6,0);
    tracep->declBus(c+1296,"io_pir_frac_o_0", false,-1, 12,0);
    tracep->declBus(c+1297,"io_pir_frac_o_1", false,-1, 12,0);
    tracep->declBus(c+1298,"io_pir_frac_o_2", false,-1, 12,0);
    tracep->declBus(c+1299,"io_pir_frac_o_3", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1386,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1036,"in_i", false,-1, 10,0);
    tracep->declBus(c+1300,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1301,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1387,"index_lut", false,-1, 43,0);
    tracep->declBus(c+1302,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1303,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+1037,"in_tmp", false,-1, 10,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1386,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcMod_1 ");
    tracep->declBus(c+1386,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1051,"in_i", false,-1, 10,0);
    tracep->declBus(c+1305,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1306,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1387,"index_lut", false,-1, 43,0);
    tracep->declBus(c+1307,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1308,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+1052,"in_tmp", false,-1, 10,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1386,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcMod_2 ");
    tracep->declBus(c+1386,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1066,"in_i", false,-1, 10,0);
    tracep->declBus(c+1310,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1311,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1387,"index_lut", false,-1, 43,0);
    tracep->declBus(c+1312,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1313,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+1067,"in_tmp", false,-1, 10,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1386,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcMod_3 ");
    tracep->declBus(c+1386,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1376,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1081,"in_i", false,-1, 10,0);
    tracep->declBus(c+1315,"cnt_o", false,-1, 3,0);
    tracep->declBit(c+1316,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1376,"NumLevels", false,-1, 31,0);
    tracep->declQuad(c+1387,"index_lut", false,-1, 43,0);
    tracep->declBus(c+1317,"sel_nodes", false,-1, 15,0);
    tracep->declQuad(c+1318,"index_nodes", false,-1, 63,0);
    tracep->declBus(c+1082,"in_tmp", false,-1, 10,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1386,"i", false,-1, 31,0);
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
    tracep->declBus(c+1035,"io_operand_i", false,-1, 11,0);
    tracep->declBus(c+1315,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1320,"io_result_o", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter_1 ");
    tracep->declBus(c+1050,"io_operand_i", false,-1, 11,0);
    tracep->declBus(c+1315,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1321,"io_result_o", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter_2 ");
    tracep->declBus(c+1065,"io_operand_i", false,-1, 11,0);
    tracep->declBus(c+1315,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1322,"io_result_o", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter_3 ");
    tracep->declBus(c+1080,"io_operand_i", false,-1, 11,0);
    tracep->declBus(c+1315,"io_shift_amount", false,-1, 3,0);
    tracep->declBus(c+1323,"io_result_o", false,-1, 11,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("frac_norm_2 ");
    tracep->declBus(c+1038,"io_pir_frac_i_0", false,-1, 25,0);
    tracep->declBus(c+1053,"io_pir_frac_i_1", false,-1, 25,0);
    tracep->declBus(c+1068,"io_pir_frac_i_2", false,-1, 25,0);
    tracep->declBus(c+1083,"io_pir_frac_i_3", false,-1, 25,0);
    tracep->declBus(c+1324,"io_exp_adjust_0", false,-1, 7,0);
    tracep->declBus(c+1325,"io_exp_adjust_1", false,-1, 7,0);
    tracep->declBus(c+1326,"io_exp_adjust_2", false,-1, 7,0);
    tracep->declBus(c+1327,"io_exp_adjust_3", false,-1, 7,0);
    tracep->declBus(c+1328,"io_pir_frac_o_0", false,-1, 12,0);
    tracep->declBus(c+1329,"io_pir_frac_o_1", false,-1, 12,0);
    tracep->declBus(c+1330,"io_pir_frac_o_2", false,-1, 12,0);
    tracep->declBus(c+1109,"io_pir_frac_o_3", false,-1, 12,0);
    tracep->pushNamePrefix("lzcMod ");
    tracep->declBus(c+1380,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1381,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1039,"in_i", false,-1, 24,0);
    tracep->declBus(c+1091,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1331,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1381,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1382,"index_lut", false,-1, 124,0);
    tracep->declBus(c+1332,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1092,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1040,"in_tmp", false,-1, 24,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1380,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcMod_1 ");
    tracep->declBus(c+1380,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1381,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1054,"in_i", false,-1, 24,0);
    tracep->declBus(c+1097,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1333,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1381,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1382,"index_lut", false,-1, 124,0);
    tracep->declBus(c+1334,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1098,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1055,"in_tmp", false,-1, 24,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1380,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcMod_2 ");
    tracep->declBus(c+1380,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1381,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1069,"in_i", false,-1, 24,0);
    tracep->declBus(c+1103,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1335,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1381,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1382,"index_lut", false,-1, 124,0);
    tracep->declBus(c+1336,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1104,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1070,"in_tmp", false,-1, 24,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1380,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("lzcMod_3 ");
    tracep->declBus(c+1380,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1375,"MODE", false,-1);
    tracep->declBus(c+1381,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1084,"in_i", false,-1, 24,0);
    tracep->declBus(c+1110,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+1337,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+1381,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+1382,"index_lut", false,-1, 124,0);
    tracep->declBus(c+1338,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+1111,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+1085,"in_tmp", false,-1, 24,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1380,"i", false,-1, 31,0);
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
    tracep->declBus(c+1038,"io_operand_i", false,-1, 25,0);
    tracep->declBus(c+1110,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1339,"io_result_o", false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter_1 ");
    tracep->declBus(c+1053,"io_operand_i", false,-1, 25,0);
    tracep->declBus(c+1110,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1340,"io_result_o", false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter_2 ");
    tracep->declBus(c+1068,"io_operand_i", false,-1, 25,0);
    tracep->declBus(c+1110,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1341,"io_result_o", false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shifter_3 ");
    tracep->declBus(c+1083,"io_operand_i", false,-1, 25,0);
    tracep->declBus(c+1110,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+1116,"io_result_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fracalign ");
    tracep->declBus(c+1161,"io_pir_frac1_i_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_pir_frac1_i_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_pir_frac1_i_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_pir_frac1_i_3", false,-1, 11,0);
    tracep->declBus(c+121,"io_pir_frac2_i_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_pir_frac2_i_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_pir_frac2_i_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_pir_frac2_i_3", false,-1, 11,0);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1201,"io_pir_exp2_i_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_pir_exp2_i_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_pir_exp2_i_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_pir_exp2_i_3", false,-1, 6,0);
    tracep->declBus(c+1041,"io_pir_frac1_align_0", false,-1, 13,0);
    tracep->declBus(c+1056,"io_pir_frac1_align_1", false,-1, 13,0);
    tracep->declBus(c+1071,"io_pir_frac1_align_2", false,-1, 13,0);
    tracep->declBus(c+1086,"io_pir_frac1_align_3", false,-1, 13,0);
    tracep->declBus(c+1042,"io_pir_frac2_align_0", false,-1, 13,0);
    tracep->declBus(c+1057,"io_pir_frac2_align_1", false,-1, 13,0);
    tracep->declBus(c+1072,"io_pir_frac2_align_2", false,-1, 13,0);
    tracep->declBus(c+1087,"io_pir_frac2_align_3", false,-1, 13,0);
    tracep->declBus(c+1043,"io_pir_max_exp_0", false,-1, 6,0);
    tracep->declBus(c+1058,"io_pir_max_exp_1", false,-1, 6,0);
    tracep->declBus(c+1073,"io_pir_max_exp_2", false,-1, 6,0);
    tracep->declBus(c+1088,"io_pir_max_exp_3", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fracalign_1 ");
    tracep->declBus(c+1161,"io_pir_frac1_i_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_pir_frac1_i_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_pir_frac1_i_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_pir_frac1_i_3", false,-1, 11,0);
    tracep->declBus(c+121,"io_pir_frac2_i_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_pir_frac2_i_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_pir_frac2_i_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_pir_frac2_i_3", false,-1, 11,0);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1201,"io_pir_exp2_i_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_pir_exp2_i_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_pir_exp2_i_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_pir_exp2_i_3", false,-1, 6,0);
    tracep->declBus(c+1041,"io_pir_frac1_align_0", false,-1, 13,0);
    tracep->declBus(c+1056,"io_pir_frac1_align_1", false,-1, 13,0);
    tracep->declBus(c+1071,"io_pir_frac1_align_2", false,-1, 13,0);
    tracep->declBus(c+1086,"io_pir_frac1_align_3", false,-1, 13,0);
    tracep->declBus(c+1042,"io_pir_frac2_align_0", false,-1, 13,0);
    tracep->declBus(c+1057,"io_pir_frac2_align_1", false,-1, 13,0);
    tracep->declBus(c+1072,"io_pir_frac2_align_2", false,-1, 13,0);
    tracep->declBus(c+1087,"io_pir_frac2_align_3", false,-1, 13,0);
    tracep->declBus(c+1043,"io_pir_max_exp_0", false,-1, 6,0);
    tracep->declBus(c+1058,"io_pir_max_exp_1", false,-1, 6,0);
    tracep->declBus(c+1073,"io_pir_max_exp_2", false,-1, 6,0);
    tracep->declBus(c+1088,"io_pir_max_exp_3", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub ");
    tracep->declBit(c+1137,"io_pir_sign1_i_0", false,-1);
    tracep->declBit(c+1138,"io_pir_sign1_i_1", false,-1);
    tracep->declBit(c+1139,"io_pir_sign1_i_2", false,-1);
    tracep->declBit(c+1140,"io_pir_sign1_i_3", false,-1);
    tracep->declBit(c+1141,"io_pir_sign2_i_0", false,-1);
    tracep->declBit(c+1142,"io_pir_sign2_i_1", false,-1);
    tracep->declBit(c+1143,"io_pir_sign2_i_2", false,-1);
    tracep->declBit(c+1144,"io_pir_sign2_i_3", false,-1);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1031,"io_pir_frac1_aligned_0", false,-1, 11,0);
    tracep->declBus(c+1046,"io_pir_frac1_aligned_1", false,-1, 11,0);
    tracep->declBus(c+1061,"io_pir_frac1_aligned_2", false,-1, 11,0);
    tracep->declBus(c+1076,"io_pir_frac1_aligned_3", false,-1, 11,0);
    tracep->declBus(c+1032,"io_pir_frac2_aligned_0", false,-1, 11,0);
    tracep->declBus(c+1047,"io_pir_frac2_aligned_1", false,-1, 11,0);
    tracep->declBus(c+1062,"io_pir_frac2_aligned_2", false,-1, 11,0);
    tracep->declBus(c+1077,"io_pir_frac2_aligned_3", false,-1, 11,0);
    tracep->declBit(c+1342,"io_pir_sign_o_0", false,-1);
    tracep->declBit(c+1343,"io_pir_sign_o_1", false,-1);
    tracep->declBit(c+1344,"io_pir_sign_o_2", false,-1);
    tracep->declBit(c+1345,"io_pir_sign_o_3", false,-1);
    tracep->declBus(c+1346,"io_pir_exp_o_0", false,-1, 6,0);
    tracep->declBus(c+1347,"io_pir_exp_o_1", false,-1, 6,0);
    tracep->declBus(c+1348,"io_pir_exp_o_2", false,-1, 6,0);
    tracep->declBus(c+1349,"io_pir_exp_o_3", false,-1, 6,0);
    tracep->declBus(c+1350,"io_pir_frac_o_0", false,-1, 11,0);
    tracep->declBus(c+1351,"io_pir_frac_o_1", false,-1, 11,0);
    tracep->declBus(c+1352,"io_pir_frac_o_2", false,-1, 11,0);
    tracep->declBus(c+1353,"io_pir_frac_o_3", false,-1, 11,0);
    tracep->declBit(c+1034,"mant1_greater", false,-1);
    tracep->declBus(c+1033,"sum", false,-1, 12,0);
    tracep->declBit(c+1049,"mant1_greater_1", false,-1);
    tracep->declBus(c+1048,"sum_1", false,-1, 12,0);
    tracep->declBit(c+1064,"mant1_greater_2", false,-1);
    tracep->declBus(c+1063,"sum_2", false,-1, 12,0);
    tracep->declBit(c+1079,"mant1_greater_3", false,-1);
    tracep->declBus(c+1078,"sum_3", false,-1, 12,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__mul__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__mul__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1137,"io_pir_sign1_i_0", false,-1);
    tracep->declBit(c+1138,"io_pir_sign1_i_1", false,-1);
    tracep->declBit(c+1139,"io_pir_sign1_i_2", false,-1);
    tracep->declBit(c+1140,"io_pir_sign1_i_3", false,-1);
    tracep->declBit(c+1141,"io_pir_sign2_i_0", false,-1);
    tracep->declBit(c+1142,"io_pir_sign2_i_1", false,-1);
    tracep->declBit(c+1143,"io_pir_sign2_i_2", false,-1);
    tracep->declBit(c+1144,"io_pir_sign2_i_3", false,-1);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1201,"io_pir_exp2_i_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_pir_exp2_i_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_pir_exp2_i_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_pir_exp2_i_3", false,-1, 6,0);
    tracep->declBus(c+1161,"io_pir_frac1_i_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_pir_frac1_i_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_pir_frac1_i_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_pir_frac1_i_3", false,-1, 11,0);
    tracep->declBus(c+121,"io_pir_frac2_i_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_pir_frac2_i_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_pir_frac2_i_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_pir_frac2_i_3", false,-1, 11,0);
    tracep->declBit(c+1237,"io_pir_sign_o_0", false,-1);
    tracep->declBit(c+1238,"io_pir_sign_o_1", false,-1);
    tracep->declBit(c+1239,"io_pir_sign_o_2", false,-1);
    tracep->declBit(c+1240,"io_pir_sign_o_3", false,-1);
    tracep->declBus(c+1044,"io_pir_exp_o_0", false,-1, 6,0);
    tracep->declBus(c+1059,"io_pir_exp_o_1", false,-1, 6,0);
    tracep->declBus(c+1074,"io_pir_exp_o_2", false,-1, 6,0);
    tracep->declBus(c+1089,"io_pir_exp_o_3", false,-1, 6,0);
    tracep->declBus(c+1354,"io_pir_frac_o_0", false,-1, 25,0);
    tracep->declBus(c+1355,"io_pir_frac_o_1", false,-1, 25,0);
    tracep->declBus(c+1356,"io_pir_frac_o_2", false,-1, 25,0);
    tracep->declBus(c+1357,"io_pir_frac_o_3", false,-1, 25,0);
    tracep->declBus(c+1045,"sum", false,-1, 7,0);
    tracep->declBus(c+1060,"sum_1", false,-1, 7,0);
    tracep->declBus(c+1075,"sum_2", false,-1, 7,0);
    tracep->declBus(c+1090,"sum_3", false,-1, 7,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBus(c+1161,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+121,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+514,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+515,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+516,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+517,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+518,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+519,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+520,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+521,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+522,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+523,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+524,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+525,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+526,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+527,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+528,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+523,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+524,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+516,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+517,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+518,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+529,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+530,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+516,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+517,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+518,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+529,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+530,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+519,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+520,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+521,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+522,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+531,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+532,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+519,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+520,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+521,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+522,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+531,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+532,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1161,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+121,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+516,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+517,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+518,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+519,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+520,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+521,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+522,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+123,"io_code", false,-1, 2,0);
    tracep->declBus(c+29,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+124,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+123,"io_code", false,-1, 2,0);
    tracep->declBit(c+124,"io_neg", false,-1);
    tracep->declBit(c+125,"io_one", false,-1);
    tracep->declBit(c+126,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+127,"io_code", false,-1, 2,0);
    tracep->declBus(c+533,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+128,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+127,"io_code", false,-1, 2,0);
    tracep->declBit(c+128,"io_neg", false,-1);
    tracep->declBit(c+129,"io_one", false,-1);
    tracep->declBit(c+130,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+131,"io_code", false,-1, 2,0);
    tracep->declBus(c+30,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+131,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+132,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+133,"io_code", false,-1, 2,0);
    tracep->declBus(c+31,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+134,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+133,"io_code", false,-1, 2,0);
    tracep->declBit(c+134,"io_neg", false,-1);
    tracep->declBit(c+135,"io_one", false,-1);
    tracep->declBit(c+136,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+137,"io_code", false,-1, 2,0);
    tracep->declBus(c+32,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+138,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+137,"io_code", false,-1, 2,0);
    tracep->declBit(c+138,"io_neg", false,-1);
    tracep->declBit(c+139,"io_one", false,-1);
    tracep->declBit(c+140,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+141,"io_code", false,-1, 2,0);
    tracep->declBus(c+33,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+142,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+141,"io_code", false,-1, 2,0);
    tracep->declBit(c+142,"io_neg", false,-1);
    tracep->declBit(c+143,"io_one", false,-1);
    tracep->declBit(c+144,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+145,"io_code", false,-1, 2,0);
    tracep->declBus(c+34,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+146,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+145,"io_code", false,-1, 2,0);
    tracep->declBit(c+146,"io_neg", false,-1);
    tracep->declBit(c+147,"io_one", false,-1);
    tracep->declBit(c+148,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("radix4BoothMultiplier_1 ");
    tracep->declBus(c+1162,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+219,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+639,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+640,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+641,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+642,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+643,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+644,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+645,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+646,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+647,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+648,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+649,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+650,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+651,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+652,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+653,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+648,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+649,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+641,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+642,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+643,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+654,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+655,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+641,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+642,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+643,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+654,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+655,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+644,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+645,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+646,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+647,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+656,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+657,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+644,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+645,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+646,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+647,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+656,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+657,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1162,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+219,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+641,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+642,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+643,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+644,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+645,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+646,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+647,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+221,"io_code", false,-1, 2,0);
    tracep->declBus(c+52,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+222,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+221,"io_code", false,-1, 2,0);
    tracep->declBit(c+222,"io_neg", false,-1);
    tracep->declBit(c+223,"io_one", false,-1);
    tracep->declBit(c+224,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+225,"io_code", false,-1, 2,0);
    tracep->declBus(c+658,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+226,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+225,"io_code", false,-1, 2,0);
    tracep->declBit(c+226,"io_neg", false,-1);
    tracep->declBit(c+227,"io_one", false,-1);
    tracep->declBit(c+228,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+229,"io_code", false,-1, 2,0);
    tracep->declBus(c+53,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+229,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+230,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+231,"io_code", false,-1, 2,0);
    tracep->declBus(c+54,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+232,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+231,"io_code", false,-1, 2,0);
    tracep->declBit(c+232,"io_neg", false,-1);
    tracep->declBit(c+233,"io_one", false,-1);
    tracep->declBit(c+234,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+235,"io_code", false,-1, 2,0);
    tracep->declBus(c+55,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+236,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+235,"io_code", false,-1, 2,0);
    tracep->declBit(c+236,"io_neg", false,-1);
    tracep->declBit(c+237,"io_one", false,-1);
    tracep->declBit(c+238,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+239,"io_code", false,-1, 2,0);
    tracep->declBus(c+56,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+240,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+239,"io_code", false,-1, 2,0);
    tracep->declBit(c+240,"io_neg", false,-1);
    tracep->declBit(c+241,"io_one", false,-1);
    tracep->declBit(c+242,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+243,"io_code", false,-1, 2,0);
    tracep->declBus(c+57,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+244,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+243,"io_code", false,-1, 2,0);
    tracep->declBit(c+244,"io_neg", false,-1);
    tracep->declBit(c+245,"io_one", false,-1);
    tracep->declBit(c+246,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("radix4BoothMultiplier_2 ");
    tracep->declBus(c+1163,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+317,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+764,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+765,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+766,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+767,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+768,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+769,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+770,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+771,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+772,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+773,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+774,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+775,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+776,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+777,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+778,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+773,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+774,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+766,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+767,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+768,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+779,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+780,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+766,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+767,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+768,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+779,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+780,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+769,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+770,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+771,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+772,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+781,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+782,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+769,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+770,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+771,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+772,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+781,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+782,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1163,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+317,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+766,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+767,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+768,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+769,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+770,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+771,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+772,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+319,"io_code", false,-1, 2,0);
    tracep->declBus(c+75,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+320,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+319,"io_code", false,-1, 2,0);
    tracep->declBit(c+320,"io_neg", false,-1);
    tracep->declBit(c+321,"io_one", false,-1);
    tracep->declBit(c+322,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+323,"io_code", false,-1, 2,0);
    tracep->declBus(c+783,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+324,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+323,"io_code", false,-1, 2,0);
    tracep->declBit(c+324,"io_neg", false,-1);
    tracep->declBit(c+325,"io_one", false,-1);
    tracep->declBit(c+326,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+327,"io_code", false,-1, 2,0);
    tracep->declBus(c+76,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+327,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+328,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+329,"io_code", false,-1, 2,0);
    tracep->declBus(c+77,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+330,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+329,"io_code", false,-1, 2,0);
    tracep->declBit(c+330,"io_neg", false,-1);
    tracep->declBit(c+331,"io_one", false,-1);
    tracep->declBit(c+332,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+333,"io_code", false,-1, 2,0);
    tracep->declBus(c+78,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+334,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+333,"io_code", false,-1, 2,0);
    tracep->declBit(c+334,"io_neg", false,-1);
    tracep->declBit(c+335,"io_one", false,-1);
    tracep->declBit(c+336,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+337,"io_code", false,-1, 2,0);
    tracep->declBus(c+79,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+338,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+337,"io_code", false,-1, 2,0);
    tracep->declBit(c+338,"io_neg", false,-1);
    tracep->declBit(c+339,"io_one", false,-1);
    tracep->declBit(c+340,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+341,"io_code", false,-1, 2,0);
    tracep->declBus(c+80,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+342,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+341,"io_code", false,-1, 2,0);
    tracep->declBit(c+342,"io_neg", false,-1);
    tracep->declBit(c+343,"io_one", false,-1);
    tracep->declBit(c+344,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("radix4BoothMultiplier_3 ");
    tracep->declBus(c+1164,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+415,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+889,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+890,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+891,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+892,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+893,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+894,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+895,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+896,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+897,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+898,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+899,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+900,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+901,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+902,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+903,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+898,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+899,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+891,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+892,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+893,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+904,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+905,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+891,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+892,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+893,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+904,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+905,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+894,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+895,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+896,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+897,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+906,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+907,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+894,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+895,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+896,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+897,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+906,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+907,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1164,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+415,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+891,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+892,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+893,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+894,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+895,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+896,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+897,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+417,"io_code", false,-1, 2,0);
    tracep->declBus(c+98,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+418,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+417,"io_code", false,-1, 2,0);
    tracep->declBit(c+418,"io_neg", false,-1);
    tracep->declBit(c+419,"io_one", false,-1);
    tracep->declBit(c+420,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+421,"io_code", false,-1, 2,0);
    tracep->declBus(c+908,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+422,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+421,"io_code", false,-1, 2,0);
    tracep->declBit(c+422,"io_neg", false,-1);
    tracep->declBit(c+423,"io_one", false,-1);
    tracep->declBit(c+424,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+425,"io_code", false,-1, 2,0);
    tracep->declBus(c+99,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+425,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+426,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+427,"io_code", false,-1, 2,0);
    tracep->declBus(c+100,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+428,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+427,"io_code", false,-1, 2,0);
    tracep->declBit(c+428,"io_neg", false,-1);
    tracep->declBit(c+429,"io_one", false,-1);
    tracep->declBit(c+430,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+431,"io_code", false,-1, 2,0);
    tracep->declBus(c+101,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+432,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+431,"io_code", false,-1, 2,0);
    tracep->declBit(c+432,"io_neg", false,-1);
    tracep->declBit(c+433,"io_one", false,-1);
    tracep->declBit(c+434,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+435,"io_code", false,-1, 2,0);
    tracep->declBus(c+102,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+436,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+435,"io_code", false,-1, 2,0);
    tracep->declBit(c+436,"io_neg", false,-1);
    tracep->declBit(c+437,"io_one", false,-1);
    tracep->declBit(c+438,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+439,"io_code", false,-1, 2,0);
    tracep->declBus(c+103,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+440,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+439,"io_code", false,-1, 2,0);
    tracep->declBit(c+440,"io_neg", false,-1);
    tracep->declBit(c+441,"io_one", false,-1);
    tracep->declBit(c+442,"io_two", false,-1);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__dotproduct__DOT__mul__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1137,"io_pir_sign1_i_0", false,-1);
    tracep->declBit(c+1138,"io_pir_sign1_i_1", false,-1);
    tracep->declBit(c+1139,"io_pir_sign1_i_2", false,-1);
    tracep->declBit(c+1140,"io_pir_sign1_i_3", false,-1);
    tracep->declBit(c+1141,"io_pir_sign2_i_0", false,-1);
    tracep->declBit(c+1142,"io_pir_sign2_i_1", false,-1);
    tracep->declBit(c+1143,"io_pir_sign2_i_2", false,-1);
    tracep->declBit(c+1144,"io_pir_sign2_i_3", false,-1);
    tracep->declBus(c+1145,"io_pir_exp1_i_0", false,-1, 6,0);
    tracep->declBus(c+1146,"io_pir_exp1_i_1", false,-1, 6,0);
    tracep->declBus(c+1147,"io_pir_exp1_i_2", false,-1, 6,0);
    tracep->declBus(c+1148,"io_pir_exp1_i_3", false,-1, 6,0);
    tracep->declBus(c+1201,"io_pir_exp2_i_0", false,-1, 6,0);
    tracep->declBus(c+1202,"io_pir_exp2_i_1", false,-1, 6,0);
    tracep->declBus(c+1203,"io_pir_exp2_i_2", false,-1, 6,0);
    tracep->declBus(c+1204,"io_pir_exp2_i_3", false,-1, 6,0);
    tracep->declBus(c+1161,"io_pir_frac1_i_0", false,-1, 11,0);
    tracep->declBus(c+1162,"io_pir_frac1_i_1", false,-1, 11,0);
    tracep->declBus(c+1163,"io_pir_frac1_i_2", false,-1, 11,0);
    tracep->declBus(c+1164,"io_pir_frac1_i_3", false,-1, 11,0);
    tracep->declBus(c+121,"io_pir_frac2_i_0", false,-1, 11,0);
    tracep->declBus(c+219,"io_pir_frac2_i_1", false,-1, 11,0);
    tracep->declBus(c+317,"io_pir_frac2_i_2", false,-1, 11,0);
    tracep->declBus(c+415,"io_pir_frac2_i_3", false,-1, 11,0);
    tracep->declBit(c+25,"io_pir_sign_o_0", false,-1);
    tracep->declBit(c+26,"io_pir_sign_o_1", false,-1);
    tracep->declBit(c+27,"io_pir_sign_o_2", false,-1);
    tracep->declBit(c+28,"io_pir_sign_o_3", false,-1);
    tracep->declBus(c+1358,"io_pir_exp_o_0", false,-1, 6,0);
    tracep->declBus(c+1359,"io_pir_exp_o_1", false,-1, 6,0);
    tracep->declBus(c+1360,"io_pir_exp_o_2", false,-1, 6,0);
    tracep->declBus(c+1361,"io_pir_exp_o_3", false,-1, 6,0);
    tracep->declBus(c+1362,"io_pir_frac_o_0", false,-1, 25,0);
    tracep->declBus(c+1363,"io_pir_frac_o_1", false,-1, 25,0);
    tracep->declBus(c+1364,"io_pir_frac_o_2", false,-1, 25,0);
    tracep->declBus(c+1365,"io_pir_frac_o_3", false,-1, 25,0);
    tracep->declBus(c+1366,"sum", false,-1, 7,0);
    tracep->declBus(c+1367,"sum_1", false,-1, 7,0);
    tracep->declBus(c+1368,"sum_2", false,-1, 7,0);
    tracep->declBus(c+1369,"sum_3", false,-1, 7,0);
    tracep->pushNamePrefix("radix4BoothMultiplier ");
    tracep->declBus(c+1161,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+121,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+534,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+535,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+536,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+537,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+538,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+539,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+540,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+541,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+542,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+543,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+544,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+545,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+546,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+547,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+548,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+543,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+544,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+536,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+537,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+538,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+549,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+550,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+536,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+537,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+538,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+549,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+550,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+539,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+540,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+541,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+542,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+551,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+552,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+539,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+540,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+541,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+542,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+551,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+552,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1161,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+121,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+536,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+537,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+538,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+539,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+540,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+541,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+542,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+123,"io_code", false,-1, 2,0);
    tracep->declBus(c+35,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+149,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+123,"io_code", false,-1, 2,0);
    tracep->declBit(c+149,"io_neg", false,-1);
    tracep->declBit(c+125,"io_one", false,-1);
    tracep->declBit(c+150,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+127,"io_code", false,-1, 2,0);
    tracep->declBus(c+553,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+151,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+127,"io_code", false,-1, 2,0);
    tracep->declBit(c+151,"io_neg", false,-1);
    tracep->declBit(c+129,"io_one", false,-1);
    tracep->declBit(c+152,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+131,"io_code", false,-1, 2,0);
    tracep->declBus(c+30,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+131,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+132,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+133,"io_code", false,-1, 2,0);
    tracep->declBus(c+36,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+153,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+133,"io_code", false,-1, 2,0);
    tracep->declBit(c+153,"io_neg", false,-1);
    tracep->declBit(c+135,"io_one", false,-1);
    tracep->declBit(c+154,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+137,"io_code", false,-1, 2,0);
    tracep->declBus(c+37,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+155,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+137,"io_code", false,-1, 2,0);
    tracep->declBit(c+155,"io_neg", false,-1);
    tracep->declBit(c+139,"io_one", false,-1);
    tracep->declBit(c+156,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+141,"io_code", false,-1, 2,0);
    tracep->declBus(c+38,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+157,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+141,"io_code", false,-1, 2,0);
    tracep->declBit(c+157,"io_neg", false,-1);
    tracep->declBit(c+143,"io_one", false,-1);
    tracep->declBit(c+158,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1161,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+145,"io_code", false,-1, 2,0);
    tracep->declBus(c+39,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+159,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+145,"io_code", false,-1, 2,0);
    tracep->declBit(c+159,"io_neg", false,-1);
    tracep->declBit(c+147,"io_one", false,-1);
    tracep->declBit(c+160,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("radix4BoothMultiplier_1 ");
    tracep->declBus(c+1162,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+219,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+659,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+660,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+661,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+662,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+663,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+664,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+665,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+666,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+667,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+668,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+669,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+670,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+671,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+672,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+673,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+668,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+669,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+661,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+662,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+663,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+674,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+675,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+661,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+662,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+663,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+674,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+675,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+664,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+665,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+666,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+667,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+676,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+677,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+664,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+665,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+666,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+667,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+676,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+677,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1162,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+219,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+661,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+662,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+663,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+664,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+665,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+666,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+667,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+221,"io_code", false,-1, 2,0);
    tracep->declBus(c+58,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+247,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+221,"io_code", false,-1, 2,0);
    tracep->declBit(c+247,"io_neg", false,-1);
    tracep->declBit(c+223,"io_one", false,-1);
    tracep->declBit(c+248,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+225,"io_code", false,-1, 2,0);
    tracep->declBus(c+678,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+249,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+225,"io_code", false,-1, 2,0);
    tracep->declBit(c+249,"io_neg", false,-1);
    tracep->declBit(c+227,"io_one", false,-1);
    tracep->declBit(c+250,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+229,"io_code", false,-1, 2,0);
    tracep->declBus(c+53,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+229,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+230,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+231,"io_code", false,-1, 2,0);
    tracep->declBus(c+59,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+251,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+231,"io_code", false,-1, 2,0);
    tracep->declBit(c+251,"io_neg", false,-1);
    tracep->declBit(c+233,"io_one", false,-1);
    tracep->declBit(c+252,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+235,"io_code", false,-1, 2,0);
    tracep->declBus(c+60,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+253,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+235,"io_code", false,-1, 2,0);
    tracep->declBit(c+253,"io_neg", false,-1);
    tracep->declBit(c+237,"io_one", false,-1);
    tracep->declBit(c+254,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+239,"io_code", false,-1, 2,0);
    tracep->declBus(c+61,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+255,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+239,"io_code", false,-1, 2,0);
    tracep->declBit(c+255,"io_neg", false,-1);
    tracep->declBit(c+241,"io_one", false,-1);
    tracep->declBit(c+256,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1162,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+243,"io_code", false,-1, 2,0);
    tracep->declBus(c+62,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+257,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+243,"io_code", false,-1, 2,0);
    tracep->declBit(c+257,"io_neg", false,-1);
    tracep->declBit(c+245,"io_one", false,-1);
    tracep->declBit(c+258,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("radix4BoothMultiplier_2 ");
    tracep->declBus(c+1163,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+317,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+784,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+785,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+786,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+787,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+788,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+789,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+790,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+791,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+792,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+793,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+794,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+795,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+796,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+797,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+798,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+793,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+794,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+786,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+787,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+788,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+799,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+800,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+786,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+787,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+788,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+799,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+800,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+789,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+790,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+791,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+792,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+801,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+802,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+789,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+790,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+791,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+792,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+801,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+802,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1163,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+317,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+786,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+787,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+788,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+789,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+790,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+791,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+792,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+319,"io_code", false,-1, 2,0);
    tracep->declBus(c+81,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+345,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+319,"io_code", false,-1, 2,0);
    tracep->declBit(c+345,"io_neg", false,-1);
    tracep->declBit(c+321,"io_one", false,-1);
    tracep->declBit(c+346,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+323,"io_code", false,-1, 2,0);
    tracep->declBus(c+803,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+347,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+323,"io_code", false,-1, 2,0);
    tracep->declBit(c+347,"io_neg", false,-1);
    tracep->declBit(c+325,"io_one", false,-1);
    tracep->declBit(c+348,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+327,"io_code", false,-1, 2,0);
    tracep->declBus(c+76,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+327,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+328,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+329,"io_code", false,-1, 2,0);
    tracep->declBus(c+82,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+349,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+329,"io_code", false,-1, 2,0);
    tracep->declBit(c+349,"io_neg", false,-1);
    tracep->declBit(c+331,"io_one", false,-1);
    tracep->declBit(c+350,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+333,"io_code", false,-1, 2,0);
    tracep->declBus(c+83,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+351,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+333,"io_code", false,-1, 2,0);
    tracep->declBit(c+351,"io_neg", false,-1);
    tracep->declBit(c+335,"io_one", false,-1);
    tracep->declBit(c+352,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+337,"io_code", false,-1, 2,0);
    tracep->declBus(c+84,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+353,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+337,"io_code", false,-1, 2,0);
    tracep->declBit(c+353,"io_neg", false,-1);
    tracep->declBit(c+339,"io_one", false,-1);
    tracep->declBit(c+354,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1163,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+341,"io_code", false,-1, 2,0);
    tracep->declBus(c+85,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+355,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+341,"io_code", false,-1, 2,0);
    tracep->declBit(c+355,"io_neg", false,-1);
    tracep->declBit(c+343,"io_one", false,-1);
    tracep->declBit(c+356,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("radix4BoothMultiplier_3 ");
    tracep->declBus(c+1164,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+415,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+909,"io_sum_o", false,-1, 23,0);
    tracep->declBus(c+910,"io_carry_o", false,-1, 23,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declBus(c+911,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+912,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+913,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+914,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+915,"io_operands_i_4", false,-1, 23,0);
    tracep->declBus(c+916,"io_operands_i_5", false,-1, 23,0);
    tracep->declBus(c+917,"io_operands_i_6", false,-1, 23,0);
    tracep->declBus(c+918,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+919,"io_carry_o", false,-1, 26,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+920,"io_operands_i_0", false,-1, 26,0);
    tracep->declBus(c+921,"io_operands_i_1", false,-1, 26,0);
    tracep->declBus(c+922,"io_operands_i_2", false,-1, 26,0);
    tracep->declBus(c+923,"io_operands_i_3", false,-1, 26,0);
    tracep->declBus(c+918,"io_sum_o", false,-1, 26,0);
    tracep->declBus(c+919,"io_carry_o", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declBus(c+911,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+912,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+913,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+924,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+925,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+911,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+912,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+913,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+924,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+925,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declBus(c+914,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+915,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+916,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+917,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+926,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+927,"io_carry_o", false,-1, 25,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declBus(c+914,"io_operands_i_0", false,-1, 23,0);
    tracep->declBus(c+915,"io_operands_i_1", false,-1, 23,0);
    tracep->declBus(c+916,"io_operands_i_2", false,-1, 23,0);
    tracep->declBus(c+917,"io_operands_i_3", false,-1, 23,0);
    tracep->declBus(c+926,"io_sum_o", false,-1, 25,0);
    tracep->declBus(c+927,"io_carry_o", false,-1, 25,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1164,"io_operand_a", false,-1, 11,0);
    tracep->declBus(c+415,"io_operand_b", false,-1, 11,0);
    tracep->declBus(c+911,"io_partial_prods_0", false,-1, 23,0);
    tracep->declBus(c+912,"io_partial_prods_1", false,-1, 23,0);
    tracep->declBus(c+913,"io_partial_prods_2", false,-1, 23,0);
    tracep->declBus(c+914,"io_partial_prods_3", false,-1, 23,0);
    tracep->declBus(c+915,"io_partial_prods_4", false,-1, 23,0);
    tracep->declBus(c+916,"io_partial_prods_5", false,-1, 23,0);
    tracep->declBus(c+917,"io_partial_prods_6", false,-1, 23,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+417,"io_code", false,-1, 2,0);
    tracep->declBus(c+104,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+443,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+417,"io_code", false,-1, 2,0);
    tracep->declBit(c+443,"io_neg", false,-1);
    tracep->declBit(c+419,"io_one", false,-1);
    tracep->declBit(c+444,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+421,"io_code", false,-1, 2,0);
    tracep->declBus(c+928,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+445,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+421,"io_code", false,-1, 2,0);
    tracep->declBit(c+445,"io_neg", false,-1);
    tracep->declBit(c+423,"io_one", false,-1);
    tracep->declBit(c+446,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+425,"io_code", false,-1, 2,0);
    tracep->declBus(c+99,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+425,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+426,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+427,"io_code", false,-1, 2,0);
    tracep->declBus(c+105,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+447,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+427,"io_code", false,-1, 2,0);
    tracep->declBit(c+447,"io_neg", false,-1);
    tracep->declBit(c+429,"io_one", false,-1);
    tracep->declBit(c+448,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+431,"io_code", false,-1, 2,0);
    tracep->declBus(c+106,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+449,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+431,"io_code", false,-1, 2,0);
    tracep->declBit(c+449,"io_neg", false,-1);
    tracep->declBit(c+433,"io_one", false,-1);
    tracep->declBit(c+450,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+435,"io_code", false,-1, 2,0);
    tracep->declBus(c+107,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+451,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+435,"io_code", false,-1, 2,0);
    tracep->declBit(c+451,"io_neg", false,-1);
    tracep->declBit(c+437,"io_one", false,-1);
    tracep->declBit(c+452,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1164,"io_multiplicand", false,-1, 11,0);
    tracep->declBus(c+439,"io_code", false,-1, 2,0);
    tracep->declBus(c+108,"io_partial_prod", false,-1, 12,0);
    tracep->declBit(c+453,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+439,"io_code", false,-1, 2,0);
    tracep->declBit(c+453,"io_neg", false,-1);
    tracep->declBit(c+441,"io_one", false,-1);
    tracep->declBit(c+454,"io_two", false,-1);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1161,"io_dividend", false,-1, 11,0);
    tracep->declBus(c+121,"io_divisor", false,-1, 11,0);
    tracep->declBus(c+554,"io_quotient", false,-1, 23,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declBus(c+1370,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+161,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+555,"io_sum_o", false,-1, 47,0);
    tracep->declQuad(c+557,"io_carry_o", false,-1, 47,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declQuad(c+559,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+561,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+563,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+565,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+567,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+569,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+571,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+573,"io_operands_i_7", false,-1, 47,0);
    tracep->declQuad(c+575,"io_operands_i_8", false,-1, 47,0);
    tracep->declQuad(c+577,"io_operands_i_9", false,-1, 47,0);
    tracep->declQuad(c+579,"io_operands_i_10", false,-1, 47,0);
    tracep->declQuad(c+581,"io_operands_i_11", false,-1, 47,0);
    tracep->declQuad(c+583,"io_operands_i_12", false,-1, 47,0);
    tracep->declQuad(c+585,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+587,"io_carry_o", false,-1, 51,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+589,"io_operands_i_0", false,-1, 51,0);
    tracep->declQuad(c+591,"io_operands_i_1", false,-1, 51,0);
    tracep->declQuad(c+593,"io_operands_i_2", false,-1, 51,0);
    tracep->declQuad(c+595,"io_operands_i_3", false,-1, 51,0);
    tracep->declQuad(c+585,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+587,"io_carry_o", false,-1, 51,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+559,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+561,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+563,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+565,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+567,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+569,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+597,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+599,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+601,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+603,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+605,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+607,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+597,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+599,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+559,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+561,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+563,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+609,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+611,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+559,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+561,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+563,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+609,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+611,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+565,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+567,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+569,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+613,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+615,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+565,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+567,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+569,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+613,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+615,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+571,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+573,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+575,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+577,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+579,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+581,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+583,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+617,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+619,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+621,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+623,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+625,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+627,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+617,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+619,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+571,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+573,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+575,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+629,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+631,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+571,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+573,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+575,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+629,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+631,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+577,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+579,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+581,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+583,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+633,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+635,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+577,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+579,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+581,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+583,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+633,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+635,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1370,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+161,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+559,"io_partial_prods_0", false,-1, 47,0);
    tracep->declQuad(c+561,"io_partial_prods_1", false,-1, 47,0);
    tracep->declQuad(c+563,"io_partial_prods_2", false,-1, 47,0);
    tracep->declQuad(c+565,"io_partial_prods_3", false,-1, 47,0);
    tracep->declQuad(c+567,"io_partial_prods_4", false,-1, 47,0);
    tracep->declQuad(c+569,"io_partial_prods_5", false,-1, 47,0);
    tracep->declQuad(c+571,"io_partial_prods_6", false,-1, 47,0);
    tracep->declQuad(c+573,"io_partial_prods_7", false,-1, 47,0);
    tracep->declQuad(c+575,"io_partial_prods_8", false,-1, 47,0);
    tracep->declQuad(c+577,"io_partial_prods_9", false,-1, 47,0);
    tracep->declQuad(c+579,"io_partial_prods_10", false,-1, 47,0);
    tracep->declQuad(c+581,"io_partial_prods_11", false,-1, 47,0);
    tracep->declQuad(c+583,"io_partial_prods_12", false,-1, 47,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+162,"io_code", false,-1, 2,0);
    tracep->declBus(c+40,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+163,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+162,"io_code", false,-1, 2,0);
    tracep->declBit(c+163,"io_neg", false,-1);
    tracep->declBit(c+164,"io_one", false,-1);
    tracep->declBit(c+165,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+166,"io_code", false,-1, 2,0);
    tracep->declBus(c+637,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+167,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+166,"io_code", false,-1, 2,0);
    tracep->declBit(c+167,"io_neg", false,-1);
    tracep->declBit(c+168,"io_one", false,-1);
    tracep->declBit(c+169,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+170,"io_code", false,-1, 2,0);
    tracep->declBus(c+41,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+170,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+171,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+172,"io_code", false,-1, 2,0);
    tracep->declBus(c+42,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+173,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+172,"io_code", false,-1, 2,0);
    tracep->declBit(c+173,"io_neg", false,-1);
    tracep->declBit(c+174,"io_one", false,-1);
    tracep->declBit(c+175,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+176,"io_code", false,-1, 2,0);
    tracep->declBus(c+43,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+177,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+176,"io_code", false,-1, 2,0);
    tracep->declBit(c+177,"io_neg", false,-1);
    tracep->declBit(c+178,"io_one", false,-1);
    tracep->declBit(c+179,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+180,"io_code", false,-1, 2,0);
    tracep->declBus(c+44,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+181,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+180,"io_code", false,-1, 2,0);
    tracep->declBit(c+181,"io_neg", false,-1);
    tracep->declBit(c+182,"io_one", false,-1);
    tracep->declBit(c+183,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+184,"io_code", false,-1, 2,0);
    tracep->declBus(c+45,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+185,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+184,"io_code", false,-1, 2,0);
    tracep->declBit(c+185,"io_neg", false,-1);
    tracep->declBit(c+186,"io_one", false,-1);
    tracep->declBit(c+187,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+188,"io_code", false,-1, 2,0);
    tracep->declBus(c+46,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+189,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+188,"io_code", false,-1, 2,0);
    tracep->declBit(c+189,"io_neg", false,-1);
    tracep->declBit(c+190,"io_one", false,-1);
    tracep->declBit(c+191,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+192,"io_code", false,-1, 2,0);
    tracep->declBus(c+47,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+193,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+192,"io_code", false,-1, 2,0);
    tracep->declBit(c+193,"io_neg", false,-1);
    tracep->declBit(c+194,"io_one", false,-1);
    tracep->declBit(c+195,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+196,"io_code", false,-1, 2,0);
    tracep->declBus(c+48,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+197,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+196,"io_code", false,-1, 2,0);
    tracep->declBit(c+197,"io_neg", false,-1);
    tracep->declBit(c+198,"io_one", false,-1);
    tracep->declBit(c+199,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+200,"io_code", false,-1, 2,0);
    tracep->declBus(c+49,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+201,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+200,"io_code", false,-1, 2,0);
    tracep->declBit(c+201,"io_neg", false,-1);
    tracep->declBit(c+202,"io_one", false,-1);
    tracep->declBit(c+203,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+204,"io_code", false,-1, 2,0);
    tracep->declBus(c+50,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+205,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+204,"io_code", false,-1, 2,0);
    tracep->declBit(c+205,"io_neg", false,-1);
    tracep->declBit(c+206,"io_one", false,-1);
    tracep->declBit(c+207,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+1370,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+208,"io_code", false,-1, 2,0);
    tracep->declBus(c+51,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+209,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+208,"io_code", false,-1, 2,0);
    tracep->declBit(c+209,"io_neg", false,-1);
    tracep->declBit(c+210,"io_one", false,-1);
    tracep->declBit(c+211,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+121,"io_num_i", false,-1, 11,0);
    tracep->declBus(c+161,"io_reciprocal_o", false,-1, 23,0);
    tracep->declBus(c+212,"x0", false,-1, 23,0);
    tracep->declQuad(c+213,"x1_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+215,"x2_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+217,"x3_x_new_full", false,-1, 35,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1162,"io_dividend", false,-1, 11,0);
    tracep->declBus(c+219,"io_divisor", false,-1, 11,0);
    tracep->declBus(c+679,"io_quotient", false,-1, 23,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declBus(c+1371,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+259,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+680,"io_sum_o", false,-1, 47,0);
    tracep->declQuad(c+682,"io_carry_o", false,-1, 47,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declQuad(c+684,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+686,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+688,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+690,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+692,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+694,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+696,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+698,"io_operands_i_7", false,-1, 47,0);
    tracep->declQuad(c+700,"io_operands_i_8", false,-1, 47,0);
    tracep->declQuad(c+702,"io_operands_i_9", false,-1, 47,0);
    tracep->declQuad(c+704,"io_operands_i_10", false,-1, 47,0);
    tracep->declQuad(c+706,"io_operands_i_11", false,-1, 47,0);
    tracep->declQuad(c+708,"io_operands_i_12", false,-1, 47,0);
    tracep->declQuad(c+710,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+712,"io_carry_o", false,-1, 51,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+714,"io_operands_i_0", false,-1, 51,0);
    tracep->declQuad(c+716,"io_operands_i_1", false,-1, 51,0);
    tracep->declQuad(c+718,"io_operands_i_2", false,-1, 51,0);
    tracep->declQuad(c+720,"io_operands_i_3", false,-1, 51,0);
    tracep->declQuad(c+710,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+712,"io_carry_o", false,-1, 51,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+684,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+686,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+688,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+690,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+692,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+694,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+722,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+724,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+726,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+728,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+730,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+732,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+722,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+724,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+684,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+686,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+688,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+734,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+736,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+684,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+686,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+688,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+734,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+736,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+690,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+692,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+694,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+738,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+740,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+690,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+692,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+694,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+738,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+740,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+696,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+698,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+700,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+702,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+704,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+706,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+708,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+742,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+744,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+746,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+748,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+750,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+752,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+742,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+744,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+696,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+698,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+700,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+754,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+756,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+696,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+698,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+700,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+754,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+756,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+702,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+704,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+706,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+708,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+758,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+760,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+702,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+704,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+706,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+708,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+758,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+760,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1371,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+259,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+684,"io_partial_prods_0", false,-1, 47,0);
    tracep->declQuad(c+686,"io_partial_prods_1", false,-1, 47,0);
    tracep->declQuad(c+688,"io_partial_prods_2", false,-1, 47,0);
    tracep->declQuad(c+690,"io_partial_prods_3", false,-1, 47,0);
    tracep->declQuad(c+692,"io_partial_prods_4", false,-1, 47,0);
    tracep->declQuad(c+694,"io_partial_prods_5", false,-1, 47,0);
    tracep->declQuad(c+696,"io_partial_prods_6", false,-1, 47,0);
    tracep->declQuad(c+698,"io_partial_prods_7", false,-1, 47,0);
    tracep->declQuad(c+700,"io_partial_prods_8", false,-1, 47,0);
    tracep->declQuad(c+702,"io_partial_prods_9", false,-1, 47,0);
    tracep->declQuad(c+704,"io_partial_prods_10", false,-1, 47,0);
    tracep->declQuad(c+706,"io_partial_prods_11", false,-1, 47,0);
    tracep->declQuad(c+708,"io_partial_prods_12", false,-1, 47,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+260,"io_code", false,-1, 2,0);
    tracep->declBus(c+63,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+261,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+260,"io_code", false,-1, 2,0);
    tracep->declBit(c+261,"io_neg", false,-1);
    tracep->declBit(c+262,"io_one", false,-1);
    tracep->declBit(c+263,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+264,"io_code", false,-1, 2,0);
    tracep->declBus(c+762,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+265,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+264,"io_code", false,-1, 2,0);
    tracep->declBit(c+265,"io_neg", false,-1);
    tracep->declBit(c+266,"io_one", false,-1);
    tracep->declBit(c+267,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+268,"io_code", false,-1, 2,0);
    tracep->declBus(c+64,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+268,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+269,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+270,"io_code", false,-1, 2,0);
    tracep->declBus(c+65,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+271,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+270,"io_code", false,-1, 2,0);
    tracep->declBit(c+271,"io_neg", false,-1);
    tracep->declBit(c+272,"io_one", false,-1);
    tracep->declBit(c+273,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+274,"io_code", false,-1, 2,0);
    tracep->declBus(c+66,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+275,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+274,"io_code", false,-1, 2,0);
    tracep->declBit(c+275,"io_neg", false,-1);
    tracep->declBit(c+276,"io_one", false,-1);
    tracep->declBit(c+277,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+278,"io_code", false,-1, 2,0);
    tracep->declBus(c+67,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+279,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+278,"io_code", false,-1, 2,0);
    tracep->declBit(c+279,"io_neg", false,-1);
    tracep->declBit(c+280,"io_one", false,-1);
    tracep->declBit(c+281,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+282,"io_code", false,-1, 2,0);
    tracep->declBus(c+68,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+283,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+282,"io_code", false,-1, 2,0);
    tracep->declBit(c+283,"io_neg", false,-1);
    tracep->declBit(c+284,"io_one", false,-1);
    tracep->declBit(c+285,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+286,"io_code", false,-1, 2,0);
    tracep->declBus(c+69,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+287,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+286,"io_code", false,-1, 2,0);
    tracep->declBit(c+287,"io_neg", false,-1);
    tracep->declBit(c+288,"io_one", false,-1);
    tracep->declBit(c+289,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+290,"io_code", false,-1, 2,0);
    tracep->declBus(c+70,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+291,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+290,"io_code", false,-1, 2,0);
    tracep->declBit(c+291,"io_neg", false,-1);
    tracep->declBit(c+292,"io_one", false,-1);
    tracep->declBit(c+293,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+294,"io_code", false,-1, 2,0);
    tracep->declBus(c+71,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+295,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+294,"io_code", false,-1, 2,0);
    tracep->declBit(c+295,"io_neg", false,-1);
    tracep->declBit(c+296,"io_one", false,-1);
    tracep->declBit(c+297,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+298,"io_code", false,-1, 2,0);
    tracep->declBus(c+72,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+299,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+298,"io_code", false,-1, 2,0);
    tracep->declBit(c+299,"io_neg", false,-1);
    tracep->declBit(c+300,"io_one", false,-1);
    tracep->declBit(c+301,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+302,"io_code", false,-1, 2,0);
    tracep->declBus(c+73,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+303,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+302,"io_code", false,-1, 2,0);
    tracep->declBit(c+303,"io_neg", false,-1);
    tracep->declBit(c+304,"io_one", false,-1);
    tracep->declBit(c+305,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+1371,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+306,"io_code", false,-1, 2,0);
    tracep->declBus(c+74,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+307,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+306,"io_code", false,-1, 2,0);
    tracep->declBit(c+307,"io_neg", false,-1);
    tracep->declBit(c+308,"io_one", false,-1);
    tracep->declBit(c+309,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+219,"io_num_i", false,-1, 11,0);
    tracep->declBus(c+259,"io_reciprocal_o", false,-1, 23,0);
    tracep->declBus(c+310,"x0", false,-1, 23,0);
    tracep->declQuad(c+311,"x1_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+313,"x2_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+315,"x3_x_new_full", false,-1, 35,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1163,"io_dividend", false,-1, 11,0);
    tracep->declBus(c+317,"io_divisor", false,-1, 11,0);
    tracep->declBus(c+804,"io_quotient", false,-1, 23,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declBus(c+1372,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+357,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+805,"io_sum_o", false,-1, 47,0);
    tracep->declQuad(c+807,"io_carry_o", false,-1, 47,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declQuad(c+809,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+811,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+813,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+815,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+817,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+819,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+821,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+823,"io_operands_i_7", false,-1, 47,0);
    tracep->declQuad(c+825,"io_operands_i_8", false,-1, 47,0);
    tracep->declQuad(c+827,"io_operands_i_9", false,-1, 47,0);
    tracep->declQuad(c+829,"io_operands_i_10", false,-1, 47,0);
    tracep->declQuad(c+831,"io_operands_i_11", false,-1, 47,0);
    tracep->declQuad(c+833,"io_operands_i_12", false,-1, 47,0);
    tracep->declQuad(c+835,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+837,"io_carry_o", false,-1, 51,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+839,"io_operands_i_0", false,-1, 51,0);
    tracep->declQuad(c+841,"io_operands_i_1", false,-1, 51,0);
    tracep->declQuad(c+843,"io_operands_i_2", false,-1, 51,0);
    tracep->declQuad(c+845,"io_operands_i_3", false,-1, 51,0);
    tracep->declQuad(c+835,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+837,"io_carry_o", false,-1, 51,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+809,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+811,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+813,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+815,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+817,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+819,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+847,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+849,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+851,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+853,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+855,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+857,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+847,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+849,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+809,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+811,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+813,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+859,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+861,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+809,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+811,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+813,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+859,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+861,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+815,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+817,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+819,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+863,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+865,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+815,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+817,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+819,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+863,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+865,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+821,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+823,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+825,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+827,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+829,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+831,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+833,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+867,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+869,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+871,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+873,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+875,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+877,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+867,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+869,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+821,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+823,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+825,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+879,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+881,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+821,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+823,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+825,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+879,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+881,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+827,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+829,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+831,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+833,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+883,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+885,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+827,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+829,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+831,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+833,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+883,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+885,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1372,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+357,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+809,"io_partial_prods_0", false,-1, 47,0);
    tracep->declQuad(c+811,"io_partial_prods_1", false,-1, 47,0);
    tracep->declQuad(c+813,"io_partial_prods_2", false,-1, 47,0);
    tracep->declQuad(c+815,"io_partial_prods_3", false,-1, 47,0);
    tracep->declQuad(c+817,"io_partial_prods_4", false,-1, 47,0);
    tracep->declQuad(c+819,"io_partial_prods_5", false,-1, 47,0);
    tracep->declQuad(c+821,"io_partial_prods_6", false,-1, 47,0);
    tracep->declQuad(c+823,"io_partial_prods_7", false,-1, 47,0);
    tracep->declQuad(c+825,"io_partial_prods_8", false,-1, 47,0);
    tracep->declQuad(c+827,"io_partial_prods_9", false,-1, 47,0);
    tracep->declQuad(c+829,"io_partial_prods_10", false,-1, 47,0);
    tracep->declQuad(c+831,"io_partial_prods_11", false,-1, 47,0);
    tracep->declQuad(c+833,"io_partial_prods_12", false,-1, 47,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+358,"io_code", false,-1, 2,0);
    tracep->declBus(c+86,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+359,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+358,"io_code", false,-1, 2,0);
    tracep->declBit(c+359,"io_neg", false,-1);
    tracep->declBit(c+360,"io_one", false,-1);
    tracep->declBit(c+361,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+362,"io_code", false,-1, 2,0);
    tracep->declBus(c+887,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+363,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+362,"io_code", false,-1, 2,0);
    tracep->declBit(c+363,"io_neg", false,-1);
    tracep->declBit(c+364,"io_one", false,-1);
    tracep->declBit(c+365,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+366,"io_code", false,-1, 2,0);
    tracep->declBus(c+87,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+366,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+367,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+368,"io_code", false,-1, 2,0);
    tracep->declBus(c+88,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+369,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+368,"io_code", false,-1, 2,0);
    tracep->declBit(c+369,"io_neg", false,-1);
    tracep->declBit(c+370,"io_one", false,-1);
    tracep->declBit(c+371,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+372,"io_code", false,-1, 2,0);
    tracep->declBus(c+89,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+373,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+372,"io_code", false,-1, 2,0);
    tracep->declBit(c+373,"io_neg", false,-1);
    tracep->declBit(c+374,"io_one", false,-1);
    tracep->declBit(c+375,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+376,"io_code", false,-1, 2,0);
    tracep->declBus(c+90,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+377,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+376,"io_code", false,-1, 2,0);
    tracep->declBit(c+377,"io_neg", false,-1);
    tracep->declBit(c+378,"io_one", false,-1);
    tracep->declBit(c+379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+380,"io_code", false,-1, 2,0);
    tracep->declBus(c+91,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+381,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+380,"io_code", false,-1, 2,0);
    tracep->declBit(c+381,"io_neg", false,-1);
    tracep->declBit(c+382,"io_one", false,-1);
    tracep->declBit(c+383,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+384,"io_code", false,-1, 2,0);
    tracep->declBus(c+92,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+385,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+384,"io_code", false,-1, 2,0);
    tracep->declBit(c+385,"io_neg", false,-1);
    tracep->declBit(c+386,"io_one", false,-1);
    tracep->declBit(c+387,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+388,"io_code", false,-1, 2,0);
    tracep->declBus(c+93,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+389,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+388,"io_code", false,-1, 2,0);
    tracep->declBit(c+389,"io_neg", false,-1);
    tracep->declBit(c+390,"io_one", false,-1);
    tracep->declBit(c+391,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+392,"io_code", false,-1, 2,0);
    tracep->declBus(c+94,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+393,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+392,"io_code", false,-1, 2,0);
    tracep->declBit(c+393,"io_neg", false,-1);
    tracep->declBit(c+394,"io_one", false,-1);
    tracep->declBit(c+395,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+396,"io_code", false,-1, 2,0);
    tracep->declBus(c+95,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+397,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+396,"io_code", false,-1, 2,0);
    tracep->declBit(c+397,"io_neg", false,-1);
    tracep->declBit(c+398,"io_one", false,-1);
    tracep->declBit(c+399,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+400,"io_code", false,-1, 2,0);
    tracep->declBus(c+96,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+401,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+400,"io_code", false,-1, 2,0);
    tracep->declBit(c+401,"io_neg", false,-1);
    tracep->declBit(c+402,"io_one", false,-1);
    tracep->declBit(c+403,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+1372,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+404,"io_code", false,-1, 2,0);
    tracep->declBus(c+97,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+405,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+404,"io_code", false,-1, 2,0);
    tracep->declBit(c+405,"io_neg", false,-1);
    tracep->declBit(c+406,"io_one", false,-1);
    tracep->declBit(c+407,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+317,"io_num_i", false,-1, 11,0);
    tracep->declBus(c+357,"io_reciprocal_o", false,-1, 23,0);
    tracep->declBus(c+408,"x0", false,-1, 23,0);
    tracep->declQuad(c+409,"x1_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+411,"x2_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+413,"x3_x_new_full", false,-1, 35,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1164,"io_dividend", false,-1, 11,0);
    tracep->declBus(c+415,"io_divisor", false,-1, 11,0);
    tracep->declBus(c+929,"io_quotient", false,-1, 23,0);
    tracep->pushNamePrefix("boothMult ");
    tracep->declBus(c+1373,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+455,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+930,"io_sum_o", false,-1, 47,0);
    tracep->declQuad(c+932,"io_carry_o", false,-1, 47,0);
    tracep->pushNamePrefix("csaTree ");
    tracep->declQuad(c+934,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+936,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+938,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+940,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+942,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+944,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+946,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+948,"io_operands_i_7", false,-1, 47,0);
    tracep->declQuad(c+950,"io_operands_i_8", false,-1, 47,0);
    tracep->declQuad(c+952,"io_operands_i_9", false,-1, 47,0);
    tracep->declQuad(c+954,"io_operands_i_10", false,-1, 47,0);
    tracep->declQuad(c+956,"io_operands_i_11", false,-1, 47,0);
    tracep->declQuad(c+958,"io_operands_i_12", false,-1, 47,0);
    tracep->declQuad(c+960,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+962,"io_carry_o", false,-1, 51,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+964,"io_operands_i_0", false,-1, 51,0);
    tracep->declQuad(c+966,"io_operands_i_1", false,-1, 51,0);
    tracep->declQuad(c+968,"io_operands_i_2", false,-1, 51,0);
    tracep->declQuad(c+970,"io_operands_i_3", false,-1, 51,0);
    tracep->declQuad(c+960,"io_sum_o", false,-1, 51,0);
    tracep->declQuad(c+962,"io_carry_o", false,-1, 51,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+934,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+936,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+938,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+940,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+942,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+944,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+972,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+974,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+976,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+978,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+980,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+982,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+972,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+974,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+934,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+936,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+938,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+984,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+986,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+934,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+936,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+938,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+984,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+986,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+940,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+942,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+944,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+988,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+990,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+940,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+942,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+944,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+988,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+990,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+946,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+948,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+950,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+952,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+954,"io_operands_i_4", false,-1, 47,0);
    tracep->declQuad(c+956,"io_operands_i_5", false,-1, 47,0);
    tracep->declQuad(c+958,"io_operands_i_6", false,-1, 47,0);
    tracep->declQuad(c+992,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+994,"io_carry_o", false,-1, 50,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+996,"io_operands_i_0", false,-1, 50,0);
    tracep->declQuad(c+998,"io_operands_i_1", false,-1, 50,0);
    tracep->declQuad(c+1000,"io_operands_i_2", false,-1, 50,0);
    tracep->declQuad(c+1002,"io_operands_i_3", false,-1, 50,0);
    tracep->declQuad(c+992,"io_sum_o", false,-1, 50,0);
    tracep->declQuad(c+994,"io_carry_o", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csa_tree_A ");
    tracep->declQuad(c+946,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+948,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+950,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+1004,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+1006,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+946,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+948,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+950,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+1004,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+1006,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csa_tree_B ");
    tracep->declQuad(c+952,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+954,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+956,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+958,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+1008,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+1010,"io_carry_o", false,-1, 49,0);
    tracep->pushNamePrefix("compressor ");
    tracep->declQuad(c+952,"io_operands_i_0", false,-1, 47,0);
    tracep->declQuad(c+954,"io_operands_i_1", false,-1, 47,0);
    tracep->declQuad(c+956,"io_operands_i_2", false,-1, 47,0);
    tracep->declQuad(c+958,"io_operands_i_3", false,-1, 47,0);
    tracep->declQuad(c+1008,"io_sum_o", false,-1, 49,0);
    tracep->declQuad(c+1010,"io_carry_o", false,-1, 49,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("genProds ");
    tracep->declBus(c+1373,"io_operand_a", false,-1, 23,0);
    tracep->declBus(c+455,"io_operand_b", false,-1, 23,0);
    tracep->declQuad(c+934,"io_partial_prods_0", false,-1, 47,0);
    tracep->declQuad(c+936,"io_partial_prods_1", false,-1, 47,0);
    tracep->declQuad(c+938,"io_partial_prods_2", false,-1, 47,0);
    tracep->declQuad(c+940,"io_partial_prods_3", false,-1, 47,0);
    tracep->declQuad(c+942,"io_partial_prods_4", false,-1, 47,0);
    tracep->declQuad(c+944,"io_partial_prods_5", false,-1, 47,0);
    tracep->declQuad(c+946,"io_partial_prods_6", false,-1, 47,0);
    tracep->declQuad(c+948,"io_partial_prods_7", false,-1, 47,0);
    tracep->declQuad(c+950,"io_partial_prods_8", false,-1, 47,0);
    tracep->declQuad(c+952,"io_partial_prods_9", false,-1, 47,0);
    tracep->declQuad(c+954,"io_partial_prods_10", false,-1, 47,0);
    tracep->declQuad(c+956,"io_partial_prods_11", false,-1, 47,0);
    tracep->declQuad(c+958,"io_partial_prods_12", false,-1, 47,0);
    tracep->pushNamePrefix("genProd ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+456,"io_code", false,-1, 2,0);
    tracep->declBus(c+109,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+457,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+456,"io_code", false,-1, 2,0);
    tracep->declBit(c+457,"io_neg", false,-1);
    tracep->declBit(c+458,"io_one", false,-1);
    tracep->declBit(c+459,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd0 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+460,"io_code", false,-1, 2,0);
    tracep->declBus(c+1012,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+461,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+460,"io_code", false,-1, 2,0);
    tracep->declBit(c+461,"io_neg", false,-1);
    tracep->declBit(c+462,"io_one", false,-1);
    tracep->declBit(c+463,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProdLast ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+464,"io_code", false,-1, 2,0);
    tracep->declBus(c+110,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+1379,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+464,"io_code", false,-1, 2,0);
    tracep->declBit(c+1379,"io_neg", false,-1);
    tracep->declBit(c+465,"io_one", false,-1);
    tracep->declBit(c+1379,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_1 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+466,"io_code", false,-1, 2,0);
    tracep->declBus(c+111,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+467,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+466,"io_code", false,-1, 2,0);
    tracep->declBit(c+467,"io_neg", false,-1);
    tracep->declBit(c+468,"io_one", false,-1);
    tracep->declBit(c+469,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_10 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+470,"io_code", false,-1, 2,0);
    tracep->declBus(c+112,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+471,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+470,"io_code", false,-1, 2,0);
    tracep->declBit(c+471,"io_neg", false,-1);
    tracep->declBit(c+472,"io_one", false,-1);
    tracep->declBit(c+473,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_2 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+474,"io_code", false,-1, 2,0);
    tracep->declBus(c+113,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+475,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+474,"io_code", false,-1, 2,0);
    tracep->declBit(c+475,"io_neg", false,-1);
    tracep->declBit(c+476,"io_one", false,-1);
    tracep->declBit(c+477,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_3 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+478,"io_code", false,-1, 2,0);
    tracep->declBus(c+114,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+479,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+478,"io_code", false,-1, 2,0);
    tracep->declBit(c+479,"io_neg", false,-1);
    tracep->declBit(c+480,"io_one", false,-1);
    tracep->declBit(c+481,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_4 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+482,"io_code", false,-1, 2,0);
    tracep->declBus(c+115,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+483,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+482,"io_code", false,-1, 2,0);
    tracep->declBit(c+483,"io_neg", false,-1);
    tracep->declBit(c+484,"io_one", false,-1);
    tracep->declBit(c+485,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_5 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+486,"io_code", false,-1, 2,0);
    tracep->declBus(c+116,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+487,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+486,"io_code", false,-1, 2,0);
    tracep->declBit(c+487,"io_neg", false,-1);
    tracep->declBit(c+488,"io_one", false,-1);
    tracep->declBit(c+489,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_6 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+490,"io_code", false,-1, 2,0);
    tracep->declBus(c+117,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+491,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+490,"io_code", false,-1, 2,0);
    tracep->declBit(c+491,"io_neg", false,-1);
    tracep->declBit(c+492,"io_one", false,-1);
    tracep->declBit(c+493,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_7 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+494,"io_code", false,-1, 2,0);
    tracep->declBus(c+118,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+495,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+494,"io_code", false,-1, 2,0);
    tracep->declBit(c+495,"io_neg", false,-1);
    tracep->declBit(c+496,"io_one", false,-1);
    tracep->declBit(c+497,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_8 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+498,"io_code", false,-1, 2,0);
    tracep->declBus(c+119,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+499,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+498,"io_code", false,-1, 2,0);
    tracep->declBit(c+499,"io_neg", false,-1);
    tracep->declBit(c+500,"io_one", false,-1);
    tracep->declBit(c+501,"io_two", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genProd_9 ");
    tracep->declBus(c+1373,"io_multiplicand", false,-1, 23,0);
    tracep->declBus(c+502,"io_code", false,-1, 2,0);
    tracep->declBus(c+120,"io_partial_prod", false,-1, 24,0);
    tracep->declBit(c+503,"io_sign", false,-1);
    tracep->pushNamePrefix("boothEncoder ");
    tracep->declBus(c+502,"io_code", false,-1, 2,0);
    tracep->declBit(c+503,"io_neg", false,-1);
    tracep->declBit(c+504,"io_one", false,-1);
    tracep->declBit(c+505,"io_two", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reciprocalMod ");
    tracep->declBus(c+415,"io_num_i", false,-1, 11,0);
    tracep->declBus(c+455,"io_reciprocal_o", false,-1, 23,0);
    tracep->declBus(c+506,"x0", false,-1, 23,0);
    tracep->declQuad(c+507,"x1_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+509,"x2_x_new_full", false,-1, 35,0);
    tracep->declQuad(c+511,"x3_x_new_full", false,-1, 35,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPvuTop___024root__trace_init_top(VPvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_init_top\n"); );
    // Body
    VPvuTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("PvuTop ");
    tracep->pushNamePrefix("div ");
    tracep->pushNamePrefix("intdivider ");
    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("intdivider_1 ");
    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("intdivider_2 ");
    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("intdivider_3 ");
    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dotproduct ");
    tracep->pushNamePrefix("mul ");
    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mul ");
    VPvuTop___024root__trace_init_sub__TOP__PvuTop__DOT__mul__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    VlWide<4>/*127:0*/ __Vtemp_had6b1249__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->PvuTop__DOT__decode1__DOT__operand_0),15);
    bufp->fullSData(oldp+2,(vlSelf->PvuTop__DOT__decode1__DOT__operand_1),15);
    bufp->fullSData(oldp+3,(vlSelf->PvuTop__DOT__decode1__DOT__operand_2),15);
    bufp->fullSData(oldp+4,(vlSelf->PvuTop__DOT__decode1__DOT__operand_3),15);
    bufp->fullSData(oldp+5,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),15);
    bufp->fullSData(oldp+6,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+7,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i),15);
    bufp->fullSData(oldp+8,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+9,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i),15);
    bufp->fullSData(oldp+10,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+11,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i),15);
    bufp->fullSData(oldp+12,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+13,(vlSelf->PvuTop__DOT__decode2__DOT__operand_0),15);
    bufp->fullSData(oldp+14,(vlSelf->PvuTop__DOT__decode2__DOT__operand_1),15);
    bufp->fullSData(oldp+15,(vlSelf->PvuTop__DOT__decode2__DOT__operand_2),15);
    bufp->fullSData(oldp+16,(vlSelf->PvuTop__DOT__decode2__DOT__operand_3),15);
    bufp->fullSData(oldp+17,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),15);
    bufp->fullSData(oldp+18,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+19,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i),15);
    bufp->fullSData(oldp+20,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+21,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i),15);
    bufp->fullSData(oldp+22,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullSData(oldp+23,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i),15);
    bufp->fullSData(oldp+24,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),15);
    bufp->fullBit(oldp+25,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_0));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_1));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_2));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_3));
    bufp->fullSData(oldp+29,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+30,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))
                               ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                               : 0U)),13);
    bufp->fullSData(oldp+31,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 3U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+32,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0xe0U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 5U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+33,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x380U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 7U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+34,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 9U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+35,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+36,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 3U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+37,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0xe0U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 5U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+38,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x380U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 7U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+39,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                         >> 9U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullIData(oldp+40,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x4000ULL 
                                                            == 
                                                            (0x6000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x2000ULL 
                                                              == 
                                                              (0x6000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x6000ULL 
                                                                == 
                                                                (0xe000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xdU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+41,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))
                               ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                  << 0xcU) : 0U)),25);
    bufp->fullIData(oldp+42,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+43,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400000000ULL 
                                                            == 
                                                            (0x600000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x200000000ULL 
                                                              == 
                                                              (0x600000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                == 
                                                                (0xe00000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x21U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+44,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+45,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100000ULL 
                                                            == 
                                                            (0x180000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x80000ULL 
                                                              == 
                                                              (0x180000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180000ULL 
                                                                == 
                                                                (0x380000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x13U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+46,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400000ULL 
                                                            == 
                                                            (0x600000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x200000ULL 
                                                              == 
                                                              (0x600000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600000ULL 
                                                                == 
                                                                (0xe00000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x15U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+47,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x1000000ULL 
                                                            == 
                                                            (0x1800000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x800000ULL 
                                                              == 
                                                              (0x1800000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x1800000ULL 
                                                                == 
                                                                (0x3800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x17U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+48,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x4000000ULL 
                                                            == 
                                                            (0x6000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x2000000ULL 
                                                              == 
                                                              (0x6000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x6000000ULL 
                                                                == 
                                                                (0xe000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x19U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+49,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000000ULL 
                                                            == 
                                                            (0x18000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000000ULL 
                                                              == 
                                                              (0x18000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+50,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000000ULL 
                                                            == 
                                                            (0x60000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000000ULL 
                                                              == 
                                                              (0x60000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000000ULL 
                                                                == 
                                                                (0xe0000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1dU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+51,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100000000ULL 
                                                            == 
                                                            (0x180000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x80000000ULL 
                                                              == 
                                                              (0x180000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180000000ULL 
                                                                == 
                                                                (0x380000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1fU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullSData(oldp+52,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+53,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))
                               ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                               : 0U)),13);
    bufp->fullSData(oldp+54,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 3U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+55,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0xe0U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 5U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+56,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x380U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 7U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+57,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 9U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+58,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+59,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 3U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+60,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0xe0U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 5U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+61,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x380U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 7U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+62,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                         >> 9U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullIData(oldp+63,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x4000ULL 
                                                            == 
                                                            (0x6000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x2000ULL 
                                                              == 
                                                              (0x6000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x6000ULL 
                                                                == 
                                                                (0xe000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xdU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+64,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))
                               ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                  << 0xcU) : 0U)),25);
    bufp->fullIData(oldp+65,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+66,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400000000ULL 
                                                            == 
                                                            (0x600000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x200000000ULL 
                                                              == 
                                                              (0x600000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                == 
                                                                (0xe00000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x21U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+67,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+68,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100000ULL 
                                                            == 
                                                            (0x180000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x80000ULL 
                                                              == 
                                                              (0x180000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180000ULL 
                                                                == 
                                                                (0x380000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x13U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+69,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400000ULL 
                                                            == 
                                                            (0x600000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x200000ULL 
                                                              == 
                                                              (0x600000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600000ULL 
                                                                == 
                                                                (0xe00000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x15U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+70,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x1000000ULL 
                                                            == 
                                                            (0x1800000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x800000ULL 
                                                              == 
                                                              (0x1800000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x1800000ULL 
                                                                == 
                                                                (0x3800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x17U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+71,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x4000000ULL 
                                                            == 
                                                            (0x6000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x2000000ULL 
                                                              == 
                                                              (0x6000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x6000000ULL 
                                                                == 
                                                                (0xe000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x19U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+72,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000000ULL 
                                                            == 
                                                            (0x18000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000000ULL 
                                                              == 
                                                              (0x18000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+73,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000000ULL 
                                                            == 
                                                            (0x60000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000000ULL 
                                                              == 
                                                              (0x60000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000000ULL 
                                                                == 
                                                                (0xe0000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1dU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+74,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100000000ULL 
                                                            == 
                                                            (0x180000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x80000000ULL 
                                                              == 
                                                              (0x180000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180000000ULL 
                                                                == 
                                                                (0x380000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1fU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullSData(oldp+75,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+76,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))
                               ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                               : 0U)),13);
    bufp->fullSData(oldp+77,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 3U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+78,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0xe0U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 5U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+79,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x380U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 7U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+80,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 9U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+81,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+82,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 3U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+83,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0xe0U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 5U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+84,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x380U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 7U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+85,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                         >> 9U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullIData(oldp+86,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x4000ULL 
                                                            == 
                                                            (0x6000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x2000ULL 
                                                              == 
                                                              (0x6000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x6000ULL 
                                                                == 
                                                                (0xe000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xdU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+87,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))
                               ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                  << 0xcU) : 0U)),25);
    bufp->fullIData(oldp+88,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+89,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400000000ULL 
                                                            == 
                                                            (0x600000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x200000000ULL 
                                                              == 
                                                              (0x600000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                == 
                                                                (0xe00000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x21U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+90,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+91,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100000ULL 
                                                            == 
                                                            (0x180000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x80000ULL 
                                                              == 
                                                              (0x180000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180000ULL 
                                                                == 
                                                                (0x380000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x13U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+92,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400000ULL 
                                                            == 
                                                            (0x600000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x200000ULL 
                                                              == 
                                                              (0x600000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600000ULL 
                                                                == 
                                                                (0xe00000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x15U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+93,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x1000000ULL 
                                                            == 
                                                            (0x1800000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x800000ULL 
                                                              == 
                                                              (0x1800000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x1800000ULL 
                                                                == 
                                                                (0x3800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x17U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+94,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x4000000ULL 
                                                            == 
                                                            (0x6000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x2000000ULL 
                                                              == 
                                                              (0x6000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x6000000ULL 
                                                                == 
                                                                (0xe000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x19U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+95,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000000ULL 
                                                            == 
                                                            (0x18000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000000ULL 
                                                              == 
                                                              (0x18000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+96,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000000ULL 
                                                            == 
                                                            (0x60000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000000ULL 
                                                              == 
                                                              (0x60000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000000ULL 
                                                                == 
                                                                (0xe0000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1dU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullIData(oldp+97,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100000000ULL 
                                                            == 
                                                            (0x180000000ULL 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x80000000ULL 
                                                              == 
                                                              (0x180000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180000000ULL 
                                                                == 
                                                                (0x380000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1fU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    bufp->fullSData(oldp+98,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                             ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                             : ((1U 
                                                 & ((IData)(
                                                            (6U 
                                                             == 
                                                             (0xeU 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 1U)
                                                 : 0U))))),13);
    bufp->fullSData(oldp+99,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))
                               ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                               : 0U)),13);
    bufp->fullSData(oldp+100,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (8U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x18U 
                                                              == 
                                                              (0x38U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 3U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+101,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (0x20U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0xe0U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 5U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+102,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x180U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (0x80U 
                                                          == 
                                                          (0x180U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x380U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 7U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+103,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x400U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x600U 
                                                              == 
                                                              (0xe00U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 9U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+104,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (4U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (2U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (6U 
                                                              == 
                                                              (0xeU 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 1U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+105,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (8U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x18U 
                                                              == 
                                                              (0x38U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 3U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+106,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (0x20U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0xe0U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 5U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+107,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x180U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (0x80U 
                                                          == 
                                                          (0x180U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x380U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 7U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullSData(oldp+108,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                          ^ ((1U & 
                                              ((IData)(
                                                       (0x400U 
                                                        == 
                                                        (0x600U 
                                                         & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                               | (IData)(
                                                         (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                              ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                              : ((1U 
                                                  & ((IData)(
                                                             (0x600U 
                                                              == 
                                                              (0xe00U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 9U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
    bufp->fullIData(oldp+109,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x4000ULL 
                                                             == 
                                                             (0x6000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x2000ULL 
                                                               == 
                                                               (0x6000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x6000ULL 
                                                              == 
                                                              (0xe000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0xdU))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+110,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x23U)))
                                ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                   << 0xcU) : 0U)),25);
    bufp->fullIData(oldp+111,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x10000ULL 
                                                             == 
                                                             (0x18000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x8000ULL 
                                                               == 
                                                               (0x18000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x18000ULL 
                                                              == 
                                                              (0x38000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0xfU))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+112,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x400000000ULL 
                                                             == 
                                                             (0x600000000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x200000000ULL 
                                                               == 
                                                               (0x600000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x600000000ULL 
                                                              == 
                                                              (0xe00000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x21U))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+113,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x40000ULL 
                                                             == 
                                                             (0x60000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x20000ULL 
                                                               == 
                                                               (0x60000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x60000ULL 
                                                              == 
                                                              (0xe0000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x11U))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+114,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x100000ULL 
                                                             == 
                                                             (0x180000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x80000ULL 
                                                               == 
                                                               (0x180000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180000ULL 
                                                              == 
                                                              (0x380000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x13U))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+115,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x400000ULL 
                                                             == 
                                                             (0x600000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x200000ULL 
                                                               == 
                                                               (0x600000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x600000ULL 
                                                              == 
                                                              (0xe00000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x15U))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+116,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x1000000ULL 
                                                             == 
                                                             (0x1800000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x800000ULL 
                                                               == 
                                                               (0x1800000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x1800000ULL 
                                                              == 
                                                              (0x3800000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x17U))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+117,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x4000000ULL 
                                                             == 
                                                             (0x6000000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x2000000ULL 
                                                               == 
                                                               (0x6000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x6000000ULL 
                                                              == 
                                                              (0xe000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x19U))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+118,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x10000000ULL 
                                                             == 
                                                             (0x18000000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x8000000ULL 
                                                               == 
                                                               (0x18000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x18000000ULL 
                                                              == 
                                                              (0x38000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x1bU))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+119,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x40000000ULL 
                                                             == 
                                                             (0x60000000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x20000000ULL 
                                                               == 
                                                               (0x60000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x60000000ULL 
                                                              == 
                                                              (0xe0000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x1dU))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullIData(oldp+120,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x100000000ULL 
                                                             == 
                                                             (0x180000000ULL 
                                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                    | (IData)(
                                                              (0x80000000ULL 
                                                               == 
                                                               (0x180000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                 << 0xcU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180000000ULL 
                                                              == 
                                                              (0x380000000ULL 
                                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                    >> 0x1fU))) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xdU)
                                                  : 0U))))),25);
    bufp->fullSData(oldp+121,(vlSelf->PvuTop__DOT___decode2_io_Frac_0),12);
    bufp->fullSData(oldp+122,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),15);
    bufp->fullCData(oldp+123,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+125,((1U & ((IData)((4U == (6U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | (IData)((2U == 
                                              (6U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
    bufp->fullBit(oldp+126,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+127,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     << 1U))),3);
    bufp->fullBit(oldp+128,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+129,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+131,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+133,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+135,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
    bufp->fullBit(oldp+136,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+137,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     >> 5U))),3);
    bufp->fullBit(oldp+138,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+139,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
    bufp->fullBit(oldp+140,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+141,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     >> 7U))),3);
    bufp->fullBit(oldp+142,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+143,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
    bufp->fullBit(oldp+144,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+145,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                     >> 9U))),3);
    bufp->fullBit(oldp+146,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+147,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
    bufp->fullBit(oldp+148,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+150,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+154,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+156,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+158,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+160,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+161,((0xffffffU & (IData)(
                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                    >> 0xcU)))),24);
    bufp->fullCData(oldp+162,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xdU)))),3);
    bufp->fullBit(oldp+163,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+164,((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+165,((1U & ((IData)((0x6000ULL 
                                            == (0xe000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xdU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+166,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)) 
                                     << 1U))),3);
    bufp->fullBit(oldp+167,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+168,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+170,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))),3);
    bufp->fullBit(oldp+171,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0x23U)))));
    bufp->fullCData(oldp+172,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xfU)))),3);
    bufp->fullBit(oldp+173,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+174,((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+175,((1U & ((IData)((0x18000ULL 
                                            == (0x38000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xfU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+176,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x21U)))),3);
    bufp->fullBit(oldp+177,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+178,((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+179,((1U & ((IData)((0x600000000ULL 
                                            == (0xe00000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x21U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+180,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x11U)))),3);
    bufp->fullBit(oldp+181,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+182,((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+183,((1U & ((IData)((0x60000ULL 
                                            == (0xe0000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x11U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+184,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x13U)))),3);
    bufp->fullBit(oldp+185,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+186,((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+187,((1U & ((IData)((0x180000ULL 
                                            == (0x380000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x13U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+188,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x15U)))),3);
    bufp->fullBit(oldp+189,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+190,((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+191,((1U & ((IData)((0x600000ULL 
                                            == (0xe00000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x15U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+192,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x17U)))),3);
    bufp->fullBit(oldp+193,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+194,((1U & ((IData)((0x1000000ULL 
                                            == (0x1800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x800000ULL 
                                              == (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+195,((1U & ((IData)((0x1800000ULL 
                                            == (0x3800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x17U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+196,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x19U)))),3);
    bufp->fullBit(oldp+197,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+198,((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+199,((1U & ((IData)((0x6000000ULL 
                                            == (0xe000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x19U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+200,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1bU)))),3);
    bufp->fullBit(oldp+201,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+202,((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+203,((1U & ((IData)((0x18000000ULL 
                                            == (0x38000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1bU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+204,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1dU)))),3);
    bufp->fullBit(oldp+205,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+206,((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+207,((1U & ((IData)((0x60000000ULL 
                                            == (0xe0000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1dU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+208,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1fU)))),3);
    bufp->fullBit(oldp+209,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+210,((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+211,((1U & ((IData)((0x180000000ULL 
                                            == (0x380000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+212,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))),24);
    bufp->fullQData(oldp+213,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
    bufp->fullQData(oldp+215,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
    bufp->fullQData(oldp+217,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    bufp->fullSData(oldp+219,(vlSelf->PvuTop__DOT___decode2_io_Frac_1),12);
    bufp->fullSData(oldp+220,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o),15);
    bufp->fullCData(oldp+221,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+222,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+223,((1U & ((IData)((4U == (6U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | (IData)((2U == 
                                              (6U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
    bufp->fullBit(oldp+224,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+225,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     << 1U))),3);
    bufp->fullBit(oldp+226,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+227,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+229,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+230,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+231,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+232,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+233,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
    bufp->fullBit(oldp+234,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+235,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     >> 5U))),3);
    bufp->fullBit(oldp+236,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+237,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
    bufp->fullBit(oldp+238,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+239,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     >> 7U))),3);
    bufp->fullBit(oldp+240,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+241,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
    bufp->fullBit(oldp+242,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+243,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                     >> 9U))),3);
    bufp->fullBit(oldp+244,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+245,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
    bufp->fullBit(oldp+246,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+247,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+248,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+252,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+254,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+256,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+258,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+259,((0xffffffU & (IData)(
                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                    >> 0xcU)))),24);
    bufp->fullCData(oldp+260,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xdU)))),3);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+262,((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+263,((1U & ((IData)((0x6000ULL 
                                            == (0xe000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xdU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+264,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)) 
                                     << 1U))),3);
    bufp->fullBit(oldp+265,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+266,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+268,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))),3);
    bufp->fullBit(oldp+269,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0x23U)))));
    bufp->fullCData(oldp+270,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xfU)))),3);
    bufp->fullBit(oldp+271,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+272,((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+273,((1U & ((IData)((0x18000ULL 
                                            == (0x38000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xfU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+274,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x21U)))),3);
    bufp->fullBit(oldp+275,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+276,((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+277,((1U & ((IData)((0x600000000ULL 
                                            == (0xe00000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x21U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+278,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x11U)))),3);
    bufp->fullBit(oldp+279,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+280,((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+281,((1U & ((IData)((0x60000ULL 
                                            == (0xe0000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x11U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+282,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x13U)))),3);
    bufp->fullBit(oldp+283,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+284,((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+285,((1U & ((IData)((0x180000ULL 
                                            == (0x380000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x13U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+286,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x15U)))),3);
    bufp->fullBit(oldp+287,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+288,((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+289,((1U & ((IData)((0x600000ULL 
                                            == (0xe00000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x15U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+290,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x17U)))),3);
    bufp->fullBit(oldp+291,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+292,((1U & ((IData)((0x1000000ULL 
                                            == (0x1800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x800000ULL 
                                              == (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+293,((1U & ((IData)((0x1800000ULL 
                                            == (0x3800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x17U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+294,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x19U)))),3);
    bufp->fullBit(oldp+295,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+296,((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+297,((1U & ((IData)((0x6000000ULL 
                                            == (0xe000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x19U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+298,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1bU)))),3);
    bufp->fullBit(oldp+299,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+300,((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+301,((1U & ((IData)((0x18000000ULL 
                                            == (0x38000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1bU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+302,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1dU)))),3);
    bufp->fullBit(oldp+303,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+304,((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+305,((1U & ((IData)((0x60000000ULL 
                                            == (0xe0000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1dU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+306,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1fU)))),3);
    bufp->fullBit(oldp+307,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+308,((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+309,((1U & ((IData)((0x180000000ULL 
                                            == (0x380000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+310,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))),24);
    bufp->fullQData(oldp+311,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
    bufp->fullQData(oldp+313,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
    bufp->fullQData(oldp+315,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    bufp->fullSData(oldp+317,(vlSelf->PvuTop__DOT___decode2_io_Frac_2),12);
    bufp->fullSData(oldp+318,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o),15);
    bufp->fullCData(oldp+319,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+320,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+321,((1U & ((IData)((4U == (6U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | (IData)((2U == 
                                              (6U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
    bufp->fullBit(oldp+322,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+323,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     << 1U))),3);
    bufp->fullBit(oldp+324,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+325,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+327,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+329,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+330,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+331,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
    bufp->fullBit(oldp+332,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+333,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     >> 5U))),3);
    bufp->fullBit(oldp+334,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+335,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
    bufp->fullBit(oldp+336,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+337,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     >> 7U))),3);
    bufp->fullBit(oldp+338,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+339,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
    bufp->fullBit(oldp+340,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+341,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                     >> 9U))),3);
    bufp->fullBit(oldp+342,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+343,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
    bufp->fullBit(oldp+344,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+345,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+346,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+350,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+352,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+354,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+356,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+357,((0xffffffU & (IData)(
                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                    >> 0xcU)))),24);
    bufp->fullCData(oldp+358,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xdU)))),3);
    bufp->fullBit(oldp+359,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+360,((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+361,((1U & ((IData)((0x6000ULL 
                                            == (0xe000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xdU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+362,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)) 
                                     << 1U))),3);
    bufp->fullBit(oldp+363,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+364,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+366,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))),3);
    bufp->fullBit(oldp+367,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0x23U)))));
    bufp->fullCData(oldp+368,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xfU)))),3);
    bufp->fullBit(oldp+369,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+370,((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+371,((1U & ((IData)((0x18000ULL 
                                            == (0x38000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xfU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+372,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x21U)))),3);
    bufp->fullBit(oldp+373,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+374,((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+375,((1U & ((IData)((0x600000000ULL 
                                            == (0xe00000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x21U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+376,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x11U)))),3);
    bufp->fullBit(oldp+377,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+378,((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+379,((1U & ((IData)((0x60000ULL 
                                            == (0xe0000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x11U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+380,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x13U)))),3);
    bufp->fullBit(oldp+381,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+382,((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+383,((1U & ((IData)((0x180000ULL 
                                            == (0x380000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x13U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+384,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x15U)))),3);
    bufp->fullBit(oldp+385,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+386,((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+387,((1U & ((IData)((0x600000ULL 
                                            == (0xe00000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x15U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+388,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x17U)))),3);
    bufp->fullBit(oldp+389,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+390,((1U & ((IData)((0x1000000ULL 
                                            == (0x1800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x800000ULL 
                                              == (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+391,((1U & ((IData)((0x1800000ULL 
                                            == (0x3800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x17U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+392,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x19U)))),3);
    bufp->fullBit(oldp+393,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+394,((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+395,((1U & ((IData)((0x6000000ULL 
                                            == (0xe000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x19U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+396,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1bU)))),3);
    bufp->fullBit(oldp+397,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+398,((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+399,((1U & ((IData)((0x18000000ULL 
                                            == (0x38000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1bU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+400,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1dU)))),3);
    bufp->fullBit(oldp+401,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+402,((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+403,((1U & ((IData)((0x60000000ULL 
                                            == (0xe0000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1dU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+404,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1fU)))),3);
    bufp->fullBit(oldp+405,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+406,((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+407,((1U & ((IData)((0x180000000ULL 
                                            == (0x380000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+408,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))),24);
    bufp->fullQData(oldp+409,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
    bufp->fullQData(oldp+411,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
    bufp->fullQData(oldp+413,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    bufp->fullSData(oldp+415,(vlSelf->PvuTop__DOT___decode2_io_Frac_3),12);
    bufp->fullSData(oldp+416,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o),15);
    bufp->fullCData(oldp+417,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+418,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+419,((1U & ((IData)((4U == (6U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | (IData)((2U == 
                                              (6U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
    bufp->fullBit(oldp+420,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+421,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     << 1U))),3);
    bufp->fullBit(oldp+422,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+423,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))));
    bufp->fullBit(oldp+424,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+425,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+426,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+427,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+428,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+429,((1U & ((IData)((0x10U == 
                                            (0x18U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | (IData)((8U == 
                                              (0x18U 
                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
    bufp->fullBit(oldp+430,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+431,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     >> 5U))),3);
    bufp->fullBit(oldp+432,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+433,((1U & ((IData)((0x40U == 
                                            (0x60U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | (IData)((0x20U 
                                              == (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
    bufp->fullBit(oldp+434,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+435,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     >> 7U))),3);
    bufp->fullBit(oldp+436,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+437,((1U & ((IData)((0x100U 
                                            == (0x180U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | (IData)((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
    bufp->fullBit(oldp+438,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+439,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                     >> 9U))),3);
    bufp->fullBit(oldp+440,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+441,((1U & ((IData)((0x400U 
                                            == (0x600U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | (IData)((0x200U 
                                              == (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
    bufp->fullBit(oldp+442,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+443,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+444,((1U & ((IData)((6U == (0xeU 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 1U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+446,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+448,((1U & ((IData)((0x18U == 
                                            (0x38U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+450,((1U & ((IData)((0x60U == 
                                            (0xe0U 
                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 5U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+451,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+452,((1U & ((IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 7U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+454,((1U & ((IData)((0x600U 
                                            == (0xe00U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                   | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                          >> 9U)) & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+455,((0xffffffU & (IData)(
                                                   (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                    >> 0xcU)))),24);
    bufp->fullCData(oldp+456,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xdU)))),3);
    bufp->fullBit(oldp+457,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+458,((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+459,((1U & ((IData)((0x6000ULL 
                                            == (0xe000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xdU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+460,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)) 
                                     << 1U))),3);
    bufp->fullBit(oldp+461,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+462,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+463,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
    bufp->fullCData(oldp+464,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x23U)))),3);
    bufp->fullBit(oldp+465,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0x23U)))));
    bufp->fullCData(oldp+466,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0xfU)))),3);
    bufp->fullBit(oldp+467,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+468,((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+469,((1U & ((IData)((0x18000ULL 
                                            == (0x38000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0xfU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+470,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x21U)))),3);
    bufp->fullBit(oldp+471,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+472,((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+473,((1U & ((IData)((0x600000000ULL 
                                            == (0xe00000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x21U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+474,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x11U)))),3);
    bufp->fullBit(oldp+475,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+476,((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+477,((1U & ((IData)((0x60000ULL 
                                            == (0xe0000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x11U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+478,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x13U)))),3);
    bufp->fullBit(oldp+479,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+480,((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+481,((1U & ((IData)((0x180000ULL 
                                            == (0x380000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x13U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+482,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x15U)))),3);
    bufp->fullBit(oldp+483,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+484,((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+485,((1U & ((IData)((0x600000ULL 
                                            == (0xe00000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x15U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+486,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x17U)))),3);
    bufp->fullBit(oldp+487,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+488,((1U & ((IData)((0x1000000ULL 
                                            == (0x1800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x800000ULL 
                                              == (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+489,((1U & ((IData)((0x1800000ULL 
                                            == (0x3800000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x17U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+490,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x19U)))),3);
    bufp->fullBit(oldp+491,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+492,((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+493,((1U & ((IData)((0x6000000ULL 
                                            == (0xe000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x19U))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+494,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1bU)))),3);
    bufp->fullBit(oldp+495,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+496,((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+497,((1U & ((IData)((0x18000000ULL 
                                            == (0x38000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1bU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+498,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1dU)))),3);
    bufp->fullBit(oldp+499,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+500,((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+501,((1U & ((IData)((0x60000000ULL 
                                            == (0xe0000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1dU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullCData(oldp+502,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x1fU)))),3);
    bufp->fullBit(oldp+503,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
    bufp->fullBit(oldp+504,((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
    bufp->fullBit(oldp+505,((1U & ((IData)((0x180000000ULL 
                                            == (0x380000000ULL 
                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | ((~ (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                  >> 0x1fU))) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->fullIData(oldp+506,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))),24);
    bufp->fullQData(oldp+507,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
    bufp->fullQData(oldp+509,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
    bufp->fullQData(oldp+511,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    bufp->fullIData(oldp+513,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),26);
    bufp->fullIData(oldp+514,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))),24);
    bufp->fullIData(oldp+515,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))))),24);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+523,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))),27);
    bufp->fullIData(oldp+524,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))))),27);
    bufp->fullIData(oldp+525,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0),27);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0),27);
    bufp->fullIData(oldp+527,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0),27);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0),27);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0),26);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0),26);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0),26);
    bufp->fullIData(oldp+532,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0),26);
    bufp->fullSData(oldp+533,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+534,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))),24);
    bufp->fullIData(oldp+535,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))))),24);
    bufp->fullIData(oldp+536,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+538,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+540,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+541,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+543,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))),27);
    bufp->fullIData(oldp+544,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))))),27);
    bufp->fullIData(oldp+545,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+546,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+547,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))),27);
    bufp->fullIData(oldp+548,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))),27);
    bufp->fullIData(oldp+549,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+550,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+551,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))),26);
    bufp->fullIData(oldp+552,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))),26);
    bufp->fullSData(oldp+553,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+554,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),24);
    bufp->fullQData(oldp+555,((0xffffffffffffULL & 
                               (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
    bufp->fullQData(oldp+557,((0xffffffffffffULL & 
                               ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                    & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                       & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                             | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
    bufp->fullQData(oldp+559,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
    bufp->fullQData(oldp+561,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
    bufp->fullQData(oldp+563,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
    bufp->fullQData(oldp+565,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
    bufp->fullQData(oldp+567,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
    bufp->fullQData(oldp+569,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
    bufp->fullQData(oldp+571,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
    bufp->fullQData(oldp+573,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
    bufp->fullQData(oldp+575,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
    bufp->fullQData(oldp+577,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
    bufp->fullQData(oldp+579,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
    bufp->fullQData(oldp+581,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
    bufp->fullQData(oldp+583,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
    bufp->fullQData(oldp+585,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                               ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                     ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
    bufp->fullQData(oldp+587,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
    bufp->fullQData(oldp+589,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
    bufp->fullQData(oldp+591,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
    bufp->fullQData(oldp+593,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
    bufp->fullQData(oldp+595,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
    bufp->fullQData(oldp+597,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
    bufp->fullQData(oldp+599,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
    bufp->fullQData(oldp+601,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h037a5002__0),51);
    bufp->fullQData(oldp+603,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h32ec1818__0),51);
    bufp->fullQData(oldp+605,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h5febfed3__0),51);
    bufp->fullQData(oldp+607,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_he8298333__0),51);
    bufp->fullQData(oldp+609,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h037a5002__0),50);
    bufp->fullQData(oldp+611,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h32ec1818__0),50);
    bufp->fullQData(oldp+613,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h5febfed3__0),50);
    bufp->fullQData(oldp+615,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_he8298333__0),50);
    bufp->fullQData(oldp+617,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
    bufp->fullQData(oldp+619,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
    bufp->fullQData(oldp+621,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h160609f1__0),51);
    bufp->fullQData(oldp+623,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h9e4e06c7__0),51);
    bufp->fullQData(oldp+625,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h041e3646__0),51);
    bufp->fullQData(oldp+627,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h47de5b44__0),51);
    bufp->fullQData(oldp+629,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h160609f1__0),50);
    bufp->fullQData(oldp+631,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h9e4e06c7__0),50);
    bufp->fullQData(oldp+633,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h041e3646__0),50);
    bufp->fullQData(oldp+635,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h47de5b44__0),50);
    bufp->fullIData(oldp+637,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    bufp->fullIData(oldp+638,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),26);
    bufp->fullIData(oldp+639,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))),24);
    bufp->fullIData(oldp+640,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))))),24);
    bufp->fullIData(oldp+641,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+642,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+643,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+644,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+645,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+647,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+648,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))),27);
    bufp->fullIData(oldp+649,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))))),27);
    bufp->fullIData(oldp+650,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0),27);
    bufp->fullIData(oldp+651,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0),27);
    bufp->fullIData(oldp+652,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0),27);
    bufp->fullIData(oldp+653,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0),27);
    bufp->fullIData(oldp+654,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0),26);
    bufp->fullIData(oldp+655,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0),26);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0),26);
    bufp->fullIData(oldp+657,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0),26);
    bufp->fullSData(oldp+658,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+659,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))),24);
    bufp->fullIData(oldp+660,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))))),24);
    bufp->fullIData(oldp+661,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+663,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+665,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+666,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+668,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))),27);
    bufp->fullIData(oldp+669,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))))),27);
    bufp->fullIData(oldp+670,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+671,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+672,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))),27);
    bufp->fullIData(oldp+673,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))),27);
    bufp->fullIData(oldp+674,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+675,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+676,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))),26);
    bufp->fullIData(oldp+677,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))),26);
    bufp->fullSData(oldp+678,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+679,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),24);
    bufp->fullQData(oldp+680,((0xffffffffffffULL & 
                               (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
    bufp->fullQData(oldp+682,((0xffffffffffffULL & 
                               ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                    & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                       & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                             | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
    bufp->fullQData(oldp+684,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
    bufp->fullQData(oldp+686,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
    bufp->fullQData(oldp+688,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
    bufp->fullQData(oldp+690,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
    bufp->fullQData(oldp+692,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
    bufp->fullQData(oldp+694,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
    bufp->fullQData(oldp+696,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
    bufp->fullQData(oldp+698,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
    bufp->fullQData(oldp+700,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
    bufp->fullQData(oldp+702,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
    bufp->fullQData(oldp+704,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
    bufp->fullQData(oldp+706,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
    bufp->fullQData(oldp+708,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
    bufp->fullQData(oldp+710,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                               ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                     ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
    bufp->fullQData(oldp+712,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
    bufp->fullQData(oldp+714,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
    bufp->fullQData(oldp+716,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
    bufp->fullQData(oldp+718,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
    bufp->fullQData(oldp+720,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
    bufp->fullQData(oldp+722,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
    bufp->fullQData(oldp+724,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
    bufp->fullQData(oldp+726,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h037a5002__0),51);
    bufp->fullQData(oldp+728,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h32ec1818__0),51);
    bufp->fullQData(oldp+730,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h5febfed3__0),51);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_he8298333__0),51);
    bufp->fullQData(oldp+734,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h037a5002__0),50);
    bufp->fullQData(oldp+736,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h32ec1818__0),50);
    bufp->fullQData(oldp+738,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h5febfed3__0),50);
    bufp->fullQData(oldp+740,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_he8298333__0),50);
    bufp->fullQData(oldp+742,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
    bufp->fullQData(oldp+744,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
    bufp->fullQData(oldp+746,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h160609f1__0),51);
    bufp->fullQData(oldp+748,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h9e4e06c7__0),51);
    bufp->fullQData(oldp+750,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h041e3646__0),51);
    bufp->fullQData(oldp+752,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h47de5b44__0),51);
    bufp->fullQData(oldp+754,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h160609f1__0),50);
    bufp->fullQData(oldp+756,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h9e4e06c7__0),50);
    bufp->fullQData(oldp+758,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h041e3646__0),50);
    bufp->fullQData(oldp+760,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h47de5b44__0),50);
    bufp->fullIData(oldp+762,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    bufp->fullIData(oldp+763,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),26);
    bufp->fullIData(oldp+764,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))),24);
    bufp->fullIData(oldp+765,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))))),24);
    bufp->fullIData(oldp+766,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+768,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+769,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+770,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+771,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+772,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+773,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))),27);
    bufp->fullIData(oldp+774,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))))),27);
    bufp->fullIData(oldp+775,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0),27);
    bufp->fullIData(oldp+776,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0),27);
    bufp->fullIData(oldp+777,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0),27);
    bufp->fullIData(oldp+778,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0),27);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0),26);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0),26);
    bufp->fullIData(oldp+781,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0),26);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0),26);
    bufp->fullSData(oldp+783,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+784,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))),24);
    bufp->fullIData(oldp+785,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))))),24);
    bufp->fullIData(oldp+786,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+787,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+788,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+789,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+790,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+791,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+792,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+793,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))),27);
    bufp->fullIData(oldp+794,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))))),27);
    bufp->fullIData(oldp+795,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+796,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+797,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))),27);
    bufp->fullIData(oldp+798,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))),27);
    bufp->fullIData(oldp+799,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+800,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+801,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))),26);
    bufp->fullIData(oldp+802,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))),26);
    bufp->fullSData(oldp+803,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+804,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),24);
    bufp->fullQData(oldp+805,((0xffffffffffffULL & 
                               (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
    bufp->fullQData(oldp+807,((0xffffffffffffULL & 
                               ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                    & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                       & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                             | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
    bufp->fullQData(oldp+809,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
    bufp->fullQData(oldp+811,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
    bufp->fullQData(oldp+813,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
    bufp->fullQData(oldp+815,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
    bufp->fullQData(oldp+817,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
    bufp->fullQData(oldp+819,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
    bufp->fullQData(oldp+821,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
    bufp->fullQData(oldp+823,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
    bufp->fullQData(oldp+825,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
    bufp->fullQData(oldp+827,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
    bufp->fullQData(oldp+829,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
    bufp->fullQData(oldp+831,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
    bufp->fullQData(oldp+833,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
    bufp->fullQData(oldp+835,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                               ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                     ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
    bufp->fullQData(oldp+837,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
    bufp->fullQData(oldp+839,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
    bufp->fullQData(oldp+841,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
    bufp->fullQData(oldp+843,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
    bufp->fullQData(oldp+845,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
    bufp->fullQData(oldp+847,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
    bufp->fullQData(oldp+849,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
    bufp->fullQData(oldp+851,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h037a5002__0),51);
    bufp->fullQData(oldp+853,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h32ec1818__0),51);
    bufp->fullQData(oldp+855,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h5febfed3__0),51);
    bufp->fullQData(oldp+857,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_he8298333__0),51);
    bufp->fullQData(oldp+859,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h037a5002__0),50);
    bufp->fullQData(oldp+861,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h32ec1818__0),50);
    bufp->fullQData(oldp+863,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h5febfed3__0),50);
    bufp->fullQData(oldp+865,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_he8298333__0),50);
    bufp->fullQData(oldp+867,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
    bufp->fullQData(oldp+869,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
    bufp->fullQData(oldp+871,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h160609f1__0),51);
    bufp->fullQData(oldp+873,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h9e4e06c7__0),51);
    bufp->fullQData(oldp+875,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h041e3646__0),51);
    bufp->fullQData(oldp+877,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h47de5b44__0),51);
    bufp->fullQData(oldp+879,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h160609f1__0),50);
    bufp->fullQData(oldp+881,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h9e4e06c7__0),50);
    bufp->fullQData(oldp+883,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h041e3646__0),50);
    bufp->fullQData(oldp+885,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h47de5b44__0),50);
    bufp->fullIData(oldp+887,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    bufp->fullIData(oldp+888,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),26);
    bufp->fullIData(oldp+889,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))),24);
    bufp->fullIData(oldp+890,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))))),24);
    bufp->fullIData(oldp+891,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+892,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+896,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+897,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+898,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                     ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))),27);
    bufp->fullIData(oldp+899,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))))),27);
    bufp->fullIData(oldp+900,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0),27);
    bufp->fullIData(oldp+901,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0),27);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0),27);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0),27);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0),26);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0),26);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0),26);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0),26);
    bufp->fullSData(oldp+908,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+909,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))),24);
    bufp->fullIData(oldp+910,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))))),24);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),24);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1),24);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2),24);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3),24);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4),24);
    bufp->fullIData(oldp+916,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5),24);
    bufp->fullIData(oldp+917,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6),24);
    bufp->fullIData(oldp+918,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                               ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))),27);
    bufp->fullIData(oldp+919,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                 ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                    ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                            ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                       ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))) 
                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))))),27);
    bufp->fullIData(oldp+920,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+921,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),27);
    bufp->fullIData(oldp+922,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))),27);
    bufp->fullIData(oldp+923,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))),27);
    bufp->fullIData(oldp+924,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+925,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),26);
    bufp->fullIData(oldp+926,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))),26);
    bufp->fullIData(oldp+927,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))),26);
    bufp->fullSData(oldp+928,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),13);
    bufp->fullIData(oldp+929,((0xffffffU & (IData)(
                                                   (0xffffffULL 
                                                    & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                        + 
                                                        ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                       >> 0xcU))))),24);
    bufp->fullQData(oldp+930,((0xffffffffffffULL & 
                               (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
    bufp->fullQData(oldp+932,((0xffffffffffffULL & 
                               ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                    & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                   | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                       & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                          & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                         | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                             | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
    bufp->fullQData(oldp+934,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
    bufp->fullQData(oldp+936,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
    bufp->fullQData(oldp+938,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
    bufp->fullQData(oldp+940,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
    bufp->fullQData(oldp+942,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
    bufp->fullQData(oldp+944,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
    bufp->fullQData(oldp+946,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
    bufp->fullQData(oldp+948,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
    bufp->fullQData(oldp+950,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
    bufp->fullQData(oldp+952,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
    bufp->fullQData(oldp+954,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
    bufp->fullQData(oldp+956,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
    bufp->fullQData(oldp+958,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
    bufp->fullQData(oldp+960,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                               ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                     ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
    bufp->fullQData(oldp+962,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                           & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
    bufp->fullQData(oldp+964,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
    bufp->fullQData(oldp+966,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
    bufp->fullQData(oldp+968,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
    bufp->fullQData(oldp+970,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
    bufp->fullQData(oldp+972,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
    bufp->fullQData(oldp+974,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
    bufp->fullQData(oldp+976,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h037a5002__0),51);
    bufp->fullQData(oldp+978,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h32ec1818__0),51);
    bufp->fullQData(oldp+980,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h5febfed3__0),51);
    bufp->fullQData(oldp+982,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_he8298333__0),51);
    bufp->fullQData(oldp+984,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h037a5002__0),50);
    bufp->fullQData(oldp+986,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h32ec1818__0),50);
    bufp->fullQData(oldp+988,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h5febfed3__0),50);
    bufp->fullQData(oldp+990,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_he8298333__0),50);
    bufp->fullQData(oldp+992,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
    bufp->fullQData(oldp+994,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
    bufp->fullQData(oldp+996,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h160609f1__0),51);
    bufp->fullQData(oldp+998,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h9e4e06c7__0),51);
    bufp->fullQData(oldp+1000,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h041e3646__0),51);
    bufp->fullQData(oldp+1002,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h47de5b44__0),51);
    bufp->fullQData(oldp+1004,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h160609f1__0),50);
    bufp->fullQData(oldp+1006,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h9e4e06c7__0),50);
    bufp->fullQData(oldp+1008,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h041e3646__0),50);
    bufp->fullQData(oldp+1010,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h47de5b44__0),50);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    bufp->fullIData(oldp+1013,(vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o),26);
    bufp->fullIData(oldp+1014,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0),26);
    bufp->fullIData(oldp+1015,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1),26);
    bufp->fullIData(oldp+1016,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2),26);
    bufp->fullIData(oldp+1017,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3),26);
    bufp->fullIData(oldp+1018,((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                                   ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                      ^ vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3)))),28);
    bufp->fullIData(oldp+1019,(((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                 & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                                | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                                    & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                       & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3) 
                                      | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                          & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                                         | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                             | vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                                            & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3)))))),28);
    bufp->fullIData(oldp+1020,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i),26);
    bufp->fullIData(oldp+1021,(vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i),25);
    bufp->fullIData(oldp+1022,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),25);
    bufp->fullSData(oldp+1023,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                            >> 0xdU)) 
                                | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))),13);
    bufp->fullCData(oldp+1024,((0x1fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1025,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+1030,(vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o),26);
    bufp->fullSData(oldp+1031,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0))),12);
    bufp->fullSData(oldp+1032,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0))),12);
    bufp->fullSData(oldp+1033,(vlSelf->PvuTop__DOT__add__DOT__sum),13);
    bufp->fullBit(oldp+1034,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
    bufp->fullSData(oldp+1035,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0),12);
    bufp->fullSData(oldp+1036,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0))),11);
    bufp->fullSData(oldp+1037,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),11);
    bufp->fullIData(oldp+1038,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_0),26);
    bufp->fullIData(oldp+1039,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i),25);
    bufp->fullIData(oldp+1040,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),25);
    bufp->fullSData(oldp+1041,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0),14);
    bufp->fullSData(oldp+1042,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0),14);
    bufp->fullCData(oldp+1043,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_0),7);
    bufp->fullCData(oldp+1044,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                 ? 0x3fU : (0x7fU & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum)))),7);
    bufp->fullCData(oldp+1045,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum),8);
    bufp->fullSData(oldp+1046,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1))),12);
    bufp->fullSData(oldp+1047,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1))),12);
    bufp->fullSData(oldp+1048,(vlSelf->PvuTop__DOT__add__DOT__sum_1),13);
    bufp->fullBit(oldp+1049,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1));
    bufp->fullSData(oldp+1050,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1),12);
    bufp->fullSData(oldp+1051,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1))),11);
    bufp->fullSData(oldp+1052,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),11);
    bufp->fullIData(oldp+1053,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_1),26);
    bufp->fullIData(oldp+1054,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i),25);
    bufp->fullIData(oldp+1055,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),25);
    bufp->fullSData(oldp+1056,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1),14);
    bufp->fullSData(oldp+1057,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1),14);
    bufp->fullCData(oldp+1058,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1),7);
    bufp->fullCData(oldp+1059,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                 ? 0x3fU : (0x7fU & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1)))),7);
    bufp->fullCData(oldp+1060,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1),8);
    bufp->fullSData(oldp+1061,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2))),12);
    bufp->fullSData(oldp+1062,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2))),12);
    bufp->fullSData(oldp+1063,(vlSelf->PvuTop__DOT__add__DOT__sum_2),13);
    bufp->fullBit(oldp+1064,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2));
    bufp->fullSData(oldp+1065,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2),12);
    bufp->fullSData(oldp+1066,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2))),11);
    bufp->fullSData(oldp+1067,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),11);
    bufp->fullIData(oldp+1068,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_2),26);
    bufp->fullIData(oldp+1069,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i),25);
    bufp->fullIData(oldp+1070,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),25);
    bufp->fullSData(oldp+1071,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2),14);
    bufp->fullSData(oldp+1072,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2),14);
    bufp->fullCData(oldp+1073,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2),7);
    bufp->fullCData(oldp+1074,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                 ? 0x3fU : (0x7fU & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2)))),7);
    bufp->fullCData(oldp+1075,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2),8);
    bufp->fullSData(oldp+1076,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3))),12);
    bufp->fullSData(oldp+1077,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3))),12);
    bufp->fullSData(oldp+1078,(vlSelf->PvuTop__DOT__add__DOT__sum_3),13);
    bufp->fullBit(oldp+1079,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3));
    bufp->fullSData(oldp+1080,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3),12);
    bufp->fullSData(oldp+1081,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3))),11);
    bufp->fullSData(oldp+1082,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),11);
    bufp->fullIData(oldp+1083,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_3),26);
    bufp->fullIData(oldp+1084,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i),25);
    bufp->fullIData(oldp+1085,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),25);
    bufp->fullSData(oldp+1086,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3),14);
    bufp->fullSData(oldp+1087,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3),14);
    bufp->fullCData(oldp+1088,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3),7);
    bufp->fullCData(oldp+1089,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                 ? 0x3fU : (0x7fU & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3)))),7);
    bufp->fullCData(oldp+1090,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3),8);
    bufp->fullCData(oldp+1091,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1092,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+1097,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1098,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+1103,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1104,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullSData(oldp+1109,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_3_io_result_o 
                                            >> 0xdU)) 
                                | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_3_io_result_o)))),13);
    bufp->fullCData(oldp+1110,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+1111,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+1116,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_3_io_result_o),26);
    bufp->fullIData(oldp+1117,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0),26);
    bufp->fullIData(oldp+1118,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1),26);
    bufp->fullIData(oldp+1119,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2),26);
    bufp->fullIData(oldp+1120,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3),26);
    bufp->fullBit(oldp+1121,(vlSelf->clock));
    bufp->fullBit(oldp+1122,(vlSelf->reset));
    bufp->fullSData(oldp+1123,(vlSelf->io_posit_i1_0),16);
    bufp->fullSData(oldp+1124,(vlSelf->io_posit_i1_1),16);
    bufp->fullSData(oldp+1125,(vlSelf->io_posit_i1_2),16);
    bufp->fullSData(oldp+1126,(vlSelf->io_posit_i1_3),16);
    bufp->fullSData(oldp+1127,(vlSelf->io_posit_i2_0),16);
    bufp->fullSData(oldp+1128,(vlSelf->io_posit_i2_1),16);
    bufp->fullSData(oldp+1129,(vlSelf->io_posit_i2_2),16);
    bufp->fullSData(oldp+1130,(vlSelf->io_posit_i2_3),16);
    bufp->fullCData(oldp+1131,(vlSelf->io_op),3);
    bufp->fullSData(oldp+1132,(vlSelf->io_posit_o_0),16);
    bufp->fullSData(oldp+1133,(vlSelf->io_posit_o_1),16);
    bufp->fullSData(oldp+1134,(vlSelf->io_posit_o_2),16);
    bufp->fullSData(oldp+1135,(vlSelf->io_posit_o_3),16);
    bufp->fullSData(oldp+1136,(vlSelf->io_posit_dot_o),16);
    bufp->fullBit(oldp+1137,((1U & ((IData)(vlSelf->io_posit_i1_0) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1138,((1U & ((IData)(vlSelf->io_posit_i1_1) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1139,((1U & ((IData)(vlSelf->io_posit_i1_2) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1140,((1U & ((IData)(vlSelf->io_posit_i1_3) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1141,((1U & ((IData)(vlSelf->io_posit_i2_0) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1142,((1U & ((IData)(vlSelf->io_posit_i2_1) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1143,((1U & ((IData)(vlSelf->io_posit_i2_2) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1144,((1U & ((IData)(vlSelf->io_posit_i2_3) 
                                    >> 0xfU))));
    bufp->fullCData(oldp+1145,(vlSelf->PvuTop__DOT___decode1_io_Exp_0),7);
    bufp->fullCData(oldp+1146,(vlSelf->PvuTop__DOT___decode1_io_Exp_1),7);
    bufp->fullCData(oldp+1147,(vlSelf->PvuTop__DOT___decode1_io_Exp_2),7);
    bufp->fullCData(oldp+1148,(vlSelf->PvuTop__DOT___decode1_io_Exp_3),7);
    bufp->fullBit(oldp+1149,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                     | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                     ? ((IData)(vlSelf->io_posit_i1_0) 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->io_posit_i2_0) 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+1150,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                     | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                     ? ((IData)(vlSelf->io_posit_i1_1) 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->io_posit_i2_1) 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+1151,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                     | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                     ? ((IData)(vlSelf->io_posit_i1_2) 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->io_posit_i2_2) 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+1152,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                     | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                     ? ((IData)(vlSelf->io_posit_i1_3) 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->io_posit_i2_3) 
                                     >> 0xfU)))));
    bufp->fullCData(oldp+1153,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                         + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                            & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                               >> 0xcU))))),7);
    bufp->fullCData(oldp+1154,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                         + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                            & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                               >> 0xcU))))),7);
    bufp->fullCData(oldp+1155,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                         + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                            & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                               >> 0xcU))))),7);
    bufp->fullCData(oldp+1156,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                         + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                            & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                               >> 0xcU))))),7);
    bufp->fullSData(oldp+1157,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                 ? (IData)(vlSelf->__VdfgTmp_h2299343e__0)
                                 : (IData)(vlSelf->__VdfgTmp_h5b3a16c4__0))),12);
    bufp->fullSData(oldp+1158,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                 ? (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0)
                                 : (IData)(vlSelf->__VdfgTmp_h64874eba__0))),12);
    bufp->fullSData(oldp+1159,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                 ? (IData)(vlSelf->__VdfgTmp_h79bf5980__0)
                                 : (IData)(vlSelf->__VdfgTmp_h085a2b98__0))),12);
    bufp->fullSData(oldp+1160,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                 ? (IData)(vlSelf->__VdfgTmp_h980bc3a7__0)
                                 : (IData)(vlSelf->__VdfgTmp_hcba88845__0))),12);
    bufp->fullSData(oldp+1161,(vlSelf->PvuTop__DOT___decode1_io_Frac_0),12);
    bufp->fullSData(oldp+1162,(vlSelf->PvuTop__DOT___decode1_io_Frac_1),12);
    bufp->fullSData(oldp+1163,(vlSelf->PvuTop__DOT___decode1_io_Frac_2),12);
    bufp->fullSData(oldp+1164,(vlSelf->PvuTop__DOT___decode1_io_Frac_3),12);
    bufp->fullCData(oldp+1165,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_0),4);
    bufp->fullCData(oldp+1166,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_1),4);
    bufp->fullCData(oldp+1167,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_2),4);
    bufp->fullCData(oldp+1168,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_3),4);
    bufp->fullCData(oldp+1169,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1170,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1171,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1172,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1173,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_0)))),4);
    bufp->fullSData(oldp+1174,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),15);
    bufp->fullCData(oldp+1175,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_1)))),4);
    bufp->fullSData(oldp+1176,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),15);
    bufp->fullCData(oldp+1177,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_2)))),4);
    bufp->fullSData(oldp+1178,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),15);
    bufp->fullCData(oldp+1179,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_3)))),4);
    bufp->fullSData(oldp+1180,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),15);
    bufp->fullCData(oldp+1181,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1182,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1183,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1184,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1186,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1187,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1188,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1189,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1191,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1192,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1193,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1194,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1196,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1197,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1198,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1199,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1201,(vlSelf->PvuTop__DOT___decode2_io_Exp_0),7);
    bufp->fullCData(oldp+1202,(vlSelf->PvuTop__DOT___decode2_io_Exp_1),7);
    bufp->fullCData(oldp+1203,(vlSelf->PvuTop__DOT___decode2_io_Exp_2),7);
    bufp->fullCData(oldp+1204,(vlSelf->PvuTop__DOT___decode2_io_Exp_3),7);
    bufp->fullCData(oldp+1205,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_0),4);
    bufp->fullCData(oldp+1206,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_1),4);
    bufp->fullCData(oldp+1207,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_2),4);
    bufp->fullCData(oldp+1208,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_3),4);
    bufp->fullCData(oldp+1209,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1210,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1211,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1212,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))
                                 ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o) 
                                          >> 0xdU))
                                 : 0U)),2);
    bufp->fullCData(oldp+1213,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_0)))),4);
    bufp->fullCData(oldp+1214,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_1)))),4);
    bufp->fullCData(oldp+1215,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_2)))),4);
    bufp->fullCData(oldp+1216,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_3)))),4);
    bufp->fullCData(oldp+1217,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1218,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1219,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1220,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1222,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1223,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1224,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1225,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1227,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1228,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1229,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1230,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1232,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1233,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1234,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1235,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullBit(oldp+1237,((1U & (((IData)(vlSelf->io_posit_i1_0) 
                                     ^ (IData)(vlSelf->io_posit_i2_0)) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1238,((1U & (((IData)(vlSelf->io_posit_i1_1) 
                                     ^ (IData)(vlSelf->io_posit_i2_1)) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1239,((1U & (((IData)(vlSelf->io_posit_i1_2) 
                                     ^ (IData)(vlSelf->io_posit_i2_2)) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1240,((1U & (((IData)(vlSelf->io_posit_i1_3) 
                                     ^ (IData)(vlSelf->io_posit_i2_3)) 
                                    >> 0xfU))));
    bufp->fullCData(oldp+1241,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                         - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0)))),7);
    bufp->fullCData(oldp+1242,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                         - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1)))),7);
    bufp->fullCData(oldp+1243,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                         - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2)))),7);
    bufp->fullCData(oldp+1244,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                         - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3)))),7);
    bufp->fullBit(oldp+1245,((1U & ((1U == (IData)(vlSelf->io_op))
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
                                             ? (((IData)(vlSelf->io_posit_i1_0) 
                                                 ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                >> 0xfU)
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op)) 
                                                & (((IData)(vlSelf->io_posit_i1_0) 
                                                    ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                   >> 0xfU))))))));
    bufp->fullBit(oldp+1246,((1U & ((1U == (IData)(vlSelf->io_op))
                                     ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                         ? ((IData)(vlSelf->io_posit_i1_1) 
                                            >> 0xfU)
                                         : ((IData)(vlSelf->io_posit_i2_1) 
                                            >> 0xfU))
                                     : ((2U == (IData)(vlSelf->io_op))
                                         ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                            ^ ((IData)(vlSelf->io_posit_i1_1) 
                                               >> 0xfU))
                                         : ((3U == (IData)(vlSelf->io_op))
                                             ? (((IData)(vlSelf->io_posit_i1_1) 
                                                 ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                >> 0xfU)
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op)) 
                                                & (((IData)(vlSelf->io_posit_i1_1) 
                                                    ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                   >> 0xfU))))))));
    bufp->fullBit(oldp+1247,((1U & ((1U == (IData)(vlSelf->io_op))
                                     ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                         ? ((IData)(vlSelf->io_posit_i1_2) 
                                            >> 0xfU)
                                         : ((IData)(vlSelf->io_posit_i2_2) 
                                            >> 0xfU))
                                     : ((2U == (IData)(vlSelf->io_op))
                                         ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                            ^ ((IData)(vlSelf->io_posit_i1_2) 
                                               >> 0xfU))
                                         : ((3U == (IData)(vlSelf->io_op))
                                             ? (((IData)(vlSelf->io_posit_i1_2) 
                                                 ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                >> 0xfU)
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op)) 
                                                & (((IData)(vlSelf->io_posit_i1_2) 
                                                    ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                   >> 0xfU))))))));
    bufp->fullBit(oldp+1248,((1U & ((1U == (IData)(vlSelf->io_op))
                                     ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                         ? ((IData)(vlSelf->io_posit_i1_3) 
                                            >> 0xfU)
                                         : ((IData)(vlSelf->io_posit_i2_3) 
                                            >> 0xfU))
                                     : ((2U == (IData)(vlSelf->io_op))
                                         ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                            ^ ((IData)(vlSelf->io_posit_i1_3) 
                                               >> 0xfU))
                                         : ((3U == (IData)(vlSelf->io_op))
                                             ? (((IData)(vlSelf->io_posit_i1_3) 
                                                 ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                >> 0xfU)
                                             : ((4U 
                                                 == (IData)(vlSelf->io_op)) 
                                                & (((IData)(vlSelf->io_posit_i1_3) 
                                                    ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                   >> 0xfU))))))));
    bufp->fullCData(oldp+1249,(((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_h1ec67085__0))),7);
    bufp->fullCData(oldp+1250,(((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_h6fb595b3__0))),7);
    bufp->fullCData(oldp+1251,(((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_h3716be99__0))),7);
    bufp->fullCData(oldp+1252,(((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_hc6283759__0))),7);
    bufp->fullSData(oldp+1253,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_0),13);
    bufp->fullSData(oldp+1254,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_1),13);
    bufp->fullSData(oldp+1255,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_2),13);
    bufp->fullSData(oldp+1256,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_3),13);
    bufp->fullSData(oldp+1257,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_0))
                                 ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                ? ((IData)(vlSelf->io_posit_i1_0) 
                                                   >> 0xfU)
                                                : ((IData)(vlSelf->io_posit_i2_0) 
                                                   >> 0xfU))
                                            : ((2U 
                                                == (IData)(vlSelf->io_op))
                                                ? (
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                   ^ 
                                                   ((IData)(vlSelf->io_posit_i1_0) 
                                                    >> 0xfU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   (((IData)(vlSelf->io_posit_i1_0) 
                                                     ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                    >> 0xfU)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_op)) 
                                                    & (((IData)(vlSelf->io_posit_i1_0) 
                                                        ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                       >> 0xfU))))))
                                     ? (0x8000U | (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)))))
                                     : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))
                                 : 0U)),16);
    bufp->fullSData(oldp+1258,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_1))
                                 ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                                ? ((IData)(vlSelf->io_posit_i1_1) 
                                                   >> 0xfU)
                                                : ((IData)(vlSelf->io_posit_i2_1) 
                                                   >> 0xfU))
                                            : ((2U 
                                                == (IData)(vlSelf->io_op))
                                                ? (
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                                   ^ 
                                                   ((IData)(vlSelf->io_posit_i1_1) 
                                                    >> 0xfU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   (((IData)(vlSelf->io_posit_i1_1) 
                                                     ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                    >> 0xfU)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_op)) 
                                                    & (((IData)(vlSelf->io_posit_i1_1) 
                                                        ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                       >> 0xfU))))))
                                     ? (0x8000U | (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)))))
                                     : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))
                                 : 0U)),16);
    bufp->fullSData(oldp+1259,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_2))
                                 ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                                ? ((IData)(vlSelf->io_posit_i1_2) 
                                                   >> 0xfU)
                                                : ((IData)(vlSelf->io_posit_i2_2) 
                                                   >> 0xfU))
                                            : ((2U 
                                                == (IData)(vlSelf->io_op))
                                                ? (
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                                   ^ 
                                                   ((IData)(vlSelf->io_posit_i1_2) 
                                                    >> 0xfU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   (((IData)(vlSelf->io_posit_i1_2) 
                                                     ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                    >> 0xfU)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_op)) 
                                                    & (((IData)(vlSelf->io_posit_i1_2) 
                                                        ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                       >> 0xfU))))))
                                     ? (0x8000U | (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)))))
                                     : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))
                                 : 0U)),16);
    bufp->fullSData(oldp+1260,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_3))
                                 ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                                ? ((IData)(vlSelf->io_posit_i1_3) 
                                                   >> 0xfU)
                                                : ((IData)(vlSelf->io_posit_i2_3) 
                                                   >> 0xfU))
                                            : ((2U 
                                                == (IData)(vlSelf->io_op))
                                                ? (
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                                   ^ 
                                                   ((IData)(vlSelf->io_posit_i1_3) 
                                                    >> 0xfU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   (((IData)(vlSelf->io_posit_i1_3) 
                                                     ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                    >> 0xfU)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_op)) 
                                                    & (((IData)(vlSelf->io_posit_i1_3) 
                                                        ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                       >> 0xfU))))))
                                     ? (0x8000U | (0x7fffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)))))
                                     : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))
                                 : 0U)),16);
    bufp->fullQData(oldp+1261,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->fullCData(oldp+1263,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->fullQData(oldp+1264,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),44);
    bufp->fullQData(oldp+1266,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),44);
    bufp->fullCData(oldp+1268,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),4);
    bufp->fullQData(oldp+1269,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),44);
    bufp->fullQData(oldp+1271,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),44);
    bufp->fullCData(oldp+1273,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),4);
    bufp->fullQData(oldp+1274,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),44);
    bufp->fullQData(oldp+1276,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),44);
    bufp->fullCData(oldp+1278,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),4);
    bufp->fullQData(oldp+1279,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),44);
    bufp->fullCData(oldp+1281,(((5U == (IData)(vlSelf->io_op))
                                 ? ((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                     ? (0x7fU & (IData)(vlSelf->__VdfgTmp_hffa0ba97__0))
                                     : 0U) : 0U)),7);
    bufp->fullSData(oldp+1282,(((5U == (IData)(vlSelf->io_op))
                                 ? ((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                >> 0xdU)) 
                                    | (0U != (0x1fffU 
                                              & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))
                                 : 0U)),13);
    bufp->fullSData(oldp+1283,((((5U == (IData)(vlSelf->io_op)) 
                                 & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                    >> 0x19U)) ? (0x7fffU 
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
    bufp->fullQData(oldp+1284,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->fullCData(oldp+1286,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->fullQData(oldp+1287,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),44);
    bufp->fullCData(oldp+1289,(((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                 ? (IData)(vlSelf->__VdfgTmp_hffa0ba97__0)
                                 : 0U)),8);
    bufp->fullBit(oldp+1290,((1U & (~ vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1291,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullCData(oldp+1292,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_0),7);
    bufp->fullCData(oldp+1293,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_1),7);
    bufp->fullCData(oldp+1294,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_2),7);
    bufp->fullCData(oldp+1295,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_3),7);
    bufp->fullSData(oldp+1296,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2)))),13);
    bufp->fullSData(oldp+1297,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2)))),13);
    bufp->fullSData(oldp+1298,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2)))),13);
    bufp->fullSData(oldp+1299,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2)))),13);
    bufp->fullCData(oldp+1300,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1301,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1302,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1303,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1305,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1306,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1307,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1308,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1310,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1311,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1312,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1313,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullCData(oldp+1315,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->fullBit(oldp+1316,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullSData(oldp+1317,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->fullQData(oldp+1318,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->fullSData(oldp+1320,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2)))),12);
    bufp->fullSData(oldp+1321,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2)))),12);
    bufp->fullSData(oldp+1322,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2)))),12);
    bufp->fullSData(oldp+1323,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                           ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2) 
                                              << 1U)
                                           : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2)))),12);
    bufp->fullCData(oldp+1324,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                 ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                 : 0U)),8);
    bufp->fullCData(oldp+1325,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                 ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                 : 0U)),8);
    bufp->fullCData(oldp+1326,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                 ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                 : 0U)),8);
    bufp->fullCData(oldp+1327,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                 ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                 : 0U)),8);
    bufp->fullSData(oldp+1328,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_io_result_o 
                                            >> 0xdU)) 
                                | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_io_result_o)))),13);
    bufp->fullSData(oldp+1329,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_1_io_result_o 
                                            >> 0xdU)) 
                                | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_1_io_result_o)))),13);
    bufp->fullSData(oldp+1330,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_2_io_result_o 
                                            >> 0xdU)) 
                                | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_2_io_result_o)))),13);
    bufp->fullBit(oldp+1331,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1332,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+1333,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1334,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+1335,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1336,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+1337,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+1338,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+1339,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_io_result_o),26);
    bufp->fullIData(oldp+1340,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_1_io_result_o),26);
    bufp->fullIData(oldp+1341,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_2_io_result_o),26);
    bufp->fullBit(oldp+1342,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                     & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                    ^ ((IData)(vlSelf->io_posit_i1_0) 
                                       >> 0xfU)))));
    bufp->fullBit(oldp+1343,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                     & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                    ^ ((IData)(vlSelf->io_posit_i1_1) 
                                       >> 0xfU)))));
    bufp->fullBit(oldp+1344,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                     & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                    ^ ((IData)(vlSelf->io_posit_i1_2) 
                                       >> 0xfU)))));
    bufp->fullBit(oldp+1345,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                     & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                    ^ ((IData)(vlSelf->io_posit_i1_3) 
                                       >> 0xfU)))));
    bufp->fullCData(oldp+1346,((0x7fU & ((1U & ((~ 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                  >> 0xcU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                          ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0))))),7);
    bufp->fullCData(oldp+1347,((0x7fU & ((1U & ((~ 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                                  >> 0xcU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)))
                                          ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1))))),7);
    bufp->fullCData(oldp+1348,((0x7fU & ((1U & ((~ 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                                  >> 0xcU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)))
                                          ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2))))),7);
    bufp->fullCData(oldp+1349,((0x7fU & ((1U & ((~ 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                                  >> 0xcU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)))
                                          ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3))))),7);
    bufp->fullSData(oldp+1350,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                 ? (IData)(vlSelf->__VdfgTmp_h5b3a16c4__0)
                                 : (IData)(vlSelf->__VdfgTmp_h2299343e__0))),12);
    bufp->fullSData(oldp+1351,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                 ? (IData)(vlSelf->__VdfgTmp_h64874eba__0)
                                 : (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0))),12);
    bufp->fullSData(oldp+1352,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                 ? (IData)(vlSelf->__VdfgTmp_h085a2b98__0)
                                 : (IData)(vlSelf->__VdfgTmp_h79bf5980__0))),12);
    bufp->fullSData(oldp+1353,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                 ? (IData)(vlSelf->__VdfgTmp_hcba88845__0)
                                 : (IData)(vlSelf->__VdfgTmp_h980bc3a7__0))),12);
    bufp->fullIData(oldp+1354,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                 ? 0U : (0x3ffffffU 
                                         & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0))) 
                                            + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0))))))))),26);
    bufp->fullIData(oldp+1355,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                 ? 0U : (0x3ffffffU 
                                         & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0))) 
                                            + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0))))))))),26);
    bufp->fullIData(oldp+1356,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                 ? 0U : (0x3ffffffU 
                                         & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0))) 
                                            + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0))))))))),26);
    bufp->fullIData(oldp+1357,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                 ? 0U : (0x3ffffffU 
                                         & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0))) 
                                            + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                            | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                                           & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0))))))))),26);
    bufp->fullCData(oldp+1358,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))
                                 ? 0x3fU : (0x7fU & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))),7);
    bufp->fullCData(oldp+1359,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))
                                 ? 0x3fU : (0x7fU & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))),7);
    bufp->fullCData(oldp+1360,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))
                                 ? 0x3fU : (0x7fU & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))),7);
    bufp->fullCData(oldp+1361,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))
                                 ? 0x3fU : (0x7fU & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                             + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))),7);
    bufp->fullIData(oldp+1362,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))
                                 ? 0U : (0x3ffffffU 
                                         & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                              ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                 ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                             ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                     | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                ^ (
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                                   ^ 
                                                   ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                 | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))))) 
                                            + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                        ^ 
                                                        (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                         ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))) 
                                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->fullIData(oldp+1363,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))
                                 ? 0U : (0x3ffffffU 
                                         & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                              ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                 ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                             ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                     | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                ^ (
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                                   ^ 
                                                   ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                 | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))))) 
                                            + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                        ^ 
                                                        (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                         ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))) 
                                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->fullIData(oldp+1364,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))
                                 ? 0U : (0x3ffffffU 
                                         & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                              ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                 ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                             ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                     | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                ^ (
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                                   ^ 
                                                   ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                 | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))))) 
                                            + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                        ^ 
                                                        (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                         ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))) 
                                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->fullIData(oldp+1365,(((0x80U & (((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)) 
                                          + ((0x80U 
                                              & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))
                                 ? 0U : (0x3ffffffU 
                                         & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                              ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                 ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                             ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                     | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                ^ (
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                                   ^ 
                                                   ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                 | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))))) 
                                            + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                               | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                        | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                                  | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                        ^ 
                                                        (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                         ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                                      & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                      | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))) 
                                                     | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                          ^ 
                                                          (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                           ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                            | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                                   | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                           | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->fullCData(oldp+1366,((0xffU & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))),8);
    bufp->fullCData(oldp+1367,((0xffU & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))),8);
    bufp->fullCData(oldp+1368,((0xffU & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))),8);
    bufp->fullCData(oldp+1369,((0xffU & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))),8);
    bufp->fullIData(oldp+1370,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                << 0xcU)),24);
    bufp->fullIData(oldp+1371,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                << 0xcU)),24);
    bufp->fullIData(oldp+1372,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                << 0xcU)),24);
    bufp->fullIData(oldp+1373,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                << 0xcU)),24);
    bufp->fullIData(oldp+1374,(0xfU),32);
    bufp->fullBit(oldp+1375,(1U));
    bufp->fullIData(oldp+1376,(4U),32);
    bufp->fullQData(oldp+1377,(0xedcba9876543210ULL),60);
    bufp->fullBit(oldp+1379,(0U));
    bufp->fullIData(oldp+1380,(0x19U),32);
    bufp->fullIData(oldp+1381,(5U),32);
    __Vtemp_had6b1249__0[0U] = 0x8a418820U;
    __Vtemp_had6b1249__0[1U] = 0xc5a92839U;
    __Vtemp_had6b1249__0[2U] = 0xca307b9aU;
    __Vtemp_had6b1249__0[3U] = 0x18bdab49U;
    bufp->fullWData(oldp+1382,(__Vtemp_had6b1249__0),125);
    bufp->fullIData(oldp+1386,(0xbU),32);
    bufp->fullQData(oldp+1387,(0xa9876543210ULL),44);
}
