// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_dual_think_ctrl.h for the primary calling header

#include "Vanvil_qn1_dual_think_ctrl__pch.h"
#include "Vanvil_qn1_dual_think_ctrl__Syms.h"
#include "Vanvil_qn1_dual_think_ctrl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__stl(Vanvil_qn1_dual_think_ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_dual_think_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_dual_think_ctrl___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths.neq(vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__0));
    vlSelf->__Vtrigprevexpr___TOP__anvil_qn1_dual_think_ctrl__DOT__depths__0.assign(vlSelf->anvil_qn1_dual_think_ctrl__DOT__depths);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vanvil_qn1_dual_think_ctrl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
