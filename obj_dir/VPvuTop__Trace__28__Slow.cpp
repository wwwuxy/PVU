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
    VlWide<8>/*255:0*/ __Vtemp_h272d5b42__0;
    VlWide<7>/*223:0*/ __Vtemp_h996a43c2__0;
    VlWide<4>/*127:0*/ __Vtemp_h8514ab4c__0;
    VlWide<4>/*127:0*/ __Vtemp_hde6aa058__0;
    VlWide<4>/*127:0*/ __Vtemp_h9f418512__0;
    VlWide<4>/*127:0*/ __Vtemp_h24f352fb__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a85a4ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h95b92b9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8053b372__0;
    VlWide<4>/*127:0*/ __Vtemp_h9662e807__0;
    VlWide<6>/*191:0*/ __Vtemp_h60a624ad__0;
    VlWide<7>/*223:0*/ __Vtemp_he25792b8__0;
    VlWide<7>/*223:0*/ __Vtemp_h19e34e8a__0;
    VlWide<7>/*223:0*/ __Vtemp_h3443ac07__0;
    VlWide<4>/*127:0*/ __Vtemp_h3364e47b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4b65947b__0;
    VlWide<4>/*127:0*/ __Vtemp_he6fac87a__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf4c90c7__0;
    VlWide<4>/*127:0*/ __Vtemp_h9662e807__1;
    VlWide<6>/*191:0*/ __Vtemp_h446d05e0__0;
    VlWide<7>/*223:0*/ __Vtemp_h0a8eb395__0;
    VlWide<7>/*223:0*/ __Vtemp_h3e09f0ec__0;
    VlWide<3>/*95:0*/ __Vtemp_hee7dfb4e__0;
    VlWide<4>/*127:0*/ __Vtemp_h52e32d61__0;
    VlWide<7>/*223:0*/ __Vtemp_hba7b99a0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4c9dee20__0;
    VlWide<4>/*127:0*/ __Vtemp_hf67a7711__0;
    VlWide<4>/*127:0*/ __Vtemp_h69367da8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd280c543__0;
    VlWide<7>/*223:0*/ __Vtemp_h66381fc9__0;
    VlWide<4>/*127:0*/ __Vtemp_h1e731a51__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    // Body
    bufp->fullBit(oldp+68889,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68890,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 5U))));
    bufp->fullBit(oldp+68891,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout))));
    bufp->fullBit(oldp+68892,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+68893,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout));
    bufp->fullBit(oldp+68894,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68895,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68896,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68897,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 6U))));
    bufp->fullBit(oldp+68898,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout))));
    bufp->fullBit(oldp+68899,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+68900,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout));
    bufp->fullBit(oldp+68901,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+68902,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 7U))));
    bufp->fullBit(oldp+68903,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+68904,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 7U))));
    bufp->fullBit(oldp+68905,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout))));
    bufp->fullBit(oldp+68906,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+68907,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout));
    bufp->fullBit(oldp+68908,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68909,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 8U))));
    bufp->fullBit(oldp+68910,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68911,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 8U))));
    bufp->fullBit(oldp+68912,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout))));
    bufp->fullBit(oldp+68913,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+68914,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout));
    bufp->fullBit(oldp+68915,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68916,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68917,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68918,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 9U))));
    bufp->fullBit(oldp+68919,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout))));
    bufp->fullBit(oldp+68920,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+68921,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout));
    bufp->fullBit(oldp+68922,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68923,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68924,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68925,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68926,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout))));
    bufp->fullBit(oldp+68927,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+68928,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout));
    bufp->fullBit(oldp+68929,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68930,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68931,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68932,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68933,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout))));
    bufp->fullBit(oldp+68934,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+68935,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout));
    bufp->fullBit(oldp+68936,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68937,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68938,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68939,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68940,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout))));
    bufp->fullBit(oldp+68941,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+68942,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout));
    bufp->fullBit(oldp+68943,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68944,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68945,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68946,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68947,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout))));
    bufp->fullBit(oldp+68948,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+68949,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout));
    bufp->fullBit(oldp+68950,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68951,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68952,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68953,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68954,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout))));
    bufp->fullBit(oldp+68955,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+68956,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout));
    bufp->fullBit(oldp+68957,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68958,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68959,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68960,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68961,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout))));
    bufp->fullBit(oldp+68962,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+68963,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout));
    bufp->fullBit(oldp+68964,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68965,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68966,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68967,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68968,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout))));
    bufp->fullBit(oldp+68969,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+68970,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout));
    bufp->fullBit(oldp+68971,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U])));
    bufp->fullBit(oldp+68972,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68973,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U])));
    bufp->fullBit(oldp+68974,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68975,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout))));
    bufp->fullBit(oldp+68976,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+68977,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout));
    bufp->fullBit(oldp+68978,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68979,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68980,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68981,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68982,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout))));
    bufp->fullBit(oldp+68983,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+68984,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout));
    bufp->fullBit(oldp+68985,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 2U))));
    bufp->fullBit(oldp+68986,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68987,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 2U))));
    bufp->fullBit(oldp+68988,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68989,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout))));
    bufp->fullBit(oldp+68990,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+68991,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout));
    bufp->fullBit(oldp+68992,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 3U))));
    bufp->fullBit(oldp+68993,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+68994,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 3U))));
    bufp->fullBit(oldp+68995,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+68996,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout))));
    bufp->fullBit(oldp+68997,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x13U))))));
    bufp->fullBit(oldp+68998,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout));
    bufp->fullBit(oldp+68999,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69000,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69001,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69002,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69003,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout))));
    bufp->fullBit(oldp+69004,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x14U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x14U))))));
    bufp->fullBit(oldp+69005,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout));
    bufp->fullBit(oldp+69006,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69007,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69008,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69009,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69010,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout))));
    bufp->fullBit(oldp+69011,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+69012,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout));
    bufp->fullBit(oldp+69013,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69014,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69015,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69016,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69017,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout))));
    bufp->fullBit(oldp+69018,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69019,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout));
    bufp->fullBit(oldp+69020,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69021,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69022,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69023,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69024,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout))));
    bufp->fullBit(oldp+69025,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69026,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout));
    bufp->fullBit(oldp+69027,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69028,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69029,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69030,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69031,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout))));
    bufp->fullBit(oldp+69032,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69033,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout));
    bufp->fullBit(oldp+69034,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69035,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69036,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69037,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69038,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout))));
    bufp->fullBit(oldp+69039,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69040,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout));
    bufp->fullBit(oldp+69041,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69042,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69043,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69044,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69045,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout))));
    bufp->fullBit(oldp+69046,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69047,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout));
    bufp->fullBit(oldp+69048,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69049,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69050,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69051,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69052,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout))));
    bufp->fullBit(oldp+69053,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+69054,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout));
    bufp->fullBit(oldp+69055,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69056,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69057,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69058,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69059,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout))));
    bufp->fullBit(oldp+69060,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+69061,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout));
    bufp->fullBit(oldp+69062,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69063,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69064,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69065,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69066,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout))));
    bufp->fullBit(oldp+69067,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+69068,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout));
    bufp->fullBit(oldp+69069,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69070,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69071,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69072,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69073,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout))));
    bufp->fullBit(oldp+69074,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+69075,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout));
    bufp->fullBit(oldp+69076,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69077,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69078,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69079,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69080,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout))));
    bufp->fullBit(oldp+69081,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+69082,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout));
    bufp->fullBit(oldp+69083,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69084,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69085,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69086,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69087,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout))));
    bufp->fullBit(oldp+69088,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+69089,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout));
    bufp->fullBit(oldp+69090,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69091,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69092,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69093,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69094,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout))));
    bufp->fullBit(oldp+69095,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69096,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout));
    bufp->fullBit(oldp+69097,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69098,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])));
    bufp->fullBit(oldp+69099,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69100,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])));
    bufp->fullBit(oldp+69101,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout))));
    bufp->fullBit(oldp+69102,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])))));
    bufp->fullBit(oldp+69103,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout));
    bufp->fullBit(oldp+69104,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69105,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69106,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69107,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69108,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout))));
    bufp->fullBit(oldp+69109,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+69110,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout));
    bufp->fullBit(oldp+69111,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69112,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69113,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69114,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69115,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout))));
    bufp->fullBit(oldp+69116,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+69117,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout));
    bufp->fullBit(oldp+69118,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69119,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69120,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69121,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69122,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout))));
    bufp->fullBit(oldp+69123,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+69124,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout));
    bufp->fullBit(oldp+69125,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69126,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69127,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69128,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 4U))));
    bufp->fullBit(oldp+69129,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout))));
    bufp->fullBit(oldp+69130,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+69131,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout));
    bufp->fullBit(oldp+69132,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69133,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69134,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69135,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69136,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout))));
    bufp->fullBit(oldp+69137,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69138,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout));
    bufp->fullBit(oldp+69139,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69140,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69141,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69142,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69143,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout))));
    bufp->fullBit(oldp+69144,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69145,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout));
    bufp->fullBit(oldp+69146,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69147,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69148,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69149,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69150,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout))));
    bufp->fullBit(oldp+69151,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69152,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout));
    bufp->fullBit(oldp+69153,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69154,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69155,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69156,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69157,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout))));
    bufp->fullBit(oldp+69158,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69159,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout));
    bufp->fullBit(oldp+69160,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69161,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69162,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69163,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69164,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout))));
    bufp->fullBit(oldp+69165,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69166,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout));
    bufp->fullBit(oldp+69167,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69168,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69169,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69170,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69171,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout))));
    bufp->fullBit(oldp+69172,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69173,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69174,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69175,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69176,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69177,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout))));
    bufp->fullBit(oldp+69178,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69179,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout));
    bufp->fullBit(oldp+69180,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69181,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69182,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69183,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69184,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout))));
    bufp->fullBit(oldp+69185,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69186,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout));
    bufp->fullBit(oldp+69187,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69188,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69189,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69190,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69191,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout))));
    bufp->fullBit(oldp+69192,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69193,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout));
    bufp->fullBit(oldp+69194,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69195,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69196,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69197,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69198,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout))));
    bufp->fullBit(oldp+69199,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69200,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout));
    bufp->fullBit(oldp+69201,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69202,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69203,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69204,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69205,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout))));
    bufp->fullBit(oldp+69206,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69207,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout));
    bufp->fullBit(oldp+69208,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69209,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69210,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69211,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69212,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout))));
    bufp->fullBit(oldp+69213,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69214,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout));
    bufp->fullBit(oldp+69215,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U])));
    bufp->fullBit(oldp+69216,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69217,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU])));
    bufp->fullBit(oldp+69218,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69219,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout))));
    bufp->fullBit(oldp+69220,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69221,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout));
    bufp->fullBit(oldp+69222,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69223,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69224,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69225,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69226,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout))));
    bufp->fullBit(oldp+69227,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69228,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout));
    bufp->fullBit(oldp+69229,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69230,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69231,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69232,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69233,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout))));
    bufp->fullBit(oldp+69234,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69235,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout));
    bufp->fullBit(oldp+69236,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69237,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69238,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69239,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69240,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout))));
    bufp->fullBit(oldp+69241,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x13U))))));
    bufp->fullIData(oldp+69242,(vlSelf->PvuTop__DOT__add__DOT__sum_3),31);
    bufp->fullBit(oldp+69243,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3));
    bufp->fullIData(oldp+69244,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i),30);
    bufp->fullIData(oldp+69245,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69246,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i),30);
    bufp->fullIData(oldp+69247,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69248,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69249,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69261,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),56);
    bufp->fullIData(oldp+69263,(vlSelf->PvuTop__DOT__add__DOT__sum_2),31);
    bufp->fullBit(oldp+69264,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2));
    bufp->fullIData(oldp+69265,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i),30);
    bufp->fullIData(oldp+69266,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69267,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i),30);
    bufp->fullIData(oldp+69268,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69269,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69270,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69282,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),56);
    bufp->fullIData(oldp+69284,(vlSelf->PvuTop__DOT__add__DOT__sum_1),31);
    bufp->fullBit(oldp+69285,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1));
    bufp->fullIData(oldp+69286,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i),30);
    bufp->fullIData(oldp+69287,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69288,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i),30);
    bufp->fullIData(oldp+69289,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69290,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69291,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69303,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),56);
    bufp->fullIData(oldp+69305,(vlSelf->PvuTop__DOT__add__DOT__sum),31);
    bufp->fullBit(oldp+69306,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
    bufp->fullIData(oldp+69307,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+69308,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69309,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+69310,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69311,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69312,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69324,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69326,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69327,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69332,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69333,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69334,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69339,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69340,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69341,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69353,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69355,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69356,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69361,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69362,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69363,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69368,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69369,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69370,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69382,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),56);
    bufp->fullCData(oldp+69384,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69385,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69390,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69391,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69392,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69397,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69398,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69399,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69411,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),56);
    bufp->fullCData(oldp+69413,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69414,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69419,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69420,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69421,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69426,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69427,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69428,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69440,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69442,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o),8);
    bufp->fullQData(oldp+69443,((0x3ffffffffffffffULL 
                                 & (vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o 
                                    + vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o))),59);
    __Vtemp_h272d5b42__0[0U] = (IData)(vlSelf->__VdfgTmp_h88c30338__0);
    __Vtemp_h272d5b42__0[1U] = (((IData)(vlSelf->__VdfgTmp_h2df6a413__0) 
                                 << 0x1aU) | (IData)(
                                                     (vlSelf->__VdfgTmp_h88c30338__0 
                                                      >> 0x20U)));
    __Vtemp_h272d5b42__0[2U] = (((IData)(vlSelf->__VdfgTmp_h2df6a413__0) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h2df6a413__0 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h272d5b42__0[3U] = (((IData)(vlSelf->__VdfgTmp_h51cce765__0) 
                                 << 0x14U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h2df6a413__0 
                                                       >> 0x20U)) 
                                              >> 6U));
    __Vtemp_h272d5b42__0[4U] = (((IData)(vlSelf->__VdfgTmp_h51cce765__0) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h51cce765__0 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h272d5b42__0[5U] = (((IData)(vlSelf->__VdfgTmp_h82782eba__0) 
                                 << 0xeU) | ((IData)(
                                                     (vlSelf->__VdfgTmp_h51cce765__0 
                                                      >> 0x20U)) 
                                             >> 0xcU));
    __Vtemp_h272d5b42__0[6U] = (((IData)(vlSelf->__VdfgTmp_h82782eba__0) 
                                 >> 0x12U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h82782eba__0 
                                                       >> 0x20U)) 
                                              << 0xeU));
    __Vtemp_h272d5b42__0[7U] = ((IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                         >> 0x20U)) 
                                >> 0x12U);
    bufp->fullWData(oldp+69445,(__Vtemp_h272d5b42__0),232);
    bufp->fullQData(oldp+69453,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o),58);
    bufp->fullQData(oldp+69455,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o),58);
    bufp->fullBit(oldp+69457,((1U & (IData)(vlSelf->__VdfgTmp_h88c30338__0))));
    bufp->fullBit(oldp+69458,((1U & (IData)(vlSelf->__VdfgTmp_h2df6a413__0))));
    bufp->fullBit(oldp+69459,((1U & (IData)(vlSelf->__VdfgTmp_h51cce765__0))));
    bufp->fullBit(oldp+69460,((1U & (IData)(vlSelf->__VdfgTmp_h82782eba__0))));
    bufp->fullBit(oldp+69461,((1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                     ^ (IData)(vlSelf->__VdfgTmp_h82782eba__0)))));
    bufp->fullBit(oldp+69462,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h82782eba__0)) 
                                      ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                     & (IData)(vlSelf->__VdfgTmp_h82782eba__0)))));
    bufp->fullBit(oldp+69463,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout));
    bufp->fullBit(oldp+69464,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69465,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69466,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69467,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69468,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout))));
    bufp->fullBit(oldp+69469,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 1U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+69470,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout));
    bufp->fullBit(oldp+69471,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69472,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69473,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69474,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69475,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout));
    bufp->fullBit(oldp+69476,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout))));
    bufp->fullBit(oldp+69477,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xaU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+69478,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout));
    bufp->fullBit(oldp+69479,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69480,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69481,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69482,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69483,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout))));
    bufp->fullBit(oldp+69484,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xbU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+69485,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout));
    bufp->fullBit(oldp+69486,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69487,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69488,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69489,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69490,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout))));
    bufp->fullBit(oldp+69491,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+69492,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout));
    bufp->fullBit(oldp+69493,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69494,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69495,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69496,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69497,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout))));
    bufp->fullBit(oldp+69498,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+69499,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout));
    bufp->fullBit(oldp+69500,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69501,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69502,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69503,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69504,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout))));
    bufp->fullBit(oldp+69505,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xeU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+69506,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout));
    bufp->fullBit(oldp+69507,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69508,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69509,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69510,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69511,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout))));
    bufp->fullBit(oldp+69512,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xfU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+69513,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout));
    bufp->fullBit(oldp+69514,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69515,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69516,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69517,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69518,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout))));
    bufp->fullBit(oldp+69519,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x10U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+69520,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout));
    bufp->fullBit(oldp+69521,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69522,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69523,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69524,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69525,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout))));
    bufp->fullBit(oldp+69526,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+69527,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout));
    bufp->fullBit(oldp+69528,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69529,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69530,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69531,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69532,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout))));
    bufp->fullBit(oldp+69533,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x12U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+69534,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout));
    bufp->fullBit(oldp+69535,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69536,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69537,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69538,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69539,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout))));
    bufp->fullBit(oldp+69540,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x13U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+69541,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout));
    bufp->fullBit(oldp+69542,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69543,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69544,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69545,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69546,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout))));
    bufp->fullBit(oldp+69547,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 2U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+69548,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout));
    bufp->fullBit(oldp+69549,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69550,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69551,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69552,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69553,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout))));
    bufp->fullBit(oldp+69554,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+69555,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout));
    bufp->fullBit(oldp+69556,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69557,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69558,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69559,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69560,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout))));
    bufp->fullBit(oldp+69561,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+69562,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout));
    bufp->fullBit(oldp+69563,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69564,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69565,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69566,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69567,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout))));
    bufp->fullBit(oldp+69568,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x16U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+69569,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout));
    bufp->fullBit(oldp+69570,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69571,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69572,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69573,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69574,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout))));
    bufp->fullBit(oldp+69575,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x17U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+69576,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout));
    bufp->fullBit(oldp+69577,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69578,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69579,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69580,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69581,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout))));
    bufp->fullBit(oldp+69582,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x18U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+69583,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout));
    bufp->fullBit(oldp+69584,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69585,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69586,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69587,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69588,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout))));
    bufp->fullBit(oldp+69589,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+69590,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout));
    bufp->fullBit(oldp+69591,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69592,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69593,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69594,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69595,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout))));
    bufp->fullBit(oldp+69596,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+69597,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout));
    bufp->fullBit(oldp+69598,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69599,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69600,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69601,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69602,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout))));
    bufp->fullBit(oldp+69603,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+69604,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout));
    bufp->fullBit(oldp+69605,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69606,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69607,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69608,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69609,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout))));
    bufp->fullBit(oldp+69610,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+69611,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout));
    bufp->fullBit(oldp+69612,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69613,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69614,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69615,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69616,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout))));
    bufp->fullBit(oldp+69617,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+69618,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout));
    bufp->fullBit(oldp+69619,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69620,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69621,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69622,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69623,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout))));
    bufp->fullBit(oldp+69624,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 3U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+69625,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout));
    bufp->fullBit(oldp+69626,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69627,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69628,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69629,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69630,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout))));
    bufp->fullBit(oldp+69631,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+69632,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout));
    bufp->fullBit(oldp+69633,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69634,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69635,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69636,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69637,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout))));
    bufp->fullBit(oldp+69638,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+69639,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout));
    bufp->fullBit(oldp+69640,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69641,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69642,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69643,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69644,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout))));
    bufp->fullBit(oldp+69645,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x20U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+69646,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout));
    bufp->fullBit(oldp+69647,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69648,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69649,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69650,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69651,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout))));
    bufp->fullBit(oldp+69652,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x21U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+69653,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout));
    bufp->fullBit(oldp+69654,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69655,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69656,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69657,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69658,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout))));
    bufp->fullBit(oldp+69659,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x22U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+69660,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout));
    bufp->fullBit(oldp+69661,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69662,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69663,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69664,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69665,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout))));
    bufp->fullBit(oldp+69666,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x23U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+69667,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout));
    bufp->fullBit(oldp+69668,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69669,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69670,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69671,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69672,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout))));
    bufp->fullBit(oldp+69673,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x24U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+69674,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout));
    bufp->fullBit(oldp+69675,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69676,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69677,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69678,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69679,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout))));
    bufp->fullBit(oldp+69680,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x25U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+69681,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout));
    bufp->fullBit(oldp+69682,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69683,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69684,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69685,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69686,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout))));
    bufp->fullBit(oldp+69687,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x26U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+69688,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout));
    bufp->fullBit(oldp+69689,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69690,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69691,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69692,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69693,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout))));
    bufp->fullBit(oldp+69694,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x27U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+69695,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout));
    bufp->fullBit(oldp+69696,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69697,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69698,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69699,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69700,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout))));
    bufp->fullBit(oldp+69701,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 4U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+69702,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout));
    bufp->fullBit(oldp+69703,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69704,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69705,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69706,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69707,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout))));
    bufp->fullBit(oldp+69708,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x28U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+69709,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout));
    bufp->fullBit(oldp+69710,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69711,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69712,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69713,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69714,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout))));
    bufp->fullBit(oldp+69715,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x29U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+69716,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout));
    bufp->fullBit(oldp+69717,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69718,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69719,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69720,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69721,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout))));
    bufp->fullBit(oldp+69722,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+69723,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout));
    bufp->fullBit(oldp+69724,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69725,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69726,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69727,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69728,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout))));
    bufp->fullBit(oldp+69729,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+69730,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout));
    bufp->fullBit(oldp+69731,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69732,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69733,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69734,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69735,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout))));
    bufp->fullBit(oldp+69736,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+69737,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout));
    bufp->fullBit(oldp+69738,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69739,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69740,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69741,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69742,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout))));
    bufp->fullBit(oldp+69743,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2dU)))))));
    bufp->fullBit(oldp+69744,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout));
    bufp->fullBit(oldp+69745,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69746,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69747,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69748,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69749,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout))));
    bufp->fullBit(oldp+69750,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2eU)))))));
    bufp->fullBit(oldp+69751,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout));
    bufp->fullBit(oldp+69752,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69753,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69754,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69755,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69756,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout))));
    bufp->fullBit(oldp+69757,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2fU)))))));
    bufp->fullBit(oldp+69758,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout));
    bufp->fullBit(oldp+69759,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69760,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69761,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69762,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69763,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout))));
    bufp->fullBit(oldp+69764,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x30U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x30U)))))));
    bufp->fullBit(oldp+69765,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout));
    bufp->fullBit(oldp+69766,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69767,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69768,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69769,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69770,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout))));
    bufp->fullBit(oldp+69771,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x31U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x31U)))))));
    bufp->fullBit(oldp+69772,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout));
    bufp->fullBit(oldp+69773,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69774,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69775,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69776,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69777,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout))));
    bufp->fullBit(oldp+69778,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 5U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+69779,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout));
    bufp->fullBit(oldp+69780,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69781,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69782,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69783,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69784,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout))));
    bufp->fullBit(oldp+69785,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x32U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x32U)))))));
    bufp->fullBit(oldp+69786,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout));
    bufp->fullBit(oldp+69787,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69788,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69789,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69790,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69791,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout))));
    bufp->fullBit(oldp+69792,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x33U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x33U)))))));
    bufp->fullBit(oldp+69793,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout));
    bufp->fullBit(oldp+69794,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69795,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69796,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69797,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69798,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout))));
    bufp->fullBit(oldp+69799,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x34U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x34U)))))));
    bufp->fullBit(oldp+69800,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout));
    bufp->fullBit(oldp+69801,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69802,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69803,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69804,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69805,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout))));
    bufp->fullBit(oldp+69806,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x35U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x35U)))))));
    bufp->fullBit(oldp+69807,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout));
    bufp->fullBit(oldp+69808,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69809,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69810,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69811,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69812,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout))));
    bufp->fullBit(oldp+69813,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x36U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x36U)))))));
    bufp->fullBit(oldp+69814,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout));
    bufp->fullBit(oldp+69815,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69816,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69817,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69818,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69819,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout))));
    bufp->fullBit(oldp+69820,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x37U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69821,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                      & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                                 >> 0x37U))) 
                                     | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                        & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69822,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69823,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69824,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69825,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69826,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout))));
    bufp->fullBit(oldp+69827,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 6U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+69828,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout));
    bufp->fullBit(oldp+69829,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69830,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69831,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69832,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69833,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout))));
    bufp->fullBit(oldp+69834,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 7U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+69835,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout));
    bufp->fullBit(oldp+69836,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69837,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69838,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69839,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69840,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout))));
    bufp->fullBit(oldp+69841,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 8U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+69842,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout));
    bufp->fullBit(oldp+69843,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69844,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69845,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69846,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69847,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout))));
    bufp->fullBit(oldp+69848,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 9U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 9U)))))));
    __Vtemp_h996a43c2__0[0U] = (IData)(vlSelf->__VdfgTmp_h88c30338__0);
    __Vtemp_h996a43c2__0[1U] = (((IData)(vlSelf->__VdfgTmp_h2df6a413__0) 
                                 << 0x18U) | (IData)(
                                                     (vlSelf->__VdfgTmp_h88c30338__0 
                                                      >> 0x20U)));
    __Vtemp_h996a43c2__0[2U] = (((IData)(vlSelf->__VdfgTmp_h2df6a413__0) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h2df6a413__0 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h996a43c2__0[3U] = (((IData)(vlSelf->__VdfgTmp_h51cce765__0) 
                                 << 0x10U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h2df6a413__0 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h996a43c2__0[4U] = (((IData)(vlSelf->__VdfgTmp_h51cce765__0) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h51cce765__0 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h996a43c2__0[5U] = (((IData)(vlSelf->__VdfgTmp_h82782eba__0) 
                                 << 8U) | ((IData)(
                                                   (vlSelf->__VdfgTmp_h51cce765__0 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h996a43c2__0[6U] = (((IData)(vlSelf->__VdfgTmp_h82782eba__0) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->__VdfgTmp_h82782eba__0 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+69849,(__Vtemp_h996a43c2__0),224);
    bufp->fullQData(oldp+69856,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),59);
    bufp->fullQData(oldp+69858,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),59);
    bufp->fullWData(oldp+69860,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),90);
    bufp->fullWData(oldp+69863,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),90);
    bufp->fullWData(oldp+69866,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),90);
    bufp->fullWData(oldp+69869,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),90);
    bufp->fullWData(oldp+69872,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),90);
    bufp->fullWData(oldp+69875,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),90);
    bufp->fullCData(oldp+69878,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69879,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullWData(oldp+69891,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullWData(oldp+69894,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),90);
    bufp->fullWData(oldp+69897,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullCData(oldp+69900,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+69901,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),90);
    bufp->fullIData(oldp+69904,(((0xffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                         >> 0x1cU)) 
                                                << 1U)) 
                                 | (0U != (0x7ffffffU 
                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))),28);
    bufp->fullQData(oldp+69905,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted),55);
    bufp->fullQData(oldp+69907,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->fullQData(oldp+69909,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                        << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    bufp->fullBit(oldp+69911,(vlSelf->clock));
    bufp->fullBit(oldp+69912,(vlSelf->reset));
    bufp->fullIData(oldp+69913,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+69914,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+69915,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+69916,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+69917,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+69918,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+69919,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+69920,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+69921,(vlSelf->io_op),3);
    bufp->fullIData(oldp+69922,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+69923,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+69924,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+69925,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+69926,(vlSelf->io_posit_dot_o),32);
    bufp->fullCData(oldp+69927,(((8U & (vlSelf->io_posit_i1_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i1_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i1_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i1_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+69928,(((8U & (vlSelf->io_posit_i2_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i2_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i2_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i2_0 
                                          >> 0x1fU))))),4);
    bufp->fullIData(oldp+69929,((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
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
    bufp->fullWData(oldp+69930,(__Vtemp_h8514ab4c__0),120);
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
    bufp->fullWData(oldp+69934,(__Vtemp_hde6aa058__0),120);
    bufp->fullCData(oldp+69938,(((8U & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
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
    bufp->fullIData(oldp+69939,(((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
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
    __Vtemp_h9f418512__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                           ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                           : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                         << 0x1eU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                            ? vlSelf->__VdfgTmp_heaab0c13__0
                                                            : vlSelf->__VdfgTmp_hd0a58f7c__0)))));
    __Vtemp_h9f418512__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                   ? vlSelf->__VdfgTmp_h7f330068__0
                                   : vlSelf->__VdfgTmp_h3061ec22__0) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                                          ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                                          : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                           ? vlSelf->__VdfgTmp_heaab0c13__0
                                                                           : vlSelf->__VdfgTmp_hd0a58f7c__0)))) 
                                                      >> 0x20U)));
    __Vtemp_h9f418512__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                   ? vlSelf->__VdfgTmp_hf843bb44__0
                                   : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                ? vlSelf->__VdfgTmp_h7f330068__0
                                                : vlSelf->__VdfgTmp_h3061ec22__0) 
                                              >> 4U));
    __Vtemp_h9f418512__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                  ? vlSelf->__VdfgTmp_hf843bb44__0
                                  : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                >> 6U);
    bufp->fullWData(oldp+69940,(__Vtemp_h9f418512__0),120);
    bufp->fullCData(oldp+69944,((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0))))),4);
    bufp->fullCData(oldp+69945,(((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
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
    bufp->fullWData(oldp+69946,(__Vtemp_h24f352fb__0),128);
    bufp->fullIData(oldp+69950,(((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+69951,(__Vtemp_h8a85a4ef__0),112);
    bufp->fullIData(oldp+69955,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+69956,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+69957,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+69958,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+69959,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69960,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69961,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69962,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69963,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69964,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69965,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69966,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+69967,(__Vtemp_h95b92b9c__0),128);
    bufp->fullIData(oldp+69971,(((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+69972,(__Vtemp_h8053b372__0),112);
    bufp->fullBit(oldp+69976,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69977,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69978,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69979,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69980,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69981,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69982,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69983,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+69984,(((((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
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
    __Vtemp_h9662e807__0[1U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x18U) | (IData)(
                                                     (((QData)((IData)(
                                                                       (0x1fffffffU 
                                                                        & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                       << 0x1bU) 
                                                      >> 0x20U)));
    __Vtemp_h9662e807__0[2U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h60a624ad__0[3U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h60a624ad__0[4U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_he25792b8__0[0U] = (IData)(((QData)((IData)(
                                                        (0x1fffffffU 
                                                         & (IData)(
                                                                   (0x1fffffffULL 
                                                                    & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                        + 
                                                                        (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                       >> 0x1cU)))))) 
                                        << 0x1bU));
    __Vtemp_he25792b8__0[1U] = __Vtemp_h9662e807__0[1U];
    __Vtemp_he25792b8__0[2U] = __Vtemp_h9662e807__0[2U];
    __Vtemp_he25792b8__0[3U] = __Vtemp_h60a624ad__0[3U];
    __Vtemp_he25792b8__0[4U] = __Vtemp_h60a624ad__0[4U];
    __Vtemp_he25792b8__0[5U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_he25792b8__0[6U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+69985,(__Vtemp_he25792b8__0),224);
    __Vtemp_h19e34e8a__0[0U] = (IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN)
                                         ? 0ULL : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                    ? 0ULL
                                                    : 
                                                   (0xffffffffffffffULL 
                                                    & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                       + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o)))));
    __Vtemp_h19e34e8a__0[1U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 << 0x18U) | (IData)(
                                                     (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN)
                                                        ? 0ULL
                                                        : 
                                                       ((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                      >> 0x20U)));
    __Vtemp_h19e34e8a__0[2U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 >> 8U) | ((IData)(
                                                   (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                                      ? 0ULL
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                       ? 0ULL
                                                       : 
                                                      (0xffffffffffffffULL 
                                                       & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                          + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h19e34e8a__0[3U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 << 0x10U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                                         ? 0ULL
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h19e34e8a__0[4U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 >> 0x10U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                                         ? 0ULL
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h19e34e8a__0[5U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 << 8U) | ((IData)(
                                                   (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                                      ? 0ULL
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                       ? 0ULL
                                                       : 
                                                      (0xffffffffffffffULL 
                                                       & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                          + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h19e34e8a__0[6U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                           ? 0ULL : 
                                          ((0x100U 
                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                            ? 0ULL : 
                                           (0xffffffffffffffULL 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                               + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))))) 
                                 >> 0x18U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                                         ? 0ULL
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+69992,(__Vtemp_h19e34e8a__0),224);
    bufp->fullIData(oldp+69999,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 0x18U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))))),32);
    bufp->fullSData(oldp+70000,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70001,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o),8);
    bufp->fullCData(oldp+70002,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->fullCData(oldp+70003,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->fullSData(oldp+70004,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70005,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o),8);
    bufp->fullCData(oldp+70006,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->fullCData(oldp+70007,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->fullIData(oldp+70008,((((IData)(vlSelf->__VdfgTmp_h7e5815f2__0) 
                                  << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h27ab1e15__0) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__VdfgTmp_haff49a00__0) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__VdfgTmp_he0410172__0))))),32);
    __Vtemp_h3443ac07__0[0U] = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                         ? 0ULL : (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
    __Vtemp_h3443ac07__0[1U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x18U) | (IData)(
                                                     (((0x100U 
                                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                        ? 0ULL
                                                        : 
                                                       (0xffffffffffffffULL 
                                                        & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                           + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                      >> 0x20U)));
    __Vtemp_h3443ac07__0[2U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h3443ac07__0[3U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h3443ac07__0[4U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h3443ac07__0[5U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h3443ac07__0[6U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x18U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+70009,(__Vtemp_h3443ac07__0),224);
    bufp->fullSData(oldp+70016,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum),9);
    bufp->fullSData(oldp+70017,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1),9);
    bufp->fullSData(oldp+70018,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2),9);
    bufp->fullSData(oldp+70019,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3),9);
    bufp->fullCData(oldp+70020,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign),4);
    bufp->fullIData(oldp+70021,(((5U == (IData)(vlSelf->io_op))
                                  ? 0U : (((IData)(vlSelf->__VdfgTmp_hfa1a2186__0) 
                                           << 0x18U) 
                                          | (((IData)(vlSelf->__VdfgTmp_hf3b4c711__0) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->__VdfgTmp_hc4e682b5__0) 
                                                 << 8U) 
                                                | (IData)(vlSelf->__VdfgTmp_h5c9bd195__0)))))),32);
    __Vtemp_h3364e47b__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_habc61126__0)) 
                                         << 0x1cU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_hf029e323__0))));
    __Vtemp_h3364e47b__0[1U] = ((vlSelf->__VdfgTmp_h2a3c4c68__0 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->__VdfgTmp_habc61126__0)) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(vlSelf->__VdfgTmp_hf029e323__0))) 
                                                      >> 0x20U)));
    __Vtemp_h3364e47b__0[2U] = ((vlSelf->__VdfgTmp_h77677ba4__0 
                                 << 0x14U) | (vlSelf->__VdfgTmp_h2a3c4c68__0 
                                              >> 8U));
    __Vtemp_h3364e47b__0[3U] = (vlSelf->__VdfgTmp_h77677ba4__0 
                                >> 0xcU);
    bufp->fullWData(oldp+70022,(__Vtemp_h3364e47b__0),112);
    __Vtemp_h4b65947b__0[0U] = ((0x8000000U & vlSelf->__VdfgTmp_hf029e323__0)
                                 ? ((1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                 : 0U);
    __Vtemp_h4b65947b__0[1U] = ((0x8000000U & vlSelf->__VdfgTmp_habc61126__0)
                                 ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                     ? (0x80000000U 
                                        | (0x7fffffffU 
                                           & ((IData)(1U) 
                                              + (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                 : 0U);
    __Vtemp_h4b65947b__0[2U] = (IData)((((QData)((IData)(
                                                         ((0x8000000U 
                                                           & vlSelf->__VdfgTmp_h77677ba4__0)
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
                                                            & vlSelf->__VdfgTmp_h2a3c4c68__0)
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
    __Vtemp_h4b65947b__0[3U] = (IData)(((((QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->__VdfgTmp_h77677ba4__0)
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
                                                             & vlSelf->__VdfgTmp_h2a3c4c68__0)
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
    bufp->fullWData(oldp+70026,(__Vtemp_h4b65947b__0),128);
    bufp->fullCData(oldp+70030,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+70031,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->fullCData(oldp+70032,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->fullCData(oldp+70033,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->fullCData(oldp+70034,(((5U == (IData)(vlSelf->io_op))
                                  ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                  : 0U)),8);
    bufp->fullIData(oldp+70035,(((5U == (IData)(vlSelf->io_op))
                                  ? ((0xffffffeU & 
                                      ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                >> 0x1cU)) 
                                       << 1U)) | (0U 
                                                  != 
                                                  (0x7ffffffU 
                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                  : 0U)),28);
    bufp->fullIData(oldp+70036,((((0U == ((5U == (IData)(vlSelf->io_op))
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
                                  : (0x7fffffffU & 
                                     (((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                                        << 2U) | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                  >> 0x1eU)) 
                                      + (1U & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                >> 0x1dU) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x5fffffffU 
                                                           & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U]))))))))),32);
    if ((1U == (IData)(vlSelf->io_op))) {
        __Vtemp_he6fac87a__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                               ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                               : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                ? vlSelf->__VdfgTmp_heaab0c13__0
                                                                : vlSelf->__VdfgTmp_hd0a58f7c__0)))));
        __Vtemp_he6fac87a__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                       ? vlSelf->__VdfgTmp_h7f330068__0
                                       : vlSelf->__VdfgTmp_h3061ec22__0) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                                              ? vlSelf->__VdfgTmp_h3a719a5d__0
                                                                              : vlSelf->__VdfgTmp_hf5286b6e__0))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                               ? vlSelf->__VdfgTmp_heaab0c13__0
                                                                               : vlSelf->__VdfgTmp_hd0a58f7c__0)))) 
                                                          >> 0x20U)));
        __Vtemp_he6fac87a__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                       ? vlSelf->__VdfgTmp_hf843bb44__0
                                       : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                    ? vlSelf->__VdfgTmp_h7f330068__0
                                                    : vlSelf->__VdfgTmp_h3061ec22__0) 
                                                  >> 4U));
        __Vtemp_he6fac87a__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                      ? vlSelf->__VdfgTmp_hf843bb44__0
                                      : vlSelf->__VdfgTmp_hdf2eeff5__0) 
                                    >> 6U);
    } else {
        __Vtemp_he6fac87a__0[0U] = 0U;
        __Vtemp_he6fac87a__0[1U] = 0U;
        __Vtemp_he6fac87a__0[2U] = 0U;
        __Vtemp_he6fac87a__0[3U] = 0U;
    }
    bufp->fullWData(oldp+70037,(__Vtemp_he6fac87a__0),120);
    bufp->fullIData(oldp+70041,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+70042,(__Vtemp_hdf4c90c7__0),112);
    bufp->fullBit(oldp+70046,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70047,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70048,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70049,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70050,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70051,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70052,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70053,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h9662e807__1[1U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x18U) | (IData)(
                                                     (((QData)((IData)(
                                                                       (0x1fffffffU 
                                                                        & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                       << 0x1bU) 
                                                      >> 0x20U)));
    __Vtemp_h9662e807__1[2U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h446d05e0__0[3U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h446d05e0__0[4U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x10U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h0a8eb395__0[5U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 << 8U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                     << 0x1bU) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h0a8eb395__0[6U] = (((IData)(((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (IData)(
                                                                     (0x1fffffffULL 
                                                                      & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                          + 
                                                                          (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                         >> 0x1cU)))))) 
                                          << 0x1bU)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & (IData)(
                                                                                (0x1fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                                >> 0x1cU)))))) 
                                                        << 0x1bU) 
                                                       >> 0x20U)) 
                                              << 8U));
    if (vlSelf->__VdfgTmp_hbc178730__0) {
        __Vtemp_h3e09f0ec__0[0U] = 0U;
        __Vtemp_h3e09f0ec__0[1U] = 0U;
        __Vtemp_h3e09f0ec__0[2U] = 0U;
        __Vtemp_h3e09f0ec__0[3U] = 0U;
        __Vtemp_h3e09f0ec__0[4U] = 0U;
        __Vtemp_h3e09f0ec__0[5U] = 0U;
        __Vtemp_h3e09f0ec__0[6U] = 0U;
    } else {
        __Vtemp_h3e09f0ec__0[0U] = (IData)(((QData)((IData)(
                                                            (0x1fffffffU 
                                                             & (IData)(
                                                                       (0x1fffffffULL 
                                                                        & (((((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[1U])) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_sum_o[0U]))) 
                                                                            + 
                                                                            (((QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[1U])) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__compressor.__PVT__io_carry_o[0U])))) 
                                                                           >> 0x1cU)))))) 
                                            << 0x1bU));
        __Vtemp_h3e09f0ec__0[1U] = __Vtemp_h9662e807__1[1U];
        __Vtemp_h3e09f0ec__0[2U] = __Vtemp_h9662e807__1[2U];
        __Vtemp_h3e09f0ec__0[3U] = __Vtemp_h446d05e0__0[3U];
        __Vtemp_h3e09f0ec__0[4U] = __Vtemp_h446d05e0__0[4U];
        __Vtemp_h3e09f0ec__0[5U] = __Vtemp_h0a8eb395__0[5U];
        __Vtemp_h3e09f0ec__0[6U] = __Vtemp_h0a8eb395__0[6U];
    }
    bufp->fullWData(oldp+70054,(__Vtemp_h3e09f0ec__0),224);
    bufp->fullQData(oldp+70061,((((QData)((IData)((
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
    bufp->fullWData(oldp+70063,(__Vtemp_h52e32d61__0),112);
    bufp->fullBit(oldp+70067,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70068,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70070,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70071,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70073,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70074,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70076,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70077,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullSData(oldp+70079,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
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
    bufp->fullCData(oldp+70080,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? (IData)(vlSelf->__VdfgTmp_h858857fc__0)
                                  : 0U)),6);
    bufp->fullBit(oldp+70081,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70082,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    if (vlSelf->__VdfgTmp_hc2b4f641__0) {
        __Vtemp_hba7b99a0__0[0U] = 0U;
        __Vtemp_hba7b99a0__0[1U] = 0U;
        __Vtemp_hba7b99a0__0[2U] = 0U;
        __Vtemp_hba7b99a0__0[3U] = 0U;
        __Vtemp_hba7b99a0__0[4U] = 0U;
        __Vtemp_hba7b99a0__0[5U] = 0U;
        __Vtemp_hba7b99a0__0[6U] = 0U;
    } else {
        __Vtemp_hba7b99a0__0[0U] = (IData)(((0x100U 
                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                             ? 0ULL
                                             : (0xffffffffffffffULL 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                   + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
        __Vtemp_hba7b99a0__0[1U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     << 0x18U) | (IData)(
                                                         (((0x100U 
                                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                            ? 0ULL
                                                            : 
                                                           (0xffffffffffffffULL 
                                                            & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                               + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                          >> 0x20U)));
        __Vtemp_hba7b99a0__0[2U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 8U) | ((IData)(
                                                       (((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                        >> 0x20U)) 
                                               << 0x18U));
        __Vtemp_hba7b99a0__0[3U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     << 0x10U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  >> 8U));
        __Vtemp_hba7b99a0__0[4U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x10U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hba7b99a0__0[5U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     << 8U) | ((IData)(
                                                       (((0x100U 
                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                          ? 0ULL
                                                          : 
                                                         (0xffffffffffffffULL 
                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                             + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                        >> 0x20U)) 
                                               >> 0x10U));
        __Vtemp_hba7b99a0__0[6U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x18U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    }
    bufp->fullWData(oldp+70084,(__Vtemp_hba7b99a0__0),224);
    bufp->fullQData(oldp+70091,((((QData)((IData)((
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
    bufp->fullWData(oldp+70093,(__Vtemp_hf67a7711__0),112);
    bufp->fullQData(oldp+70097,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i),56);
    bufp->fullBit(oldp+70099,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70100,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70102,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70104,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i),56);
    bufp->fullBit(oldp+70106,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70107,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70109,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70111,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i),56);
    bufp->fullBit(oldp+70113,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70114,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70116,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70118,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i),56);
    bufp->fullBit(oldp+70120,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70121,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70123,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),56);
    if (vlSelf->__VdfgTmp_h1f706c65__0) {
        __Vtemp_h69367da8__0[0U] = 0U;
        __Vtemp_h69367da8__0[1U] = 0U;
        __Vtemp_h69367da8__0[2U] = 0U;
        __Vtemp_h69367da8__0[3U] = 0U;
    } else {
        __Vtemp_h69367da8__0[0U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                               ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                               : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                             << 0x1eU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                                : vlSelf->__VdfgTmp_heaab0c13__0)))));
        __Vtemp_h69367da8__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                       ? vlSelf->__VdfgTmp_h3061ec22__0
                                       : vlSelf->__VdfgTmp_h7f330068__0) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(
                                                                            ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                                              ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                                              : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                               ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                                               : vlSelf->__VdfgTmp_heaab0c13__0)))) 
                                                          >> 0x20U)));
        __Vtemp_h69367da8__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                       ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                       : vlSelf->__VdfgTmp_hf843bb44__0) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                    ? vlSelf->__VdfgTmp_h3061ec22__0
                                                    : vlSelf->__VdfgTmp_h7f330068__0) 
                                                  >> 4U));
        __Vtemp_h69367da8__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                      ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                      : vlSelf->__VdfgTmp_hf843bb44__0) 
                                    >> 6U);
    }
    bufp->fullWData(oldp+70125,(__Vtemp_h69367da8__0),120);
    bufp->fullIData(oldp+70129,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+70130,(__Vtemp_hd280c543__0),112);
    bufp->fullBit(oldp+70134,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70135,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70136,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70137,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70138,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70139,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70140,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70141,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h66381fc9__0[0U] = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                         ? 0ULL : (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
    __Vtemp_h66381fc9__0[1U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x18U) | (IData)(
                                                     (((0x100U 
                                                        & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                        ? 0ULL
                                                        : 
                                                       (0xffffffffffffffULL 
                                                        & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                           + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                      >> 0x20U)));
    __Vtemp_h66381fc9__0[2U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h66381fc9__0[3U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h66381fc9__0[4U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x10U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h66381fc9__0[5U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 << 8U) | ((IData)(
                                                   (((0x100U 
                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                      ? 0ULL
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                         + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h66381fc9__0[6U] = (((IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                           ? 0ULL : 
                                          (0xffffffffffffffULL 
                                           & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                              + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                 >> 0x18U) | ((IData)(
                                                      (((0x100U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                                         ? 0ULL
                                                         : 
                                                        (0xffffffffffffffULL 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                            + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->fullWData(oldp+70142,(__Vtemp_h66381fc9__0),224);
    bufp->fullCData(oldp+70149,(((8U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
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
    bufp->fullIData(oldp+70150,(((((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_3 
                                              >> 0x1eU)) 
                                          | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)))
                                    ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1)
                                    : ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1))) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((1U 
                                                     & ((~ 
                                                         (vlSelf->PvuTop__DOT__add__DOT__sum_2 
                                                          >> 0x1eU)) 
                                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)))
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
                                                           | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)))
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
                                                            | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                                         ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1)
                                                         : 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1)))))))),32);
    __Vtemp_h1e731a51__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                           ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                           : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                         << 0x1eU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                            ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                            : vlSelf->__VdfgTmp_heaab0c13__0)))));
    __Vtemp_h1e731a51__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                   ? vlSelf->__VdfgTmp_h3061ec22__0
                                   : vlSelf->__VdfgTmp_h7f330068__0) 
                                 << 0x1cU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                                          ? vlSelf->__VdfgTmp_hf5286b6e__0
                                                                          : vlSelf->__VdfgTmp_h3a719a5d__0))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                                                           ? vlSelf->__VdfgTmp_hd0a58f7c__0
                                                                           : vlSelf->__VdfgTmp_heaab0c13__0)))) 
                                                      >> 0x20U)));
    __Vtemp_h1e731a51__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                   ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                   : vlSelf->__VdfgTmp_hf843bb44__0) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                ? vlSelf->__VdfgTmp_h3061ec22__0
                                                : vlSelf->__VdfgTmp_h7f330068__0) 
                                              >> 4U));
    __Vtemp_h1e731a51__0[3U] = (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                  ? vlSelf->__VdfgTmp_hdf2eeff5__0
                                  : vlSelf->__VdfgTmp_hf843bb44__0) 
                                >> 6U);
    bufp->fullWData(oldp+70151,(__Vtemp_h1e731a51__0),120);
    bufp->fullCData(oldp+70155,((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0))))),4);
    bufp->fullCData(oldp+70156,(((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
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
    bufp->fullIData(oldp+70157,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a),28);
    bufp->fullQData(oldp+70158,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70160,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a),28);
    bufp->fullQData(oldp+70161,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70163,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a),28);
    bufp->fullQData(oldp+70164,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70166,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a),28);
    bufp->fullQData(oldp+70167,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70169,(0x1fU),32);
    bufp->fullBit(oldp+70170,(1U));
    bufp->fullIData(oldp+70171,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+70172,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+70177,(0U));
    bufp->fullIData(oldp+70178,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+70179,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+70184,(0x38U),32);
    bufp->fullIData(oldp+70185,(6U),32);
    bufp->fullWData(oldp+70186,(VPvuTop__ConstPool__CONST_hc4a98b6e_0),336);
    bufp->fullIData(oldp+70197,(0x3bU),32);
    bufp->fullWData(oldp+70198,(VPvuTop__ConstPool__CONST_h55404713_0),354);
    bufp->fullBit(oldp+70210,(1U));
}
