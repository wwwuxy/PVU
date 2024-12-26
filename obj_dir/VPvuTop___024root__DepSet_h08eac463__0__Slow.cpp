// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__stl(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPvuTop___024root___eval_triggers__stl(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = (((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VstlTriggered.at(2U) = ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VstlTriggered.at(3U) = (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__VstlTriggered.at(4U) = (((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VstlTriggered.at(5U) = ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VstlTriggered.at(6U) = (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__VstlTriggered.at(7U) = ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VstlTriggered.at(8U) = (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VstlTriggered.at(9U) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
                                      | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VstlTriggered.at(0xaU) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VstlTriggered.at(0xbU) = (((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                           != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes));
    vlSelf->__VstlTriggered.at(0xcU) = ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes));
    vlSelf->__VstlTriggered.at(0xdU) = ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VstlTriggered.at(0xeU) = (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
        vlSelf->__VstlTriggered.at(4U) = 1U;
        vlSelf->__VstlTriggered.at(5U) = 1U;
        vlSelf->__VstlTriggered.at(6U) = 1U;
        vlSelf->__VstlTriggered.at(7U) = 1U;
        vlSelf->__VstlTriggered.at(8U) = 1U;
        vlSelf->__VstlTriggered.at(9U) = 1U;
        vlSelf->__VstlTriggered.at(0xaU) = 1U;
        vlSelf->__VstlTriggered.at(0xbU) = 1U;
        vlSelf->__VstlTriggered.at(0xcU) = 1U;
        vlSelf->__VstlTriggered.at(0xdU) = 1U;
        vlSelf->__VstlTriggered.at(0xeU) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
