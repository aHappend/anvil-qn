// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb__Syms.h"
#include "Vstartup_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstartup_tb___024root___dump_triggers__stl(Vstartup_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstartup_tb___024root___eval_triggers__stl(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0__0)) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0))));
    vlSelf->__VstlTriggered.set(2U, ((((((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0__0)) 
                                          | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid__0))) 
                                         | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid__0))) 
                                        | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid__0))) 
                                       | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0__0))) 
                                      | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0__0))) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid__0))));
    vlSelf->__VstlTriggered.set(3U, ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0__0)) 
                                      | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0__0))) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0__0))));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)));
    vlSelf->__VstlTriggered.set(5U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid__0))));
    vlSelf->__VstlTriggered.set(6U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid__0))));
    vlSelf->__VstlTriggered.set(7U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid__0))));
    vlSelf->__VstlTriggered.set(8U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid__0))));
    vlSelf->__VstlTriggered.set(9U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)) 
                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0__0))));
    vlSelf->__VstlTriggered.set(0xaU, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0)) 
                                       | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0__0))));
    vlSelf->__VstlTriggered.set(0xbU, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid__0)));
    vlSelf->__VstlTriggered.set(0xcU, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid__0)));
    vlSelf->__VstlTriggered.set(0xdU, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid__0)));
    vlSelf->__VstlTriggered.set(0xeU, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response__0)));
    vlSelf->__VstlTriggered.set(0xfU, ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response__0)) 
                                        | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0__0))) 
                                       | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0__0))));
    vlSelf->__VstlTriggered.set(0x10U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response__0)) 
                                        | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_valid__0))));
    vlSelf->__VstlTriggered.set(0x11U, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_valid__0)));
    vlSelf->__VstlTriggered.set(0x12U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_valid__0)) 
                                        | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0__0))));
    vlSelf->__VstlTriggered.set(0x13U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_valid__0)) 
                                        | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid__0))));
    vlSelf->__VstlTriggered.set(0x14U, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0__0)));
    vlSelf->__VstlTriggered.set(0x15U, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0__0)));
    vlSelf->__VstlTriggered.set(0x16U, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid__0)));
    vlSelf->__VstlTriggered.set(0x17U, ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h7552aa46__0) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h7552aa46__0__0)));
    vlSelf->__VstlTriggered.set(0x18U, (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hc7ea6d20__0) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hc7ea6d20__0__0)) 
                                        | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0__0))));
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h756fb8b6__0;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_error__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__drsp_valid__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h7552aa46__0__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h7552aa46__0;
    vlSelf->__Vtrigprevexpr___TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hc7ea6d20__0__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hc7ea6d20__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
        vlSelf->__VstlTriggered.set(9U, 1U);
        vlSelf->__VstlTriggered.set(0xaU, 1U);
        vlSelf->__VstlTriggered.set(0xbU, 1U);
        vlSelf->__VstlTriggered.set(0xcU, 1U);
        vlSelf->__VstlTriggered.set(0xdU, 1U);
        vlSelf->__VstlTriggered.set(0xeU, 1U);
        vlSelf->__VstlTriggered.set(0xfU, 1U);
        vlSelf->__VstlTriggered.set(0x10U, 1U);
        vlSelf->__VstlTriggered.set(0x11U, 1U);
        vlSelf->__VstlTriggered.set(0x12U, 1U);
        vlSelf->__VstlTriggered.set(0x13U, 1U);
        vlSelf->__VstlTriggered.set(0x14U, 1U);
        vlSelf->__VstlTriggered.set(0x15U, 1U);
        vlSelf->__VstlTriggered.set(0x16U, 1U);
        vlSelf->__VstlTriggered.set(0x17U, 1U);
        vlSelf->__VstlTriggered.set(0x18U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstartup_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vstartup_tb___024root___act_sequent__TOP__0(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__1(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__2(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__3(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__4(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__5(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__6(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__7(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__8(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__9(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__10(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__11(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__12(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__13(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__14(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__15(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__16(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__17(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__18(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__19(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__20(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
VL_ATTR_COLD void Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0(Vstartup_tb_anvil_qn1_scalar* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__13(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__1(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__2(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__3(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__4(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__5(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__6(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__7(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__8(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_sequent__TOP__9(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__1(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__2(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__20(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__21(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__22(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__23(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__24(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__3(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__4(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__5(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__6(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__7(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__8(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__9(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__31(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_comb__TOP__17(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_comb__TOP__18(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_comb__TOP__19(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_comb__TOP__20(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__18(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__19(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__32(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_comb__TOP__24(Vstartup_tb___024root* vlSelf);
VL_ATTR_COLD void Vstartup_tb___024root___stl_comb__TOP__25(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__35(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__36(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__37(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__38(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___act_comb__TOP__39(Vstartup_tb___024root* vlSelf);

VL_ATTR_COLD void Vstartup_tb___024root___eval_stl(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___eval_stl\n"); );
    // Body
    if ((0x1000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_sequent__TOP__1(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__2(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__3(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__4(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__5(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__6(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__7(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__8(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__9(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__10(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__11(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__12(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__13(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__14(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__15(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__16(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__17(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__18(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__19(vlSelf);
        Vstartup_tb___024root___stl_sequent__TOP__20(vlSelf);
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic));
        Vstartup_tb_anvil_qn1_scalar___stl_sequent__TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0((&vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add));
        Vstartup_tb___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x20001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x80001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x1000005ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x1000011ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x10001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x800001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__21(vlSelf);
        Vstartup_tb___024root___act_comb__TOP__22(vlSelf);
        Vstartup_tb___024root___act_comb__TOP__23(vlSelf);
        Vstartup_tb___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x120001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x220001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x22001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x20801ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x1020001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x21001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x420001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0xb28601ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x22081ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_comb__TOP__17(vlSelf);
    }
    if ((0x20821ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_comb__TOP__18(vlSelf);
    }
    if ((0x1020011ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_comb__TOP__19(vlSelf);
    }
    if ((0x21041ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_comb__TOP__20(vlSelf);
    }
    if ((0x4a0001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x1423809ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x18238f1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__32(vlSelf);
    }
    if ((0x4a0101ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_comb__TOP__24(vlSelf);
    }
    if ((0x142380fULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___stl_comb__TOP__25(vlSelf);
    }
    if ((0x1f2be0fULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__35(vlSelf);
    }
    if ((0x1c238ffULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x1c278ffULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__37(vlSelf);
    }
    if ((0x1f2feffULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__38(vlSelf);
    }
    if ((0x1f6feffULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstartup_tb___024root___act_comb__TOP__39(vlSelf);
    }
}
