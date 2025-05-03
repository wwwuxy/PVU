// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


void VPvuTop___024root__trace_chg_sub_22(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_chg_sub_22\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 68806);
    VlWide<8>/*255:0*/ __Vtemp_h8d8d0578__0;
    VlWide<7>/*223:0*/ __Vtemp_hf3a8609d__0;
    VlWide<4>/*127:0*/ __Vtemp_h8514ab4c__0;
    VlWide<4>/*127:0*/ __Vtemp_hde6aa058__0;
    VlWide<4>/*127:0*/ __Vtemp_h620199ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h24f352fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hce8b1a10__0;
    VlWide<4>/*127:0*/ __Vtemp_h95b92b9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h0565bda0__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ede73fc__0;
    VlWide<6>/*191:0*/ __Vtemp_hfd18a013__0;
    VlWide<7>/*223:0*/ __Vtemp_hed54d557__0;
    VlWide<7>/*223:0*/ __Vtemp_hf0d3f2ce__0;
    VlWide<7>/*223:0*/ __Vtemp_h30f7997b__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a1efef7__0;
    VlWide<4>/*127:0*/ __Vtemp_h7d2a8d0a__0;
    VlWide<4>/*127:0*/ __Vtemp_he0602d0b__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf4c90c7__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ede73fc__1;
    VlWide<6>/*191:0*/ __Vtemp_he399c376__0;
    VlWide<7>/*223:0*/ __Vtemp_hec1644da__0;
    VlWide<7>/*223:0*/ __Vtemp_hcc9c6554__0;
    VlWide<3>/*95:0*/ __Vtemp_hee7dfb4e__0;
    VlWide<4>/*127:0*/ __Vtemp_h52e32d61__0;
    VlWide<7>/*223:0*/ __Vtemp_h57c76055__0;
    VlWide<3>/*95:0*/ __Vtemp_h4c9dee20__0;
    VlWide<4>/*127:0*/ __Vtemp_hf67a7711__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a34a34f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd280c543__0;
    VlWide<7>/*223:0*/ __Vtemp_h1dafb016__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ba2cfbb__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x15U] 
                     | vlSelf->__Vm_traceActivity[0x44U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout));
        bufp->chgBit(oldp+1,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                    >> 0x1aU))));
        bufp->chgBit(oldp+3,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                    >> 0xaU))));
        bufp->chgBit(oldp+4,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                    >> 0x1aU))));
        bufp->chgBit(oldp+5,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                              ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout))));
        bufp->chgBit(oldp+6,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                     & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_41_io_cout)) 
                                    | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                            >> 0x1aU)) 
                                        ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                       & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout));
        bufp->chgBit(oldp+8,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                    >> 0xbU))));
        bufp->chgBit(oldp+9,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                    >> 0x1bU))));
        bufp->chgBit(oldp+10,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+11,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+12,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout))));
        bufp->chgBit(oldp+13,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_42_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout));
        bufp->chgBit(oldp+15,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+16,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+17,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+18,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+19,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout))));
        bufp->chgBit(oldp+20,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_43_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout));
        bufp->chgBit(oldp+22,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+23,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+24,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+25,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+26,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout))));
        bufp->chgBit(oldp+27,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_44_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout));
        bufp->chgBit(oldp+29,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+30,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+31,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+32,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+33,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout))));
        bufp->chgBit(oldp+34,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_45_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1eU))))));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout));
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+37,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+38,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+39,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout))));
        bufp->chgBit(oldp+41,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_46_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
                                           >> 0x1fU))))));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout));
        bufp->chgBit(oldp+43,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+44,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U])));
        bufp->chgBit(oldp+45,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+46,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU])));
        bufp->chgBit(oldp+47,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout))));
        bufp->chgBit(oldp+48,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_47_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU])))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout));
        bufp->chgBit(oldp+50,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+51,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 1U))));
        bufp->chgBit(oldp+52,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+53,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 1U))));
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout))));
        bufp->chgBit(oldp+55,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_48_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 1U))))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout));
        bufp->chgBit(oldp+57,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+58,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 5U))));
        bufp->chgBit(oldp+60,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+61,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_4_io_cout))));
        bufp->chgBit(oldp+62,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_4_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x15U))))));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout));
        bufp->chgBit(oldp+64,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+65,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 2U))));
        bufp->chgBit(oldp+66,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+67,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 2U))));
        bufp->chgBit(oldp+68,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout))));
        bufp->chgBit(oldp+69,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_49_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 2U))))));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout));
        bufp->chgBit(oldp+71,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+72,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 3U))));
        bufp->chgBit(oldp+73,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+74,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 3U))));
        bufp->chgBit(oldp+75,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout))));
        bufp->chgBit(oldp+76,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_50_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 3U))))));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout));
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+79,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 4U))));
        bufp->chgBit(oldp+80,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+81,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 4U))));
        bufp->chgBit(oldp+82,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout))));
        bufp->chgBit(oldp+83,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 4U))))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout));
        bufp->chgBit(oldp+85,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+86,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 5U))));
        bufp->chgBit(oldp+87,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+88,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 5U))));
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout))));
        bufp->chgBit(oldp+90,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 5U))))));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout));
        bufp->chgBit(oldp+92,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+93,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 6U))));
        bufp->chgBit(oldp+94,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+95,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 6U))));
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout))));
        bufp->chgBit(oldp+97,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 6U))))));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout));
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+100,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 7U))));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 7U))));
        bufp->chgBit(oldp+103,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout))));
        bufp->chgBit(oldp+104,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 7U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 7U))))));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout));
        bufp->chgBit(oldp+106,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+107,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 8U))));
        bufp->chgBit(oldp+108,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 8U))));
        bufp->chgBit(oldp+110,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout))));
        bufp->chgBit(oldp+111,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 8U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 8U))))));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout));
        bufp->chgBit(oldp+113,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+115,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+116,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 9U))));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout))));
        bufp->chgBit(oldp+118,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 9U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 9U))))));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout));
        bufp->chgBit(oldp+120,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+121,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+122,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+124,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout))));
        bufp->chgBit(oldp+125,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0xaU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout));
        bufp->chgBit(oldp+127,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+128,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+130,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+131,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout))));
        bufp->chgBit(oldp+132,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0xbU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                      >> 6U))));
        bufp->chgBit(oldp+137,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+138,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout))));
        bufp->chgBit(oldp+139,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                              >> 0x16U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout));
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+143,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+145,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout))));
        bufp->chgBit(oldp+146,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0xcU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout));
        bufp->chgBit(oldp+148,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+150,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+151,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+152,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout))));
        bufp->chgBit(oldp+153,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0xdU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout));
        bufp->chgBit(oldp+155,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+156,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+157,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+158,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+159,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout))));
        bufp->chgBit(oldp+160,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0xeU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout));
        bufp->chgBit(oldp+162,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+163,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+164,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+165,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+166,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout))));
        bufp->chgBit(oldp+167,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0xfU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout));
        bufp->chgBit(oldp+169,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U])));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+171,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U])));
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+173,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout))));
        bufp->chgBit(oldp+174,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x10U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+177,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+178,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 1U))));
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+180,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout))));
        bufp->chgBit(oldp+181,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x11U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout));
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+185,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 2U))));
        bufp->chgBit(oldp+186,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+187,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout))));
        bufp->chgBit(oldp+188,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x12U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout));
        bufp->chgBit(oldp+190,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 3U))));
        bufp->chgBit(oldp+191,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 3U))));
        bufp->chgBit(oldp+193,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+194,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout))));
        bufp->chgBit(oldp+195,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x13U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout));
        bufp->chgBit(oldp+197,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 4U))));
        bufp->chgBit(oldp+198,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+199,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 4U))));
        bufp->chgBit(oldp+200,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+201,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout))));
        bufp->chgBit(oldp+202,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x14U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout));
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+205,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+206,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 5U))));
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+208,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout))));
        bufp->chgBit(oldp+209,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x15U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout));
        bufp->chgBit(oldp+211,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+213,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                      >> 7U))));
        bufp->chgBit(oldp+214,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+215,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout))));
        bufp->chgBit(oldp+216,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                              >> 0x17U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout));
        bufp->chgBit(oldp+218,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 6U))));
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+222,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout))));
        bufp->chgBit(oldp+223,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x16U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout));
        bufp->chgBit(oldp+225,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+226,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 7U))));
        bufp->chgBit(oldp+228,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+229,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout))));
        bufp->chgBit(oldp+230,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x17U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout));
        bufp->chgBit(oldp+232,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+233,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+234,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 8U))));
        bufp->chgBit(oldp+235,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+236,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout))));
        bufp->chgBit(oldp+237,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x18U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout));
        bufp->chgBit(oldp+239,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+240,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+241,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 9U))));
        bufp->chgBit(oldp+242,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+243,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout))));
        bufp->chgBit(oldp+244,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x19U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout));
        bufp->chgBit(oldp+246,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+247,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+248,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+249,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+250,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout))));
        bufp->chgBit(oldp+251,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x1aU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout));
        bufp->chgBit(oldp+253,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+254,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+255,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+256,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+257,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout))));
        bufp->chgBit(oldp+258,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x1bU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout));
        bufp->chgBit(oldp+260,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+261,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+262,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+263,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+264,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout))));
        bufp->chgBit(oldp+265,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x1cU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout));
        bufp->chgBit(oldp+267,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+268,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+269,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+270,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+271,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout))));
        bufp->chgBit(oldp+272,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x1dU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout));
        bufp->chgBit(oldp+274,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+275,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+276,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+277,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+278,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout))));
        bufp->chgBit(oldp+279,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x1eU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout));
        bufp->chgBit(oldp+281,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+282,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+283,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+284,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+285,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout))));
        bufp->chgBit(oldp+286,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                              >> 0x1fU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                            >> 0x1fU))))));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout));
        bufp->chgBit(oldp+288,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+289,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+290,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                      >> 8U))));
        bufp->chgBit(oldp+291,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+292,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout))));
        bufp->chgBit(oldp+293,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                              >> 0x18U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout));
        bufp->chgBit(oldp+295,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+296,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])));
        bufp->chgBit(oldp+297,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+298,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])));
        bufp->chgBit(oldp+299,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout))));
        bufp->chgBit(oldp+300,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout)) 
                                      | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU]) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_h31758f64__0)) 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])))));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout));
        bufp->chgBit(oldp+302,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+303,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 1U))));
        bufp->chgBit(oldp+304,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+305,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 1U))));
        bufp->chgBit(oldp+306,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout))));
        bufp->chgBit(oldp+307,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 1U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 1U))))));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout));
        bufp->chgBit(oldp+309,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+310,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 2U))));
        bufp->chgBit(oldp+311,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+312,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 2U))));
        bufp->chgBit(oldp+313,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout))));
        bufp->chgBit(oldp+314,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 2U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 2U))))));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout));
        bufp->chgBit(oldp+316,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+317,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 3U))));
        bufp->chgBit(oldp+318,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+319,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 3U))));
        bufp->chgBit(oldp+320,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout))));
        bufp->chgBit(oldp+321,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 3U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 3U))))));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout));
        bufp->chgBit(oldp+323,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+324,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 4U))));
        bufp->chgBit(oldp+325,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+326,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 4U))));
        bufp->chgBit(oldp+327,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout))));
        bufp->chgBit(oldp+328,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 4U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 4U))))));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout));
        bufp->chgBit(oldp+330,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+331,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 5U))));
        bufp->chgBit(oldp+332,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+333,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 5U))));
        bufp->chgBit(oldp+334,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout))));
        bufp->chgBit(oldp+335,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 5U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 5U))))));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout));
        bufp->chgBit(oldp+337,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+338,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 6U))));
        bufp->chgBit(oldp+339,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+340,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 6U))));
        bufp->chgBit(oldp+341,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout))));
        bufp->chgBit(oldp+342,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 6U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 6U))))));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout));
        bufp->chgBit(oldp+344,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+345,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 7U))));
        bufp->chgBit(oldp+346,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+347,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 7U))));
        bufp->chgBit(oldp+348,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout))));
        bufp->chgBit(oldp+349,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 7U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 7U))))));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout));
        bufp->chgBit(oldp+351,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+352,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 8U))));
        bufp->chgBit(oldp+353,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+354,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 8U))));
        bufp->chgBit(oldp+355,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout))));
        bufp->chgBit(oldp+356,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 8U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 8U))))));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout));
        bufp->chgBit(oldp+358,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+359,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 9U))));
        bufp->chgBit(oldp+360,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+361,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 9U))));
        bufp->chgBit(oldp+362,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout))));
        bufp->chgBit(oldp+363,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 9U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 9U))))));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout));
        bufp->chgBit(oldp+365,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+366,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+367,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                      >> 9U))));
        bufp->chgBit(oldp+368,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+369,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout))));
        bufp->chgBit(oldp+370,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                              >> 0x19U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+371,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+372,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+373,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+374,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+375,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout))));
        bufp->chgBit(oldp+376,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0xaU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout));
        bufp->chgBit(oldp+378,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+379,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+380,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+381,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+382,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout))));
        bufp->chgBit(oldp+383,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0xbU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout));
        bufp->chgBit(oldp+385,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+386,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+387,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+388,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+389,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout))));
        bufp->chgBit(oldp+390,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0xcU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout));
        bufp->chgBit(oldp+392,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+393,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+394,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+395,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+396,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout))));
        bufp->chgBit(oldp+397,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0xdU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout));
        bufp->chgBit(oldp+399,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+400,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+401,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+402,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+403,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout))));
        bufp->chgBit(oldp+404,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0xeU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout));
        bufp->chgBit(oldp+406,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+407,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+408,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+409,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+410,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout))));
        bufp->chgBit(oldp+411,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0xfU)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout));
        bufp->chgBit(oldp+413,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U])));
        bufp->chgBit(oldp+414,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+415,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU])));
        bufp->chgBit(oldp+416,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+417,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout))));
        bufp->chgBit(oldp+418,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0x10U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+419,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout));
        bufp->chgBit(oldp+420,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 1U))));
        bufp->chgBit(oldp+421,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+422,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 1U))));
        bufp->chgBit(oldp+423,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+424,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout))));
        bufp->chgBit(oldp+425,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0x11U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout));
        bufp->chgBit(oldp+427,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 2U))));
        bufp->chgBit(oldp+428,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+429,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 2U))));
        bufp->chgBit(oldp+430,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+431,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout))));
        bufp->chgBit(oldp+432,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0x12U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout));
        bufp->chgBit(oldp+434,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                      >> 3U))));
        bufp->chgBit(oldp+435,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+436,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                      >> 3U))));
        bufp->chgBit(oldp+437,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+438,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout))));
        bufp->chgBit(oldp+439,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout)) 
                                      | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                              >> 0x13U)) 
                                          ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_h31758f64__0)) 
                                         & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                            >> 0x13U))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x16U] 
                     | vlSelf->__Vm_traceActivity[0x45U]))) {
        bufp->chgIData(oldp+440,(vlSelf->PvuTop__DOT__add__DOT__sum_3),31);
        bufp->chgBit(oldp+441,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3));
        bufp->chgIData(oldp+442,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i),30);
        bufp->chgIData(oldp+443,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
        bufp->chgIData(oldp+444,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i),30);
        bufp->chgIData(oldp+445,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x17U] 
                     | vlSelf->__Vm_traceActivity[0x46U]))) {
        bufp->chgCData(oldp+446,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+447,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+459,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x18U] 
                     | vlSelf->__Vm_traceActivity[0x47U]))) {
        bufp->chgIData(oldp+461,(vlSelf->PvuTop__DOT__add__DOT__sum_2),31);
        bufp->chgBit(oldp+462,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2));
        bufp->chgIData(oldp+463,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i),30);
        bufp->chgIData(oldp+464,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
        bufp->chgIData(oldp+465,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i),30);
        bufp->chgIData(oldp+466,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x19U] 
                     | vlSelf->__Vm_traceActivity[0x48U]))) {
        bufp->chgCData(oldp+467,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+468,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+480,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1aU] 
                     | vlSelf->__Vm_traceActivity[0x49U]))) {
        bufp->chgIData(oldp+482,(vlSelf->PvuTop__DOT__add__DOT__sum_1),31);
        bufp->chgBit(oldp+483,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1));
        bufp->chgIData(oldp+484,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i),30);
        bufp->chgIData(oldp+485,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
        bufp->chgIData(oldp+486,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i),30);
        bufp->chgIData(oldp+487,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1bU] 
                     | vlSelf->__Vm_traceActivity[0x4aU]))) {
        bufp->chgCData(oldp+488,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+489,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+501,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1cU] 
                     | vlSelf->__Vm_traceActivity[0x4bU]))) {
        bufp->chgIData(oldp+503,(vlSelf->PvuTop__DOT__add__DOT__sum),31);
        bufp->chgBit(oldp+504,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
        bufp->chgIData(oldp+505,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),30);
        bufp->chgIData(oldp+506,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
        bufp->chgIData(oldp+507,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),30);
        bufp->chgIData(oldp+508,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1dU] 
                     | vlSelf->__Vm_traceActivity[0x4cU]))) {
        bufp->chgCData(oldp+509,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+510,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+522,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1eU] 
                     | vlSelf->__Vm_traceActivity[0x4dU]))) {
        bufp->chgCData(oldp+524,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+525,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+530,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x1fU] 
                     | vlSelf->__Vm_traceActivity[0x4eU]))) {
        bufp->chgCData(oldp+531,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+532,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+537,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x20U] 
                     | vlSelf->__Vm_traceActivity[0x4fU]))) {
        bufp->chgCData(oldp+538,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+539,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+551,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x21U] 
                     | vlSelf->__Vm_traceActivity[0x50U]))) {
        bufp->chgCData(oldp+553,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+554,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+559,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x22U] 
                     | vlSelf->__Vm_traceActivity[0x51U]))) {
        bufp->chgCData(oldp+560,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+561,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+566,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x23U] 
                     | vlSelf->__Vm_traceActivity[0x52U]))) {
        bufp->chgCData(oldp+567,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+568,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+580,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x24U] 
                     | vlSelf->__Vm_traceActivity[0x53U]))) {
        bufp->chgCData(oldp+582,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+583,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+588,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x25U] 
                     | vlSelf->__Vm_traceActivity[0x54U]))) {
        bufp->chgCData(oldp+589,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+590,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+595,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x26U] 
                     | vlSelf->__Vm_traceActivity[0x55U]))) {
        bufp->chgCData(oldp+596,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+597,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+609,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x27U] 
                     | vlSelf->__Vm_traceActivity[0x56U]))) {
        bufp->chgCData(oldp+611,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+612,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+617,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x28U] 
                     | vlSelf->__Vm_traceActivity[0x57U]))) {
        bufp->chgCData(oldp+618,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+619,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+624,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x29U] 
                     | vlSelf->__Vm_traceActivity[0x58U]))) {
        bufp->chgCData(oldp+625,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+626,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
        bufp->chgQData(oldp+638,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),56);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2aU] 
                     | vlSelf->__Vm_traceActivity[0x59U]))) {
        bufp->chgBit(oldp+640,((1U & (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result 
                                              >> 0x3aU)))));
        bufp->chgCData(oldp+641,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o),8);
        bufp->chgQData(oldp+642,(vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result),59);
        __Vtemp_h8d8d0578__0[0U] = (IData)(vlSelf->__VdfgTmp_h2dfc7f3c__0);
        __Vtemp_h8d8d0578__0[1U] = (((IData)(vlSelf->__VdfgTmp_h48ddf070__0) 
                                     << 0x1aU) | (IData)(
                                                         (vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                                          >> 0x20U)));
        __Vtemp_h8d8d0578__0[2U] = (((IData)(vlSelf->__VdfgTmp_h48ddf070__0) 
                                     >> 6U) | ((IData)(
                                                       (vlSelf->__VdfgTmp_h48ddf070__0 
                                                        >> 0x20U)) 
                                               << 0x1aU));
        __Vtemp_h8d8d0578__0[3U] = (((IData)(vlSelf->__VdfgTmp_hc0b56419__0) 
                                     << 0x14U) | ((IData)(
                                                          (vlSelf->__VdfgTmp_h48ddf070__0 
                                                           >> 0x20U)) 
                                                  >> 6U));
        __Vtemp_h8d8d0578__0[4U] = (((IData)(vlSelf->__VdfgTmp_hc0b56419__0) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelf->__VdfgTmp_hc0b56419__0 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h8d8d0578__0[5U] = (((IData)(vlSelf->__VdfgTmp_hdc1648b7__0) 
                                     << 0xeU) | ((IData)(
                                                         (vlSelf->__VdfgTmp_hc0b56419__0 
                                                          >> 0x20U)) 
                                                 >> 0xcU));
        __Vtemp_h8d8d0578__0[6U] = (((IData)(vlSelf->__VdfgTmp_hdc1648b7__0) 
                                     >> 0x12U) | ((IData)(
                                                          (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                           >> 0x20U)) 
                                                  << 0xeU));
        __Vtemp_h8d8d0578__0[7U] = ((IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x20U)) 
                                    >> 0x12U);
        bufp->chgWData(oldp+644,(__Vtemp_h8d8d0578__0),232);
        bufp->chgQData(oldp+652,(vlSelf->__VdfgTmp_hc282db87__0),58);
        bufp->chgQData(oldp+654,(vlSelf->__VdfgTmp_h3585ffac__0),58);
        bufp->chgBit(oldp+656,((1U & (IData)(vlSelf->__VdfgTmp_h2dfc7f3c__0))));
        bufp->chgBit(oldp+657,((1U & (IData)(vlSelf->__VdfgTmp_h48ddf070__0))));
        bufp->chgBit(oldp+658,((1U & (IData)(vlSelf->__VdfgTmp_hc0b56419__0))));
        bufp->chgBit(oldp+659,((1U & (IData)(vlSelf->__VdfgTmp_hdc1648b7__0))));
        bufp->chgBit(oldp+660,((1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                      ^ (IData)(vlSelf->__VdfgTmp_hdc1648b7__0)))));
        bufp->chgBit(oldp+661,((1U & (((~ (IData)(vlSelf->__VdfgTmp_hdc1648b7__0)) 
                                       ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                      & (IData)(vlSelf->__VdfgTmp_hdc1648b7__0)))));
        bufp->chgBit(oldp+662,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout));
        bufp->chgBit(oldp+663,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 1U)))));
        bufp->chgBit(oldp+664,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 1U)))));
        bufp->chgBit(oldp+665,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 1U)))));
        bufp->chgBit(oldp+666,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 1U)))));
        bufp->chgBit(oldp+667,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout))));
        bufp->chgBit(oldp+668,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 1U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+669,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout));
        bufp->chgBit(oldp+670,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+672,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+673,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+674,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout));
        bufp->chgBit(oldp+675,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout))));
        bufp->chgBit(oldp+676,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0xaU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+677,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout));
        bufp->chgBit(oldp+678,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+679,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+680,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+681,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+682,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout))));
        bufp->chgBit(oldp+683,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0xbU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+684,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout));
        bufp->chgBit(oldp+685,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+686,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+687,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+688,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+689,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout))));
        bufp->chgBit(oldp+690,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0xcU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+691,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout));
        bufp->chgBit(oldp+692,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+693,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+694,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+695,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+696,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout))));
        bufp->chgBit(oldp+697,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0xdU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+698,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout));
        bufp->chgBit(oldp+699,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+700,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+701,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+702,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+703,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout))));
        bufp->chgBit(oldp+704,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0xeU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+705,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout));
        bufp->chgBit(oldp+706,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+708,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+709,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+710,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout))));
        bufp->chgBit(oldp+711,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0xfU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+712,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout));
        bufp->chgBit(oldp+713,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+714,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+715,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+716,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+717,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout))));
        bufp->chgBit(oldp+718,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x10U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+719,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout));
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+721,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+722,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+723,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+724,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout))));
        bufp->chgBit(oldp+725,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x11U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+726,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout));
        bufp->chgBit(oldp+727,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+728,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+730,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+731,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout))));
        bufp->chgBit(oldp+732,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x12U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+733,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout));
        bufp->chgBit(oldp+734,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+738,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout))));
        bufp->chgBit(oldp+739,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x13U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+740,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout));
        bufp->chgBit(oldp+741,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 2U)))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 2U)))));
        bufp->chgBit(oldp+743,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 2U)))));
        bufp->chgBit(oldp+744,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 2U)))));
        bufp->chgBit(oldp+745,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout))));
        bufp->chgBit(oldp+746,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 2U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+747,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+752,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout))));
        bufp->chgBit(oldp+753,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x14U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+754,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+759,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout))));
        bufp->chgBit(oldp+760,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x15U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+761,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+763,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+764,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+766,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout))));
        bufp->chgBit(oldp+767,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x16U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+768,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout));
        bufp->chgBit(oldp+769,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+773,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout))));
        bufp->chgBit(oldp+774,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x17U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+775,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout));
        bufp->chgBit(oldp+776,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+779,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+780,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout))));
        bufp->chgBit(oldp+781,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x18U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+782,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout));
        bufp->chgBit(oldp+783,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+784,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+787,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout))));
        bufp->chgBit(oldp+788,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x19U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+789,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+793,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+794,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout))));
        bufp->chgBit(oldp+795,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x1aU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+796,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout));
        bufp->chgBit(oldp+797,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+798,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+799,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+800,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+801,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout))));
        bufp->chgBit(oldp+802,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x1bU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+803,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout));
        bufp->chgBit(oldp+804,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+808,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout))));
        bufp->chgBit(oldp+809,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x1cU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+810,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+815,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout))));
        bufp->chgBit(oldp+816,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x1dU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+817,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout));
        bufp->chgBit(oldp+818,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 3U)))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 3U)))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 3U)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 3U)))));
        bufp->chgBit(oldp+822,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout))));
        bufp->chgBit(oldp+823,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 3U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+824,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+828,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+829,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout))));
        bufp->chgBit(oldp+830,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x1eU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+831,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+834,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+836,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout))));
        bufp->chgBit(oldp+837,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x1fU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+838,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout));
        bufp->chgBit(oldp+839,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+840,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+842,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+843,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout))));
        bufp->chgBit(oldp+844,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x20U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+845,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+848,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+849,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+850,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout))));
        bufp->chgBit(oldp+851,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x21U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+852,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout));
        bufp->chgBit(oldp+853,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+854,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+855,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+857,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout))));
        bufp->chgBit(oldp+858,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x22U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+859,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout));
        bufp->chgBit(oldp+860,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+862,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+863,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+864,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout))));
        bufp->chgBit(oldp+865,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x23U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+866,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+868,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+869,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+870,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+871,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout))));
        bufp->chgBit(oldp+872,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x24U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+873,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout));
        bufp->chgBit(oldp+874,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+875,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+878,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout))));
        bufp->chgBit(oldp+879,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x25U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+880,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+883,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+884,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+885,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout))));
        bufp->chgBit(oldp+886,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x26U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+887,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout));
        bufp->chgBit(oldp+888,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+889,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+892,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout))));
        bufp->chgBit(oldp+893,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x27U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+894,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout));
        bufp->chgBit(oldp+895,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 4U)))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 4U)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 4U)))));
        bufp->chgBit(oldp+898,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 4U)))));
        bufp->chgBit(oldp+899,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout))));
        bufp->chgBit(oldp+900,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 4U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+901,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+903,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+904,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+906,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout))));
        bufp->chgBit(oldp+907,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x28U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+908,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout));
        bufp->chgBit(oldp+909,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+910,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+913,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout))));
        bufp->chgBit(oldp+914,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x29U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+915,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout));
        bufp->chgBit(oldp+916,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+917,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+918,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+919,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+920,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout))));
        bufp->chgBit(oldp+921,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x2aU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+922,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout));
        bufp->chgBit(oldp+923,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+924,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+925,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+927,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout))));
        bufp->chgBit(oldp+928,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x2bU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+929,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout));
        bufp->chgBit(oldp+930,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+931,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+932,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+933,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+934,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout))));
        bufp->chgBit(oldp+935,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x2cU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+936,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+938,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+939,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+940,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+941,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout))));
        bufp->chgBit(oldp+942,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x2dU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+943,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout));
        bufp->chgBit(oldp+944,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+945,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+946,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+947,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+948,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout))));
        bufp->chgBit(oldp+949,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x2eU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+950,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout));
        bufp->chgBit(oldp+951,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+952,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+953,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+954,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+955,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout))));
        bufp->chgBit(oldp+956,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x2fU))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+957,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout));
        bufp->chgBit(oldp+958,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+959,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+962,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout))));
        bufp->chgBit(oldp+963,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x30U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+964,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+968,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+969,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout))));
        bufp->chgBit(oldp+970,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x31U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+971,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout));
        bufp->chgBit(oldp+972,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 5U)))));
        bufp->chgBit(oldp+973,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 5U)))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 5U)))));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 5U)))));
        bufp->chgBit(oldp+976,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout))));
        bufp->chgBit(oldp+977,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 5U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+978,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+982,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+983,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout))));
        bufp->chgBit(oldp+984,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x32U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+985,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+987,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+988,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+990,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout))));
        bufp->chgBit(oldp+991,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x33U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+992,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout));
        bufp->chgBit(oldp+993,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+994,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+995,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+996,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+997,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout))));
        bufp->chgBit(oldp+998,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                      | (((~ (IData)(
                                                     (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                      >> 0x34U))) 
                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+999,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout));
        bufp->chgBit(oldp+1000,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1001,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1002,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1003,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1004,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout))));
        bufp->chgBit(oldp+1005,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 0x35U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1006,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout));
        bufp->chgBit(oldp+1007,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1008,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1010,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1011,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout))));
        bufp->chgBit(oldp+1012,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 0x36U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1013,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1015,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1016,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1017,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1018,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout))));
        bufp->chgBit(oldp+1019,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 0x37U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1020,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                        & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                                   >> 0x37U))) 
                                       | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1021,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 6U)))));
        bufp->chgBit(oldp+1022,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 6U)))));
        bufp->chgBit(oldp+1023,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 6U)))));
        bufp->chgBit(oldp+1024,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 6U)))));
        bufp->chgBit(oldp+1025,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout))));
        bufp->chgBit(oldp+1026,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 6U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1027,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout));
        bufp->chgBit(oldp+1028,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 7U)))));
        bufp->chgBit(oldp+1029,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 7U)))));
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 7U)))));
        bufp->chgBit(oldp+1031,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 7U)))));
        bufp->chgBit(oldp+1032,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout))));
        bufp->chgBit(oldp+1033,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 7U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1034,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout));
        bufp->chgBit(oldp+1035,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 8U)))));
        bufp->chgBit(oldp+1036,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 8U)))));
        bufp->chgBit(oldp+1037,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 8U)))));
        bufp->chgBit(oldp+1038,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 8U)))));
        bufp->chgBit(oldp+1039,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout))));
        bufp->chgBit(oldp+1040,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 8U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1041,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                               >> 9U)))));
        bufp->chgBit(oldp+1043,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                               >> 9U)))));
        bufp->chgBit(oldp+1044,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                               >> 9U)))));
        bufp->chgBit(oldp+1045,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                               >> 9U)))));
        bufp->chgBit(oldp+1046,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout))));
        bufp->chgBit(oldp+1047,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                       | (((~ (IData)(
                                                      (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                       >> 9U))) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 9U)))))));
        __Vtemp_hf3a8609d__0[0U] = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7bfe0064__0);
        __Vtemp_hf3a8609d__0[1U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h78148b8c__0) 
                                     << 0x18U) | (IData)(
                                                         (vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7bfe0064__0 
                                                          >> 0x20U)));
        __Vtemp_hf3a8609d__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h78148b8c__0) 
                                     >> 8U) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h78148b8c__0 
                                                        >> 0x20U)) 
                                               << 0x18U));
        __Vtemp_hf3a8609d__0[3U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h753a4d99__0) 
                                     << 0x10U) | ((IData)(
                                                          (vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h78148b8c__0 
                                                           >> 0x20U)) 
                                                  >> 8U));
        __Vtemp_hf3a8609d__0[4U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h753a4d99__0) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h753a4d99__0 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hf3a8609d__0[5U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7a0a13b6__0) 
                                     << 8U) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h753a4d99__0 
                                                        >> 0x20U)) 
                                               >> 0x10U));
        __Vtemp_hf3a8609d__0[6U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7a0a13b6__0) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSelf->PvuTop__DOT__dotproduct__DOT____VdfgTmp_h7a0a13b6__0 
                                                           >> 0x20U)) 
                                                  << 8U));
        bufp->chgWData(oldp+1048,(__Vtemp_hf3a8609d__0),224);
        bufp->chgQData(oldp+1055,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),59);
        bufp->chgQData(oldp+1057,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),59);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2bU] 
                     | vlSelf->__Vm_traceActivity[0x5aU]))) {
        bufp->chgWData(oldp+1059,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),90);
        bufp->chgWData(oldp+1062,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),90);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2cU] 
                     | vlSelf->__Vm_traceActivity[0x5bU]))) {
        bufp->chgWData(oldp+1065,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),90);
        bufp->chgWData(oldp+1068,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),90);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2dU] 
                     | vlSelf->__Vm_traceActivity[0x5cU]))) {
        bufp->chgWData(oldp+1071,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),90);
        bufp->chgWData(oldp+1074,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),90);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2eU] 
                     | vlSelf->__Vm_traceActivity[0x5dU]))) {
        bufp->chgCData(oldp+1077,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        bufp->chgWData(oldp+1078,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2fU] 
                     | vlSelf->__Vm_traceActivity[0x5eU]))) {
        bufp->chgWData(oldp+1090,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
        bufp->chgWData(oldp+1093,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),90);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x30U] 
                     | vlSelf->__Vm_traceActivity[0x5fU]))) {
        bufp->chgWData(oldp+1096,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
        bufp->chgCData(oldp+1099,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
        bufp->chgWData(oldp+1100,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),90);
        bufp->chgIData(oldp+1103,(((0xffffffeU & ((IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                           >> 0x1cU)) 
                                                  << 1U)) 
                                   | (0U != (0x7ffffffU 
                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))),28);
        bufp->chgQData(oldp+1104,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted),55);
        bufp->chgQData(oldp+1106,((0x7ffffffffffffffULL 
                                   & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                       ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                          >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
        bufp->chgQData(oldp+1108,((0x7ffffffffffffffULL 
                                   & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                       ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                          << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    }
    bufp->chgBit(oldp+1110,(vlSelf->clock));
    bufp->chgBit(oldp+1111,(vlSelf->reset));
    bufp->chgIData(oldp+1112,(vlSelf->io_posit_i1_0),32);
    bufp->chgIData(oldp+1113,(vlSelf->io_posit_i1_1),32);
    bufp->chgIData(oldp+1114,(vlSelf->io_posit_i1_2),32);
    bufp->chgIData(oldp+1115,(vlSelf->io_posit_i1_3),32);
    bufp->chgIData(oldp+1116,(vlSelf->io_posit_i2_0),32);
    bufp->chgIData(oldp+1117,(vlSelf->io_posit_i2_1),32);
    bufp->chgIData(oldp+1118,(vlSelf->io_posit_i2_2),32);
    bufp->chgIData(oldp+1119,(vlSelf->io_posit_i2_3),32);
    bufp->chgCData(oldp+1120,(vlSelf->io_op),3);
    bufp->chgIData(oldp+1121,(vlSelf->io_posit_o_0),32);
    bufp->chgIData(oldp+1122,(vlSelf->io_posit_o_1),32);
    bufp->chgIData(oldp+1123,(vlSelf->io_posit_o_2),32);
    bufp->chgIData(oldp+1124,(vlSelf->io_posit_o_3),32);
    bufp->chgIData(oldp+1125,(vlSelf->io_posit_dot_o),32);
    bufp->chgCData(oldp+1126,(((8U & (vlSelf->io_posit_i1_3 
                                      >> 0x1cU)) | 
                               ((4U & (vlSelf->io_posit_i1_2 
                                       >> 0x1dU)) | 
                                ((2U & (vlSelf->io_posit_i1_1 
                                        >> 0x1eU)) 
                                 | (vlSelf->io_posit_i1_0 
                                    >> 0x1fU))))),4);
    bufp->chgCData(oldp+1127,(((8U & (vlSelf->io_posit_i2_3 
                                      >> 0x1cU)) | 
                               ((4U & (vlSelf->io_posit_i2_2 
                                       >> 0x1dU)) | 
                                ((2U & (vlSelf->io_posit_i2_1 
                                        >> 0x1eU)) 
                                 | (vlSelf->io_posit_i2_0 
                                    >> 0x1fU))))),4);
    bufp->chgIData(oldp+1128,((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
                                << 0x18U) | (((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1) 
                                                 << 8U) 
                                                | (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1))))),32);
    __Vtemp_h8514ab4c__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39412272__0)) 
                                         << 0x1eU) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h38f0a4f9__0))));
    __Vtemp_h8514ab4c__0[1U] = ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39ddc1a5__0 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39412272__0)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h38f0a4f9__0))) 
                                                      >> 0x20U)));
    __Vtemp_h8514ab4c__0[2U] = ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h3a630f85__0 
                                 << 0x1aU) | (vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39ddc1a5__0 
                                              >> 4U));
    __Vtemp_h8514ab4c__0[3U] = (vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h3a630f85__0 
                                >> 6U);
    bufp->chgWData(oldp+1129,(__Vtemp_h8514ab4c__0),120);
    __Vtemp_hde6aa058__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e3057ea__0)) 
                                         << 0x1eU) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h09a65a41__0))));
    __Vtemp_hde6aa058__0[1U] = ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e8cac5d__0 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e3057ea__0)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h09a65a41__0))) 
                                                      >> 0x20U)));
    __Vtemp_hde6aa058__0[2U] = ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0b529d0d__0 
                                 << 0x1aU) | (vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e8cac5d__0 
                                              >> 4U));
    __Vtemp_hde6aa058__0[3U] = (vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0b529d0d__0 
                                >> 6U);
    bufp->chgWData(oldp+1133,(__Vtemp_hde6aa058__0),120);
    bufp->chgCData(oldp+1137,(((8U & ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                        ? (vlSelf->io_posit_i1_3 
                                           >> 0x1fU)
                                        : (vlSelf->io_posit_i2_3 
                                           >> 0x1fU)) 
                                      << 3U)) | ((4U 
                                                  & ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2) 
                                                       | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                                       ? 
                                                      (vlSelf->io_posit_i1_2 
                                                       >> 0x1fU)
                                                       : 
                                                      (vlSelf->io_posit_i2_2 
                                                       >> 0x1fU)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1) 
                                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                                          ? 
                                                         (vlSelf->io_posit_i1_1 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelf->io_posit_i2_1 
                                                          >> 0x1fU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign) 
                                                           | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                           ? 
                                                          (vlSelf->io_posit_i1_0 
                                                           >> 0x1fU)
                                                           : 
                                                          (vlSelf->io_posit_i2_0 
                                                           >> 0x1fU))))))),4);
    bufp->chgIData(oldp+1138,(((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
                                 + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1) 
                                                  + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1) 
                                                     + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1) 
                                                      + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0))))))),32);
    __Vtemp_h620199ea__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                           ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                           : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                         << 0x1eU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                            ? vlSelf->__VdfgTmp_heaab0c13__0
                                                            : vlSelf->__VdfgTmp_hd0a58f7c__0)))));
    __Vtemp_h620199ea__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                   ? vlSelf->__VdfgTmp_h7f330068__0
                                   : vlSelf->__VdfgTmp_h3061ec22__0) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                                          ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                                          : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                                           ? vlSelf->__VdfgTmp_heaab0c13__0
                                                                           : vlSelf->__VdfgTmp_hd0a58f7c__0)))) 
                                                      >> 0x20U)));
    __Vtemp_h620199ea__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                   ? vlSelf->__VdfgTmp_hf843bb44__0
                                   : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                                ? vlSelf->__VdfgTmp_h7f330068__0
                                                : vlSelf->__VdfgTmp_h3061ec22__0) 
                                              >> 4U));
    __Vtemp_h620199ea__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                  ? vlSelf->__VdfgTmp_hf843bb44__0
                                  : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                >> 6U);
    bufp->chgWData(oldp+1139,(__Vtemp_h620199ea__0),120);
    bufp->chgCData(oldp+1143,((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
                                << 3U) | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0) 
                                            << 1U) 
                                           | (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0))))),4);
    bufp->chgCData(oldp+1144,(((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
                                 & (0U != (0x3fffffffU 
                                           & vlSelf->PvuTop__DOT__add__DOT__sum_3))) 
                                << 3U) | ((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0) 
                                            & (0U != 
                                               (0x3fffffffU 
                                                & vlSelf->PvuTop__DOT__add__DOT__sum_2))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0) 
                                             & (0U 
                                                != 
                                                (0x3fffffffU 
                                                 & vlSelf->PvuTop__DOT__add__DOT__sum_1))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0) 
                                              & (0U 
                                                 != 
                                                 (0x3fffffffU 
                                                  & vlSelf->PvuTop__DOT__add__DOT__sum))))))),4);
    __Vtemp_h24f352fb__0[0U] = vlSelf->io_posit_i1_0;
    __Vtemp_h24f352fb__0[1U] = vlSelf->io_posit_i1_1;
    __Vtemp_h24f352fb__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i1_2))));
    __Vtemp_h24f352fb__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i1_2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+1145,(__Vtemp_h24f352fb__0),128);
    bufp->chgIData(oldp+1149,(((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                  ? (IData)(vlSelf->__VdfgTmp_h2bfbff40__0)
                                  : 0U) << 0x1aU) | 
                               ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? (3U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                            >> 0x1dU))
                                   : 0U) << 0x18U) 
                                | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                      ? (IData)(vlSelf->__VdfgTmp_h92dbb766__0)
                                      : 0U) << 0x12U) 
                                   | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                         ? (3U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                  >> 0x1dU))
                                         : 0U) << 0x10U) 
                                      | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                            ? (IData)(vlSelf->__VdfgTmp_he1608796__0)
                                            : 0U) << 0xaU) 
                                         | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                     >> 0x1dU))
                                               : 0U) 
                                             << 8U) 
                                            | (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb74fe78f__0)))))))),32);
    __Vtemp_hce8b1a10__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_a)))));
    __Vtemp_hce8b1a10__0[1U] = ((0xff000000U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
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
                                               | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_a)))) 
                                           >> 0x20U)));
    __Vtemp_hce8b1a10__0[2U] = ((0xfff00000U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                    << 0x13U) | (0x7ffffU 
                                                 & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hce8b1a10__0[3U] = (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                 << 0xfU) | (0x7fffU 
                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 0xeU)));
    bufp->chgWData(oldp+1150,(__Vtemp_hce8b1a10__0),112);
    bufp->chgIData(oldp+1154,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+1155,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+1156,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+1157,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+1158,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1159,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1160,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1161,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1162,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1163,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1164,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1165,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+1166,(__Vtemp_h95b92b9c__0),128);
    bufp->chgIData(oldp+1170,(((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                  ? (IData)(vlSelf->__VdfgTmp_hf9a58d2e__0)
                                  : 0U) << 0x1aU) | 
                               ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                            >> 0x1dU))
                                   : 0U) << 0x18U) 
                                | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                      ? (IData)(vlSelf->__VdfgTmp_h1c4c2383__0)
                                      : 0U) << 0x12U) 
                                   | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                         ? (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                  >> 0x1dU))
                                         : 0U) << 0x10U) 
                                      | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                            ? (IData)(vlSelf->__VdfgTmp_h591e574e__0)
                                            : 0U) << 0xaU) 
                                         | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                     >> 0x1dU))
                                               : 0U) 
                                             << 8U) 
                                            | (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h40c78a7d__0)))))))),32);
    __Vtemp_h0565bda0__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_b)))));
    __Vtemp_h0565bda0__0[1U] = ((0xff000000U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
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
                                               | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_b)))) 
                                           >> 0x20U)));
    __Vtemp_h0565bda0__0[2U] = ((0xfff00000U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                    << 0x13U) | (0x7ffffU 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_h0565bda0__0[3U] = (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                 << 0xfU) | (0x7fffU 
                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                >> 0xeU)));
    bufp->chgWData(oldp+1171,(__Vtemp_h0565bda0__0),112);
    bufp->chgBit(oldp+1175,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1176,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1177,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1178,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1179,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1180,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1181,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1182,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+1183,(((((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
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
    __Vtemp_h2ede73fc__0[1U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x18U) | (IData)(
                                                     (((QData)((IData)(
                                                                       (0x1fffffffU 
                                                                        & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                       << 0x1bU) 
                                                      >> 0x20U)));
    __Vtemp_h2ede73fc__0[2U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_hfd18a013__0[3U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_hfd18a013__0[4U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hed54d557__0[0U] = (IData)(((QData)((IData)(
                                                        (0x1fffffffU 
                                                         & (IData)(
                                                                   (0x1fffffffULL 
                                                                    & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                        + 
                                                                        (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                       >> 0x1cU)))))) 
                                        << 0x1bU));
    __Vtemp_hed54d557__0[1U] = __Vtemp_h2ede73fc__0[1U];
    __Vtemp_hed54d557__0[2U] = __Vtemp_h2ede73fc__0[2U];
    __Vtemp_hed54d557__0[3U] = __Vtemp_hfd18a013__0[3U];
    __Vtemp_hed54d557__0[4U] = __Vtemp_hfd18a013__0[4U];
    __Vtemp_hed54d557__0[5U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_hed54d557__0[6U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->chgWData(oldp+1184,(__Vtemp_hed54d557__0),224);
    __Vtemp_hf0d3f2ce__0[0U] = (IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN)
                                         ? 0ULL : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                                    ? 0ULL
                                                    : 
                                                   (0xffffffffffffffULL 
                                                    & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                       + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o)))));
    __Vtemp_hf0d3f2ce__0[1U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 << 0x18U) | (IData)(
                                                     (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN)
                                                        ? 0ULL
                                                        : 
                                                       ((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                      >> 0x20U)));
    __Vtemp_hf0d3f2ce__0[2U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 >> 8U) | ((IData)(
                                                   (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                                      ? 0ULL
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                       ? 0ULL
                                                       : 
                                                      (0xffffffffffffffULL 
                                                       & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                          + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_hf0d3f2ce__0[3U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 << 0x10U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                                         ? 0ULL
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_hf0d3f2ce__0[4U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 >> 0x10U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                                         ? 0ULL
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hf0d3f2ce__0[5U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 << 8U) | ((IData)(
                                                   (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                                      ? 0ULL
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                       ? 0ULL
                                                       : 
                                                      (0xffffffffffffffULL 
                                                       & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                          + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_hf0d3f2ce__0[6U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 >> 0x18U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                                         ? 0ULL
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->chgWData(oldp+1191,(__Vtemp_hf0d3f2ce__0),224);
    bufp->chgIData(oldp+1198,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                << 0x18U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                                 << 8U) 
                                                | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))))),32);
    bufp->chgSData(oldp+1199,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->chgCData(oldp+1200,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o),8);
    bufp->chgCData(oldp+1201,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->chgCData(oldp+1202,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->chgSData(oldp+1203,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->chgCData(oldp+1204,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o),8);
    bufp->chgCData(oldp+1205,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->chgCData(oldp+1206,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->chgIData(oldp+1207,((((IData)(vlSelf->__VdfgTmp_h7e5815f2__0) 
                                << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h27ab1e15__0) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->__VdfgTmp_haff49a00__0) 
                                                 << 8U) 
                                                | (IData)(vlSelf->__VdfgTmp_he0410172__0))))),32);
    __Vtemp_h30f7997b__0[0U] = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                         ? 0ULL : (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
    __Vtemp_h30f7997b__0[1U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x18U) | (IData)(
                                                     (((0x100U 
                                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                                        ? 0ULL
                                                        : 
                                                       (0xffffffffffffffULL 
                                                        & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                           + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                      >> 0x20U)));
    __Vtemp_h30f7997b__0[2U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h30f7997b__0[3U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h30f7997b__0[4U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h30f7997b__0[5U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h30f7997b__0[6U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x18U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->chgWData(oldp+1208,(__Vtemp_h30f7997b__0),224);
    bufp->chgSData(oldp+1215,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum),9);
    bufp->chgSData(oldp+1216,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1),9);
    bufp->chgSData(oldp+1217,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2),9);
    bufp->chgSData(oldp+1218,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3),9);
    bufp->chgCData(oldp+1219,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign),4);
    bufp->chgIData(oldp+1220,(((5U == (IData)(vlSelf->io_op))
                                ? 0U : (((IData)(vlSelf->__VdfgTmp_hfa1a2186__0) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->__VdfgTmp_hf3b4c711__0) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__VdfgTmp_hc4e682b5__0) 
                                               << 8U) 
                                              | (IData)(vlSelf->__VdfgTmp_h5c9bd195__0)))))),32);
    __Vtemp_h1a1efef7__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h8dc5d7a5__0)) 
                                         << 0x1cU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h01fc6563__0))));
    __Vtemp_h1a1efef7__0[1U] = ((vlSelf->__VdfgTmp_h703a7ecb__0 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->__VdfgTmp_h8dc5d7a5__0)) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(vlSelf->__VdfgTmp_h01fc6563__0))) 
                                                      >> 0x20U)));
    __Vtemp_h1a1efef7__0[2U] = ((vlSelf->__VdfgTmp_hfdb1b8d0__0 
                                 << 0x14U) | (vlSelf->__VdfgTmp_h703a7ecb__0 
                                              >> 8U));
    __Vtemp_h1a1efef7__0[3U] = (vlSelf->__VdfgTmp_hfdb1b8d0__0 
                                >> 0xcU);
    bufp->chgWData(oldp+1221,(__Vtemp_h1a1efef7__0),112);
    __Vtemp_h7d2a8d0a__0[0U] = ((0x8000000U & vlSelf->__VdfgTmp_h01fc6563__0)
                                 ? ((1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                 : 0U);
    __Vtemp_h7d2a8d0a__0[1U] = ((0x8000000U & vlSelf->__VdfgTmp_h8dc5d7a5__0)
                                 ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                 : 0U);
    __Vtemp_h7d2a8d0a__0[2U] = (IData)((((QData)((IData)(
                                                         ((0x8000000U 
                                                           & vlSelf->__VdfgTmp_hfdb1b8d0__0)
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
                                                            & vlSelf->__VdfgTmp_h703a7ecb__0)
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
    __Vtemp_h7d2a8d0a__0[3U] = (IData)(((((QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->__VdfgTmp_hfdb1b8d0__0)
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
                                                             & vlSelf->__VdfgTmp_h703a7ecb__0)
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
    bufp->chgWData(oldp+1225,(__Vtemp_h7d2a8d0a__0),128);
    bufp->chgCData(oldp+1229,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->chgCData(oldp+1230,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->chgCData(oldp+1231,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->chgCData(oldp+1232,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->chgBit(oldp+1233,(((~ (IData)(vlSelf->PvuTop__DOT___GEN_7)) 
                             & ((5U == (IData)(vlSelf->io_op)) 
                                & (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result 
                                           >> 0x3aU))))));
    bufp->chgCData(oldp+1234,(((5U == (IData)(vlSelf->io_op))
                                ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                : 0U)),8);
    bufp->chgIData(oldp+1235,(((5U == (IData)(vlSelf->io_op))
                                ? ((0xffffffeU & ((IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                           >> 0x1cU)) 
                                                  << 1U)) 
                                   | (0U != (0x7ffffffU 
                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                : 0U)),28);
    bufp->chgIData(oldp+1236,((((0U == ((5U == (IData)(vlSelf->io_op))
                                         ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                         : 0U)) & (0U 
                                                   == 
                                                   ((5U 
                                                     == (IData)(vlSelf->io_op))
                                                     ? 
                                                    ((0xffffffeU 
                                                      & ((IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (0U 
                                                        != 
                                                        (0x7ffffffU 
                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                                     : 0U)))
                                ? 0U : (((~ (IData)(vlSelf->PvuTop__DOT___GEN_7)) 
                                         & ((5U == (IData)(vlSelf->io_op)) 
                                            & (IData)(
                                                      (vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result 
                                                       >> 0x3aU))))
                                         ? (0x80000000U 
                                            | (0x7fffffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T))))
                                         : vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T))),32);
    if ((1U == (IData)(vlSelf->io_op))) {
        __Vtemp_he0602d0b__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                               ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                               : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                                ? vlSelf->__VdfgTmp_heaab0c13__0
                                                                : vlSelf->__VdfgTmp_hd0a58f7c__0)))));
        __Vtemp_he0602d0b__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                       ? vlSelf->__VdfgTmp_h7f330068__0
                                       : vlSelf->__VdfgTmp_h3061ec22__0) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                                              ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                                              : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                                               ? vlSelf->__VdfgTmp_heaab0c13__0
                                                                               : vlSelf->__VdfgTmp_hd0a58f7c__0)))) 
                                                          >> 0x20U)));
        __Vtemp_he0602d0b__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                       ? vlSelf->__VdfgTmp_hf843bb44__0
                                       : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                                    ? vlSelf->__VdfgTmp_h7f330068__0
                                                    : vlSelf->__VdfgTmp_h3061ec22__0) 
                                                  >> 4U));
        __Vtemp_he0602d0b__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                      ? vlSelf->__VdfgTmp_hf843bb44__0
                                      : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                    >> 6U);
    } else {
        __Vtemp_he0602d0b__0[0U] = 0U;
        __Vtemp_he0602d0b__0[1U] = 0U;
        __Vtemp_he0602d0b__0[2U] = 0U;
        __Vtemp_he0602d0b__0[3U] = 0U;
    }
    bufp->chgWData(oldp+1237,(__Vtemp_he0602d0b__0),120);
    bufp->chgIData(oldp+1241,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((0U == (0x1fU 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((((IData)(1U) 
                                                                    - 
                                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   - (IData)(1U)) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (((IData)(1U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((- 
                                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (- vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                  : 0U) << 0x18U) | 
                               ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((0U == (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                       ? ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U)) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U))))
                                       : ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (- vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                   : 0U) << 0x10U) 
                                | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                      ? ((0U == (0x1fU 
                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                          ? ((0xe0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((((IData)(1U) 
                                                                  - 
                                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 - (IData)(1U)) 
                                                                >> 4U)))) 
                                                 << 5U)) 
                                             | (0x1fU 
                                                & (((IData)(1U) 
                                                    - 
                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   - (IData)(1U))))
                                          : ((0xe0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((- 
                                                                 vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                >> 4U)))) 
                                                 << 5U)) 
                                             | (0x1fU 
                                                & (- 
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                      : 0U) << 8U) 
                                   | ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                           ? ((0xe0U 
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
                                           : ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (- 
                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
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
    bufp->chgWData(oldp+1242,(__Vtemp_hdf4c90c7__0),112);
    bufp->chgBit(oldp+1246,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1247,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1248,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1249,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1250,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1251,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1252,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1253,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h2ede73fc__1[1U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x18U) | (IData)(
                                                     (((QData)((IData)(
                                                                       (0x1fffffffU 
                                                                        & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                       << 0x1bU) 
                                                      >> 0x20U)));
    __Vtemp_h2ede73fc__1[2U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_he399c376__0[3U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_he399c376__0[4U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hec1644da__0[5U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_hec1644da__0[6U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 8U));
    if (vlSelf->__VdfgTmp_hbc178730__0) {
        __Vtemp_hcc9c6554__0[0U] = 0U;
        __Vtemp_hcc9c6554__0[1U] = 0U;
        __Vtemp_hcc9c6554__0[2U] = 0U;
        __Vtemp_hcc9c6554__0[3U] = 0U;
        __Vtemp_hcc9c6554__0[4U] = 0U;
        __Vtemp_hcc9c6554__0[5U] = 0U;
        __Vtemp_hcc9c6554__0[6U] = 0U;
    } else {
        __Vtemp_hcc9c6554__0[0U] = (IData)(((QData)((IData)(
                                                            (0x1fffffffU 
                                                             & (IData)(
                                                                       (0x1fffffffULL 
                                                                        & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                            + 
                                                                            (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                           >> 0x1cU)))))) 
                                            << 0x1bU));
        __Vtemp_hcc9c6554__0[1U] = __Vtemp_h2ede73fc__1[1U];
        __Vtemp_hcc9c6554__0[2U] = __Vtemp_h2ede73fc__1[2U];
        __Vtemp_hcc9c6554__0[3U] = __Vtemp_he399c376__0[3U];
        __Vtemp_hcc9c6554__0[4U] = __Vtemp_he399c376__0[4U];
        __Vtemp_hcc9c6554__0[5U] = __Vtemp_hec1644da__0[5U];
        __Vtemp_hcc9c6554__0[6U] = __Vtemp_hec1644da__0[6U];
    }
    bufp->chgWData(oldp+1254,(__Vtemp_hcc9c6554__0),224);
    bufp->chgQData(oldp+1261,((((QData)((IData)(((1U 
                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                   ? 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(1U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U)) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (((IData)(1U) 
                                                          - 
                                                          vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                         - (IData)(1U))))
                                                   : 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- 
                                                                       vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (- 
                                                         vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                  : 0U))) 
                                << 0x1bU) | (QData)((IData)(
                                                            ((((1U 
                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))
                                                                ? 
                                                               ((0U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                 ? 
                                                                ((0x1c0U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (((IData)(1U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U))))
                                                                 : 
                                                                ((0x1c0U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 5U)))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (- 
                                                                       vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                : 0U) 
                                                              << 0x12U) 
                                                             | ((((1U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))
                                                                   ? 
                                                                  ((0U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                    ? 
                                                                   ((0x1c0U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                        << 6U)) 
                                                                    | (0x3fU 
                                                                       & (((IData)(1U) 
                                                                           - 
                                                                           vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                          - (IData)(1U))))
                                                                    : 
                                                                   ((0x1c0U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 5U)))) 
                                                                        << 6U)) 
                                                                    | (0x3fU 
                                                                       & (- 
                                                                          vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                   : 0U) 
                                                                 << 9U) 
                                                                | ((1U 
                                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                    ? 
                                                                   ((0U 
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
    bufp->chgWData(oldp+1263,(__Vtemp_h52e32d61__0),112);
    bufp->chgBit(oldp+1267,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1268,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgBit(oldp+1270,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1271,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgBit(oldp+1273,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1274,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgBit(oldp+1276,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1277,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgSData(oldp+1279,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                ? ((5U > (0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    ? ((0x1c0U & ((- (IData)(
                                                             (1U 
                                                              & ((((IData)(5U) 
                                                                   - 
                                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  - (IData)(1U)) 
                                                                 >> 5U)))) 
                                                  << 6U)) 
                                       | (0x3fU & (
                                                   ((IData)(5U) 
                                                    - 
                                                    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   - (IData)(1U))))
                                    : ((0x1c0U & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                   - (IData)(4U))) 
                                                                 >> 5U)))) 
                                                  << 6U)) 
                                       | (0x3fU & (- 
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    - (IData)(4U))))))
                                : 0U)),9);
    bufp->chgCData(oldp+1280,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                ? (IData)(vlSelf->__VdfgTmp_h858857fc__0)
                                : 0U)),6);
    bufp->chgBit(oldp+1281,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1282,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    if (vlSelf->__VdfgTmp_hc2b4f641__0) {
        __Vtemp_h57c76055__0[0U] = 0U;
        __Vtemp_h57c76055__0[1U] = 0U;
        __Vtemp_h57c76055__0[2U] = 0U;
        __Vtemp_h57c76055__0[3U] = 0U;
        __Vtemp_h57c76055__0[4U] = 0U;
        __Vtemp_h57c76055__0[5U] = 0U;
        __Vtemp_h57c76055__0[6U] = 0U;
    } else {
        __Vtemp_h57c76055__0[0U] = (IData)(((0x100U 
                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                             ? 0ULL
                                             : (0xffffffffffffffULL 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                   + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
        __Vtemp_h57c76055__0[1U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     << 0x18U) | (IData)(
                                                         (((0x100U 
                                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                                            ? 0ULL
                                                            : 
                                                           (0xffffffffffffffULL 
                                                            & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                               + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                          >> 0x20U)));
        __Vtemp_h57c76055__0[2U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 8U) | ((IData)(
                                                       (((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                        >> 0x20U)) 
                                               << 0x18U));
        __Vtemp_h57c76055__0[3U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     << 0x10U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  >> 8U));
        __Vtemp_h57c76055__0[4U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x10U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h57c76055__0[5U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     << 8U) | ((IData)(
                                                       (((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                        >> 0x20U)) 
                                               >> 0x10U));
        __Vtemp_h57c76055__0[6U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x18U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    }
    bufp->chgWData(oldp+1284,(__Vtemp_h57c76055__0),224);
    bufp->chgQData(oldp+1291,((((QData)((IData)(((1U 
                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? 
                                                 ((2U 
                                                   > 
                                                   (0x3fU 
                                                    & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                   ? 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(2U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U)) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (((IData)(2U) 
                                                          - 
                                                          vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                         - (IData)(1U))))
                                                   : 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- 
                                                                       (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        - (IData)(1U))) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (- 
                                                         (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                          - (IData)(1U))))))
                                                  : 0U))) 
                                << 0x1bU) | (QData)((IData)(
                                                            ((((1U 
                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))
                                                                ? 
                                                               ((2U 
                                                                 > 
                                                                 (0x3fU 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                 ? 
                                                                ((0x1c0U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(2U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (((IData)(2U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U))))
                                                                 : 
                                                                ((0x1c0U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U))) 
                                                                                >> 5U)))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (- 
                                                                       (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        - (IData)(1U))))))
                                                                : 0U) 
                                                              << 0x12U) 
                                                             | ((((1U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))
                                                                   ? 
                                                                  ((2U 
                                                                    > 
                                                                    (0x3fU 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                    ? 
                                                                   ((0x1c0U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(2U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                        << 6U)) 
                                                                    | (0x3fU 
                                                                       & (((IData)(2U) 
                                                                           - 
                                                                           vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                          - (IData)(1U))))
                                                                    : 
                                                                   ((0x1c0U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U))) 
                                                                                >> 5U)))) 
                                                                        << 6U)) 
                                                                    | (0x3fU 
                                                                       & (- 
                                                                          (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                           - (IData)(1U))))))
                                                                   : 0U) 
                                                                 << 9U) 
                                                                | ((1U 
                                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                    ? 
                                                                   ((2U 
                                                                     > 
                                                                     (0x3fU 
                                                                      & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(2U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U)))) 
                                                                         << 6U)) 
                                                                     | (0x3fU 
                                                                        & (((IData)(2U) 
                                                                            - 
                                                                            vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                           - (IData)(1U))))
                                                                     : 
                                                                    ((0x1c0U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U))) 
                                                                                >> 5U)))) 
                                                                         << 6U)) 
                                                                     | (0x3fU 
                                                                        & (- 
                                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                            - (IData)(1U))))))
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
    bufp->chgWData(oldp+1293,(__Vtemp_hf67a7711__0),112);
    bufp->chgQData(oldp+1297,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i),56);
    bufp->chgBit(oldp+1299,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1300,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgQData(oldp+1302,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->chgQData(oldp+1304,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i),56);
    bufp->chgBit(oldp+1306,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1307,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgQData(oldp+1309,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->chgQData(oldp+1311,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i),56);
    bufp->chgBit(oldp+1313,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1314,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgQData(oldp+1316,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->chgQData(oldp+1318,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i),56);
    bufp->chgBit(oldp+1320,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+1321,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgQData(oldp+1323,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),56);
    if (vlSelf->__VdfgTmp_h1f706c65__0) {
        __Vtemp_h2a34a34f__0[0U] = 0U;
        __Vtemp_h2a34a34f__0[1U] = 0U;
        __Vtemp_h2a34a34f__0[2U] = 0U;
        __Vtemp_h2a34a34f__0[3U] = 0U;
    } else {
        __Vtemp_h2a34a34f__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                               ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                               : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                                ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                                : vlSelf->__VdfgTmp_heaab0c13__0)))));
        __Vtemp_h2a34a34f__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                       ? vlSelf->__VdfgTmp_h3061ec22__0
                                       : vlSelf->__VdfgTmp_h7f330068__0) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                                              ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                                              : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                                               ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                                               : vlSelf->__VdfgTmp_heaab0c13__0)))) 
                                                          >> 0x20U)));
        __Vtemp_h2a34a34f__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                       ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                       : vlSelf->__VdfgTmp_hf843bb44__0) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                                    ? vlSelf->__VdfgTmp_h3061ec22__0
                                                    : vlSelf->__VdfgTmp_h7f330068__0) 
                                                  >> 4U));
        __Vtemp_h2a34a34f__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                      ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                      : vlSelf->__VdfgTmp_hf843bb44__0) 
                                    >> 6U);
    }
    bufp->chgWData(oldp+1325,(__Vtemp_h2a34a34f__0),120);
    bufp->chgIData(oldp+1329,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((0U == (0x1fU 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((((IData)(1U) 
                                                                    - 
                                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   - (IData)(1U)) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (((IData)(1U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((- 
                                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (- vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                  : 0U) << 0x18U) | 
                               ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((0U == (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                       ? ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U)) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U))))
                                       : ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (- vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                   : 0U) << 0x10U) 
                                | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                      ? ((0U == (0x1fU 
                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                          ? ((0xe0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((((IData)(1U) 
                                                                  - 
                                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 - (IData)(1U)) 
                                                                >> 4U)))) 
                                                 << 5U)) 
                                             | (0x1fU 
                                                & (((IData)(1U) 
                                                    - 
                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   - (IData)(1U))))
                                          : ((0xe0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((- 
                                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                >> 4U)))) 
                                                 << 5U)) 
                                             | (0x1fU 
                                                & (- 
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                      : 0U) << 8U) 
                                   | ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                           ? ((0xe0U 
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
                                           : ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (- 
                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
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
    bufp->chgWData(oldp+1330,(__Vtemp_hd280c543__0),112);
    bufp->chgBit(oldp+1334,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1335,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1336,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1337,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1338,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1339,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1340,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1341,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h1dafb016__0[0U] = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                         ? 0ULL : (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
    __Vtemp_h1dafb016__0[1U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x18U) | (IData)(
                                                     (((0x100U 
                                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum))
                                                        ? 0ULL
                                                        : 
                                                       (0xffffffffffffffULL 
                                                        & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                           + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                      >> 0x20U)));
    __Vtemp_h1dafb016__0[2U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h1dafb016__0[3U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h1dafb016__0[4U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h1dafb016__0[5U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h1dafb016__0[6U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x18U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__mul__DOT__multiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->chgWData(oldp+1342,(__Vtemp_h1dafb016__0),224);
    bufp->chgCData(oldp+1349,(((8U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                        & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)) 
                                       << 3U) ^ (8U 
                                                 & (vlSelf->io_posit_i1_3 
                                                    >> 0x1cU)))) 
                               | ((4U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                           & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)) 
                                          << 2U) ^ 
                                         (4U & (vlSelf->io_posit_i1_2 
                                                >> 0x1dU)))) 
                                  | ((2U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                              & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)) 
                                             << 1U) 
                                            ^ (2U & 
                                               (vlSelf->io_posit_i1_1 
                                                >> 0x1eU)))) 
                                     | (1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                               & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)) 
                                              ^ (vlSelf->io_posit_i1_0 
                                                 >> 0x1fU))))))),4);
    bufp->chgIData(oldp+1350,(((((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_3 
                                            >> 0x1eU)) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)))
                                  ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1)
                                  : ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1))) 
                                << 0x18U) | ((0xff0000U 
                                              & (((1U 
                                                   & ((~ 
                                                       (vlSelf->PvuTop__DOT__add__DOT__sum_2 
                                                        >> 0x1eU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)))
                                                   ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1))) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((1U 
                                                      & ((~ 
                                                          (vlSelf->PvuTop__DOT__add__DOT__sum_1 
                                                           >> 0x1eU)) 
                                                         | (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)))
                                                      ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & ((~ 
                                                           (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                            >> 0x1eU)) 
                                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)))
                                                       ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1)
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1)))))))),32);
    __Vtemp_h8ba2cfbb__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                           ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                           : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                         << 0x1eU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                            ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                            : vlSelf->__VdfgTmp_heaab0c13__0)))));
    __Vtemp_h8ba2cfbb__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                   ? vlSelf->__VdfgTmp_h3061ec22__0
                                   : vlSelf->__VdfgTmp_h7f330068__0) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)
                                                                          ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                                          : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)
                                                                           ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                                           : vlSelf->__VdfgTmp_heaab0c13__0)))) 
                                                      >> 0x20U)));
    __Vtemp_h8ba2cfbb__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                   ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                   : vlSelf->__VdfgTmp_hf843bb44__0) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)
                                                ? vlSelf->__VdfgTmp_h3061ec22__0
                                                : vlSelf->__VdfgTmp_h7f330068__0) 
                                              >> 4U));
    __Vtemp_h8ba2cfbb__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)
                                  ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                  : vlSelf->__VdfgTmp_hf843bb44__0) 
                                >> 6U);
    bufp->chgWData(oldp+1351,(__Vtemp_h8ba2cfbb__0),120);
    bufp->chgCData(oldp+1355,((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
                                << 3U) | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0) 
                                            << 1U) 
                                           | (IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0))))),4);
    bufp->chgCData(oldp+1356,(((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
                                 & (0U != (0x3fffffffU 
                                           & vlSelf->PvuTop__DOT__add__DOT__sum_3))) 
                                << 3U) | ((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0) 
                                            & (0U != 
                                               (0x3fffffffU 
                                                & vlSelf->PvuTop__DOT__add__DOT__sum_2))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0) 
                                             & (0U 
                                                != 
                                                (0x3fffffffU 
                                                 & vlSelf->PvuTop__DOT__add__DOT__sum_1))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0) 
                                              & (0U 
                                                 != 
                                                 (0x3fffffffU 
                                                  & vlSelf->PvuTop__DOT__add__DOT__sum))))))),4);
    bufp->chgIData(oldp+1357,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_a),28);
    bufp->chgQData(oldp+1358,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_a)) 
                               << 0x1cU)),56);
    bufp->chgIData(oldp+1360,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_1__io_operand_a),28);
    bufp->chgQData(oldp+1361,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_1__io_operand_a)) 
                               << 0x1cU)),56);
    bufp->chgIData(oldp+1363,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_2__io_operand_a),28);
    bufp->chgQData(oldp+1364,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_2__io_operand_a)) 
                               << 0x1cU)),56);
    bufp->chgIData(oldp+1366,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_3__io_operand_a),28);
    bufp->chgQData(oldp+1367,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_3__io_operand_a)) 
                               << 0x1cU)),56);
}

void VPvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_cleanup\n"); );
    // Init
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    IData/*31:0*/ __Vilp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0x5fU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
