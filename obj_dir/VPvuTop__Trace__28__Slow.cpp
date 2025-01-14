// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


extern const VlWide<11>/*351:0*/ VPvuTop__ConstPool__CONST_hc4a98b6e_0;
extern const VlWide<12>/*383:0*/ VPvuTop__ConstPool__CONST_h55404713_0;

VL_ATTR_COLD void VPvuTop___024root__trace_full_sub_22(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_full_sub_22\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h0ba642e7__0;
    VlWide<7>/*223:0*/ __Vtemp_h52f1b723__0;
    VlWide<4>/*127:0*/ __Vtemp_h24f352fb__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a85a4ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h95b92b9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8053b372__0;
    VlWide<4>/*127:0*/ __Vtemp_hd89cbae3__0;
    VlWide<4>/*127:0*/ __Vtemp_h28abfd9f__0;
    VlWide<4>/*127:0*/ __Vtemp_he5e6854e__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf4c90c7__0;
    VlWide<3>/*95:0*/ __Vtemp_hee7dfb4e__0;
    VlWide<4>/*127:0*/ __Vtemp_h52e32d61__0;
    VlWide<3>/*95:0*/ __Vtemp_h4c9dee20__0;
    VlWide<4>/*127:0*/ __Vtemp_hf67a7711__0;
    VlWide<4>/*127:0*/ __Vtemp_hd280c543__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    // Body
    bufp->fullBit(oldp+68962,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 8U))));
    bufp->fullBit(oldp+68963,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68964,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_39_io_cout))));
    bufp->fullBit(oldp+68965,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_39_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+68966,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_40_io_cout));
    bufp->fullBit(oldp+68967,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68968,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68969,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68970,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68971,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_40_io_cout))));
    bufp->fullBit(oldp+68972,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_40_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+68973,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout));
    bufp->fullBit(oldp+68974,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68975,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68976,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68977,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68978,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout))));
    bufp->fullBit(oldp+68979,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+68980,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout));
    bufp->fullBit(oldp+68981,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68982,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68983,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68984,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68985,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout))));
    bufp->fullBit(oldp+68986,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+68987,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout));
    bufp->fullBit(oldp+68988,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68989,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68990,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68991,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68992,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout))));
    bufp->fullBit(oldp+68993,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+68994,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout));
    bufp->fullBit(oldp+68995,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68996,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68997,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68998,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68999,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout))));
    bufp->fullBit(oldp+69000,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+69001,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout));
    bufp->fullBit(oldp+69002,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69003,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69004,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69005,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69006,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout))));
    bufp->fullBit(oldp+69007,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+69008,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout));
    bufp->fullBit(oldp+69009,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69010,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69011,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69012,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69013,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout))));
    bufp->fullBit(oldp+69014,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+69015,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout));
    bufp->fullBit(oldp+69016,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69017,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U])));
    bufp->fullBit(oldp+69018,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69019,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU])));
    bufp->fullBit(oldp+69020,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout))));
    bufp->fullBit(oldp+69021,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU])))));
    bufp->fullBit(oldp+69022,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout));
    bufp->fullBit(oldp+69023,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69024,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69025,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69026,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69027,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout))));
    bufp->fullBit(oldp+69028,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+69029,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout));
    bufp->fullBit(oldp+69030,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69031,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69032,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69033,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69034,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_4_io_cout))));
    bufp->fullBit(oldp+69035,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_4_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+69036,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout));
    bufp->fullBit(oldp+69037,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69038,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69039,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69040,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69041,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout))));
    bufp->fullBit(oldp+69042,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+69043,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout));
    bufp->fullBit(oldp+69044,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69045,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69046,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69047,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69048,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout))));
    bufp->fullBit(oldp+69049,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+69050,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout));
    bufp->fullBit(oldp+69051,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69052,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69053,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69054,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 4U))));
    bufp->fullBit(oldp+69055,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout))));
    bufp->fullBit(oldp+69056,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+69057,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout));
    bufp->fullBit(oldp+69058,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69059,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69060,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69061,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69062,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout))));
    bufp->fullBit(oldp+69063,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69064,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout));
    bufp->fullBit(oldp+69065,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69066,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69067,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69068,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69069,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout))));
    bufp->fullBit(oldp+69070,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69071,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout));
    bufp->fullBit(oldp+69072,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69073,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69074,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69075,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69076,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout))));
    bufp->fullBit(oldp+69077,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69078,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout));
    bufp->fullBit(oldp+69079,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69080,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69081,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69082,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69083,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout))));
    bufp->fullBit(oldp+69084,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69085,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout));
    bufp->fullBit(oldp+69086,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69087,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69088,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69089,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69090,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout))));
    bufp->fullBit(oldp+69091,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69092,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout));
    bufp->fullBit(oldp+69093,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69094,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69095,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69096,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69097,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout))));
    bufp->fullBit(oldp+69098,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69099,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout));
    bufp->fullBit(oldp+69100,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69101,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69102,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69103,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69104,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout))));
    bufp->fullBit(oldp+69105,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69106,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout));
    bufp->fullBit(oldp+69107,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69108,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69109,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69110,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69111,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout))));
    bufp->fullBit(oldp+69112,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69113,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout));
    bufp->fullBit(oldp+69114,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69115,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69116,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69117,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69118,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout))));
    bufp->fullBit(oldp+69119,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69120,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout));
    bufp->fullBit(oldp+69121,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69122,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69123,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69124,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69125,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout))));
    bufp->fullBit(oldp+69126,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69127,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout));
    bufp->fullBit(oldp+69128,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69129,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69130,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69131,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69132,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout))));
    bufp->fullBit(oldp+69133,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69134,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout));
    bufp->fullBit(oldp+69135,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69136,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69137,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69138,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69139,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout))));
    bufp->fullBit(oldp+69140,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69141,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout));
    bufp->fullBit(oldp+69142,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U])));
    bufp->fullBit(oldp+69143,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69144,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U])));
    bufp->fullBit(oldp+69145,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69146,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout))));
    bufp->fullBit(oldp+69147,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69148,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout));
    bufp->fullBit(oldp+69149,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69150,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69151,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69152,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69153,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout))));
    bufp->fullBit(oldp+69154,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69155,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout));
    bufp->fullBit(oldp+69156,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69157,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69158,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69159,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69160,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout))));
    bufp->fullBit(oldp+69161,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69162,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout));
    bufp->fullBit(oldp+69163,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69164,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69165,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69166,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69167,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout))));
    bufp->fullBit(oldp+69168,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x13U))))));
    bufp->fullBit(oldp+69169,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout));
    bufp->fullBit(oldp+69170,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69171,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69172,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69173,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69174,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout))));
    bufp->fullBit(oldp+69175,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x14U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x14U))))));
    bufp->fullBit(oldp+69176,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout));
    bufp->fullBit(oldp+69177,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69178,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69179,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69180,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69181,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout))));
    bufp->fullBit(oldp+69182,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+69183,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout));
    bufp->fullBit(oldp+69184,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69185,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69186,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69187,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69188,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout))));
    bufp->fullBit(oldp+69189,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69190,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout));
    bufp->fullBit(oldp+69191,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69192,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69193,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69194,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69195,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout))));
    bufp->fullBit(oldp+69196,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69197,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout));
    bufp->fullBit(oldp+69198,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69199,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69200,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69201,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69202,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout))));
    bufp->fullBit(oldp+69203,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69204,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout));
    bufp->fullBit(oldp+69205,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69206,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69207,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69208,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69209,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout))));
    bufp->fullBit(oldp+69210,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69211,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout));
    bufp->fullBit(oldp+69212,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69213,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69214,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69215,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69216,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout))));
    bufp->fullBit(oldp+69217,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69218,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout));
    bufp->fullBit(oldp+69219,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69220,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69221,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69222,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69223,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout))));
    bufp->fullBit(oldp+69224,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+69225,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout));
    bufp->fullBit(oldp+69226,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69227,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69228,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69229,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69230,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout))));
    bufp->fullBit(oldp+69231,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+69232,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout));
    bufp->fullBit(oldp+69233,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69234,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69235,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69236,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69237,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout))));
    bufp->fullBit(oldp+69238,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+69239,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout));
    bufp->fullBit(oldp+69240,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69241,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69242,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69243,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69244,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout))));
    bufp->fullBit(oldp+69245,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+69246,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout));
    bufp->fullBit(oldp+69247,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69248,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69249,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69250,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69251,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout))));
    bufp->fullBit(oldp+69252,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+69253,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout));
    bufp->fullBit(oldp+69254,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69255,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69256,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69257,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69258,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout))));
    bufp->fullBit(oldp+69259,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+69260,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout));
    bufp->fullBit(oldp+69261,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69262,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69263,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69264,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69265,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout))));
    bufp->fullBit(oldp+69266,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69267,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout));
    bufp->fullBit(oldp+69268,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69269,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])));
    bufp->fullBit(oldp+69270,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69271,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])));
    bufp->fullBit(oldp+69272,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout))));
    bufp->fullBit(oldp+69273,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])))));
    bufp->fullBit(oldp+69274,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout));
    bufp->fullBit(oldp+69275,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69276,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69277,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69278,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69279,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout))));
    bufp->fullBit(oldp+69280,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+69281,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout));
    bufp->fullBit(oldp+69282,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69283,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69284,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69285,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69286,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout))));
    bufp->fullBit(oldp+69287,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+69288,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout));
    bufp->fullBit(oldp+69289,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69290,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69291,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69292,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69293,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout))));
    bufp->fullBit(oldp+69294,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+69295,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout));
    bufp->fullBit(oldp+69296,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69297,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69298,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69299,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 4U))));
    bufp->fullBit(oldp+69300,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout))));
    bufp->fullBit(oldp+69301,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+69302,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout));
    bufp->fullBit(oldp+69303,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69304,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69305,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69306,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69307,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout))));
    bufp->fullBit(oldp+69308,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69309,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout));
    bufp->fullBit(oldp+69310,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69311,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69312,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69313,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69314,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout))));
    bufp->fullBit(oldp+69315,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69316,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout));
    bufp->fullBit(oldp+69317,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69318,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69319,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69320,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69321,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout))));
    bufp->fullBit(oldp+69322,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69323,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout));
    bufp->fullBit(oldp+69324,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69325,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69326,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69327,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69328,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout))));
    bufp->fullBit(oldp+69329,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69330,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout));
    bufp->fullBit(oldp+69331,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69332,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69333,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69334,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69335,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout))));
    bufp->fullBit(oldp+69336,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69337,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout));
    bufp->fullBit(oldp+69338,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69339,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69340,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69341,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69342,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout))));
    bufp->fullBit(oldp+69343,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69344,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69345,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69346,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69347,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69348,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout))));
    bufp->fullBit(oldp+69349,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69350,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout));
    bufp->fullBit(oldp+69351,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69352,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69353,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69354,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69355,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout))));
    bufp->fullBit(oldp+69356,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69357,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout));
    bufp->fullBit(oldp+69358,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69359,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69360,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69361,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69362,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout))));
    bufp->fullBit(oldp+69363,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69364,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout));
    bufp->fullBit(oldp+69365,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69366,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69367,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69368,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69369,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout))));
    bufp->fullBit(oldp+69370,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69371,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout));
    bufp->fullBit(oldp+69372,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69373,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69374,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69375,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69376,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout))));
    bufp->fullBit(oldp+69377,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69378,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout));
    bufp->fullBit(oldp+69379,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69380,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69381,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69382,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69383,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout))));
    bufp->fullBit(oldp+69384,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69385,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout));
    bufp->fullBit(oldp+69386,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U])));
    bufp->fullBit(oldp+69387,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69388,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU])));
    bufp->fullBit(oldp+69389,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69390,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout))));
    bufp->fullBit(oldp+69391,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69392,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout));
    bufp->fullBit(oldp+69393,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69394,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69395,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69396,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69397,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout))));
    bufp->fullBit(oldp+69398,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69399,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout));
    bufp->fullBit(oldp+69400,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69401,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69402,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69403,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69404,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout))));
    bufp->fullBit(oldp+69405,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69406,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout));
    bufp->fullBit(oldp+69407,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69408,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69409,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69410,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69411,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout))));
    bufp->fullBit(oldp+69412,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x13U))))));
    bufp->fullCData(oldp+69413,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69414,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69419,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69420,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69425,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69426,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullCData(oldp+69438,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69439,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullCData(oldp+69451,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69452,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69457,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69458,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69463,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69464,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullCData(oldp+69476,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69477,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullCData(oldp+69489,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69490,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69495,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69496,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69501,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69502,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullCData(oldp+69514,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69515,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullCData(oldp+69527,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o),8);
    bufp->fullQData(oldp+69528,(vlSelf->__VdfgTmp_h2666ae02__0),59);
    __Vtemp_h0ba642e7__0[0U] = (IData)(vlSelf->__VdfgTmp_h6038ec7c__0);
    __Vtemp_h0ba642e7__0[1U] = (((IData)(vlSelf->__VdfgTmp_h91e57c42__0) 
                                 << 0x1aU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h6038ec7c__0 
                                                      >> 0x20U)));
    __Vtemp_h0ba642e7__0[2U] = (((IData)(vlSelf->__VdfgTmp_h91e57c42__0) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h91e57c42__0 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h0ba642e7__0[3U] = (((IData)(vlSelf->__VdfgTmp_h89ecec99__0) 
                                 << 0x14U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h91e57c42__0 
                                                       >> 0x20U)) 
                                              >> 6U));
    __Vtemp_h0ba642e7__0[4U] = (((IData)(vlSelf->__VdfgTmp_h89ecec99__0) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h89ecec99__0 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h0ba642e7__0[5U] = (((IData)(vlSelf->__VdfgTmp_hdc3481e7__0) 
                                 << 0xeU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h89ecec99__0 
                                                      >> 0x20U)) 
                                             >> 0xcU));
    __Vtemp_h0ba642e7__0[6U] = (((IData)(vlSelf->__VdfgTmp_hdc3481e7__0) 
                                 >> 0x12U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                       >> 0x20U)) 
                                              << 0xeU));
    __Vtemp_h0ba642e7__0[7U] = ((IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                         >> 0x20U)) 
                                >> 0x12U);
    bufp->fullWData(oldp+69530,(__Vtemp_h0ba642e7__0),232);
    bufp->fullQData(oldp+69538,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o),58);
    bufp->fullQData(oldp+69540,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o),58);
    bufp->fullBit(oldp+69542,((1U & (IData)(vlSelf->__VdfgTmp_h6038ec7c__0))));
    bufp->fullBit(oldp+69543,((1U & (IData)(vlSelf->__VdfgTmp_h91e57c42__0))));
    bufp->fullBit(oldp+69544,((1U & (IData)(vlSelf->__VdfgTmp_h89ecec99__0))));
    bufp->fullBit(oldp+69545,((1U & (IData)(vlSelf->__VdfgTmp_hdc3481e7__0))));
    bufp->fullBit(oldp+69546,((1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                     ^ (IData)(vlSelf->__VdfgTmp_hdc3481e7__0)))));
    bufp->fullBit(oldp+69547,((1U & (((~ (IData)(vlSelf->__VdfgTmp_hdc3481e7__0)) 
                                      ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                     & (IData)(vlSelf->__VdfgTmp_hdc3481e7__0)))));
    bufp->fullBit(oldp+69548,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout));
    bufp->fullBit(oldp+69549,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69550,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69551,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69552,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69553,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout))));
    bufp->fullBit(oldp+69554,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 1U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+69555,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout));
    bufp->fullBit(oldp+69556,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69557,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69558,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69559,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69560,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout));
    bufp->fullBit(oldp+69561,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout))));
    bufp->fullBit(oldp+69562,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0xaU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+69563,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout));
    bufp->fullBit(oldp+69564,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69565,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69566,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69567,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69568,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout))));
    bufp->fullBit(oldp+69569,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0xbU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+69570,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout));
    bufp->fullBit(oldp+69571,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69572,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69573,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69574,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69575,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout))));
    bufp->fullBit(oldp+69576,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+69577,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout));
    bufp->fullBit(oldp+69578,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69579,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69580,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69581,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69582,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout))));
    bufp->fullBit(oldp+69583,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+69584,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout));
    bufp->fullBit(oldp+69585,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69586,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69587,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69588,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69589,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout))));
    bufp->fullBit(oldp+69590,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0xeU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+69591,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout));
    bufp->fullBit(oldp+69592,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69593,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69594,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69595,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69596,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout))));
    bufp->fullBit(oldp+69597,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0xfU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+69598,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout));
    bufp->fullBit(oldp+69599,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69600,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69601,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69602,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69603,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout))));
    bufp->fullBit(oldp+69604,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x10U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+69605,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout));
    bufp->fullBit(oldp+69606,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69607,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69608,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69609,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69610,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout))));
    bufp->fullBit(oldp+69611,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+69612,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout));
    bufp->fullBit(oldp+69613,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69614,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69615,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69616,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69617,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout))));
    bufp->fullBit(oldp+69618,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x12U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+69619,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout));
    bufp->fullBit(oldp+69620,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69621,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69622,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69623,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69624,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout))));
    bufp->fullBit(oldp+69625,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x13U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+69626,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout));
    bufp->fullBit(oldp+69627,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69628,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69629,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69630,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69631,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout))));
    bufp->fullBit(oldp+69632,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 2U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+69633,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout));
    bufp->fullBit(oldp+69634,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69635,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69636,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69637,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69638,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout))));
    bufp->fullBit(oldp+69639,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+69640,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout));
    bufp->fullBit(oldp+69641,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69642,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69643,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69644,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69645,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout))));
    bufp->fullBit(oldp+69646,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+69647,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout));
    bufp->fullBit(oldp+69648,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69649,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69650,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69651,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69652,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout))));
    bufp->fullBit(oldp+69653,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x16U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+69654,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout));
    bufp->fullBit(oldp+69655,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69656,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69657,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69658,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69659,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout))));
    bufp->fullBit(oldp+69660,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x17U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+69661,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout));
    bufp->fullBit(oldp+69662,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69663,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69664,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69665,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69666,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout))));
    bufp->fullBit(oldp+69667,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x18U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+69668,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout));
    bufp->fullBit(oldp+69669,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69670,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69671,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69672,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69673,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout))));
    bufp->fullBit(oldp+69674,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+69675,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout));
    bufp->fullBit(oldp+69676,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69677,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69678,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69679,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69680,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout))));
    bufp->fullBit(oldp+69681,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x1aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+69682,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout));
    bufp->fullBit(oldp+69683,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69684,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69685,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69686,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69687,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout))));
    bufp->fullBit(oldp+69688,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x1bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+69689,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout));
    bufp->fullBit(oldp+69690,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69691,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69692,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69693,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69694,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout))));
    bufp->fullBit(oldp+69695,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+69696,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout));
    bufp->fullBit(oldp+69697,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69698,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69699,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69700,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69701,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout))));
    bufp->fullBit(oldp+69702,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+69703,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout));
    bufp->fullBit(oldp+69704,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69705,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69706,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69707,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69708,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout))));
    bufp->fullBit(oldp+69709,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 3U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+69710,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout));
    bufp->fullBit(oldp+69711,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69712,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69713,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69714,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69715,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout))));
    bufp->fullBit(oldp+69716,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x1eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+69717,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout));
    bufp->fullBit(oldp+69718,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69719,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69720,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69721,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69722,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout))));
    bufp->fullBit(oldp+69723,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x1fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+69724,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout));
    bufp->fullBit(oldp+69725,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69726,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69727,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69728,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69729,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout))));
    bufp->fullBit(oldp+69730,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x20U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+69731,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout));
    bufp->fullBit(oldp+69732,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69733,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69734,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69735,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69736,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout))));
    bufp->fullBit(oldp+69737,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x21U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+69738,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout));
    bufp->fullBit(oldp+69739,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69740,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69741,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69742,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69743,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout))));
    bufp->fullBit(oldp+69744,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x22U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+69745,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout));
    bufp->fullBit(oldp+69746,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69747,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69748,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69749,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69750,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout))));
    bufp->fullBit(oldp+69751,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x23U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+69752,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout));
    bufp->fullBit(oldp+69753,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69754,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69755,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69756,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69757,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout))));
    bufp->fullBit(oldp+69758,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x24U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+69759,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout));
    bufp->fullBit(oldp+69760,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69761,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69762,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69763,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69764,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout))));
    bufp->fullBit(oldp+69765,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x25U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+69766,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout));
    bufp->fullBit(oldp+69767,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69768,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69769,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69770,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69771,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout))));
    bufp->fullBit(oldp+69772,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x26U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+69773,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout));
    bufp->fullBit(oldp+69774,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69775,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69776,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69777,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69778,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout))));
    bufp->fullBit(oldp+69779,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x27U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+69780,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout));
    bufp->fullBit(oldp+69781,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69782,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69783,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69784,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69785,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout))));
    bufp->fullBit(oldp+69786,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 4U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+69787,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout));
    bufp->fullBit(oldp+69788,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69789,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69790,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69791,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69792,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout))));
    bufp->fullBit(oldp+69793,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x28U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+69794,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout));
    bufp->fullBit(oldp+69795,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69796,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69797,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69798,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69799,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout))));
    bufp->fullBit(oldp+69800,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x29U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+69801,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout));
    bufp->fullBit(oldp+69802,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69803,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69804,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69805,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69806,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout))));
    bufp->fullBit(oldp+69807,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x2aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+69808,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout));
    bufp->fullBit(oldp+69809,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69810,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69811,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69812,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69813,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout))));
    bufp->fullBit(oldp+69814,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x2bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+69815,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout));
    bufp->fullBit(oldp+69816,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69817,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69818,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69819,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69820,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout))));
    bufp->fullBit(oldp+69821,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x2cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+69822,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout));
    bufp->fullBit(oldp+69823,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69824,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69825,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69826,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69827,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout))));
    bufp->fullBit(oldp+69828,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x2dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x2dU)))))));
    bufp->fullBit(oldp+69829,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout));
    bufp->fullBit(oldp+69830,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69831,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69832,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69833,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69834,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout))));
    bufp->fullBit(oldp+69835,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x2eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x2eU)))))));
    bufp->fullBit(oldp+69836,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout));
    bufp->fullBit(oldp+69837,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69838,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69839,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69840,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69841,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout))));
    bufp->fullBit(oldp+69842,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x2fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x2fU)))))));
    bufp->fullBit(oldp+69843,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout));
    bufp->fullBit(oldp+69844,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69845,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69846,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69847,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69848,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout))));
    bufp->fullBit(oldp+69849,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x30U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x30U)))))));
    bufp->fullBit(oldp+69850,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout));
    bufp->fullBit(oldp+69851,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69852,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69853,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69854,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69855,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout))));
    bufp->fullBit(oldp+69856,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x31U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x31U)))))));
    bufp->fullBit(oldp+69857,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout));
    bufp->fullBit(oldp+69858,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69859,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69860,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69861,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69862,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout))));
    bufp->fullBit(oldp+69863,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 5U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+69864,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout));
    bufp->fullBit(oldp+69865,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69866,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69867,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69868,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69869,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout))));
    bufp->fullBit(oldp+69870,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x32U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x32U)))))));
    bufp->fullBit(oldp+69871,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout));
    bufp->fullBit(oldp+69872,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69873,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69874,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69875,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69876,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout))));
    bufp->fullBit(oldp+69877,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x33U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x33U)))))));
    bufp->fullBit(oldp+69878,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout));
    bufp->fullBit(oldp+69879,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69880,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69881,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69882,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69883,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout))));
    bufp->fullBit(oldp+69884,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x34U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x34U)))))));
    bufp->fullBit(oldp+69885,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout));
    bufp->fullBit(oldp+69886,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69887,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69888,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69889,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69890,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout))));
    bufp->fullBit(oldp+69891,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x35U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x35U)))))));
    bufp->fullBit(oldp+69892,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout));
    bufp->fullBit(oldp+69893,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69894,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69895,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69896,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69897,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout))));
    bufp->fullBit(oldp+69898,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x36U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x36U)))))));
    bufp->fullBit(oldp+69899,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout));
    bufp->fullBit(oldp+69900,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69901,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69902,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69903,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69904,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout))));
    bufp->fullBit(oldp+69905,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 0x37U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69906,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                      & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                                 >> 0x37U))) 
                                     | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                        & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69907,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69908,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69909,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69910,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69911,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout))));
    bufp->fullBit(oldp+69912,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 6U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+69913,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout));
    bufp->fullBit(oldp+69914,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69915,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69916,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69917,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69918,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout))));
    bufp->fullBit(oldp+69919,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 7U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+69920,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout));
    bufp->fullBit(oldp+69921,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69922,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69923,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69924,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69925,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout))));
    bufp->fullBit(oldp+69926,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 8U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+69927,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout));
    bufp->fullBit(oldp+69928,((1U & (IData)((vlSelf->__VdfgTmp_h6038ec7c__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69929,((1U & (IData)((vlSelf->__VdfgTmp_h91e57c42__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69930,((1U & (IData)((vlSelf->__VdfgTmp_h89ecec99__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69931,((1U & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69932,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout))));
    bufp->fullBit(oldp+69933,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                     >> 9U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc3481e7__0 
                                                   >> 9U)))))));
    __Vtemp_h52f1b723__0[0U] = (IData)(vlSelf->__VdfgTmp_h6038ec7c__0);
    __Vtemp_h52f1b723__0[1U] = (((IData)(vlSelf->__VdfgTmp_h91e57c42__0) 
                                 << 0x18U) | (IData)(
                                                     (vlSelf->__VdfgTmp_h6038ec7c__0 
                                                      >> 0x20U)));
    __Vtemp_h52f1b723__0[2U] = (((IData)(vlSelf->__VdfgTmp_h91e57c42__0) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h91e57c42__0 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h52f1b723__0[3U] = (((IData)(vlSelf->__VdfgTmp_h89ecec99__0) 
                                 << 0x10U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h91e57c42__0 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h52f1b723__0[4U] = (((IData)(vlSelf->__VdfgTmp_h89ecec99__0) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h89ecec99__0 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h52f1b723__0[5U] = (((IData)(vlSelf->__VdfgTmp_hdc3481e7__0) 
                                 << 8U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h89ecec99__0 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h52f1b723__0[6U] = (((IData)(vlSelf->__VdfgTmp_hdc3481e7__0) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_hdc3481e7__0 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+69934,(__Vtemp_h52f1b723__0),224);
    bufp->fullCData(oldp+69941,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__shift_amount),8);
    bufp->fullCData(oldp+69942,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__shift_amount_1),8);
    bufp->fullCData(oldp+69943,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__shift_amount_2),8);
    bufp->fullCData(oldp+69944,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__shift_amount_3),8);
    bufp->fullCData(oldp+69945,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign),4);
    bufp->fullQData(oldp+69946,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),59);
    bufp->fullQData(oldp+69948,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),59);
    bufp->fullCData(oldp+69950,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69951,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69956,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69957,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69958,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69963,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69964,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69965,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69977,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69979,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69980,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69992,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69994,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69995,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullIData(oldp+70007,((0x7fffffffU & (((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                    >> 0x1eU)) 
                                                + (1U 
                                                   & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                       >> 0x1dU) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x5fffffffU 
                                                                  & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U])))))))),32);
    bufp->fullWData(oldp+70008,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullCData(oldp+70011,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+70012,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),90);
    bufp->fullIData(oldp+70015,(((0xffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                         >> 0x1eU)) 
                                                << 1U)) 
                                 | (0U != (0x1fffffffU 
                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))),28);
    bufp->fullQData(oldp+70016,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted),57);
    bufp->fullQData(oldp+70018,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_h5fff1d24__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->fullQData(oldp+70020,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_h5fff1d24__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                        << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    bufp->fullWData(oldp+70022,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),90);
    bufp->fullWData(oldp+70025,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),90);
    bufp->fullWData(oldp+70028,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullWData(oldp+70031,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),90);
    bufp->fullWData(oldp+70034,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),90);
    bufp->fullWData(oldp+70037,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),90);
    bufp->fullWData(oldp+70040,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),90);
    bufp->fullWData(oldp+70043,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),90);
    bufp->fullBit(oldp+70046,(vlSelf->clock));
    bufp->fullBit(oldp+70047,(vlSelf->reset));
    bufp->fullIData(oldp+70048,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+70049,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+70050,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+70051,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+70052,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+70053,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+70054,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+70055,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+70056,(vlSelf->io_op),3);
    bufp->fullIData(oldp+70057,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+70058,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+70059,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+70060,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+70061,(vlSelf->io_posit_dot_o),32);
    bufp->fullCData(oldp+70062,(((8U & (vlSelf->io_posit_i1_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i1_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i1_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i1_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+70063,(((8U & (vlSelf->io_posit_i2_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i2_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i2_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i2_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+70064,(((8U & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                          ? (vlSelf->io_posit_i1_3 
                                             >> 0x1fU)
                                          : (vlSelf->io_posit_i2_3 
                                             >> 0x1fU)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                                         ? 
                                                        (vlSelf->io_posit_i1_2 
                                                         >> 0x1fU)
                                                         : 
                                                        (vlSelf->io_posit_i2_2 
                                                         >> 0x1fU)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                                            | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                                            ? 
                                                           (vlSelf->io_posit_i1_1 
                                                            >> 0x1fU)
                                                            : 
                                                           (vlSelf->io_posit_i2_1 
                                                            >> 0x1fU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                             | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                             ? 
                                                            (vlSelf->io_posit_i1_0 
                                                             >> 0x1fU)
                                                             : 
                                                            (vlSelf->io_posit_i2_0 
                                                             >> 0x1fU))))))),4);
    __Vtemp_h24f352fb__0[0U] = vlSelf->io_posit_i1_0;
    __Vtemp_h24f352fb__0[1U] = vlSelf->io_posit_i1_1;
    __Vtemp_h24f352fb__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i1_2))));
    __Vtemp_h24f352fb__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i1_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+70065,(__Vtemp_h24f352fb__0),128);
    bufp->fullIData(oldp+70069,((((IData)(vlSelf->__VdfgTmp_h2bfbff40__0) 
                                  << 0x1aU) | ((0x3000000U 
                                                & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                   >> 5U)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h92dbb766__0) 
                                                   << 0x12U) 
                                                  | ((0x30000U 
                                                      & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                         >> 0xdU)) 
                                                     | (((IData)(vlSelf->__VdfgTmp_he1608796__0) 
                                                         << 0xaU) 
                                                        | ((0x300U 
                                                            & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                               >> 0x15U)) 
                                                           | (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb74fe78f__0)))))))),32);
    __Vtemp_h8a85a4ef__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)))));
    __Vtemp_h8a85a4ef__0[1U] = ((0xff000000U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                    >> 2U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)))) 
                                           >> 0x20U)));
    __Vtemp_h8a85a4ef__0[2U] = ((0xfff00000U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                    << 0x13U) | (0x7ffffU 
                                                 & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_h8a85a4ef__0[3U] = (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                 << 0xfU) | (0x7fffU 
                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 0xeU)));
    bufp->fullWData(oldp+70070,(__Vtemp_h8a85a4ef__0),112);
    bufp->fullIData(oldp+70074,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+70075,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+70076,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+70077,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+70078,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70079,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70080,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70081,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70082,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70083,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70084,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70085,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+70086,(__Vtemp_h95b92b9c__0),128);
    bufp->fullIData(oldp+70090,((((IData)(vlSelf->__VdfgTmp_hf9a58d2e__0) 
                                  << 0x1aU) | ((0x3000000U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                   >> 5U)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h1c4c2383__0) 
                                                   << 0x12U) 
                                                  | ((0x30000U 
                                                      & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                         >> 0xdU)) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h591e574e__0) 
                                                         << 0xaU) 
                                                        | ((0x300U 
                                                            & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                               >> 0x15U)) 
                                                           | (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h40c78a7d__0)))))))),32);
    __Vtemp_h8053b372__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))));
    __Vtemp_h8053b372__0[1U] = ((0xff000000U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                    >> 2U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))) 
                                           >> 0x20U)));
    __Vtemp_h8053b372__0[2U] = ((0xfff00000U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                    << 0x13U) | (0x7ffffU 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_h8053b372__0[3U] = (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                 << 0xfU) | (0x7fffU 
                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                >> 0xeU)));
    bufp->fullWData(oldp+70091,(__Vtemp_h8053b372__0),112);
    bufp->fullBit(oldp+70095,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70096,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70097,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70098,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70099,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70100,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70101,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70102,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+70103,(((((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
                                   - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h417b81ae__0)) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7093f58__0) 
                                                    - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h4081c32a__0)) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7ef4006__0) 
                                                       - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h4160ece8__0)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb74fe78f__0) 
                                                        - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h40c78a7d__0))))))),32);
    bufp->fullSData(oldp+70104,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70105,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o),8);
    bufp->fullSData(oldp+70106,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70107,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o),8);
    bufp->fullIData(oldp+70108,(((5U == (IData)(vlSelf->io_op))
                                  ? 0U : (((IData)(vlSelf->__VdfgTmp_h88a6f633__0) 
                                           << 0x18U) 
                                          | (((IData)(vlSelf->__VdfgTmp_hb7a81c42__0) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->__VdfgTmp_hf7a6723f__0) 
                                                 << 8U) 
                                                | (IData)(vlSelf->__VdfgTmp_h86044a4c__0)))))),32);
    __Vtemp_hd89cbae3__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h5d360462__0)) 
                                         << 0x1cU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h257dbf2c__0))));
    __Vtemp_hd89cbae3__0[1U] = ((vlSelf->__VdfgTmp_h0f95f122__0 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->__VdfgTmp_h5d360462__0)) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(vlSelf->__VdfgTmp_h257dbf2c__0))) 
                                                      >> 0x20U)));
    __Vtemp_hd89cbae3__0[2U] = ((vlSelf->__VdfgTmp_hfbedb883__0 
                                 << 0x14U) | (vlSelf->__VdfgTmp_h0f95f122__0 
                                              >> 8U));
    __Vtemp_hd89cbae3__0[3U] = (vlSelf->__VdfgTmp_hfbedb883__0 
                                >> 0xcU);
    bufp->fullWData(oldp+70109,(__Vtemp_hd89cbae3__0),112);
    __Vtemp_h28abfd9f__0[0U] = ((0x8000000U & vlSelf->__VdfgTmp_h257dbf2c__0)
                                 ? ((1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                 : 0U);
    __Vtemp_h28abfd9f__0[1U] = ((0x8000000U & vlSelf->__VdfgTmp_h5d360462__0)
                                 ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                 : 0U);
    __Vtemp_h28abfd9f__0[2U] = (IData)((((QData)((IData)(
                                                         ((0x8000000U 
                                                           & vlSelf->__VdfgTmp_hfbedb883__0)
                                                           ? 
                                                          ((8U 
                                                            & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                            ? 
                                                           (0x80000000U 
                                                            | (0x7fffffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                            : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->__VdfgTmp_h0f95f122__0)
                                                            ? 
                                                           ((4U 
                                                             & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                             ? 
                                                            (0x80000000U 
                                                             | (0x7fffffffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                             : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                                            : 0U)))));
    __Vtemp_h28abfd9f__0[3U] = (IData)(((((QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->__VdfgTmp_hfbedb883__0)
                                                            ? 
                                                           ((8U 
                                                             & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                             ? 
                                                            (0x80000000U 
                                                             | (0x7fffffffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                             : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((0x8000000U 
                                                             & vlSelf->__VdfgTmp_h0f95f122__0)
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                                              ? 
                                                             (0x80000000U 
                                                              | (0x7fffffffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                              : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                                             : 0U)))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+70113,(__Vtemp_h28abfd9f__0),128);
    bufp->fullCData(oldp+70117,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+70118,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->fullCData(oldp+70119,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->fullCData(oldp+70120,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->fullCData(oldp+70121,(((5U == (IData)(vlSelf->io_op))
                                  ? (IData)(vlSelf->__VdfgTmp_h12c96a73__0)
                                  : 0U)),8);
    bufp->fullIData(oldp+70122,(((5U == (IData)(vlSelf->io_op))
                                  ? ((0xffffffeU & 
                                      ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                >> 0x1eU)) 
                                       << 1U)) | (0U 
                                                  != 
                                                  (0x1fffffffU 
                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                  : 0U)),28);
    if ((1U == (IData)(vlSelf->io_op))) {
        __Vtemp_he5e6854e__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                               ? vlSelf->__VdfgTmp_h5e829f01__0
                                                               : vlSelf->__VdfgTmp_h94a4fa6e__0))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                ? vlSelf->__VdfgTmp_h4e1badcc__0
                                                                : vlSelf->__VdfgTmp_h4ac99e53__0)))));
        __Vtemp_he5e6854e__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                       ? vlSelf->__VdfgTmp_h36293f89__0
                                       : vlSelf->__VdfgTmp_h227b7e35__0) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                                              ? vlSelf->__VdfgTmp_h5e829f01__0
                                                                              : vlSelf->__VdfgTmp_h94a4fa6e__0))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                               ? vlSelf->__VdfgTmp_h4e1badcc__0
                                                                               : vlSelf->__VdfgTmp_h4ac99e53__0)))) 
                                                          >> 0x20U)));
        __Vtemp_he5e6854e__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                       ? vlSelf->__VdfgTmp_h334557ae__0
                                       : vlSelf->__VdfgTmp_h96374ca0__0) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                    ? vlSelf->__VdfgTmp_h36293f89__0
                                                    : vlSelf->__VdfgTmp_h227b7e35__0) 
                                                  >> 4U));
        __Vtemp_he5e6854e__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                      ? vlSelf->__VdfgTmp_h334557ae__0
                                      : vlSelf->__VdfgTmp_h96374ca0__0) 
                                    >> 6U);
    } else {
        __Vtemp_he5e6854e__0[0U] = 0U;
        __Vtemp_he5e6854e__0[1U] = 0U;
        __Vtemp_he5e6854e__0[2U] = 0U;
        __Vtemp_he5e6854e__0[3U] = 0U;
    }
    bufp->fullWData(oldp+70123,(__Vtemp_he5e6854e__0),120);
    bufp->fullIData(oldp+70127,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____VdfgTmp_h2de102ef__0)
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____VdfgTmp_h2de102ef__0)
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____VdfgTmp_h2de102ef__0)
                                          : 0U) << 8U) 
                                       | ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                           ? (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____VdfgTmp_h2de102ef__0)
                                           : 0U))))),32);
    __Vtemp_hdf4c90c7__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                                >> 3U)))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                                     >> 2U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))))))));
    __Vtemp_hdf4c90c7__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                                    >> 3U)))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                                         >> 2U)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))))))) 
                                           >> 0x20U)));
    __Vtemp_hdf4c90c7__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o))) 
                                    << 0x14U) | (0xfffffU 
                                                 & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hdf4c90c7__0[3U] = (0xffffU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                           >> 0xeU));
    bufp->fullWData(oldp+70128,(__Vtemp_hdf4c90c7__0),112);
    bufp->fullBit(oldp+70132,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70133,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70134,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70135,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70136,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70137,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70138,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70139,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+70140,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->fullIData(oldp+70141,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->fullIData(oldp+70142,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->fullQData(oldp+70143,((((QData)((IData)((
                                                   (1U 
                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))
                                                    ? (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT____VdfgTmp_hafba9cca__0)
                                                    : 0U))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((((1U 
                                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))
                                                                  ? (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT____VdfgTmp_hafba9cca__0)
                                                                  : 0U) 
                                                                << 0x12U) 
                                                               | ((((1U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))
                                                                     ? (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT____VdfgTmp_hafba9cca__0)
                                                                     : 0U) 
                                                                   << 9U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                      ? (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT____VdfgTmp_hafba9cca__0)
                                                                      : 0U))))))),36);
    __Vtemp_hee7dfb4e__0[1U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x19U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfffffffU 
                                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o))))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o 
                                                                                >> 0x1dU))))) 
                                                           << 0x1dU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o)))) 
                                                                              << 0x1cU) 
                                                                             | ((0xffffffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o 
                                                                                >> 0x1dU)) 
                                                                                << 1U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h52e32d61__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfffffffU 
                                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (IData)(
                                                                       (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o 
                                                                        >> 0x1dU))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfffffffU 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o)))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & ((IData)(
                                                                             (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o 
                                                                              >> 0x1dU)) 
                                                                     << 1U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o))))))))));
    __Vtemp_h52e32d61__0[1U] = __Vtemp_hee7dfb4e__0[1U];
    __Vtemp_h52e32d61__0[2U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x15U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfffffffU 
                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o)))) 
                                               << 0x14U) 
                                              | (0xfffffU 
                                                 & ((IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o 
                                                             >> 0x1dU)) 
                                                    >> 7U))));
    __Vtemp_h52e32d61__0[3U] = (0xffffU & ((IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o 
                                                    >> 0x1dU)) 
                                           >> 0xbU));
    bufp->fullWData(oldp+70145,(__Vtemp_h52e32d61__0),112);
    bufp->fullBit(oldp+70149,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70150,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70152,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70153,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70155,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70156,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70158,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70159,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70161,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),56);
    bufp->fullQData(oldp+70163,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),56);
    bufp->fullQData(oldp+70165,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),56);
    bufp->fullSData(oldp+70167,((0x1ffU & (((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                             ? ((3U 
                                                 > 
                                                 (0x3fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                 ? 
                                                ((0x1c0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(3U) 
                                                                      - 
                                                                      vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     - (IData)(1U)) 
                                                                    >> 5U)))) 
                                                     << 6U)) 
                                                 | (0x3fU 
                                                    & (((IData)(3U) 
                                                        - 
                                                        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                       - (IData)(1U))))
                                                 : 
                                                ((0x1c0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((- 
                                                                     (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                      - (IData)(2U))) 
                                                                    >> 5U)))) 
                                                     << 6U)) 
                                                 | (0x3fU 
                                                    & (- 
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                        - (IData)(2U))))))
                                             : 0U) 
                                           + (1U & 
                                              ((~ (IData)(vlSelf->PvuTop__DOT___GEN_8)) 
                                               & (IData)(
                                                         (vlSelf->__VdfgTmp_h2666ae02__0 
                                                          >> 0x38U))))))),9);
    bufp->fullCData(oldp+70168,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? (IData)(vlSelf->__VdfgTmp_hfa3f98de__0)
                                  : 0U)),6);
    bufp->fullBit(oldp+70169,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70170,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70172,((((QData)((IData)((
                                                   (1U 
                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))
                                                    ? (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____VdfgTmp_h7d278cc5__0)
                                                    : 0U))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((((1U 
                                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))
                                                                  ? (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____VdfgTmp_h7d278cc5__0)
                                                                  : 0U) 
                                                                << 0x12U) 
                                                               | ((((1U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))
                                                                     ? (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____VdfgTmp_h7d278cc5__0)
                                                                     : 0U) 
                                                                   << 9U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                      ? (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____VdfgTmp_h7d278cc5__0)
                                                                      : 0U))))))),36);
    __Vtemp_h4c9dee20__0[1U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x19U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfffffffU 
                                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o))))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o 
                                                                                >> 0x1dU))))) 
                                                           << 0x1dU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o)))) 
                                                                              << 0x1cU) 
                                                                             | ((0xffffffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o 
                                                                                >> 0x1dU)) 
                                                                                << 1U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hf67a7711__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfffffffU 
                                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (IData)(
                                                                       (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o 
                                                                        >> 0x1dU))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfffffffU 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o)))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & ((IData)(
                                                                             (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o 
                                                                              >> 0x1dU)) 
                                                                     << 1U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o))))))))));
    __Vtemp_hf67a7711__0[1U] = __Vtemp_h4c9dee20__0[1U];
    __Vtemp_hf67a7711__0[2U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o 
                                          >> 0x1dU)) 
                                 << 0x15U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfffffffU 
                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o)))) 
                                               << 0x14U) 
                                              | (0xfffffU 
                                                 & ((IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o 
                                                             >> 0x1dU)) 
                                                    >> 7U))));
    __Vtemp_hf67a7711__0[3U] = (0xffffU & ((IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o 
                                                    >> 0x1dU)) 
                                           >> 0xbU));
    bufp->fullWData(oldp+70174,(__Vtemp_hf67a7711__0),112);
    bufp->fullBit(oldp+70178,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70179,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70181,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70182,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70184,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70185,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70187,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70188,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70190,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),56);
    bufp->fullQData(oldp+70192,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),56);
    bufp->fullQData(oldp+70194,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),56);
    bufp->fullIData(oldp+70196,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____VdfgTmp_h2de102ef__0)
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____VdfgTmp_h2de102ef__0)
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____VdfgTmp_h2de102ef__0)
                                          : 0U) << 8U) 
                                       | ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                           ? (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____VdfgTmp_h2de102ef__0)
                                           : 0U))))),32);
    __Vtemp_hd280c543__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                                >> 3U)))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                                     >> 2U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))))))));
    __Vtemp_hd280c543__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                                    >> 3U)))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                                         >> 2U)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))))))) 
                                           >> 0x20U)));
    __Vtemp_hd280c543__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o))) 
                                    << 0x14U) | (0xfffffU 
                                                 & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hd280c543__0[3U] = (0xffffU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                           >> 0xeU));
    bufp->fullWData(oldp+70197,(__Vtemp_hd280c543__0),112);
    bufp->fullBit(oldp+70201,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70202,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70203,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70204,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70205,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70206,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70207,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70208,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+70209,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullIData(oldp+70210,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->fullIData(oldp+70211,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+70212,(((8U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                          & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                         << 3U) ^ (8U 
                                                   & (vlSelf->io_posit_i1_3 
                                                      >> 0x1cU)))) 
                                 | ((4U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                            << 2U) 
                                           ^ (4U & 
                                              (vlSelf->io_posit_i1_2 
                                               >> 0x1dU)))) 
                                    | ((2U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                               << 1U) 
                                              ^ (2U 
                                                 & (vlSelf->io_posit_i1_1 
                                                    >> 0x1eU)))) 
                                       | (1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                ^ (vlSelf->io_posit_i1_0 
                                                   >> 0x1fU))))))),4);
    bufp->fullIData(oldp+70213,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a),28);
    bufp->fullQData(oldp+70214,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70216,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a),28);
    bufp->fullQData(oldp+70217,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70219,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a),28);
    bufp->fullQData(oldp+70220,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70222,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a),28);
    bufp->fullQData(oldp+70223,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70225,(0x1fU),32);
    bufp->fullBit(oldp+70226,(1U));
    bufp->fullIData(oldp+70227,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+70228,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+70233,(0U));
    bufp->fullIData(oldp+70234,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+70235,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+70240,(0x38U),32);
    bufp->fullIData(oldp+70241,(6U),32);
    bufp->fullWData(oldp+70242,(VPvuTop__ConstPool__CONST_hc4a98b6e_0),336);
    bufp->fullIData(oldp+70253,(0x3bU),32);
    bufp->fullWData(oldp+70254,(VPvuTop__ConstPool__CONST_h55404713_0),354);
    bufp->fullBit(oldp+70266,(1U));
}
