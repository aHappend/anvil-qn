// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_dual_think_ctrl.h for the primary calling header

#include "Vanvil_qn1_dual_think_ctrl__pch.h"
#include "Vanvil_qn1_dual_think_ctrl__Syms.h"
#include "Vanvil_qn1_dual_think_ctrl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__ico(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths.neq(vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__1));
    vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__1.assign(vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__act(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths.neq(vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__2));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__2.assign(vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}
