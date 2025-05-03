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
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    // Body
    bufp->fullBit(oldp+68893,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68894,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 5U))));
    bufp->fullBit(oldp+68895,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout))));
    bufp->fullBit(oldp+68896,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+68897,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout));
    bufp->fullBit(oldp+68898,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68899,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68900,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68901,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 6U))));
    bufp->fullBit(oldp+68902,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout))));
    bufp->fullBit(oldp+68903,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+68904,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout));
    bufp->fullBit(oldp+68905,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+68906,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 7U))));
    bufp->fullBit(oldp+68907,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+68908,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 7U))));
    bufp->fullBit(oldp+68909,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout))));
    bufp->fullBit(oldp+68910,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+68911,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout));
    bufp->fullBit(oldp+68912,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68913,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 8U))));
    bufp->fullBit(oldp+68914,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68915,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 8U))));
    bufp->fullBit(oldp+68916,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout))));
    bufp->fullBit(oldp+68917,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+68918,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout));
    bufp->fullBit(oldp+68919,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68920,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68921,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68922,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 9U))));
    bufp->fullBit(oldp+68923,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout))));
    bufp->fullBit(oldp+68924,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+68925,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout));
    bufp->fullBit(oldp+68926,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68927,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68928,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68929,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68930,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout))));
    bufp->fullBit(oldp+68931,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+68932,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout));
    bufp->fullBit(oldp+68933,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68934,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68935,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68936,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68937,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout))));
    bufp->fullBit(oldp+68938,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+68939,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout));
    bufp->fullBit(oldp+68940,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68941,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68942,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68943,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68944,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout))));
    bufp->fullBit(oldp+68945,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+68946,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout));
    bufp->fullBit(oldp+68947,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68948,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68949,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68950,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68951,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout))));
    bufp->fullBit(oldp+68952,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+68953,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout));
    bufp->fullBit(oldp+68954,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68955,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68956,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68957,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68958,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout))));
    bufp->fullBit(oldp+68959,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+68960,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout));
    bufp->fullBit(oldp+68961,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68962,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68963,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68964,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68965,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout))));
    bufp->fullBit(oldp+68966,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+68967,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout));
    bufp->fullBit(oldp+68968,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68969,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68970,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68971,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68972,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout))));
    bufp->fullBit(oldp+68973,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+68974,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout));
    bufp->fullBit(oldp+68975,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U])));
    bufp->fullBit(oldp+68976,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68977,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U])));
    bufp->fullBit(oldp+68978,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68979,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout))));
    bufp->fullBit(oldp+68980,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+68981,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout));
    bufp->fullBit(oldp+68982,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68983,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68984,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68985,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68986,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout))));
    bufp->fullBit(oldp+68987,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+68988,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout));
    bufp->fullBit(oldp+68989,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 2U))));
    bufp->fullBit(oldp+68990,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68991,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 2U))));
    bufp->fullBit(oldp+68992,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68993,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout))));
    bufp->fullBit(oldp+68994,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+68995,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout));
    bufp->fullBit(oldp+68996,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 3U))));
    bufp->fullBit(oldp+68997,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+68998,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 3U))));
    bufp->fullBit(oldp+68999,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69000,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout))));
    bufp->fullBit(oldp+69001,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x13U))))));
    bufp->fullBit(oldp+69002,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout));
    bufp->fullBit(oldp+69003,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69004,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69005,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69006,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69007,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout))));
    bufp->fullBit(oldp+69008,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x14U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x14U))))));
    bufp->fullBit(oldp+69009,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout));
    bufp->fullBit(oldp+69010,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69011,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69012,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69013,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69014,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout))));
    bufp->fullBit(oldp+69015,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+69016,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout));
    bufp->fullBit(oldp+69017,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69018,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69019,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69020,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69021,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout))));
    bufp->fullBit(oldp+69022,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69023,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout));
    bufp->fullBit(oldp+69024,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69025,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69026,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69027,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69028,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout))));
    bufp->fullBit(oldp+69029,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69030,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout));
    bufp->fullBit(oldp+69031,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69032,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69033,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69034,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69035,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout))));
    bufp->fullBit(oldp+69036,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69037,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout));
    bufp->fullBit(oldp+69038,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69039,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69040,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69041,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69042,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout))));
    bufp->fullBit(oldp+69043,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69044,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout));
    bufp->fullBit(oldp+69045,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69046,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69047,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69048,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69049,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout))));
    bufp->fullBit(oldp+69050,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69051,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout));
    bufp->fullBit(oldp+69052,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69053,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69054,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69055,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69056,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout))));
    bufp->fullBit(oldp+69057,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+69058,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout));
    bufp->fullBit(oldp+69059,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69060,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69061,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69062,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69063,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout))));
    bufp->fullBit(oldp+69064,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+69065,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout));
    bufp->fullBit(oldp+69066,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69067,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69068,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69069,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69070,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout))));
    bufp->fullBit(oldp+69071,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+69072,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout));
    bufp->fullBit(oldp+69073,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69074,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69075,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69076,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69077,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout))));
    bufp->fullBit(oldp+69078,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+69079,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout));
    bufp->fullBit(oldp+69080,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69081,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69082,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69083,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69084,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout))));
    bufp->fullBit(oldp+69085,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+69086,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout));
    bufp->fullBit(oldp+69087,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69088,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69089,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69090,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69091,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout))));
    bufp->fullBit(oldp+69092,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+69093,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout));
    bufp->fullBit(oldp+69094,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69095,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69096,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69097,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69098,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout))));
    bufp->fullBit(oldp+69099,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69100,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout));
    bufp->fullBit(oldp+69101,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69102,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])));
    bufp->fullBit(oldp+69103,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69104,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])));
    bufp->fullBit(oldp+69105,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout))));
    bufp->fullBit(oldp+69106,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])))));
    bufp->fullBit(oldp+69107,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout));
    bufp->fullBit(oldp+69108,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69109,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69110,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69111,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69112,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout))));
    bufp->fullBit(oldp+69113,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+69114,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout));
    bufp->fullBit(oldp+69115,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69116,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69117,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69118,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69119,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout))));
    bufp->fullBit(oldp+69120,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+69121,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout));
    bufp->fullBit(oldp+69122,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69123,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69124,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69125,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69126,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout))));
    bufp->fullBit(oldp+69127,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+69128,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout));
    bufp->fullBit(oldp+69129,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69130,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69131,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69132,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 4U))));
    bufp->fullBit(oldp+69133,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout))));
    bufp->fullBit(oldp+69134,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+69135,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout));
    bufp->fullBit(oldp+69136,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69137,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69138,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69139,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69140,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout))));
    bufp->fullBit(oldp+69141,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69142,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout));
    bufp->fullBit(oldp+69143,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69144,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69145,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69146,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69147,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout))));
    bufp->fullBit(oldp+69148,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69149,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout));
    bufp->fullBit(oldp+69150,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69151,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69152,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69153,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69154,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout))));
    bufp->fullBit(oldp+69155,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69156,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout));
    bufp->fullBit(oldp+69157,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69158,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69159,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69160,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69161,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout))));
    bufp->fullBit(oldp+69162,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69163,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout));
    bufp->fullBit(oldp+69164,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69165,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69166,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69167,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69168,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout))));
    bufp->fullBit(oldp+69169,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69170,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout));
    bufp->fullBit(oldp+69171,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69172,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69173,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69174,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69175,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout))));
    bufp->fullBit(oldp+69176,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69177,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69178,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69179,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69180,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69181,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout))));
    bufp->fullBit(oldp+69182,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69183,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout));
    bufp->fullBit(oldp+69184,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69185,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69186,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69187,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69188,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout))));
    bufp->fullBit(oldp+69189,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69190,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout));
    bufp->fullBit(oldp+69191,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69192,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69193,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69194,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69195,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout))));
    bufp->fullBit(oldp+69196,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69197,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout));
    bufp->fullBit(oldp+69198,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69199,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69200,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69201,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69202,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout))));
    bufp->fullBit(oldp+69203,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69204,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout));
    bufp->fullBit(oldp+69205,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69206,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69207,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69208,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69209,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout))));
    bufp->fullBit(oldp+69210,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69211,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout));
    bufp->fullBit(oldp+69212,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69213,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69214,((vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69215,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69216,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout))));
    bufp->fullBit(oldp+69217,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69218,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout));
    bufp->fullBit(oldp+69219,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U])));
    bufp->fullBit(oldp+69220,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69221,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU])));
    bufp->fullBit(oldp+69222,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69223,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout))));
    bufp->fullBit(oldp+69224,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69225,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout));
    bufp->fullBit(oldp+69226,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69227,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69228,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69229,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69230,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout))));
    bufp->fullBit(oldp+69231,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69232,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout));
    bufp->fullBit(oldp+69233,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69234,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69235,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69236,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69237,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout))));
    bufp->fullBit(oldp+69238,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69239,(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout));
    bufp->fullBit(oldp+69240,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69241,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69242,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69243,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69244,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout))));
    bufp->fullBit(oldp+69245,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__divider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__divider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x13U))))));
    bufp->fullIData(oldp+69246,(vlSelf->PvuTop__DOT__add__DOT__sum_3),31);
    bufp->fullBit(oldp+69247,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3));
    bufp->fullIData(oldp+69248,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i),30);
    bufp->fullIData(oldp+69249,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69250,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i),30);
    bufp->fullIData(oldp+69251,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69252,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69253,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69265,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),56);
    bufp->fullIData(oldp+69267,(vlSelf->PvuTop__DOT__add__DOT__sum_2),31);
    bufp->fullBit(oldp+69268,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2));
    bufp->fullIData(oldp+69269,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i),30);
    bufp->fullIData(oldp+69270,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69271,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i),30);
    bufp->fullIData(oldp+69272,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69273,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69274,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69286,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),56);
    bufp->fullIData(oldp+69288,(vlSelf->PvuTop__DOT__add__DOT__sum_1),31);
    bufp->fullBit(oldp+69289,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1));
    bufp->fullIData(oldp+69290,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i),30);
    bufp->fullIData(oldp+69291,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69292,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i),30);
    bufp->fullIData(oldp+69293,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69294,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69295,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69307,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),56);
    bufp->fullIData(oldp+69309,(vlSelf->PvuTop__DOT__add__DOT__sum),31);
    bufp->fullBit(oldp+69310,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
    bufp->fullIData(oldp+69311,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+69312,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69313,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+69314,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69315,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69316,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69328,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69330,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69331,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69336,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69337,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69338,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69343,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69344,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69345,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69357,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69359,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69360,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69365,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69366,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69367,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69372,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69373,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69374,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69386,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),56);
    bufp->fullCData(oldp+69388,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69389,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69394,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69395,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69396,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69401,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69402,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69403,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69415,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),56);
    bufp->fullCData(oldp+69417,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69418,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69423,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69424,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69425,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69430,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69431,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69432,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69444,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),56);
    bufp->fullBit(oldp+69446,((1U & (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result 
                                             >> 0x3aU)))));
    bufp->fullCData(oldp+69447,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o),8);
    bufp->fullQData(oldp+69448,(vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result),59);
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
    bufp->fullWData(oldp+69450,(__Vtemp_h8d8d0578__0),232);
    bufp->fullQData(oldp+69458,(vlSelf->__VdfgTmp_hc282db87__0),58);
    bufp->fullQData(oldp+69460,(vlSelf->__VdfgTmp_h3585ffac__0),58);
    bufp->fullBit(oldp+69462,((1U & (IData)(vlSelf->__VdfgTmp_h2dfc7f3c__0))));
    bufp->fullBit(oldp+69463,((1U & (IData)(vlSelf->__VdfgTmp_h48ddf070__0))));
    bufp->fullBit(oldp+69464,((1U & (IData)(vlSelf->__VdfgTmp_hc0b56419__0))));
    bufp->fullBit(oldp+69465,((1U & (IData)(vlSelf->__VdfgTmp_hdc1648b7__0))));
    bufp->fullBit(oldp+69466,((1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                     ^ (IData)(vlSelf->__VdfgTmp_hdc1648b7__0)))));
    bufp->fullBit(oldp+69467,((1U & (((~ (IData)(vlSelf->__VdfgTmp_hdc1648b7__0)) 
                                      ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                     & (IData)(vlSelf->__VdfgTmp_hdc1648b7__0)))));
    bufp->fullBit(oldp+69468,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout));
    bufp->fullBit(oldp+69469,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69470,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69471,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69472,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69473,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout))));
    bufp->fullBit(oldp+69474,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 1U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+69475,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout));
    bufp->fullBit(oldp+69476,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69477,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69478,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69479,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69480,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout));
    bufp->fullBit(oldp+69481,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout))));
    bufp->fullBit(oldp+69482,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0xaU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+69483,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout));
    bufp->fullBit(oldp+69484,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69485,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69486,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69487,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69488,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout))));
    bufp->fullBit(oldp+69489,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0xbU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+69490,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout));
    bufp->fullBit(oldp+69491,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69492,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69493,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69494,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69495,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout))));
    bufp->fullBit(oldp+69496,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+69497,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout));
    bufp->fullBit(oldp+69498,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69499,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69500,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69501,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69502,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout))));
    bufp->fullBit(oldp+69503,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+69504,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout));
    bufp->fullBit(oldp+69505,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69506,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69507,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69508,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69509,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout))));
    bufp->fullBit(oldp+69510,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0xeU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+69511,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout));
    bufp->fullBit(oldp+69512,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69513,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69514,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69515,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69516,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout))));
    bufp->fullBit(oldp+69517,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0xfU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+69518,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout));
    bufp->fullBit(oldp+69519,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69520,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69521,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69522,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69523,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout))));
    bufp->fullBit(oldp+69524,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x10U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+69525,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout));
    bufp->fullBit(oldp+69526,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69527,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69528,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69529,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69530,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout))));
    bufp->fullBit(oldp+69531,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+69532,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout));
    bufp->fullBit(oldp+69533,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69534,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69535,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69536,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69537,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout))));
    bufp->fullBit(oldp+69538,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x12U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+69539,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout));
    bufp->fullBit(oldp+69540,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69541,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69542,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69543,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69544,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout))));
    bufp->fullBit(oldp+69545,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x13U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+69546,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout));
    bufp->fullBit(oldp+69547,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69548,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69549,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69550,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69551,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout))));
    bufp->fullBit(oldp+69552,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 2U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+69553,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout));
    bufp->fullBit(oldp+69554,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69555,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69556,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69557,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69558,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout))));
    bufp->fullBit(oldp+69559,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+69560,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout));
    bufp->fullBit(oldp+69561,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69562,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69563,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69564,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69565,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout))));
    bufp->fullBit(oldp+69566,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+69567,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout));
    bufp->fullBit(oldp+69568,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69569,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69570,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69571,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69572,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout))));
    bufp->fullBit(oldp+69573,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x16U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+69574,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout));
    bufp->fullBit(oldp+69575,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69576,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69577,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69578,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69579,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout))));
    bufp->fullBit(oldp+69580,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x17U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+69581,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout));
    bufp->fullBit(oldp+69582,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69583,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69584,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69585,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69586,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout))));
    bufp->fullBit(oldp+69587,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x18U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+69588,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout));
    bufp->fullBit(oldp+69589,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69590,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69591,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69592,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69593,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout))));
    bufp->fullBit(oldp+69594,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+69595,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout));
    bufp->fullBit(oldp+69596,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69597,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69598,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69599,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69600,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout))));
    bufp->fullBit(oldp+69601,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x1aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+69602,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout));
    bufp->fullBit(oldp+69603,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69604,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69605,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69606,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69607,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout))));
    bufp->fullBit(oldp+69608,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x1bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+69609,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout));
    bufp->fullBit(oldp+69610,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69611,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69612,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69613,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69614,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout))));
    bufp->fullBit(oldp+69615,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+69616,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout));
    bufp->fullBit(oldp+69617,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69618,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69619,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69620,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69621,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout))));
    bufp->fullBit(oldp+69622,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+69623,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout));
    bufp->fullBit(oldp+69624,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69625,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69626,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69627,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69628,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout))));
    bufp->fullBit(oldp+69629,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 3U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+69630,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout));
    bufp->fullBit(oldp+69631,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69632,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69633,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69634,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69635,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout))));
    bufp->fullBit(oldp+69636,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x1eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+69637,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout));
    bufp->fullBit(oldp+69638,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69639,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69640,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69641,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69642,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout))));
    bufp->fullBit(oldp+69643,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x1fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+69644,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout));
    bufp->fullBit(oldp+69645,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69646,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69647,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69648,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69649,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout))));
    bufp->fullBit(oldp+69650,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x20U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+69651,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout));
    bufp->fullBit(oldp+69652,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69653,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69654,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69655,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69656,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout))));
    bufp->fullBit(oldp+69657,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x21U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+69658,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout));
    bufp->fullBit(oldp+69659,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69660,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69661,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69662,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69663,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout))));
    bufp->fullBit(oldp+69664,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x22U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+69665,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout));
    bufp->fullBit(oldp+69666,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69667,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69668,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69669,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69670,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout))));
    bufp->fullBit(oldp+69671,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x23U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+69672,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout));
    bufp->fullBit(oldp+69673,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69674,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69675,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69676,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69677,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout))));
    bufp->fullBit(oldp+69678,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x24U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+69679,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout));
    bufp->fullBit(oldp+69680,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69681,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69682,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69683,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69684,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout))));
    bufp->fullBit(oldp+69685,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x25U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+69686,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout));
    bufp->fullBit(oldp+69687,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69688,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69689,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69690,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69691,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout))));
    bufp->fullBit(oldp+69692,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x26U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+69693,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout));
    bufp->fullBit(oldp+69694,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69695,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69696,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69697,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69698,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout))));
    bufp->fullBit(oldp+69699,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x27U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+69700,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout));
    bufp->fullBit(oldp+69701,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69702,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69703,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69704,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69705,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout))));
    bufp->fullBit(oldp+69706,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 4U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+69707,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout));
    bufp->fullBit(oldp+69708,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69709,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69710,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69711,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69712,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout))));
    bufp->fullBit(oldp+69713,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x28U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+69714,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout));
    bufp->fullBit(oldp+69715,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69716,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69717,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69718,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69719,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout))));
    bufp->fullBit(oldp+69720,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x29U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+69721,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout));
    bufp->fullBit(oldp+69722,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69723,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69724,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69725,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69726,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout))));
    bufp->fullBit(oldp+69727,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x2aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+69728,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout));
    bufp->fullBit(oldp+69729,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69730,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69731,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69732,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69733,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout))));
    bufp->fullBit(oldp+69734,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x2bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+69735,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout));
    bufp->fullBit(oldp+69736,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69737,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69738,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69739,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69740,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout))));
    bufp->fullBit(oldp+69741,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x2cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+69742,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout));
    bufp->fullBit(oldp+69743,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69744,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69745,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69746,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69747,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout))));
    bufp->fullBit(oldp+69748,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x2dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x2dU)))))));
    bufp->fullBit(oldp+69749,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout));
    bufp->fullBit(oldp+69750,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69751,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69752,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69753,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69754,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout))));
    bufp->fullBit(oldp+69755,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x2eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x2eU)))))));
    bufp->fullBit(oldp+69756,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout));
    bufp->fullBit(oldp+69757,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69758,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69759,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69760,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69761,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout))));
    bufp->fullBit(oldp+69762,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x2fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x2fU)))))));
    bufp->fullBit(oldp+69763,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout));
    bufp->fullBit(oldp+69764,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69765,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69766,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69767,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69768,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout))));
    bufp->fullBit(oldp+69769,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x30U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x30U)))))));
    bufp->fullBit(oldp+69770,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout));
    bufp->fullBit(oldp+69771,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69772,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69773,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69774,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69775,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout))));
    bufp->fullBit(oldp+69776,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x31U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x31U)))))));
    bufp->fullBit(oldp+69777,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout));
    bufp->fullBit(oldp+69778,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69779,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69780,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69781,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69782,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout))));
    bufp->fullBit(oldp+69783,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 5U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+69784,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout));
    bufp->fullBit(oldp+69785,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69786,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69787,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69788,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69789,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout))));
    bufp->fullBit(oldp+69790,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x32U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x32U)))))));
    bufp->fullBit(oldp+69791,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout));
    bufp->fullBit(oldp+69792,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69793,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69794,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69795,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69796,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout))));
    bufp->fullBit(oldp+69797,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x33U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x33U)))))));
    bufp->fullBit(oldp+69798,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout));
    bufp->fullBit(oldp+69799,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69800,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69801,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69802,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69803,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout))));
    bufp->fullBit(oldp+69804,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x34U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x34U)))))));
    bufp->fullBit(oldp+69805,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout));
    bufp->fullBit(oldp+69806,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69807,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69808,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69809,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69810,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout))));
    bufp->fullBit(oldp+69811,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x35U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x35U)))))));
    bufp->fullBit(oldp+69812,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout));
    bufp->fullBit(oldp+69813,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69814,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69815,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69816,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69817,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout))));
    bufp->fullBit(oldp+69818,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x36U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x36U)))))));
    bufp->fullBit(oldp+69819,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout));
    bufp->fullBit(oldp+69820,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69821,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69822,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69823,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69824,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout))));
    bufp->fullBit(oldp+69825,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 0x37U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69826,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                      & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                                 >> 0x37U))) 
                                     | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                        & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69827,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69828,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69829,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69830,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69831,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout))));
    bufp->fullBit(oldp+69832,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 6U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+69833,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout));
    bufp->fullBit(oldp+69834,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69835,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69836,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69837,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69838,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout))));
    bufp->fullBit(oldp+69839,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 7U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+69840,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout));
    bufp->fullBit(oldp+69841,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69842,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69843,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69844,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69845,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout))));
    bufp->fullBit(oldp+69846,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 8U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+69847,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout));
    bufp->fullBit(oldp+69848,((1U & (IData)((vlSelf->__VdfgTmp_h2dfc7f3c__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69849,((1U & (IData)((vlSelf->__VdfgTmp_h48ddf070__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69850,((1U & (IData)((vlSelf->__VdfgTmp_hc0b56419__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69851,((1U & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69852,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout))));
    bufp->fullBit(oldp+69853,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_hdc1648b7__0 
                                                     >> 9U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_hdc1648b7__0 
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
    bufp->fullWData(oldp+69854,(__Vtemp_hf3a8609d__0),224);
    bufp->fullQData(oldp+69861,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),59);
    bufp->fullQData(oldp+69863,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),59);
    bufp->fullWData(oldp+69865,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),90);
    bufp->fullWData(oldp+69868,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),90);
    bufp->fullWData(oldp+69871,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),90);
    bufp->fullWData(oldp+69874,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),90);
    bufp->fullWData(oldp+69877,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),90);
    bufp->fullWData(oldp+69880,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),90);
    bufp->fullCData(oldp+69883,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69884,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullWData(oldp+69896,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullWData(oldp+69899,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),90);
    bufp->fullWData(oldp+69902,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullCData(oldp+69905,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+69906,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),90);
    bufp->fullIData(oldp+69909,(((0xffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                         >> 0x1cU)) 
                                                << 1U)) 
                                 | (0U != (0x7ffffffU 
                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))),28);
    bufp->fullQData(oldp+69910,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted),55);
    bufp->fullQData(oldp+69912,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->fullQData(oldp+69914,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                        << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    bufp->fullBit(oldp+69916,(vlSelf->clock));
    bufp->fullBit(oldp+69917,(vlSelf->reset));
    bufp->fullIData(oldp+69918,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+69919,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+69920,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+69921,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+69922,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+69923,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+69924,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+69925,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+69926,(vlSelf->io_op),3);
    bufp->fullIData(oldp+69927,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+69928,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+69929,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+69930,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+69931,(vlSelf->io_posit_dot_o),32);
    bufp->fullCData(oldp+69932,(((8U & (vlSelf->io_posit_i1_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i1_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i1_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i1_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+69933,(((8U & (vlSelf->io_posit_i2_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i2_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i2_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i2_0 
                                          >> 0x1fU))))),4);
    bufp->fullIData(oldp+69934,((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
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
    bufp->fullWData(oldp+69935,(__Vtemp_h8514ab4c__0),120);
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
    bufp->fullWData(oldp+69939,(__Vtemp_hde6aa058__0),120);
    bufp->fullCData(oldp+69943,(((8U & ((((IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3) 
                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                          ? (vlSelf->io_posit_i1_3 
                                             >> 0x1fU)
                                          : (vlSelf->io_posit_i2_3 
                                             >> 0x1fU)) 
                                        << 3U)) | (
                                                   (4U 
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
    bufp->fullIData(oldp+69944,(((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
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
    bufp->fullWData(oldp+69945,(__Vtemp_h620199ea__0),120);
    bufp->fullCData(oldp+69949,((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0))))),4);
    bufp->fullCData(oldp+69950,(((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
                                   & (0U != (0x3fffffffU 
                                             & vlSelf->PvuTop__DOT__add__DOT__sum_3))) 
                                  << 3U) | ((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0) 
                                              & (0U 
                                                 != 
                                                 (0x3fffffffU 
                                                  & vlSelf->PvuTop__DOT__add__DOT__sum_2))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0) 
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
    bufp->fullWData(oldp+69951,(__Vtemp_h24f352fb__0),128);
    bufp->fullIData(oldp+69955,(((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? (IData)(vlSelf->__VdfgTmp_h2bfbff40__0)
                                    : 0U) << 0x1aU) 
                                 | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                       ? (3U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 0x1dU))
                                       : 0U) << 0x18U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                          ? (IData)(vlSelf->__VdfgTmp_h92dbb766__0)
                                          : 0U) << 0x12U) 
                                       | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? (3U 
                                                & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                   >> 0x1dU))
                                             : 0U) 
                                           << 0x10U) 
                                          | ((((1U 
                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                ? (IData)(vlSelf->__VdfgTmp_he1608796__0)
                                                : 0U) 
                                              << 0xaU) 
                                             | ((((1U 
                                                   & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  (3U 
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
    bufp->fullWData(oldp+69956,(__Vtemp_hce8b1a10__0),112);
    bufp->fullIData(oldp+69960,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+69961,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+69962,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+69963,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+69964,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69965,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69966,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69967,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69968,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69969,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69970,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69971,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+69972,(__Vtemp_h95b92b9c__0),128);
    bufp->fullIData(oldp+69976,(((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? (IData)(vlSelf->__VdfgTmp_hf9a58d2e__0)
                                    : 0U) << 0x1aU) 
                                 | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                       ? (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                >> 0x1dU))
                                       : 0U) << 0x18U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                          ? (IData)(vlSelf->__VdfgTmp_h1c4c2383__0)
                                          : 0U) << 0x12U) 
                                       | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? (3U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                   >> 0x1dU))
                                             : 0U) 
                                           << 0x10U) 
                                          | ((((1U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                ? (IData)(vlSelf->__VdfgTmp_h591e574e__0)
                                                : 0U) 
                                              << 0xaU) 
                                             | ((((1U 
                                                   & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  (3U 
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
    bufp->fullWData(oldp+69977,(__Vtemp_h0565bda0__0),112);
    bufp->fullBit(oldp+69981,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69982,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69983,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69984,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69985,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69986,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69987,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69988,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+69989,(((((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
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
    bufp->fullWData(oldp+69990,(__Vtemp_hed54d557__0),224);
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
    bufp->fullWData(oldp+69997,(__Vtemp_hf0d3f2ce__0),224);
    bufp->fullIData(oldp+70004,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 0x18U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))))),32);
    bufp->fullSData(oldp+70005,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70006,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o),8);
    bufp->fullCData(oldp+70007,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->fullCData(oldp+70008,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->fullSData(oldp+70009,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70010,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o),8);
    bufp->fullCData(oldp+70011,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->fullCData(oldp+70012,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->fullIData(oldp+70013,((((IData)(vlSelf->__VdfgTmp_h7e5815f2__0) 
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
    bufp->fullWData(oldp+70014,(__Vtemp_h30f7997b__0),224);
    bufp->fullSData(oldp+70021,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum),9);
    bufp->fullSData(oldp+70022,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_1),9);
    bufp->fullSData(oldp+70023,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_2),9);
    bufp->fullSData(oldp+70024,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__expSum_3),9);
    bufp->fullCData(oldp+70025,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign),4);
    bufp->fullIData(oldp+70026,(((5U == (IData)(vlSelf->io_op))
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
    bufp->fullWData(oldp+70027,(__Vtemp_h1a1efef7__0),112);
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
    bufp->fullWData(oldp+70031,(__Vtemp_h7d2a8d0a__0),128);
    bufp->fullCData(oldp+70035,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+70036,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->fullCData(oldp+70037,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->fullCData(oldp+70038,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->fullBit(oldp+70039,(((~ (IData)(vlSelf->PvuTop__DOT___GEN_7)) 
                               & ((5U == (IData)(vlSelf->io_op)) 
                                  & (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result 
                                             >> 0x3aU))))));
    bufp->fullCData(oldp+70040,(((5U == (IData)(vlSelf->io_op))
                                  ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                  : 0U)),8);
    bufp->fullIData(oldp+70041,(((5U == (IData)(vlSelf->io_op))
                                  ? ((0xffffffeU & 
                                      ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                >> 0x1cU)) 
                                       << 1U)) | (0U 
                                                  != 
                                                  (0x7ffffffU 
                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                  : 0U)),28);
    bufp->fullIData(oldp+70042,((((0U == ((5U == (IData)(vlSelf->io_op))
                                           ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                           : 0U)) & 
                                  (0U == ((5U == (IData)(vlSelf->io_op))
                                           ? ((0xffffffeU 
                                               & ((IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                           >> 0x1cU)) 
                                                  << 1U)) 
                                              | (0U 
                                                 != 
                                                 (0x7ffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                           : 0U))) ? 0U
                                  : (((~ (IData)(vlSelf->PvuTop__DOT___GEN_7)) 
                                      & ((5U == (IData)(vlSelf->io_op)) 
                                         & (IData)(
                                                   (vlSelf->PvuTop__DOT__dotproduct__DOT__sum_result 
                                                    >> 0x3aU))))
                                      ? (0x80000000U 
                                         | (0x7fffffffU 
                                            & ((IData)(1U) 
                                               + (~ vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T))))
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
    bufp->fullWData(oldp+70043,(__Vtemp_he0602d0b__0),120);
    bufp->fullIData(oldp+70047,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? ((0U == (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        ? ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((IData)(1U) 
                                                              - 
                                                              vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                             - (IData)(1U)) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (((IData)(1U) 
                                                  - 
                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                 - (IData)(1U))))
                                        : ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((- 
                                                             vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (- 
                                                 vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                           ? ((0xe0U 
                                               & ((- (IData)(
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
                                           : ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (- 
                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? ((0U == 
                                              (0x1fU 
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
                                           ? ((0U == 
                                               (0x1fU 
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
    bufp->fullWData(oldp+70048,(__Vtemp_hdf4c90c7__0),112);
    bufp->fullBit(oldp+70052,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70053,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70054,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70055,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70056,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70057,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70058,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70059,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->fullWData(oldp+70060,(__Vtemp_hcc9c6554__0),224);
    bufp->fullQData(oldp+70067,((((QData)((IData)((
                                                   (1U 
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
    bufp->fullWData(oldp+70069,(__Vtemp_h52e32d61__0),112);
    bufp->fullBit(oldp+70073,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70074,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70076,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70077,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70079,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70080,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70082,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70083,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullSData(oldp+70085,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? ((5U > (0x3fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0x1c0U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((((IData)(5U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U)) 
                                                          >> 5U)))) 
                                           << 6U)) 
                                         | (0x3fU & 
                                            (((IData)(5U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0x1c0U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((- 
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(4U))) 
                                                          >> 5U)))) 
                                           << 6U)) 
                                         | (0x3fU & 
                                            (- (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                - (IData)(4U))))))
                                  : 0U)),9);
    bufp->fullCData(oldp+70086,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? (IData)(vlSelf->__VdfgTmp_h858857fc__0)
                                  : 0U)),6);
    bufp->fullBit(oldp+70087,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70088,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
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
    bufp->fullWData(oldp+70090,(__Vtemp_h57c76055__0),224);
    bufp->fullQData(oldp+70097,((((QData)((IData)((
                                                   (1U 
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
    bufp->fullWData(oldp+70099,(__Vtemp_hf67a7711__0),112);
    bufp->fullQData(oldp+70103,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i),56);
    bufp->fullBit(oldp+70105,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70106,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70108,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70110,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i),56);
    bufp->fullBit(oldp+70112,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70113,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70115,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70117,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i),56);
    bufp->fullBit(oldp+70119,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70120,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70122,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70124,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i),56);
    bufp->fullBit(oldp+70126,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70127,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70129,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),56);
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
    bufp->fullWData(oldp+70131,(__Vtemp_h2a34a34f__0),120);
    bufp->fullIData(oldp+70135,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? ((0U == (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        ? ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((IData)(1U) 
                                                              - 
                                                              vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                             - (IData)(1U)) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (((IData)(1U) 
                                                  - 
                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                 - (IData)(1U))))
                                        : ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((- 
                                                             vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (- 
                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                           ? ((0xe0U 
                                               & ((- (IData)(
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
                                           : ((0xe0U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (- 
                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? ((0U == 
                                              (0x1fU 
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
                                           ? ((0U == 
                                               (0x1fU 
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
    bufp->fullWData(oldp+70136,(__Vtemp_hd280c543__0),112);
    bufp->fullBit(oldp+70140,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70141,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70142,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70143,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70144,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70145,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70146,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70147,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->fullWData(oldp+70148,(__Vtemp_h1dafb016__0),224);
    bufp->fullCData(oldp+70155,(((8U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                          & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)) 
                                         << 3U) ^ (8U 
                                                   & (vlSelf->io_posit_i1_3 
                                                      >> 0x1cU)))) 
                                 | ((4U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                             & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_2)) 
                                            << 2U) 
                                           ^ (4U & 
                                              (vlSelf->io_posit_i1_2 
                                               >> 0x1dU)))) 
                                    | ((2U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_1)) 
                                               << 1U) 
                                              ^ (2U 
                                                 & (vlSelf->io_posit_i1_1 
                                                    >> 0x1eU)))) 
                                       | (1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign)) 
                                                ^ (vlSelf->io_posit_i1_0 
                                                   >> 0x1fU))))))),4);
    bufp->fullIData(oldp+70156,(((((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_3 
                                              >> 0x1eU)) 
                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT__same_sign_3)))
                                    ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1)
                                    : ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1))) 
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
    bufp->fullWData(oldp+70157,(__Vtemp_h8ba2cfbb__0),120);
    bufp->fullCData(oldp+70161,((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0))))),4);
    bufp->fullCData(oldp+70162,(((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
                                   & (0U != (0x3fffffffU 
                                             & vlSelf->PvuTop__DOT__add__DOT__sum_3))) 
                                  << 3U) | ((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0) 
                                              & (0U 
                                                 != 
                                                 (0x3fffffffU 
                                                  & vlSelf->PvuTop__DOT__add__DOT__sum_2))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0) 
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
    bufp->fullIData(oldp+70163,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_a),28);
    bufp->fullQData(oldp+70164,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70166,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_1__io_operand_a),28);
    bufp->fullQData(oldp+70167,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_1__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70169,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_2__io_operand_a),28);
    bufp->fullQData(oldp+70170,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_2__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70172,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_3__io_operand_a),28);
    bufp->fullQData(oldp+70173,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__multiplier_3__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70175,(0x1fU),32);
    bufp->fullBit(oldp+70176,(1U));
    bufp->fullIData(oldp+70177,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+70178,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+70183,(0U));
    bufp->fullIData(oldp+70184,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+70185,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+70190,(0x38U),32);
    bufp->fullIData(oldp+70191,(6U),32);
    bufp->fullWData(oldp+70192,(VPvuTop__ConstPool__CONST_hc4a98b6e_0),336);
    bufp->fullIData(oldp+70203,(0x3bU),32);
    bufp->fullWData(oldp+70204,(VPvuTop__ConstPool__CONST_h55404713_0),354);
    bufp->fullBit(oldp+70216,(1U));
}
