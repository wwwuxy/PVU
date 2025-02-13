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
    bufp->fullBit(oldp+68894,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+68895,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 4U))));
    bufp->fullBit(oldp+68896,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout))));
    bufp->fullBit(oldp+68897,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_51_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+68898,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout));
    bufp->fullBit(oldp+68899,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68900,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 5U))));
    bufp->fullBit(oldp+68901,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+68902,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 5U))));
    bufp->fullBit(oldp+68903,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout))));
    bufp->fullBit(oldp+68904,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_52_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+68905,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout));
    bufp->fullBit(oldp+68906,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68907,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68908,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68909,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 6U))));
    bufp->fullBit(oldp+68910,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout))));
    bufp->fullBit(oldp+68911,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_53_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+68912,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout));
    bufp->fullBit(oldp+68913,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+68914,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 7U))));
    bufp->fullBit(oldp+68915,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+68916,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 7U))));
    bufp->fullBit(oldp+68917,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout))));
    bufp->fullBit(oldp+68918,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_54_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+68919,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout));
    bufp->fullBit(oldp+68920,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68921,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 8U))));
    bufp->fullBit(oldp+68922,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+68923,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 8U))));
    bufp->fullBit(oldp+68924,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout))));
    bufp->fullBit(oldp+68925,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_55_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_56__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+68926,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout));
    bufp->fullBit(oldp+68927,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68928,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 9U))));
    bufp->fullBit(oldp+68929,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+68930,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 9U))));
    bufp->fullBit(oldp+68931,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout))));
    bufp->fullBit(oldp+68932,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_56_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_57__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+68933,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout));
    bufp->fullBit(oldp+68934,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68935,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68936,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+68937,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+68938,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout))));
    bufp->fullBit(oldp+68939,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_57_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_58__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+68940,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout));
    bufp->fullBit(oldp+68941,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68942,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68943,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+68944,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+68945,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout))));
    bufp->fullBit(oldp+68946,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_58_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_59__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+68947,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout));
    bufp->fullBit(oldp+68948,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68949,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68950,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 6U))));
    bufp->fullBit(oldp+68951,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+68952,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout))));
    bufp->fullBit(oldp+68953,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_5_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+68954,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout));
    bufp->fullBit(oldp+68955,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68956,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68957,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+68958,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+68959,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout))));
    bufp->fullBit(oldp+68960,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_59_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_60__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+68961,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout));
    bufp->fullBit(oldp+68962,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68963,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68964,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+68965,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+68966,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout))));
    bufp->fullBit(oldp+68967,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_60_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_61__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+68968,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout));
    bufp->fullBit(oldp+68969,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68970,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68971,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+68972,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+68973,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout))));
    bufp->fullBit(oldp+68974,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_61_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_62__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+68975,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout));
    bufp->fullBit(oldp+68976,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68977,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68978,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+68979,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+68980,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout))));
    bufp->fullBit(oldp+68981,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_62_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_63__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+68982,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout));
    bufp->fullBit(oldp+68983,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U])));
    bufp->fullBit(oldp+68984,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68985,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U])));
    bufp->fullBit(oldp+68986,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+68987,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout))));
    bufp->fullBit(oldp+68988,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_63_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_64__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+68989,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout));
    bufp->fullBit(oldp+68990,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68991,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68992,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 1U))));
    bufp->fullBit(oldp+68993,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+68994,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout))));
    bufp->fullBit(oldp+68995,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_64_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_65__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+68996,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout));
    bufp->fullBit(oldp+68997,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 2U))));
    bufp->fullBit(oldp+68998,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+68999,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69000,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69001,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout))));
    bufp->fullBit(oldp+69002,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_65_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_66__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69003,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout));
    bufp->fullBit(oldp+69004,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69005,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69006,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69007,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69008,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout))));
    bufp->fullBit(oldp+69009,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_66_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_67__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x13U))))));
    bufp->fullBit(oldp+69010,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout));
    bufp->fullBit(oldp+69011,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69012,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69013,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69014,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69015,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout))));
    bufp->fullBit(oldp+69016,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_67_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x14U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_68__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x14U))))));
    bufp->fullBit(oldp+69017,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout));
    bufp->fullBit(oldp+69018,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69019,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69020,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69021,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69022,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout))));
    bufp->fullBit(oldp+69023,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_68_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x15U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_69__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x15U))))));
    bufp->fullBit(oldp+69024,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout));
    bufp->fullBit(oldp+69025,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69026,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69027,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69028,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69029,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout))));
    bufp->fullBit(oldp+69030,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_6_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69031,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout));
    bufp->fullBit(oldp+69032,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69033,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69034,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69035,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69036,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout))));
    bufp->fullBit(oldp+69037,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_69_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x16U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_70__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x16U))))));
    bufp->fullBit(oldp+69038,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout));
    bufp->fullBit(oldp+69039,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69040,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69041,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69042,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69043,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout))));
    bufp->fullBit(oldp+69044,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_70_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x17U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_71__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x17U))))));
    bufp->fullBit(oldp+69045,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout));
    bufp->fullBit(oldp+69046,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69047,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69048,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69049,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69050,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout))));
    bufp->fullBit(oldp+69051,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_71_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_72__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69052,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout));
    bufp->fullBit(oldp+69053,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69054,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69055,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69056,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69057,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout))));
    bufp->fullBit(oldp+69058,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_72_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_73__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69059,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout));
    bufp->fullBit(oldp+69060,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69061,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69062,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69063,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69064,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout))));
    bufp->fullBit(oldp+69065,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_73_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1aU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_74__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1aU))))));
    bufp->fullBit(oldp+69066,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout));
    bufp->fullBit(oldp+69067,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69068,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69069,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69070,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69071,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout))));
    bufp->fullBit(oldp+69072,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_74_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1bU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_75__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1bU))))));
    bufp->fullBit(oldp+69073,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout));
    bufp->fullBit(oldp+69074,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69075,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69076,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69077,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69078,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout))));
    bufp->fullBit(oldp+69079,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_75_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_76__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1cU))))));
    bufp->fullBit(oldp+69080,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout));
    bufp->fullBit(oldp+69081,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69082,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69083,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69084,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69085,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout))));
    bufp->fullBit(oldp+69086,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_76_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1dU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_77__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1dU))))));
    bufp->fullBit(oldp+69087,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout));
    bufp->fullBit(oldp+69088,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69089,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69090,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69091,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69092,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout))));
    bufp->fullBit(oldp+69093,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_77_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1eU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_78__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1eU))))));
    bufp->fullBit(oldp+69094,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout));
    bufp->fullBit(oldp+69095,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69096,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69097,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69098,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69099,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout))));
    bufp->fullBit(oldp+69100,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_78_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                             >> 0x1fU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_79__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+69101,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout));
    bufp->fullBit(oldp+69102,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69103,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69104,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69105,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69106,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout))));
    bufp->fullBit(oldp+69107,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_7_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x18U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x18U))))));
    bufp->fullBit(oldp+69108,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout));
    bufp->fullBit(oldp+69109,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69110,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])));
    bufp->fullBit(oldp+69111,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69112,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])));
    bufp->fullBit(oldp+69113,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout))));
    bufp->fullBit(oldp+69114,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_79_io_cout)) 
                                     | (((~ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU]) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_80__DOT____VdfgTmp_h31758f64__0)) 
                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU])))));
    bufp->fullBit(oldp+69115,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout));
    bufp->fullBit(oldp+69116,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69117,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69118,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69119,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69120,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout))));
    bufp->fullBit(oldp+69121,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_80_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 1U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_81__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 1U))))));
    bufp->fullBit(oldp+69122,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout));
    bufp->fullBit(oldp+69123,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69124,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69125,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69126,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69127,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout))));
    bufp->fullBit(oldp+69128,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_81_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 2U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_82__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 2U))))));
    bufp->fullBit(oldp+69129,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout));
    bufp->fullBit(oldp+69130,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69131,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69132,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69133,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69134,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout))));
    bufp->fullBit(oldp+69135,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_82_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 3U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_83__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 3U))))));
    bufp->fullBit(oldp+69136,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout));
    bufp->fullBit(oldp+69137,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69138,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 4U))));
    bufp->fullBit(oldp+69139,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+69140,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 4U))));
    bufp->fullBit(oldp+69141,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout))));
    bufp->fullBit(oldp+69142,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_83_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 4U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_84__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 4U))))));
    bufp->fullBit(oldp+69143,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout));
    bufp->fullBit(oldp+69144,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69145,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 5U))));
    bufp->fullBit(oldp+69146,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+69147,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 5U))));
    bufp->fullBit(oldp+69148,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout))));
    bufp->fullBit(oldp+69149,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_84_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 5U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_85__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 5U))))));
    bufp->fullBit(oldp+69150,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout));
    bufp->fullBit(oldp+69151,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69152,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 6U))));
    bufp->fullBit(oldp+69153,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+69154,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 6U))));
    bufp->fullBit(oldp+69155,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout))));
    bufp->fullBit(oldp+69156,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_85_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 6U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_86__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 6U))))));
    bufp->fullBit(oldp+69157,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout));
    bufp->fullBit(oldp+69158,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69159,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 7U))));
    bufp->fullBit(oldp+69160,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+69161,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 7U))));
    bufp->fullBit(oldp+69162,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout))));
    bufp->fullBit(oldp+69163,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_86_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 7U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_87__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 7U))))));
    bufp->fullBit(oldp+69164,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout));
    bufp->fullBit(oldp+69165,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69166,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 8U))));
    bufp->fullBit(oldp+69167,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+69168,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 8U))));
    bufp->fullBit(oldp+69169,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout))));
    bufp->fullBit(oldp+69170,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_87_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 8U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_88__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 8U))))));
    bufp->fullBit(oldp+69171,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout));
    bufp->fullBit(oldp+69172,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69173,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69174,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69175,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 9U))));
    bufp->fullBit(oldp+69176,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout))));
    bufp->fullBit(oldp+69177,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_88_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 9U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_89__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 9U))))));
    bufp->fullBit(oldp+69178,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout));
    bufp->fullBit(oldp+69179,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69180,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69181,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
                                     >> 9U))));
    bufp->fullBit(oldp+69182,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+69183,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout))));
    bufp->fullBit(oldp+69184,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_8_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                             >> 0x19U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                           >> 0x19U))))));
    bufp->fullBit(oldp+69185,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69186,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69187,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+69188,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+69189,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout))));
    bufp->fullBit(oldp+69190,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_89_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xaU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_90__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xaU))))));
    bufp->fullBit(oldp+69191,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout));
    bufp->fullBit(oldp+69192,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69193,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69194,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+69195,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+69196,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout))));
    bufp->fullBit(oldp+69197,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_90_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xbU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_91__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xbU))))));
    bufp->fullBit(oldp+69198,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout));
    bufp->fullBit(oldp+69199,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69200,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69201,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+69202,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+69203,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout))));
    bufp->fullBit(oldp+69204,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_91_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xcU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_92__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xcU))))));
    bufp->fullBit(oldp+69205,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout));
    bufp->fullBit(oldp+69206,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69207,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69208,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+69209,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+69210,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout))));
    bufp->fullBit(oldp+69211,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_92_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xdU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_93__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xdU))))));
    bufp->fullBit(oldp+69212,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout));
    bufp->fullBit(oldp+69213,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69214,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69215,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+69216,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+69217,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout))));
    bufp->fullBit(oldp+69218,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_93_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xeU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_94__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xeU))))));
    bufp->fullBit(oldp+69219,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout));
    bufp->fullBit(oldp+69220,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69221,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69222,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+69223,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+69224,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout))));
    bufp->fullBit(oldp+69225,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_94_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0xfU)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_95__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0xfU))))));
    bufp->fullBit(oldp+69226,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout));
    bufp->fullBit(oldp+69227,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U])));
    bufp->fullBit(oldp+69228,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69229,((1U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU])));
    bufp->fullBit(oldp+69230,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+69231,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout))));
    bufp->fullBit(oldp+69232,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_95_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x10U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_96__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x10U))))));
    bufp->fullBit(oldp+69233,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout));
    bufp->fullBit(oldp+69234,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 1U))));
    bufp->fullBit(oldp+69235,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69236,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 1U))));
    bufp->fullBit(oldp+69237,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+69238,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout))));
    bufp->fullBit(oldp+69239,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_96_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x11U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_97__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x11U))))));
    bufp->fullBit(oldp+69240,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout));
    bufp->fullBit(oldp+69241,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 2U))));
    bufp->fullBit(oldp+69242,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69243,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 2U))));
    bufp->fullBit(oldp+69244,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+69245,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout))));
    bufp->fullBit(oldp+69246,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_97_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x12U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_98__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x12U))))));
    bufp->fullBit(oldp+69247,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout));
    bufp->fullBit(oldp+69248,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                     >> 3U))));
    bufp->fullBit(oldp+69249,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69250,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
                                     >> 3U))));
    bufp->fullBit(oldp+69251,((1U & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+69252,(((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout))));
    bufp->fullBit(oldp+69253,((1U & (((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.__PVT___counter_98_io_cout)) 
                                     | (((~ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                             >> 0x13U)) 
                                         ^ (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor.counter_99__DOT____VdfgTmp_h31758f64__0)) 
                                        & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
                                           >> 0x13U))))));
    bufp->fullIData(oldp+69254,(vlSelf->PvuTop__DOT__add__DOT__sum_3),31);
    bufp->fullBit(oldp+69255,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3));
    bufp->fullIData(oldp+69256,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i),30);
    bufp->fullIData(oldp+69257,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69258,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i),30);
    bufp->fullIData(oldp+69259,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69260,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69261,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69273,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),56);
    bufp->fullIData(oldp+69275,(vlSelf->PvuTop__DOT__add__DOT__sum_2),31);
    bufp->fullBit(oldp+69276,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2));
    bufp->fullIData(oldp+69277,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i),30);
    bufp->fullIData(oldp+69278,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69279,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i),30);
    bufp->fullIData(oldp+69280,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69281,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69282,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69294,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),56);
    bufp->fullIData(oldp+69296,(vlSelf->PvuTop__DOT__add__DOT__sum_1),31);
    bufp->fullBit(oldp+69297,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1));
    bufp->fullIData(oldp+69298,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i),30);
    bufp->fullIData(oldp+69299,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69300,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i),30);
    bufp->fullIData(oldp+69301,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69302,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69303,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69315,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),56);
    bufp->fullIData(oldp+69317,(vlSelf->PvuTop__DOT__add__DOT__sum),31);
    bufp->fullBit(oldp+69318,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
    bufp->fullIData(oldp+69319,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+69320,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullIData(oldp+69321,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),30);
    bufp->fullIData(oldp+69322,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
    bufp->fullCData(oldp+69323,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69324,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69336,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69338,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69339,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69344,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69345,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69346,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69351,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    bufp->fullCData(oldp+69352,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69353,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69365,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),56);
    bufp->fullCData(oldp+69367,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69368,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69373,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69374,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69375,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69380,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->fullCData(oldp+69381,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69382,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69394,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),56);
    bufp->fullCData(oldp+69396,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69397,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69402,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69403,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69404,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69409,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->fullCData(oldp+69410,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69411,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69423,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),56);
    bufp->fullCData(oldp+69425,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69426,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69431,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69432,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+69433,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+69438,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullCData(oldp+69439,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69440,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullQData(oldp+69452,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),56);
    bufp->fullCData(oldp+69454,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o),8);
    bufp->fullQData(oldp+69455,((0x3ffffffffffffffULL 
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
    bufp->fullWData(oldp+69457,(__Vtemp_h272d5b42__0),232);
    bufp->fullQData(oldp+69465,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o),58);
    bufp->fullQData(oldp+69467,(vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o),58);
    bufp->fullBit(oldp+69469,((1U & (IData)(vlSelf->__VdfgTmp_h88c30338__0))));
    bufp->fullBit(oldp+69470,((1U & (IData)(vlSelf->__VdfgTmp_h2df6a413__0))));
    bufp->fullBit(oldp+69471,((1U & (IData)(vlSelf->__VdfgTmp_h51cce765__0))));
    bufp->fullBit(oldp+69472,((1U & (IData)(vlSelf->__VdfgTmp_h82782eba__0))));
    bufp->fullBit(oldp+69473,((1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                     ^ (IData)(vlSelf->__VdfgTmp_h82782eba__0)))));
    bufp->fullBit(oldp+69474,((1U & (((~ (IData)(vlSelf->__VdfgTmp_h82782eba__0)) 
                                      ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                     & (IData)(vlSelf->__VdfgTmp_h82782eba__0)))));
    bufp->fullBit(oldp+69475,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout));
    bufp->fullBit(oldp+69476,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69477,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69478,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69479,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 1U)))));
    bufp->fullBit(oldp+69480,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout))));
    bufp->fullBit(oldp+69481,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 1U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+69482,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout));
    bufp->fullBit(oldp+69483,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69484,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69485,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69486,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+69487,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout));
    bufp->fullBit(oldp+69488,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout))));
    bufp->fullBit(oldp+69489,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xaU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+69490,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout));
    bufp->fullBit(oldp+69491,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69492,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69493,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69494,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+69495,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout))));
    bufp->fullBit(oldp+69496,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xbU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+69497,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout));
    bufp->fullBit(oldp+69498,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69499,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69500,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69501,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+69502,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout))));
    bufp->fullBit(oldp+69503,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+69504,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout));
    bufp->fullBit(oldp+69505,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69506,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69507,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69508,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+69509,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout))));
    bufp->fullBit(oldp+69510,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+69511,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout));
    bufp->fullBit(oldp+69512,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69513,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69514,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69515,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+69516,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout))));
    bufp->fullBit(oldp+69517,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xeU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+69518,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout));
    bufp->fullBit(oldp+69519,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69520,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69521,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69522,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+69523,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout))));
    bufp->fullBit(oldp+69524,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0xfU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+69525,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout));
    bufp->fullBit(oldp+69526,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69527,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69528,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69529,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+69530,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout))));
    bufp->fullBit(oldp+69531,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x10U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+69532,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout));
    bufp->fullBit(oldp+69533,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69534,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69535,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69536,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+69537,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout))));
    bufp->fullBit(oldp+69538,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+69539,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout));
    bufp->fullBit(oldp+69540,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69541,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69542,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69543,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+69544,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout))));
    bufp->fullBit(oldp+69545,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x12U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+69546,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout));
    bufp->fullBit(oldp+69547,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69548,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69549,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69550,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+69551,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout))));
    bufp->fullBit(oldp+69552,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x13U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+69553,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout));
    bufp->fullBit(oldp+69554,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69555,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69556,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69557,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 2U)))));
    bufp->fullBit(oldp+69558,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout))));
    bufp->fullBit(oldp+69559,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 2U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+69560,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout));
    bufp->fullBit(oldp+69561,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69562,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69563,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69564,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+69565,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout))));
    bufp->fullBit(oldp+69566,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+69567,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout));
    bufp->fullBit(oldp+69568,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69569,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69570,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69571,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+69572,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout))));
    bufp->fullBit(oldp+69573,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+69574,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout));
    bufp->fullBit(oldp+69575,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69576,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69577,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69578,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+69579,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout))));
    bufp->fullBit(oldp+69580,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x16U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+69581,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout));
    bufp->fullBit(oldp+69582,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69583,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69584,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69585,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+69586,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout))));
    bufp->fullBit(oldp+69587,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x17U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+69588,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout));
    bufp->fullBit(oldp+69589,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69590,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69591,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69592,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+69593,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout))));
    bufp->fullBit(oldp+69594,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x18U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+69595,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout));
    bufp->fullBit(oldp+69596,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69597,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69598,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69599,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+69600,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout))));
    bufp->fullBit(oldp+69601,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+69602,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout));
    bufp->fullBit(oldp+69603,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69604,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69605,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69606,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+69607,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout))));
    bufp->fullBit(oldp+69608,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+69609,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout));
    bufp->fullBit(oldp+69610,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69611,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69612,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69613,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+69614,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout))));
    bufp->fullBit(oldp+69615,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+69616,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout));
    bufp->fullBit(oldp+69617,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69618,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69619,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69620,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+69621,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout))));
    bufp->fullBit(oldp+69622,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+69623,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout));
    bufp->fullBit(oldp+69624,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69625,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69626,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69627,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+69628,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout))));
    bufp->fullBit(oldp+69629,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+69630,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout));
    bufp->fullBit(oldp+69631,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69632,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69633,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69634,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 3U)))));
    bufp->fullBit(oldp+69635,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout))));
    bufp->fullBit(oldp+69636,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 3U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+69637,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout));
    bufp->fullBit(oldp+69638,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69639,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69640,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69641,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+69642,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout))));
    bufp->fullBit(oldp+69643,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+69644,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout));
    bufp->fullBit(oldp+69645,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69646,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69647,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69648,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+69649,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout))));
    bufp->fullBit(oldp+69650,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x1fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+69651,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout));
    bufp->fullBit(oldp+69652,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69653,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69654,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69655,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+69656,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout))));
    bufp->fullBit(oldp+69657,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x20U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+69658,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout));
    bufp->fullBit(oldp+69659,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69660,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69661,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69662,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+69663,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout))));
    bufp->fullBit(oldp+69664,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x21U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+69665,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout));
    bufp->fullBit(oldp+69666,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69667,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69668,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69669,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+69670,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout))));
    bufp->fullBit(oldp+69671,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x22U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+69672,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout));
    bufp->fullBit(oldp+69673,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69674,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69675,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69676,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+69677,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout))));
    bufp->fullBit(oldp+69678,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x23U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+69679,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout));
    bufp->fullBit(oldp+69680,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69681,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69682,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69683,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+69684,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout))));
    bufp->fullBit(oldp+69685,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x24U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+69686,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout));
    bufp->fullBit(oldp+69687,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69688,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69689,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69690,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+69691,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout))));
    bufp->fullBit(oldp+69692,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x25U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+69693,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout));
    bufp->fullBit(oldp+69694,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69695,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69696,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69697,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+69698,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout))));
    bufp->fullBit(oldp+69699,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x26U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+69700,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout));
    bufp->fullBit(oldp+69701,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69702,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69703,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69704,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+69705,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout))));
    bufp->fullBit(oldp+69706,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x27U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+69707,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout));
    bufp->fullBit(oldp+69708,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69709,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69710,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69711,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 4U)))));
    bufp->fullBit(oldp+69712,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout))));
    bufp->fullBit(oldp+69713,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 4U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+69714,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout));
    bufp->fullBit(oldp+69715,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69716,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69717,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69718,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+69719,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout))));
    bufp->fullBit(oldp+69720,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x28U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+69721,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout));
    bufp->fullBit(oldp+69722,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69723,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69724,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69725,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+69726,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout))));
    bufp->fullBit(oldp+69727,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x29U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+69728,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout));
    bufp->fullBit(oldp+69729,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69730,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69731,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69732,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+69733,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout))));
    bufp->fullBit(oldp+69734,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2aU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+69735,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout));
    bufp->fullBit(oldp+69736,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69737,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69738,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69739,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+69740,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout))));
    bufp->fullBit(oldp+69741,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2bU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+69742,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout));
    bufp->fullBit(oldp+69743,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69744,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69745,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69746,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+69747,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout))));
    bufp->fullBit(oldp+69748,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2cU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+69749,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout));
    bufp->fullBit(oldp+69750,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69751,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69752,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69753,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+69754,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout))));
    bufp->fullBit(oldp+69755,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2dU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2dU)))))));
    bufp->fullBit(oldp+69756,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout));
    bufp->fullBit(oldp+69757,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69758,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69759,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69760,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+69761,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout))));
    bufp->fullBit(oldp+69762,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2eU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2eU)))))));
    bufp->fullBit(oldp+69763,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout));
    bufp->fullBit(oldp+69764,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69765,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69766,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69767,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+69768,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout))));
    bufp->fullBit(oldp+69769,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x2fU))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x2fU)))))));
    bufp->fullBit(oldp+69770,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout));
    bufp->fullBit(oldp+69771,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69772,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69773,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69774,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+69775,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout))));
    bufp->fullBit(oldp+69776,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x30U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x30U)))))));
    bufp->fullBit(oldp+69777,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout));
    bufp->fullBit(oldp+69778,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69779,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69780,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69781,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+69782,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout))));
    bufp->fullBit(oldp+69783,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x31U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x31U)))))));
    bufp->fullBit(oldp+69784,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout));
    bufp->fullBit(oldp+69785,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69786,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69787,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69788,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 5U)))));
    bufp->fullBit(oldp+69789,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout))));
    bufp->fullBit(oldp+69790,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 5U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+69791,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout));
    bufp->fullBit(oldp+69792,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69793,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69794,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69795,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+69796,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout))));
    bufp->fullBit(oldp+69797,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x32U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x32U)))))));
    bufp->fullBit(oldp+69798,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout));
    bufp->fullBit(oldp+69799,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69800,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69801,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69802,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+69803,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout))));
    bufp->fullBit(oldp+69804,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x33U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x33U)))))));
    bufp->fullBit(oldp+69805,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout));
    bufp->fullBit(oldp+69806,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69807,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69808,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69809,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+69810,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout))));
    bufp->fullBit(oldp+69811,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x34U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x34U)))))));
    bufp->fullBit(oldp+69812,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout));
    bufp->fullBit(oldp+69813,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69814,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69815,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69816,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+69817,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout))));
    bufp->fullBit(oldp+69818,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x35U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x35U)))))));
    bufp->fullBit(oldp+69819,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout));
    bufp->fullBit(oldp+69820,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69821,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69822,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69823,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+69824,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout))));
    bufp->fullBit(oldp+69825,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x36U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x36U)))))));
    bufp->fullBit(oldp+69826,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout));
    bufp->fullBit(oldp+69827,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69828,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69829,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69830,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+69831,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout))));
    bufp->fullBit(oldp+69832,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 0x37U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69833,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                      & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                                 >> 0x37U))) 
                                     | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                        & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+69834,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69835,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69836,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69837,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 6U)))));
    bufp->fullBit(oldp+69838,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout))));
    bufp->fullBit(oldp+69839,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 6U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+69840,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout));
    bufp->fullBit(oldp+69841,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69842,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69843,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69844,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 7U)))));
    bufp->fullBit(oldp+69845,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout))));
    bufp->fullBit(oldp+69846,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 7U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+69847,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout));
    bufp->fullBit(oldp+69848,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69849,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69850,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69851,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 8U)))));
    bufp->fullBit(oldp+69852,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout))));
    bufp->fullBit(oldp+69853,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                     | (((~ (IData)(
                                                    (vlSelf->__VdfgTmp_h82782eba__0 
                                                     >> 8U))) 
                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                        & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+69854,(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout));
    bufp->fullBit(oldp+69855,((1U & (IData)((vlSelf->__VdfgTmp_h88c30338__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69856,((1U & (IData)((vlSelf->__VdfgTmp_h2df6a413__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69857,((1U & (IData)((vlSelf->__VdfgTmp_h51cce765__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69858,((1U & (IData)((vlSelf->__VdfgTmp_h82782eba__0 
                                             >> 9U)))));
    bufp->fullBit(oldp+69859,(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout))));
    bufp->fullBit(oldp+69860,((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
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
    bufp->fullWData(oldp+69861,(__Vtemp_h996a43c2__0),224);
    bufp->fullQData(oldp+69868,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),59);
    bufp->fullQData(oldp+69870,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),59);
    bufp->fullWData(oldp+69872,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),90);
    bufp->fullWData(oldp+69875,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),90);
    bufp->fullWData(oldp+69878,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),90);
    bufp->fullWData(oldp+69881,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),90);
    bufp->fullWData(oldp+69884,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),90);
    bufp->fullWData(oldp+69887,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),90);
    bufp->fullCData(oldp+69890,((0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),6);
    bufp->fullWData(oldp+69891,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),384);
    bufp->fullWData(oldp+69903,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullWData(oldp+69906,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),90);
    bufp->fullWData(oldp+69909,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),90);
    bufp->fullCData(oldp+69912,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullWData(oldp+69913,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),90);
    bufp->fullIData(oldp+69916,(((0xffffffeU & ((IData)(
                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                         >> 0x1cU)) 
                                                << 1U)) 
                                 | (0U != (0x7ffffffU 
                                           & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))),28);
    bufp->fullQData(oldp+69917,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted),55);
    bufp->fullQData(oldp+69919,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->fullQData(oldp+69921,((0x7ffffffffffffffULL 
                                 & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                        << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    bufp->fullBit(oldp+69923,(vlSelf->clock));
    bufp->fullBit(oldp+69924,(vlSelf->reset));
    bufp->fullIData(oldp+69925,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+69926,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+69927,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+69928,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+69929,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+69930,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+69931,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+69932,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+69933,(vlSelf->io_op),3);
    bufp->fullIData(oldp+69934,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+69935,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+69936,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+69937,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+69938,(vlSelf->io_posit_dot_o),32);
    bufp->fullCData(oldp+69939,(((8U & (vlSelf->io_posit_i1_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i1_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i1_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i1_0 
                                          >> 0x1fU))))),4);
    bufp->fullCData(oldp+69940,(((8U & (vlSelf->io_posit_i2_3 
                                        >> 0x1cU)) 
                                 | ((4U & (vlSelf->io_posit_i2_2 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->io_posit_i2_1 
                                              >> 0x1eU)) 
                                       | (vlSelf->io_posit_i2_0 
                                          >> 0x1fU))))),4);
    bufp->fullIData(oldp+69941,((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
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
    bufp->fullWData(oldp+69942,(__Vtemp_h8514ab4c__0),120);
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
    bufp->fullWData(oldp+69946,(__Vtemp_hde6aa058__0),120);
    bufp->fullCData(oldp+69950,(((8U & ((((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
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
    bufp->fullIData(oldp+69951,(((((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
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
    bufp->fullWData(oldp+69952,(__Vtemp_h9f418512__0),120);
    bufp->fullCData(oldp+69956,((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0))))),4);
    bufp->fullCData(oldp+69957,(((((IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0) 
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
    bufp->fullWData(oldp+69958,(__Vtemp_h24f352fb__0),128);
    bufp->fullIData(oldp+69962,(((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+69963,(__Vtemp_h8a85a4ef__0),112);
    bufp->fullIData(oldp+69967,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+69968,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+69969,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+69970,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+69971,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69972,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69973,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69974,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69975,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69976,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69977,((1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69978,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+69979,(__Vtemp_h95b92b9c__0),128);
    bufp->fullIData(oldp+69983,(((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+69984,(__Vtemp_h8053b372__0),112);
    bufp->fullBit(oldp+69988,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69989,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69990,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69991,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69992,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69993,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+69994,((1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+69995,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+69996,(((((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
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
    bufp->fullWData(oldp+69997,(__Vtemp_he25792b8__0),224);
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
    bufp->fullWData(oldp+70004,(__Vtemp_h19e34e8a__0),224);
    bufp->fullIData(oldp+70011,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 0x18U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))))),32);
    bufp->fullSData(oldp+70012,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70013,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o),8);
    bufp->fullCData(oldp+70014,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->fullCData(oldp+70015,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->fullSData(oldp+70016,((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b) 
                                  << 8U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a))),16);
    bufp->fullCData(oldp+70017,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o),8);
    bufp->fullCData(oldp+70018,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a),8);
    bufp->fullCData(oldp+70019,(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b),8);
    bufp->fullIData(oldp+70020,((((IData)(vlSelf->__VdfgTmp_h7e5815f2__0) 
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
    bufp->fullWData(oldp+70021,(__Vtemp_h3443ac07__0),224);
    bufp->fullSData(oldp+70028,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum),9);
    bufp->fullSData(oldp+70029,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1),9);
    bufp->fullSData(oldp+70030,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2),9);
    bufp->fullSData(oldp+70031,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3),9);
    bufp->fullCData(oldp+70032,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign),4);
    bufp->fullIData(oldp+70033,(((5U == (IData)(vlSelf->io_op))
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
    bufp->fullWData(oldp+70034,(__Vtemp_h3364e47b__0),112);
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
    bufp->fullWData(oldp+70038,(__Vtemp_h4b65947b__0),128);
    bufp->fullCData(oldp+70042,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->fullCData(oldp+70043,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->fullCData(oldp+70044,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->fullCData(oldp+70045,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->fullCData(oldp+70046,(((5U == (IData)(vlSelf->io_op))
                                  ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                  : 0U)),8);
    bufp->fullIData(oldp+70047,(((5U == (IData)(vlSelf->io_op))
                                  ? ((0xffffffeU & 
                                      ((IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                >> 0x1cU)) 
                                       << 1U)) | (0U 
                                                  != 
                                                  (0x7ffffffU 
                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                  : 0U)),28);
    bufp->fullIData(oldp+70048,((((0U == ((5U == (IData)(vlSelf->io_op))
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
    bufp->fullWData(oldp+70049,(__Vtemp_he6fac87a__0),120);
    bufp->fullIData(oldp+70053,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+70054,(__Vtemp_hdf4c90c7__0),112);
    bufp->fullBit(oldp+70058,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70059,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70060,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70061,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70062,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70063,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70064,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70065,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->fullWData(oldp+70066,(__Vtemp_h3e09f0ec__0),224);
    bufp->fullQData(oldp+70073,((((QData)((IData)((
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
    bufp->fullWData(oldp+70075,(__Vtemp_h52e32d61__0),112);
    bufp->fullBit(oldp+70079,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70080,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70082,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70083,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70085,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70086,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullBit(oldp+70088,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70089,(vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullSData(oldp+70091,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
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
    bufp->fullCData(oldp+70092,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? (IData)(vlSelf->__VdfgTmp_h858857fc__0)
                                  : 0U)),6);
    bufp->fullBit(oldp+70093,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70094,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
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
    bufp->fullWData(oldp+70096,(__Vtemp_hba7b99a0__0),224);
    bufp->fullQData(oldp+70103,((((QData)((IData)((
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
    bufp->fullWData(oldp+70105,(__Vtemp_hf67a7711__0),112);
    bufp->fullQData(oldp+70109,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i),56);
    bufp->fullBit(oldp+70111,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70112,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70114,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70116,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i),56);
    bufp->fullBit(oldp+70118,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70119,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70121,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70123,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i),56);
    bufp->fullBit(oldp+70125,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70126,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70128,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),56);
    bufp->fullQData(oldp+70130,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i),56);
    bufp->fullBit(oldp+70132,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+70133,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+70135,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),56);
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
    bufp->fullWData(oldp+70137,(__Vtemp_h69367da8__0),120);
    bufp->fullIData(oldp+70141,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+70142,(__Vtemp_hd280c543__0),112);
    bufp->fullBit(oldp+70146,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70147,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70148,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70149,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70150,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70151,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+70152,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+70153,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->fullWData(oldp+70154,(__Vtemp_h66381fc9__0),224);
    bufp->fullCData(oldp+70161,(((8U & ((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
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
    bufp->fullIData(oldp+70162,(((((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_3 
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
    bufp->fullWData(oldp+70163,(__Vtemp_h1e731a51__0),120);
    bufp->fullCData(oldp+70167,((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0))))),4);
    bufp->fullCData(oldp+70168,(((((IData)(vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0) 
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
    bufp->fullIData(oldp+70169,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a),28);
    bufp->fullQData(oldp+70170,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70172,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a),28);
    bufp->fullQData(oldp+70173,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70175,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a),28);
    bufp->fullQData(oldp+70176,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70178,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a),28);
    bufp->fullQData(oldp+70179,(((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)) 
                                 << 0x1cU)),56);
    bufp->fullIData(oldp+70181,(0x1fU),32);
    bufp->fullBit(oldp+70182,(1U));
    bufp->fullIData(oldp+70183,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+70184,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+70189,(0U));
    bufp->fullIData(oldp+70190,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+70191,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+70196,(0x38U),32);
    bufp->fullIData(oldp+70197,(6U),32);
    bufp->fullWData(oldp+70198,(VPvuTop__ConstPool__CONST_hc4a98b6e_0),336);
    bufp->fullIData(oldp+70209,(0x3bU),32);
    bufp->fullWData(oldp+70210,(VPvuTop__ConstPool__CONST_h55404713_0),354);
    bufp->fullBit(oldp+70222,(1U));
}
