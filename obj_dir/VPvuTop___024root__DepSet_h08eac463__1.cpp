// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf);
void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VPvuTop___024root___nba_sequent__TOP__0(vlSelf);
        VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__mul));
        VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul));
    }
    if ((vlSelf->__VnbaTriggered.at(7U) | vlSelf->__VnbaTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(0x10U))) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
}
