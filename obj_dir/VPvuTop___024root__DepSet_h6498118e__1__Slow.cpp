// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(3U)) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(4U)) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(5U)) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(6U)) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(9U)) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'ico' region trigger index 10 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'ico' region trigger index 11 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'ico' region trigger index 12 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'ico' region trigger index 13 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'ico' region trigger index 14 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'ico' region trigger index 15 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'ico' region trigger index 16 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPvuTop___024root___ctor_var_reset(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_posit_i1_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i1_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i1_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i1_3 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_3 = VL_RAND_RESET_I(32);
    vlSelf->io_op = VL_RAND_RESET_I(3);
    vlSelf->io_posit_o_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_3 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_dot_o = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__sign1_reg = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__exp1_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(112, vlSelf->PvuTop__DOT__frac1_reg);
    vlSelf->PvuTop__DOT__sign2_reg = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__exp2_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(112, vlSelf->PvuTop__DOT__frac2_reg);
    vlSelf->PvuTop__DOT__op_stage1 = VL_RAND_RESET_I(3);
    vlSelf->PvuTop__DOT__sign_rst_reg = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__exp_rst_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(120, vlSelf->PvuTop__DOT__frac_rst_add_reg);
    VL_RAND_RESET_W(120, vlSelf->PvuTop__DOT__frac_rst_sub_reg);
    VL_RAND_RESET_W(224, vlSelf->PvuTop__DOT__frac_rst_mul_reg);
    VL_RAND_RESET_W(224, vlSelf->PvuTop__DOT__frac_rst_div_reg);
    vlSelf->PvuTop__DOT__sign_dot_reg = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__exp_dot_reg = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__frac_dot_reg = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__op_stage2 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(224, vlSelf->PvuTop__DOT__frac_normed_reg);
    vlSelf->PvuTop__DOT__frac_normed_dot_reg = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__exp_adjust_reg = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__exp_adjust_dot_reg = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__sign_rst_final = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__exp_rst_final = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__sign_dot_final = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__exp_dot_final = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__op_stage3 = VL_RAND_RESET_I(3);
    vlSelf->PvuTop__DOT__exp_adjusted_reg = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__exp_adjusted_dot_reg = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__op_stage4 = VL_RAND_RESET_I(3);
    vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(120, vlSelf->PvuTop__DOT____Vcellout__sub__io_pir_frac_o);
    VL_RAND_RESET_W(224, vlSelf->PvuTop__DOT____Vcellout__mul__io_pir_frac_o);
    VL_RAND_RESET_W(224, vlSelf->PvuTop__DOT____Vcellout__div__io_pir_frac_o);
    VL_RAND_RESET_W(112, vlSelf->PvuTop__DOT____Vcellout__frac_norm_add__io_pir_frac_o);
    vlSelf->PvuTop__DOT____Vcellout__frac_norm_add__io_exp_adjust = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(112, vlSelf->PvuTop__DOT____Vcellout__frac_norm_sub__io_pir_frac_o);
    vlSelf->PvuTop__DOT____Vcellout__frac_norm_sub__io_exp_adjust = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(112, vlSelf->PvuTop__DOT____Vcellout__frac_norm_mul__io_pir_frac_o);
    vlSelf->PvuTop__DOT____Vcellout__frac_norm_mul__io_exp_adjust = VL_RAND_RESET_Q(36);
    VL_RAND_RESET_W(112, vlSelf->PvuTop__DOT____Vcellout__frac_norm_div__io_pir_frac_o);
    vlSelf->PvuTop__DOT____Vcellout__frac_norm_div__io_exp_adjust = VL_RAND_RESET_Q(36);
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__fracalign_add__DOT___io_pir_max_exp_0_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__fracalign_add__DOT___io_pir_max_exp_1_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__fracalign_add__DOT___io_pir_max_exp_2_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__fracalign_add__DOT___io_pir_max_exp_3_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__add__DOT__same_sign = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__same_sign_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum_1 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__same_sign_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum_2 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__same_sign_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum_3 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h3a630f85__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0b529d0d__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39ddc1a5__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e8cac5d__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39412272__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e3057ea__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h38f0a4f9__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h09a65a41__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7a0a13b6__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h753a4d99__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h78148b8c__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7bfe0064__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1 = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2 = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3 = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_0_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_1_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_2_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_3_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted = VL_RAND_RESET_Q(55);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(56);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->__VdfgTmp_h948661f4__0 = 0;
    vlSelf->__VdfgTmp_hf0b4822a__0 = 0;
    vlSelf->__VdfgTmp_h1f8507a4__0 = 0;
    vlSelf->__VdfgTmp_hc268b105__0 = 0;
    vlSelf->__VdfgTmp_h94bbe26a__0 = 0;
    vlSelf->__VdfgTmp_hb542c85c__0 = 0;
    vlSelf->__VdfgTmp_h2778afb9__0 = 0;
    vlSelf->__VdfgTmp_h25e96bdf__0 = 0;
    vlSelf->__VdfgTmp_h539f02fb__0 = 0;
    vlSelf->__VdfgTmp_h38b27a4a__0 = 0;
    vlSelf->__VdfgTmp_h1f7a781f__0 = 0;
    vlSelf->__VdfgTmp_hf63813d9__0 = 0;
    vlSelf->__VdfgTmp_hd09ceb55__0 = 0;
    vlSelf->__VdfgTmp_hbf16c893__0 = 0;
    vlSelf->__VdfgTmp_hacebd30c__0 = 0;
    vlSelf->__VdfgTmp_h5e46a5ba__0 = 0;
    vlSelf->__VdfgTmp_h9d7ecd28__0 = 0;
    vlSelf->__VdfgTmp_h8ac47765__0 = 0;
    vlSelf->__VdfgTmp_h858857fc__0 = 0;
    vlSelf->__VdfgTmp_hd4b45e7a__0 = 0;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 53; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
