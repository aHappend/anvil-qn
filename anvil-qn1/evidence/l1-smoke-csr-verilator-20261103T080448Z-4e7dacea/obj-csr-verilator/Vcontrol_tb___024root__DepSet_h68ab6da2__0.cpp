// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb___024root.h"

VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(Vcontrol_tb___024root* vlSelf);
VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1(Vcontrol_tb___024root* vlSelf);
VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__2(Vcontrol_tb___024root* vlSelf);

void Vcontrol_tb___024root___eval_initial(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial\n"); );
    // Body
    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0 
        = vlSelf->control_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__rst_n__0 
        = vlSelf->control_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__2(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                           4);
        vlSelf->control_tb__DOT__clk = (1U & (~ (IData)(vlSelf->control_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vcontrol_tb___024root___act_comb__TOP__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___act_comb__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vfunc_event_add64__2__Vfuncout;
    __Vfunc_event_add64__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__2__value;
    __Vfunc_event_add64__2__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__2__delta;
    __Vfunc_event_add64__2__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__2__low;
    __Vfunc_event_add64__2__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__2__carry1;
    __Vfunc_event_add64__2__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__2__carry2;
    __Vfunc_event_add64__2__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__2__carry3;
    __Vfunc_event_add64__2__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__3__Vfuncout;
    __Vfunc_event_add64__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__3__value;
    __Vfunc_event_add64__3__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__3__delta;
    __Vfunc_event_add64__3__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__3__low;
    __Vfunc_event_add64__3__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__3__carry1;
    __Vfunc_event_add64__3__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__3__carry2;
    __Vfunc_event_add64__3__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__3__carry3;
    __Vfunc_event_add64__3__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__4__Vfuncout;
    __Vfunc_event_add64__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__4__value;
    __Vfunc_event_add64__4__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__4__delta;
    __Vfunc_event_add64__4__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__4__low;
    __Vfunc_event_add64__4__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__4__carry1;
    __Vfunc_event_add64__4__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__4__carry2;
    __Vfunc_event_add64__4__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__4__carry3;
    __Vfunc_event_add64__4__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__5__Vfuncout;
    __Vfunc_event_add64__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__5__value;
    __Vfunc_event_add64__5__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__5__delta;
    __Vfunc_event_add64__5__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__5__low;
    __Vfunc_event_add64__5__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__5__carry1;
    __Vfunc_event_add64__5__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__5__carry2;
    __Vfunc_event_add64__5__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__5__carry3;
    __Vfunc_event_add64__5__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__6__Vfuncout;
    __Vfunc_event_add64__6__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__6__value;
    __Vfunc_event_add64__6__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__6__delta;
    __Vfunc_event_add64__6__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__6__low;
    __Vfunc_event_add64__6__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__6__carry1;
    __Vfunc_event_add64__6__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__6__carry2;
    __Vfunc_event_add64__6__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__6__carry3;
    __Vfunc_event_add64__6__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7__Vfuncout;
    __Vfunc_event_add64__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7__value;
    __Vfunc_event_add64__7__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7__delta;
    __Vfunc_event_add64__7__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7__low;
    __Vfunc_event_add64__7__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7__carry1;
    __Vfunc_event_add64__7__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7__carry2;
    __Vfunc_event_add64__7__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7__carry3;
    __Vfunc_event_add64__7__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__8__Vfuncout;
    __Vfunc_event_add64__8__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__8__value;
    __Vfunc_event_add64__8__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__8__delta;
    __Vfunc_event_add64__8__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__8__low;
    __Vfunc_event_add64__8__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__8__carry1;
    __Vfunc_event_add64__8__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__8__carry2;
    __Vfunc_event_add64__8__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__8__carry3;
    __Vfunc_event_add64__8__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__9__Vfuncout;
    __Vfunc_event_add64__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__9__value;
    __Vfunc_event_add64__9__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__9__delta;
    __Vfunc_event_add64__9__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__9__low;
    __Vfunc_event_add64__9__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__9__carry1;
    __Vfunc_event_add64__9__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__9__carry2;
    __Vfunc_event_add64__9__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__9__carry3;
    __Vfunc_event_add64__9__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__10__Vfuncout;
    __Vfunc_event_add64__10__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__10__value;
    __Vfunc_event_add64__10__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__10__delta;
    __Vfunc_event_add64__10__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__10__low;
    __Vfunc_event_add64__10__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__10__carry1;
    __Vfunc_event_add64__10__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__10__carry2;
    __Vfunc_event_add64__10__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__10__carry3;
    __Vfunc_event_add64__10__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__11__Vfuncout;
    __Vfunc_event_add64__11__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__11__value;
    __Vfunc_event_add64__11__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__11__delta;
    __Vfunc_event_add64__11__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__11__low;
    __Vfunc_event_add64__11__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__11__carry1;
    __Vfunc_event_add64__11__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__11__carry2;
    __Vfunc_event_add64__11__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__11__carry3;
    __Vfunc_event_add64__11__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__12__Vfuncout;
    __Vfunc_event_add64__12__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__12__value;
    __Vfunc_event_add64__12__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__12__delta;
    __Vfunc_event_add64__12__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__12__low;
    __Vfunc_event_add64__12__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__12__carry1;
    __Vfunc_event_add64__12__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__12__carry2;
    __Vfunc_event_add64__12__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__12__carry3;
    __Vfunc_event_add64__12__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__13__Vfuncout;
    __Vfunc_event_add64__13__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__13__value;
    __Vfunc_event_add64__13__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__13__delta;
    __Vfunc_event_add64__13__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__13__low;
    __Vfunc_event_add64__13__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__13__carry1;
    __Vfunc_event_add64__13__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__13__carry2;
    __Vfunc_event_add64__13__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__13__carry3;
    __Vfunc_event_add64__13__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14__Vfuncout;
    __Vfunc_event_add64__14__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14__value;
    __Vfunc_event_add64__14__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14__delta;
    __Vfunc_event_add64__14__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14__low;
    __Vfunc_event_add64__14__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14__carry1;
    __Vfunc_event_add64__14__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14__carry2;
    __Vfunc_event_add64__14__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14__carry3;
    __Vfunc_event_add64__14__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__15__Vfuncout;
    __Vfunc_event_add64__15__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__15__value;
    __Vfunc_event_add64__15__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__15__delta;
    __Vfunc_event_add64__15__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__15__low;
    __Vfunc_event_add64__15__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__15__carry1;
    __Vfunc_event_add64__15__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__15__carry2;
    __Vfunc_event_add64__15__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__15__carry3;
    __Vfunc_event_add64__15__carry3 = 0;
    // Body
    vlSelf->control_tb__DOT__csr_rsp_valid = ((IData)(vlSelf->control_tb__DOT__dut__DOT__response_valid) 
                                              & (IData)(vlSelf->control_tb__DOT__rst_n));
    vlSelf->control_tb__DOT__mode_valid = ((IData)(vlSelf->control_tb__DOT__dut__DOT__mode_pulse) 
                                           & (IData)(vlSelf->control_tb__DOT__rst_n));
    vlSelf->control_tb__DOT__csr_ready = ((~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__pending) 
                                              | (IData)(vlSelf->control_tb__DOT__dut__DOT__response_valid))) 
                                          & (IData)(vlSelf->control_tb__DOT__rst_n));
    vlSelf->control_tb__DOT__mode_value = (((IData)(vlSelf->control_tb__DOT__dut__DOT__mode_pulse) 
                                            & (IData)(vlSelf->control_tb__DOT__rst_n)) 
                                           & (IData)(vlSelf->control_tb__DOT__dut__DOT__mode_bit));
    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_low = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_high = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_low = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_high = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_valid = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_profile = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_mode = 0U;
    vlSelf->control_tb__DOT__dut__DOT__take_snapshot = 0U;
    vlSelf->control_tb__DOT__dut__DOT__access_error = 0U;
    vlSelf->control_tb__DOT__dut__DOT__clear_counters = 0U;
    __Vfunc_event_add64__2__delta = vlSelf->control_tb__DOT__arith_error;
    __Vfunc_event_add64__2__value = (QData)((IData)(vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors));
    __Vfunc_event_add64__2__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__2__value)) 
                                               + (IData)(__Vfunc_event_add64__2__delta)));
    __Vfunc_event_add64__2__carry1 = (1U & (__Vfunc_event_add64__2__low 
                                            >> 0x10U));
    __Vfunc_event_add64__2__carry2 = ((IData)(__Vfunc_event_add64__2__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__2__value)));
    __Vfunc_event_add64__2__carry3 = ((IData)(__Vfunc_event_add64__2__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__2__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__2__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__2__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__2__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__2__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__2__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__2__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__2__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__2__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented_errors 
        = __Vfunc_event_add64__2__Vfuncout;
    vlSelf->control_tb__DOT__dut__DOT__read_value = 0U;
    if (((IData)(vlSelf->control_tb__DOT__rst_n) & (IData)(vlSelf->control_tb__DOT__dut__DOT__pending))) {
        if ((1U & (~ ((0U != (3U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) 
                      | ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_write) 
                         & (0xfU != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_strobes))))))) {
            if (vlSelf->control_tb__DOT__dut__DOT__request_write) {
                if ((8U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((0x84U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((0x88U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_low = 1U;
                            }
                        }
                        if ((0x88U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            if ((0x8cU == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_high = 1U;
                                }
                            }
                            if ((0x8cU != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                if ((0x90U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                        vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_low = 1U;
                                    }
                                }
                                if ((0x90U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((0x94U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_high = 1U;
                                        }
                                    }
                                    if ((0x94U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((0x98U 
                                             == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    (((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                                      | (1U 
                                                         > vlSelf->control_tb__DOT__dut__DOT__request_data)) 
                                                     | (3U 
                                                        < vlSelf->control_tb__DOT__dut__DOT__request_data))))) {
                                                vlSelf->control_tb__DOT__dut__DOT__write_reference_profile = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x84U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                      | (0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                                >> 1U)))))) {
                            vlSelf->control_tb__DOT__dut__DOT__write_reference_valid = 1U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((1U & (~ ((0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                          >> 3U)) | 
                                  ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                   & (((1U & vlSelf->control_tb__DOT__dut__DOT__request_data) 
                                       != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_mode)) 
                                      | (0U == (3U 
                                                & (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                                   >> 1U))))))))) {
                        vlSelf->control_tb__DOT__dut__DOT__write_mode 
                            = (1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)));
                        vlSelf->control_tb__DOT__dut__DOT__take_snapshot 
                            = (1U & (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                     >> 1U));
                        vlSelf->control_tb__DOT__dut__DOT__clear_counters 
                            = (1U & (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                     >> 2U));
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_write)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                    = vlSelf->control_tb__DOT__dut__DOT__reference_profile;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                = (IData)(
                                                                          (vlSelf->control_tb__DOT__dut__DOT__reference_tokens 
                                                                           >> 0x20U));
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(vlSelf->control_tb__DOT__dut__DOT__reference_tokens);
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                = (IData)(
                                                                          (vlSelf->control_tb__DOT__dut__DOT__reference_cycles 
                                                                           >> 0x20U));
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(vlSelf->control_tb__DOT__dut__DOT__reference_cycles);
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = vlSelf->control_tb__DOT__dut__DOT__reference_valid;
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = vlSelf->control_tb__DOT__dut__DOT__snapshot_sequence;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x40U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                = (IData)(
                                                                          (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                           [0xcU] 
                                                                           >> 0x20U));
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                      [0xcU]);
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [0xbU] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [0xbU]);
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [0xaU] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [0xaU]);
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [9U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [9U]);
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [8U] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [8U]);
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [7U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [7U]);
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = vlSelf->control_tb__DOT__dut__DOT__snapshot_arithmetic_errors;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = vlSelf->control_tb__DOT__dut__DOT__snapshot_max_score;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                               [6U] 
                                                               >> 0x20U));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = (IData)(
                                                          vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                          [6U]);
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [5U] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [5U]);
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [4U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [4U]);
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [3U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [3U]);
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                               [2U] 
                                                               >> 0x20U));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = (IData)(
                                                          vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                          [2U]);
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [1U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [1U]);
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                               [0U] 
                                                               >> 0x20U));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = (IData)(
                                                          vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                          [0U]);
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = 
                                                    (((IData)(vlSelf->control_tb__DOT__dut__DOT__sticky_error) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->control_tb__DOT__think_active) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->control_tb__DOT__busy)));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = vlSelf->control_tb__DOT__dut__DOT__desired_mode;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value = 3U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                   >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                        vlSelf->control_tb__DOT__dut__DOT__read_value = 0x1000001U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0U != (3U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) 
             | ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_write) 
                & (0xfU != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_strobes))))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if (vlSelf->control_tb__DOT__dut__DOT__request_write) {
            if ((8U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (((0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                             >> 3U)) | ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                        & (((1U & vlSelf->control_tb__DOT__dut__DOT__request_data) 
                                            != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_mode)) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                                >> 1U))))))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x84U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                     | (0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                               >> 1U)))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x88U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x8cU == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x90U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x94U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x98U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                      | (1U > vlSelf->control_tb__DOT__dut__DOT__request_data)) 
                     | (3U < vlSelf->control_tb__DOT__dut__DOT__request_data))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x800U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x400U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x200U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x100U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x80U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((0x40U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x40U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        }
    }
    vlSelf->control_tb__DOT__dut__DOT__increment[0U] 
        = vlSelf->control_tb__DOT__busy;
    vlSelf->control_tb__DOT__dut__DOT__increment[3U] 
        = vlSelf->control_tb__DOT__think_tokens;
    vlSelf->control_tb__DOT__dut__DOT__increment[4U] 
        = vlSelf->control_tb__DOT__direct_tokens;
    vlSelf->control_tb__DOT__dut__DOT__increment[5U] 
        = vlSelf->control_tb__DOT__qk_busy;
    vlSelf->control_tb__DOT__dut__DOT__increment[6U] 
        = vlSelf->control_tb__DOT__qk_blocked;
    vlSelf->control_tb__DOT__dut__DOT__increment[7U] 
        = vlSelf->control_tb__DOT__draft_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[8U] 
        = vlSelf->control_tb__DOT__verified_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[9U] 
        = vlSelf->control_tb__DOT__accepted_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[0xaU] 
        = vlSelf->control_tb__DOT__rejected_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[0xbU] 
        = vlSelf->control_tb__DOT__mem_error;
    vlSelf->control_tb__DOT__dut__DOT__increment[0xcU] 
        = vlSelf->control_tb__DOT__sequence_done;
    vlSelf->control_tb__DOT__dut__DOT__increment[1U] 
        = ((IData)(vlSelf->control_tb__DOT__busy) & (IData)(vlSelf->control_tb__DOT__think_active));
    vlSelf->control_tb__DOT__dut__DOT__increment[2U] 
        = ((~ (IData)(vlSelf->control_tb__DOT__think_active)) 
           & (IData)(vlSelf->control_tb__DOT__busy));
    __Vfunc_event_add64__3__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0U];
    __Vfunc_event_add64__3__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0U];
    __Vfunc_event_add64__3__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__3__value)) 
                                               + (IData)(__Vfunc_event_add64__3__delta)));
    __Vfunc_event_add64__3__carry1 = (1U & (__Vfunc_event_add64__3__low 
                                            >> 0x10U));
    __Vfunc_event_add64__3__carry2 = ((IData)(__Vfunc_event_add64__3__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__3__value)));
    __Vfunc_event_add64__3__carry3 = ((IData)(__Vfunc_event_add64__3__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__3__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__3__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__3__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__3__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__3__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__3__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__3__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__3__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__3__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0U] 
        = __Vfunc_event_add64__3__Vfuncout;
    __Vfunc_event_add64__4__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [1U];
    __Vfunc_event_add64__4__value = vlSelf->control_tb__DOT__dut__DOT__live
        [1U];
    __Vfunc_event_add64__4__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__4__value)) 
                                               + (IData)(__Vfunc_event_add64__4__delta)));
    __Vfunc_event_add64__4__carry1 = (1U & (__Vfunc_event_add64__4__low 
                                            >> 0x10U));
    __Vfunc_event_add64__4__carry2 = ((IData)(__Vfunc_event_add64__4__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__4__value)));
    __Vfunc_event_add64__4__carry3 = ((IData)(__Vfunc_event_add64__4__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__4__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__4__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__4__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__4__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__4__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__4__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__4__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__4__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__4__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[1U] 
        = __Vfunc_event_add64__4__Vfuncout;
    __Vfunc_event_add64__5__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [2U];
    __Vfunc_event_add64__5__value = vlSelf->control_tb__DOT__dut__DOT__live
        [2U];
    __Vfunc_event_add64__5__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__5__value)) 
                                               + (IData)(__Vfunc_event_add64__5__delta)));
    __Vfunc_event_add64__5__carry1 = (1U & (__Vfunc_event_add64__5__low 
                                            >> 0x10U));
    __Vfunc_event_add64__5__carry2 = ((IData)(__Vfunc_event_add64__5__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__5__value)));
    __Vfunc_event_add64__5__carry3 = ((IData)(__Vfunc_event_add64__5__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__5__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__5__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__5__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__5__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__5__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__5__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__5__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__5__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__5__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[2U] 
        = __Vfunc_event_add64__5__Vfuncout;
    __Vfunc_event_add64__6__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [3U];
    __Vfunc_event_add64__6__value = vlSelf->control_tb__DOT__dut__DOT__live
        [3U];
    __Vfunc_event_add64__6__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__6__value)) 
                                               + (IData)(__Vfunc_event_add64__6__delta)));
    __Vfunc_event_add64__6__carry1 = (1U & (__Vfunc_event_add64__6__low 
                                            >> 0x10U));
    __Vfunc_event_add64__6__carry2 = ((IData)(__Vfunc_event_add64__6__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__6__value)));
    __Vfunc_event_add64__6__carry3 = ((IData)(__Vfunc_event_add64__6__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__6__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__6__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__6__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__6__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__6__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__6__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__6__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__6__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__6__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[3U] 
        = __Vfunc_event_add64__6__Vfuncout;
    __Vfunc_event_add64__7__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [4U];
    __Vfunc_event_add64__7__value = vlSelf->control_tb__DOT__dut__DOT__live
        [4U];
    __Vfunc_event_add64__7__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__7__value)) 
                                               + (IData)(__Vfunc_event_add64__7__delta)));
    __Vfunc_event_add64__7__carry1 = (1U & (__Vfunc_event_add64__7__low 
                                            >> 0x10U));
    __Vfunc_event_add64__7__carry2 = ((IData)(__Vfunc_event_add64__7__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__7__value)));
    __Vfunc_event_add64__7__carry3 = ((IData)(__Vfunc_event_add64__7__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__7__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__7__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__7__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__7__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__7__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__7__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__7__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__7__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__7__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[4U] 
        = __Vfunc_event_add64__7__Vfuncout;
    __Vfunc_event_add64__8__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [5U];
    __Vfunc_event_add64__8__value = vlSelf->control_tb__DOT__dut__DOT__live
        [5U];
    __Vfunc_event_add64__8__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__8__value)) 
                                               + (IData)(__Vfunc_event_add64__8__delta)));
    __Vfunc_event_add64__8__carry1 = (1U & (__Vfunc_event_add64__8__low 
                                            >> 0x10U));
    __Vfunc_event_add64__8__carry2 = ((IData)(__Vfunc_event_add64__8__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__8__value)));
    __Vfunc_event_add64__8__carry3 = ((IData)(__Vfunc_event_add64__8__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__8__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__8__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__8__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__8__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__8__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__8__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__8__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__8__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__8__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[5U] 
        = __Vfunc_event_add64__8__Vfuncout;
    __Vfunc_event_add64__9__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [6U];
    __Vfunc_event_add64__9__value = vlSelf->control_tb__DOT__dut__DOT__live
        [6U];
    __Vfunc_event_add64__9__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__9__value)) 
                                               + (IData)(__Vfunc_event_add64__9__delta)));
    __Vfunc_event_add64__9__carry1 = (1U & (__Vfunc_event_add64__9__low 
                                            >> 0x10U));
    __Vfunc_event_add64__9__carry2 = ((IData)(__Vfunc_event_add64__9__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__9__value)));
    __Vfunc_event_add64__9__carry3 = ((IData)(__Vfunc_event_add64__9__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__9__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__9__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__9__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__9__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__9__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__9__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__9__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__9__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__9__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[6U] 
        = __Vfunc_event_add64__9__Vfuncout;
    __Vfunc_event_add64__10__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [7U];
    __Vfunc_event_add64__10__value = vlSelf->control_tb__DOT__dut__DOT__live
        [7U];
    __Vfunc_event_add64__10__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__10__value)) 
                                                + (IData)(__Vfunc_event_add64__10__delta)));
    __Vfunc_event_add64__10__carry1 = (1U & (__Vfunc_event_add64__10__low 
                                             >> 0x10U));
    __Vfunc_event_add64__10__carry2 = ((IData)(__Vfunc_event_add64__10__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__10__value)));
    __Vfunc_event_add64__10__carry3 = ((IData)(__Vfunc_event_add64__10__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__10__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__10__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__10__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__10__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__10__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__10__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__10__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__10__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__10__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[7U] 
        = __Vfunc_event_add64__10__Vfuncout;
    __Vfunc_event_add64__11__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [8U];
    __Vfunc_event_add64__11__value = vlSelf->control_tb__DOT__dut__DOT__live
        [8U];
    __Vfunc_event_add64__11__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__11__value)) 
                                                + (IData)(__Vfunc_event_add64__11__delta)));
    __Vfunc_event_add64__11__carry1 = (1U & (__Vfunc_event_add64__11__low 
                                             >> 0x10U));
    __Vfunc_event_add64__11__carry2 = ((IData)(__Vfunc_event_add64__11__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__11__value)));
    __Vfunc_event_add64__11__carry3 = ((IData)(__Vfunc_event_add64__11__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__11__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__11__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__11__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__11__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__11__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__11__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__11__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__11__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__11__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[8U] 
        = __Vfunc_event_add64__11__Vfuncout;
    __Vfunc_event_add64__12__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [9U];
    __Vfunc_event_add64__12__value = vlSelf->control_tb__DOT__dut__DOT__live
        [9U];
    __Vfunc_event_add64__12__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__12__value)) 
                                                + (IData)(__Vfunc_event_add64__12__delta)));
    __Vfunc_event_add64__12__carry1 = (1U & (__Vfunc_event_add64__12__low 
                                             >> 0x10U));
    __Vfunc_event_add64__12__carry2 = ((IData)(__Vfunc_event_add64__12__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__12__value)));
    __Vfunc_event_add64__12__carry3 = ((IData)(__Vfunc_event_add64__12__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__12__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__12__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__12__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__12__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__12__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__12__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__12__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__12__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__12__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[9U] 
        = __Vfunc_event_add64__12__Vfuncout;
    __Vfunc_event_add64__13__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0xaU];
    __Vfunc_event_add64__13__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0xaU];
    __Vfunc_event_add64__13__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__13__value)) 
                                                + (IData)(__Vfunc_event_add64__13__delta)));
    __Vfunc_event_add64__13__carry1 = (1U & (__Vfunc_event_add64__13__low 
                                             >> 0x10U));
    __Vfunc_event_add64__13__carry2 = ((IData)(__Vfunc_event_add64__13__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__13__value)));
    __Vfunc_event_add64__13__carry3 = ((IData)(__Vfunc_event_add64__13__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__13__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__13__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__13__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__13__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__13__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__13__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__13__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__13__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__13__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0xaU] 
        = __Vfunc_event_add64__13__Vfuncout;
    __Vfunc_event_add64__14__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0xbU];
    __Vfunc_event_add64__14__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0xbU];
    __Vfunc_event_add64__14__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__14__value)) 
                                                + (IData)(__Vfunc_event_add64__14__delta)));
    __Vfunc_event_add64__14__carry1 = (1U & (__Vfunc_event_add64__14__low 
                                             >> 0x10U));
    __Vfunc_event_add64__14__carry2 = ((IData)(__Vfunc_event_add64__14__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__14__value)));
    __Vfunc_event_add64__14__carry3 = ((IData)(__Vfunc_event_add64__14__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__14__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__14__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__14__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__14__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__14__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__14__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__14__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__14__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__14__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0xbU] 
        = __Vfunc_event_add64__14__Vfuncout;
    __Vfunc_event_add64__15__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0xcU];
    __Vfunc_event_add64__15__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0xcU];
    __Vfunc_event_add64__15__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__15__value)) 
                                                + (IData)(__Vfunc_event_add64__15__delta)));
    __Vfunc_event_add64__15__carry1 = (1U & (__Vfunc_event_add64__15__low 
                                             >> 0x10U));
    __Vfunc_event_add64__15__carry2 = ((IData)(__Vfunc_event_add64__15__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__15__value)));
    __Vfunc_event_add64__15__carry3 = ((IData)(__Vfunc_event_add64__15__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__15__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__15__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__15__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__15__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__15__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__15__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__15__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__15__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__15__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0xcU] 
        = __Vfunc_event_add64__15__Vfuncout;
}

void Vcontrol_tb___024root___eval_act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_act\n"); );
    // Body
    if ((0x1cULL & vlSelf->__VactTriggered.word(0U))) {
        Vcontrol_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_sequent__TOP__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v0;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v0 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v0;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v0 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v1;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v1 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v0;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v0 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v2;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v2 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v2;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v2 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v3;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v3 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v1;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v1 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v4;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v4 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v4;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v4 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v5;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v5 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v2;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v2 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v6;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v6 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v6;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v6 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v7;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v7 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v3;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v3 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v8;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v8 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v8;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v8 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v9;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v9 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v4;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v4 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v10;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v10 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v10;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v10 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v11;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v11 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v5;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v5 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v12;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v12 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v12;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v12 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v13;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v13 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v6;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v6 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v14;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v14 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v14;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v14 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v15;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v15 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v7;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v7 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v16;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v16 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v16;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v16 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v17;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v17 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v8;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v8 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v18;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v18 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v18;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v18 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v19;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v19 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v9;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v9 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v20;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v20 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v20;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v20 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v21;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v21 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v10;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v10 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v22;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v22 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v22;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v22 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v23;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v23 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v11;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v11 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v24;
    __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v24 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v24;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v24 = 0;
    CData/*0:0*/ __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v25;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v25 = 0;
    QData/*63:0*/ __Vdlyvval__control_tb__DOT__dut__DOT__live__v12;
    __Vdlyvval__control_tb__DOT__dut__DOT__live__v12 = 0;
    // Body
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v0 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v1 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v2 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v3 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v4 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v5 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v6 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v7 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v8 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v9 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v10 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v11 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v12 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v13 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v14 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v15 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v16 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v17 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v18 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v19 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v20 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v21 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v22 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v23 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v24 = 0U;
    __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v25 = 0U;
    vlSelf->__Vdly__control_tb__DOT__dut__DOT__max_score 
        = vlSelf->control_tb__DOT__dut__DOT__max_score;
    vlSelf->__Vdly__control_tb__DOT__dut__DOT__request_write 
        = vlSelf->control_tb__DOT__dut__DOT__request_write;
    vlSelf->__Vdly__control_tb__DOT__dut__DOT__pending 
        = vlSelf->control_tb__DOT__dut__DOT__pending;
    if (vlSelf->control_tb__DOT__rst_n) {
        if (vlSelf->control_tb__DOT__dut__DOT__take_snapshot) {
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v0 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [0U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v0 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v2 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [1U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v2 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v4 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [2U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v4 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v6 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [3U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v6 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v8 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [4U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v8 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v10 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [5U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v10 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v12 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [6U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v12 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v14 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [7U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v14 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v16 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [8U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v16 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v18 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [9U];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v18 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v20 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [0xaU];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v20 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v22 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [0xbU];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v22 = 1U;
            __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v24 
                = vlSelf->control_tb__DOT__dut__DOT__live
                [0xcU];
            __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v24 = 1U;
        }
        if (vlSelf->control_tb__DOT__dut__DOT__clear_counters) {
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v0 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v1 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v2 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v3 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v4 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v5 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v6 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v7 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v8 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v9 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v10 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v11 = 0ULL;
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v12 = 0ULL;
        } else {
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v0 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [0U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v1 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [1U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v2 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [2U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v3 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [3U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v4 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [4U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v5 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [5U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v6 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [6U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v7 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [7U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v8 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [8U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v9 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [9U];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v10 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [0xaU];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v11 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [0xbU];
            __Vdlyvval__control_tb__DOT__dut__DOT__live__v12 
                = vlSelf->control_tb__DOT__dut__DOT__incremented
                [0xcU];
        }
    } else {
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v1 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v3 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v5 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v7 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v9 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v11 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v13 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v15 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v17 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v19 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v21 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v23 = 1U;
        __Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v25 = 1U;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v0 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v1 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v2 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v3 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v4 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v5 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v6 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v7 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v8 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v9 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v10 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v11 = 0ULL;
        __Vdlyvval__control_tb__DOT__dut__DOT__live__v12 = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v0) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v0;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v1) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v2) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[1U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v2;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v3) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[1U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v4) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[2U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v4;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v5) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[2U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v6) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[3U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v6;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v7) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[3U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v8) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[4U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v8;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v9) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[4U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v10) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[5U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v10;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v11) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[5U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v12) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[6U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v12;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v13) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[6U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v14) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[7U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v14;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v15) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[7U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v16) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[8U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v16;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v17) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[8U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v18) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[9U] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v18;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v19) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[9U] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v20) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0xaU] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v20;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v21) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0xaU] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v22) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0xbU] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v22;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v23) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0xbU] = 0ULL;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v24) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0xcU] 
            = __Vdlyvval__control_tb__DOT__dut__DOT__snapshot__v24;
    }
    if (__Vdlyvset__control_tb__DOT__dut__DOT__snapshot__v25) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[0xcU] = 0ULL;
    }
    vlSelf->control_tb__DOT__dut__DOT__live[0U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v0;
    vlSelf->control_tb__DOT__dut__DOT__live[1U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v1;
    vlSelf->control_tb__DOT__dut__DOT__live[2U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v2;
    vlSelf->control_tb__DOT__dut__DOT__live[3U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v3;
    vlSelf->control_tb__DOT__dut__DOT__live[4U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v4;
    vlSelf->control_tb__DOT__dut__DOT__live[5U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v5;
    vlSelf->control_tb__DOT__dut__DOT__live[6U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v6;
    vlSelf->control_tb__DOT__dut__DOT__live[7U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v7;
    vlSelf->control_tb__DOT__dut__DOT__live[8U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v8;
    vlSelf->control_tb__DOT__dut__DOT__live[9U] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v9;
    vlSelf->control_tb__DOT__dut__DOT__live[0xaU] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v10;
    vlSelf->control_tb__DOT__dut__DOT__live[0xbU] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v11;
    vlSelf->control_tb__DOT__dut__DOT__live[0xcU] = __Vdlyvval__control_tb__DOT__dut__DOT__live__v12;
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_comb__TOP__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->control_tb__DOT__dut__DOT__increment[0U] 
        = vlSelf->control_tb__DOT__busy;
    vlSelf->control_tb__DOT__dut__DOT__increment[3U] 
        = vlSelf->control_tb__DOT__think_tokens;
    vlSelf->control_tb__DOT__dut__DOT__increment[4U] 
        = vlSelf->control_tb__DOT__direct_tokens;
    vlSelf->control_tb__DOT__dut__DOT__increment[5U] 
        = vlSelf->control_tb__DOT__qk_busy;
    vlSelf->control_tb__DOT__dut__DOT__increment[6U] 
        = vlSelf->control_tb__DOT__qk_blocked;
    vlSelf->control_tb__DOT__dut__DOT__increment[7U] 
        = vlSelf->control_tb__DOT__draft_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[8U] 
        = vlSelf->control_tb__DOT__verified_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[9U] 
        = vlSelf->control_tb__DOT__accepted_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[0xaU] 
        = vlSelf->control_tb__DOT__rejected_nodes;
    vlSelf->control_tb__DOT__dut__DOT__increment[0xbU] 
        = vlSelf->control_tb__DOT__mem_error;
    vlSelf->control_tb__DOT__dut__DOT__increment[0xcU] 
        = vlSelf->control_tb__DOT__sequence_done;
    vlSelf->control_tb__DOT__dut__DOT__increment[1U] 
        = ((IData)(vlSelf->control_tb__DOT__busy) & (IData)(vlSelf->control_tb__DOT__think_active));
    vlSelf->control_tb__DOT__dut__DOT__increment[2U] 
        = ((~ (IData)(vlSelf->control_tb__DOT__think_active)) 
           & (IData)(vlSelf->control_tb__DOT__busy));
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_sequent__TOP__2(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ __Vfunc_fp32_invalid__16__Vfuncout;
    __Vfunc_fp32_invalid__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__16__value;
    __Vfunc_fp32_invalid__16__value = 0;
    // Body
    if (vlSelf->control_tb__DOT__rst_n) {
        if (((IData)(vlSelf->control_tb__DOT__dut__DOT__response_valid) 
             & (IData)(vlSelf->control_tb__DOT__csr_rsp_ready))) {
            vlSelf->control_tb__DOT__dut__DOT__response_valid = 0U;
        }
        vlSelf->control_tb__DOT__dut__DOT__mode_pulse = 0U;
        if (vlSelf->control_tb__DOT__dut__DOT__take_snapshot) {
            vlSelf->control_tb__DOT__dut__DOT__snapshot_sequence 
                = ((IData)(1U) + vlSelf->control_tb__DOT__dut__DOT__snapshot_sequence);
            vlSelf->control_tb__DOT__dut__DOT__snapshot_max_score 
                = vlSelf->control_tb__DOT__dut__DOT__max_score;
            vlSelf->control_tb__DOT__dut__DOT__snapshot_arithmetic_errors 
                = vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors;
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_mode) {
            vlSelf->control_tb__DOT__dut__DOT__desired_mode 
                = (1U & vlSelf->control_tb__DOT__dut__DOT__request_data);
            vlSelf->control_tb__DOT__dut__DOT__mode_pulse = 1U;
            vlSelf->control_tb__DOT__dut__DOT__mode_bit 
                = (1U & vlSelf->control_tb__DOT__dut__DOT__request_data);
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_reference_valid) {
            vlSelf->control_tb__DOT__dut__DOT__reference_valid 
                = (1U & vlSelf->control_tb__DOT__dut__DOT__request_data);
        }
        if (vlSelf->control_tb__DOT__dut__DOT__clear_counters) {
            vlSelf->__Vdly__control_tb__DOT__dut__DOT__max_score = 0U;
            vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors = 0U;
            vlSelf->control_tb__DOT__dut__DOT__sticky_error = 0U;
        } else {
            if ((((IData)(vlSelf->control_tb__DOT__score_valid) 
                  & (~ ([&]() {
                                    __Vfunc_fp32_invalid__16__value 
                                        = vlSelf->control_tb__DOT__score_fp32;
                                    __Vfunc_fp32_invalid__16__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__16__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__16__Vfuncout)))) 
                 & ((0x7fffffffU & vlSelf->control_tb__DOT__score_fp32) 
                    > (0x7fffffffU & vlSelf->control_tb__DOT__dut__DOT__max_score)))) {
                vlSelf->__Vdly__control_tb__DOT__dut__DOT__max_score 
                    = (0x7fffffffU & vlSelf->control_tb__DOT__score_fp32);
            }
            vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors 
                = (IData)(vlSelf->control_tb__DOT__dut__DOT__incremented_errors);
            if (((IData)(vlSelf->control_tb__DOT__arith_error) 
                 | (IData)(vlSelf->control_tb__DOT__mem_error))) {
                vlSelf->control_tb__DOT__dut__DOT__sticky_error = 1U;
            }
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_low) {
            vlSelf->control_tb__DOT__dut__DOT__reference_cycles 
                = ((0xffffffff00000000ULL & vlSelf->control_tb__DOT__dut__DOT__reference_cycles) 
                   | (IData)((IData)(vlSelf->control_tb__DOT__dut__DOT__request_data)));
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_high) {
            vlSelf->control_tb__DOT__dut__DOT__reference_cycles 
                = ((0xffffffffULL & vlSelf->control_tb__DOT__dut__DOT__reference_cycles) 
                   | ((QData)((IData)(vlSelf->control_tb__DOT__dut__DOT__request_data)) 
                      << 0x20U));
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_low) {
            vlSelf->control_tb__DOT__dut__DOT__reference_tokens 
                = ((0xffffffff00000000ULL & vlSelf->control_tb__DOT__dut__DOT__reference_tokens) 
                   | (IData)((IData)(vlSelf->control_tb__DOT__dut__DOT__request_data)));
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_high) {
            vlSelf->control_tb__DOT__dut__DOT__reference_tokens 
                = ((0xffffffffULL & vlSelf->control_tb__DOT__dut__DOT__reference_tokens) 
                   | ((QData)((IData)(vlSelf->control_tb__DOT__dut__DOT__request_data)) 
                      << 0x20U));
        }
        if (vlSelf->control_tb__DOT__dut__DOT__write_reference_profile) {
            vlSelf->control_tb__DOT__dut__DOT__reference_profile 
                = vlSelf->control_tb__DOT__dut__DOT__request_data;
        }
        if (((IData)(vlSelf->control_tb__DOT__csr_valid) 
             & (IData)(vlSelf->control_tb__DOT__csr_ready))) {
            vlSelf->__Vdly__control_tb__DOT__dut__DOT__pending = 1U;
            vlSelf->__Vdly__control_tb__DOT__dut__DOT__request_write 
                = vlSelf->control_tb__DOT__csr_write;
            vlSelf->control_tb__DOT__dut__DOT__request_addr 
                = vlSelf->control_tb__DOT__csr_addr;
            vlSelf->control_tb__DOT__dut__DOT__request_data 
                = vlSelf->control_tb__DOT__csr_wdata;
            vlSelf->control_tb__DOT__dut__DOT__request_strobes 
                = vlSelf->control_tb__DOT__csr_wstrb;
            vlSelf->control_tb__DOT__dut__DOT__request_busy 
                = vlSelf->control_tb__DOT__busy;
            vlSelf->control_tb__DOT__dut__DOT__request_mode 
                = vlSelf->control_tb__DOT__think_active;
        }
        if (vlSelf->control_tb__DOT__dut__DOT__pending) {
            vlSelf->__Vdly__control_tb__DOT__dut__DOT__pending = 0U;
            vlSelf->control_tb__DOT__dut__DOT__response_valid = 1U;
            vlSelf->control_tb__DOT__dut__DOT__response_error 
                = vlSelf->control_tb__DOT__dut__DOT__access_error;
            vlSelf->control_tb__DOT__dut__DOT__response_data 
                = (((IData)(vlSelf->control_tb__DOT__dut__DOT__request_write) 
                    | (IData)(vlSelf->control_tb__DOT__dut__DOT__access_error))
                    ? 0U : vlSelf->control_tb__DOT__dut__DOT__read_value);
        }
    } else {
        vlSelf->__Vdly__control_tb__DOT__dut__DOT__pending = 0U;
        vlSelf->control_tb__DOT__dut__DOT__snapshot_sequence = 0U;
        vlSelf->control_tb__DOT__dut__DOT__response_valid = 0U;
        vlSelf->control_tb__DOT__dut__DOT__response_error = 0U;
        vlSelf->control_tb__DOT__dut__DOT__response_data = 0U;
        vlSelf->__Vdly__control_tb__DOT__dut__DOT__request_write = 0U;
        vlSelf->control_tb__DOT__dut__DOT__request_busy = 0U;
        vlSelf->control_tb__DOT__dut__DOT__request_mode = 0U;
        vlSelf->control_tb__DOT__dut__DOT__request_addr = 0U;
        vlSelf->control_tb__DOT__dut__DOT__request_data = 0U;
        vlSelf->control_tb__DOT__dut__DOT__request_strobes = 0U;
        vlSelf->control_tb__DOT__dut__DOT__mode_pulse = 0U;
        vlSelf->control_tb__DOT__dut__DOT__mode_bit = 0U;
        vlSelf->control_tb__DOT__dut__DOT__desired_mode = 0U;
        vlSelf->control_tb__DOT__dut__DOT__sticky_error = 0U;
        vlSelf->__Vdly__control_tb__DOT__dut__DOT__max_score = 0U;
        vlSelf->control_tb__DOT__dut__DOT__snapshot_max_score = 0U;
        vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors = 0U;
        vlSelf->control_tb__DOT__dut__DOT__snapshot_arithmetic_errors = 0U;
        vlSelf->control_tb__DOT__dut__DOT__reference_valid = 0U;
        vlSelf->control_tb__DOT__dut__DOT__reference_cycles = 0ULL;
        vlSelf->control_tb__DOT__dut__DOT__reference_tokens = 0ULL;
        vlSelf->control_tb__DOT__dut__DOT__reference_profile = 0U;
    }
    vlSelf->control_tb__DOT__dut__DOT__max_score = vlSelf->__Vdly__control_tb__DOT__dut__DOT__max_score;
    vlSelf->control_tb__DOT__dut__DOT__request_write 
        = vlSelf->__Vdly__control_tb__DOT__dut__DOT__request_write;
    vlSelf->control_tb__DOT__dut__DOT__pending = vlSelf->__Vdly__control_tb__DOT__dut__DOT__pending;
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_comb__TOP__1(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_comb__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vfunc_event_add64__2__Vfuncout;
    __Vfunc_event_add64__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__2__value;
    __Vfunc_event_add64__2__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__2__delta;
    __Vfunc_event_add64__2__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__2__low;
    __Vfunc_event_add64__2__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__2__carry1;
    __Vfunc_event_add64__2__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__2__carry2;
    __Vfunc_event_add64__2__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__2__carry3;
    __Vfunc_event_add64__2__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__3__Vfuncout;
    __Vfunc_event_add64__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__3__value;
    __Vfunc_event_add64__3__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__3__delta;
    __Vfunc_event_add64__3__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__3__low;
    __Vfunc_event_add64__3__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__3__carry1;
    __Vfunc_event_add64__3__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__3__carry2;
    __Vfunc_event_add64__3__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__3__carry3;
    __Vfunc_event_add64__3__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__4__Vfuncout;
    __Vfunc_event_add64__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__4__value;
    __Vfunc_event_add64__4__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__4__delta;
    __Vfunc_event_add64__4__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__4__low;
    __Vfunc_event_add64__4__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__4__carry1;
    __Vfunc_event_add64__4__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__4__carry2;
    __Vfunc_event_add64__4__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__4__carry3;
    __Vfunc_event_add64__4__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__5__Vfuncout;
    __Vfunc_event_add64__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__5__value;
    __Vfunc_event_add64__5__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__5__delta;
    __Vfunc_event_add64__5__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__5__low;
    __Vfunc_event_add64__5__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__5__carry1;
    __Vfunc_event_add64__5__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__5__carry2;
    __Vfunc_event_add64__5__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__5__carry3;
    __Vfunc_event_add64__5__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__6__Vfuncout;
    __Vfunc_event_add64__6__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__6__value;
    __Vfunc_event_add64__6__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__6__delta;
    __Vfunc_event_add64__6__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__6__low;
    __Vfunc_event_add64__6__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__6__carry1;
    __Vfunc_event_add64__6__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__6__carry2;
    __Vfunc_event_add64__6__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__6__carry3;
    __Vfunc_event_add64__6__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7__Vfuncout;
    __Vfunc_event_add64__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7__value;
    __Vfunc_event_add64__7__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7__delta;
    __Vfunc_event_add64__7__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7__low;
    __Vfunc_event_add64__7__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7__carry1;
    __Vfunc_event_add64__7__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7__carry2;
    __Vfunc_event_add64__7__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7__carry3;
    __Vfunc_event_add64__7__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__8__Vfuncout;
    __Vfunc_event_add64__8__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__8__value;
    __Vfunc_event_add64__8__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__8__delta;
    __Vfunc_event_add64__8__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__8__low;
    __Vfunc_event_add64__8__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__8__carry1;
    __Vfunc_event_add64__8__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__8__carry2;
    __Vfunc_event_add64__8__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__8__carry3;
    __Vfunc_event_add64__8__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__9__Vfuncout;
    __Vfunc_event_add64__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__9__value;
    __Vfunc_event_add64__9__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__9__delta;
    __Vfunc_event_add64__9__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__9__low;
    __Vfunc_event_add64__9__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__9__carry1;
    __Vfunc_event_add64__9__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__9__carry2;
    __Vfunc_event_add64__9__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__9__carry3;
    __Vfunc_event_add64__9__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__10__Vfuncout;
    __Vfunc_event_add64__10__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__10__value;
    __Vfunc_event_add64__10__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__10__delta;
    __Vfunc_event_add64__10__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__10__low;
    __Vfunc_event_add64__10__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__10__carry1;
    __Vfunc_event_add64__10__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__10__carry2;
    __Vfunc_event_add64__10__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__10__carry3;
    __Vfunc_event_add64__10__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__11__Vfuncout;
    __Vfunc_event_add64__11__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__11__value;
    __Vfunc_event_add64__11__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__11__delta;
    __Vfunc_event_add64__11__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__11__low;
    __Vfunc_event_add64__11__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__11__carry1;
    __Vfunc_event_add64__11__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__11__carry2;
    __Vfunc_event_add64__11__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__11__carry3;
    __Vfunc_event_add64__11__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__12__Vfuncout;
    __Vfunc_event_add64__12__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__12__value;
    __Vfunc_event_add64__12__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__12__delta;
    __Vfunc_event_add64__12__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__12__low;
    __Vfunc_event_add64__12__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__12__carry1;
    __Vfunc_event_add64__12__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__12__carry2;
    __Vfunc_event_add64__12__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__12__carry3;
    __Vfunc_event_add64__12__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__13__Vfuncout;
    __Vfunc_event_add64__13__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__13__value;
    __Vfunc_event_add64__13__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__13__delta;
    __Vfunc_event_add64__13__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__13__low;
    __Vfunc_event_add64__13__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__13__carry1;
    __Vfunc_event_add64__13__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__13__carry2;
    __Vfunc_event_add64__13__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__13__carry3;
    __Vfunc_event_add64__13__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14__Vfuncout;
    __Vfunc_event_add64__14__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14__value;
    __Vfunc_event_add64__14__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14__delta;
    __Vfunc_event_add64__14__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14__low;
    __Vfunc_event_add64__14__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14__carry1;
    __Vfunc_event_add64__14__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14__carry2;
    __Vfunc_event_add64__14__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14__carry3;
    __Vfunc_event_add64__14__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__15__Vfuncout;
    __Vfunc_event_add64__15__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__15__value;
    __Vfunc_event_add64__15__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__15__delta;
    __Vfunc_event_add64__15__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__15__low;
    __Vfunc_event_add64__15__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__15__carry1;
    __Vfunc_event_add64__15__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__15__carry2;
    __Vfunc_event_add64__15__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__15__carry3;
    __Vfunc_event_add64__15__carry3 = 0;
    // Body
    __Vfunc_event_add64__3__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0U];
    __Vfunc_event_add64__3__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0U];
    __Vfunc_event_add64__3__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__3__value)) 
                                               + (IData)(__Vfunc_event_add64__3__delta)));
    __Vfunc_event_add64__3__carry1 = (1U & (__Vfunc_event_add64__3__low 
                                            >> 0x10U));
    __Vfunc_event_add64__3__carry2 = ((IData)(__Vfunc_event_add64__3__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__3__value)));
    __Vfunc_event_add64__3__carry3 = ((IData)(__Vfunc_event_add64__3__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__3__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__3__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__3__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__3__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__3__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__3__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__3__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__3__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__3__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0U] 
        = __Vfunc_event_add64__3__Vfuncout;
    __Vfunc_event_add64__4__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [1U];
    __Vfunc_event_add64__4__value = vlSelf->control_tb__DOT__dut__DOT__live
        [1U];
    __Vfunc_event_add64__4__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__4__value)) 
                                               + (IData)(__Vfunc_event_add64__4__delta)));
    __Vfunc_event_add64__4__carry1 = (1U & (__Vfunc_event_add64__4__low 
                                            >> 0x10U));
    __Vfunc_event_add64__4__carry2 = ((IData)(__Vfunc_event_add64__4__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__4__value)));
    __Vfunc_event_add64__4__carry3 = ((IData)(__Vfunc_event_add64__4__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__4__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__4__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__4__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__4__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__4__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__4__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__4__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__4__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__4__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[1U] 
        = __Vfunc_event_add64__4__Vfuncout;
    __Vfunc_event_add64__5__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [2U];
    __Vfunc_event_add64__5__value = vlSelf->control_tb__DOT__dut__DOT__live
        [2U];
    __Vfunc_event_add64__5__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__5__value)) 
                                               + (IData)(__Vfunc_event_add64__5__delta)));
    __Vfunc_event_add64__5__carry1 = (1U & (__Vfunc_event_add64__5__low 
                                            >> 0x10U));
    __Vfunc_event_add64__5__carry2 = ((IData)(__Vfunc_event_add64__5__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__5__value)));
    __Vfunc_event_add64__5__carry3 = ((IData)(__Vfunc_event_add64__5__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__5__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__5__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__5__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__5__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__5__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__5__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__5__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__5__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__5__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[2U] 
        = __Vfunc_event_add64__5__Vfuncout;
    __Vfunc_event_add64__6__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [3U];
    __Vfunc_event_add64__6__value = vlSelf->control_tb__DOT__dut__DOT__live
        [3U];
    __Vfunc_event_add64__6__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__6__value)) 
                                               + (IData)(__Vfunc_event_add64__6__delta)));
    __Vfunc_event_add64__6__carry1 = (1U & (__Vfunc_event_add64__6__low 
                                            >> 0x10U));
    __Vfunc_event_add64__6__carry2 = ((IData)(__Vfunc_event_add64__6__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__6__value)));
    __Vfunc_event_add64__6__carry3 = ((IData)(__Vfunc_event_add64__6__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__6__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__6__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__6__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__6__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__6__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__6__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__6__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__6__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__6__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[3U] 
        = __Vfunc_event_add64__6__Vfuncout;
    __Vfunc_event_add64__7__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [4U];
    __Vfunc_event_add64__7__value = vlSelf->control_tb__DOT__dut__DOT__live
        [4U];
    __Vfunc_event_add64__7__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__7__value)) 
                                               + (IData)(__Vfunc_event_add64__7__delta)));
    __Vfunc_event_add64__7__carry1 = (1U & (__Vfunc_event_add64__7__low 
                                            >> 0x10U));
    __Vfunc_event_add64__7__carry2 = ((IData)(__Vfunc_event_add64__7__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__7__value)));
    __Vfunc_event_add64__7__carry3 = ((IData)(__Vfunc_event_add64__7__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__7__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__7__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__7__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__7__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__7__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__7__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__7__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__7__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__7__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[4U] 
        = __Vfunc_event_add64__7__Vfuncout;
    __Vfunc_event_add64__8__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [5U];
    __Vfunc_event_add64__8__value = vlSelf->control_tb__DOT__dut__DOT__live
        [5U];
    __Vfunc_event_add64__8__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__8__value)) 
                                               + (IData)(__Vfunc_event_add64__8__delta)));
    __Vfunc_event_add64__8__carry1 = (1U & (__Vfunc_event_add64__8__low 
                                            >> 0x10U));
    __Vfunc_event_add64__8__carry2 = ((IData)(__Vfunc_event_add64__8__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__8__value)));
    __Vfunc_event_add64__8__carry3 = ((IData)(__Vfunc_event_add64__8__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__8__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__8__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__8__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__8__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__8__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__8__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__8__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__8__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__8__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[5U] 
        = __Vfunc_event_add64__8__Vfuncout;
    __Vfunc_event_add64__9__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [6U];
    __Vfunc_event_add64__9__value = vlSelf->control_tb__DOT__dut__DOT__live
        [6U];
    __Vfunc_event_add64__9__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__9__value)) 
                                               + (IData)(__Vfunc_event_add64__9__delta)));
    __Vfunc_event_add64__9__carry1 = (1U & (__Vfunc_event_add64__9__low 
                                            >> 0x10U));
    __Vfunc_event_add64__9__carry2 = ((IData)(__Vfunc_event_add64__9__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__9__value)));
    __Vfunc_event_add64__9__carry3 = ((IData)(__Vfunc_event_add64__9__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__9__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__9__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__9__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__9__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__9__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__9__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__9__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__9__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__9__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[6U] 
        = __Vfunc_event_add64__9__Vfuncout;
    __Vfunc_event_add64__10__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [7U];
    __Vfunc_event_add64__10__value = vlSelf->control_tb__DOT__dut__DOT__live
        [7U];
    __Vfunc_event_add64__10__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__10__value)) 
                                                + (IData)(__Vfunc_event_add64__10__delta)));
    __Vfunc_event_add64__10__carry1 = (1U & (__Vfunc_event_add64__10__low 
                                             >> 0x10U));
    __Vfunc_event_add64__10__carry2 = ((IData)(__Vfunc_event_add64__10__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__10__value)));
    __Vfunc_event_add64__10__carry3 = ((IData)(__Vfunc_event_add64__10__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__10__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__10__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__10__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__10__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__10__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__10__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__10__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__10__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__10__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[7U] 
        = __Vfunc_event_add64__10__Vfuncout;
    __Vfunc_event_add64__11__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [8U];
    __Vfunc_event_add64__11__value = vlSelf->control_tb__DOT__dut__DOT__live
        [8U];
    __Vfunc_event_add64__11__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__11__value)) 
                                                + (IData)(__Vfunc_event_add64__11__delta)));
    __Vfunc_event_add64__11__carry1 = (1U & (__Vfunc_event_add64__11__low 
                                             >> 0x10U));
    __Vfunc_event_add64__11__carry2 = ((IData)(__Vfunc_event_add64__11__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__11__value)));
    __Vfunc_event_add64__11__carry3 = ((IData)(__Vfunc_event_add64__11__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__11__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__11__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__11__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__11__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__11__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__11__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__11__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__11__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__11__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[8U] 
        = __Vfunc_event_add64__11__Vfuncout;
    __Vfunc_event_add64__12__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [9U];
    __Vfunc_event_add64__12__value = vlSelf->control_tb__DOT__dut__DOT__live
        [9U];
    __Vfunc_event_add64__12__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__12__value)) 
                                                + (IData)(__Vfunc_event_add64__12__delta)));
    __Vfunc_event_add64__12__carry1 = (1U & (__Vfunc_event_add64__12__low 
                                             >> 0x10U));
    __Vfunc_event_add64__12__carry2 = ((IData)(__Vfunc_event_add64__12__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__12__value)));
    __Vfunc_event_add64__12__carry3 = ((IData)(__Vfunc_event_add64__12__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__12__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__12__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__12__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__12__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__12__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__12__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__12__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__12__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__12__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[9U] 
        = __Vfunc_event_add64__12__Vfuncout;
    __Vfunc_event_add64__13__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0xaU];
    __Vfunc_event_add64__13__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0xaU];
    __Vfunc_event_add64__13__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__13__value)) 
                                                + (IData)(__Vfunc_event_add64__13__delta)));
    __Vfunc_event_add64__13__carry1 = (1U & (__Vfunc_event_add64__13__low 
                                             >> 0x10U));
    __Vfunc_event_add64__13__carry2 = ((IData)(__Vfunc_event_add64__13__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__13__value)));
    __Vfunc_event_add64__13__carry3 = ((IData)(__Vfunc_event_add64__13__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__13__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__13__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__13__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__13__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__13__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__13__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__13__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__13__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__13__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0xaU] 
        = __Vfunc_event_add64__13__Vfuncout;
    __Vfunc_event_add64__14__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0xbU];
    __Vfunc_event_add64__14__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0xbU];
    __Vfunc_event_add64__14__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__14__value)) 
                                                + (IData)(__Vfunc_event_add64__14__delta)));
    __Vfunc_event_add64__14__carry1 = (1U & (__Vfunc_event_add64__14__low 
                                             >> 0x10U));
    __Vfunc_event_add64__14__carry2 = ((IData)(__Vfunc_event_add64__14__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__14__value)));
    __Vfunc_event_add64__14__carry3 = ((IData)(__Vfunc_event_add64__14__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__14__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__14__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__14__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__14__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__14__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__14__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__14__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__14__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__14__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0xbU] 
        = __Vfunc_event_add64__14__Vfuncout;
    __Vfunc_event_add64__15__delta = vlSelf->control_tb__DOT__dut__DOT__increment
        [0xcU];
    __Vfunc_event_add64__15__value = vlSelf->control_tb__DOT__dut__DOT__live
        [0xcU];
    __Vfunc_event_add64__15__low = (0x1ffffU & ((0xffffU 
                                                 & (IData)(__Vfunc_event_add64__15__value)) 
                                                + (IData)(__Vfunc_event_add64__15__delta)));
    __Vfunc_event_add64__15__carry1 = (1U & (__Vfunc_event_add64__15__low 
                                             >> 0x10U));
    __Vfunc_event_add64__15__carry2 = ((IData)(__Vfunc_event_add64__15__carry1) 
                                       & (0xffff0000ULL 
                                          == (0xffff0000ULL 
                                              & __Vfunc_event_add64__15__value)));
    __Vfunc_event_add64__15__carry3 = ((IData)(__Vfunc_event_add64__15__carry1) 
                                       & (0xffffffffU 
                                          == (IData)(
                                                     (__Vfunc_event_add64__15__value 
                                                      >> 0x10U))));
    __Vfunc_event_add64__15__Vfuncout = (((QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__15__value 
                                                                      >> 0x30U)) 
                                                             + (IData)(__Vfunc_event_add64__15__carry3)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & ((IData)(
                                                                         (__Vfunc_event_add64__15__value 
                                                                          >> 0x20U)) 
                                                                 + (IData)(__Vfunc_event_add64__15__carry2)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(
                                                                      (__Vfunc_event_add64__15__value 
                                                                       >> 0x10U)) 
                                                              + (IData)(__Vfunc_event_add64__15__carry1)) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & __Vfunc_event_add64__15__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented[0xcU] 
        = __Vfunc_event_add64__15__Vfuncout;
    vlSelf->control_tb__DOT__csr_rsp_valid = ((IData)(vlSelf->control_tb__DOT__dut__DOT__response_valid) 
                                              & (IData)(vlSelf->control_tb__DOT__rst_n));
    vlSelf->control_tb__DOT__mode_valid = ((IData)(vlSelf->control_tb__DOT__dut__DOT__mode_pulse) 
                                           & (IData)(vlSelf->control_tb__DOT__rst_n));
    vlSelf->control_tb__DOT__mode_value = (((IData)(vlSelf->control_tb__DOT__dut__DOT__mode_pulse) 
                                            & (IData)(vlSelf->control_tb__DOT__rst_n)) 
                                           & (IData)(vlSelf->control_tb__DOT__dut__DOT__mode_bit));
    __Vfunc_event_add64__2__delta = vlSelf->control_tb__DOT__arith_error;
    __Vfunc_event_add64__2__value = (QData)((IData)(vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors));
    __Vfunc_event_add64__2__low = (0x1ffffU & ((0xffffU 
                                                & (IData)(__Vfunc_event_add64__2__value)) 
                                               + (IData)(__Vfunc_event_add64__2__delta)));
    __Vfunc_event_add64__2__carry1 = (1U & (__Vfunc_event_add64__2__low 
                                            >> 0x10U));
    __Vfunc_event_add64__2__carry2 = ((IData)(__Vfunc_event_add64__2__carry1) 
                                      & (0xffff0000ULL 
                                         == (0xffff0000ULL 
                                             & __Vfunc_event_add64__2__value)));
    __Vfunc_event_add64__2__carry3 = ((IData)(__Vfunc_event_add64__2__carry1) 
                                      & (0xffffffffU 
                                         == (IData)(
                                                    (__Vfunc_event_add64__2__value 
                                                     >> 0x10U))));
    __Vfunc_event_add64__2__Vfuncout = (((QData)((IData)(
                                                         ((((IData)(
                                                                    (__Vfunc_event_add64__2__value 
                                                                     >> 0x30U)) 
                                                            + (IData)(__Vfunc_event_add64__2__carry3)) 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & ((IData)(
                                                                        (__Vfunc_event_add64__2__value 
                                                                         >> 0x20U)) 
                                                                + (IData)(__Vfunc_event_add64__2__carry2)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(
                                                                     (__Vfunc_event_add64__2__value 
                                                                      >> 0x10U)) 
                                                             + (IData)(__Vfunc_event_add64__2__carry1)) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & __Vfunc_event_add64__2__low)))));
    vlSelf->control_tb__DOT__dut__DOT__incremented_errors 
        = __Vfunc_event_add64__2__Vfuncout;
    vlSelf->control_tb__DOT__csr_ready = ((~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__pending) 
                                              | (IData)(vlSelf->control_tb__DOT__dut__DOT__response_valid))) 
                                          & (IData)(vlSelf->control_tb__DOT__rst_n));
    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_low = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_high = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_low = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_high = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_valid = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_reference_profile = 0U;
    vlSelf->control_tb__DOT__dut__DOT__write_mode = 0U;
    vlSelf->control_tb__DOT__dut__DOT__take_snapshot = 0U;
    vlSelf->control_tb__DOT__dut__DOT__access_error = 0U;
    vlSelf->control_tb__DOT__dut__DOT__clear_counters = 0U;
    vlSelf->control_tb__DOT__dut__DOT__read_value = 0U;
    if (((IData)(vlSelf->control_tb__DOT__rst_n) & (IData)(vlSelf->control_tb__DOT__dut__DOT__pending))) {
        if ((1U & (~ ((0U != (3U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) 
                      | ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_write) 
                         & (0xfU != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_strobes))))))) {
            if (vlSelf->control_tb__DOT__dut__DOT__request_write) {
                if ((8U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((0x84U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((0x88U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_low = 1U;
                            }
                        }
                        if ((0x88U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            if ((0x8cU == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_high = 1U;
                                }
                            }
                            if ((0x8cU != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                if ((0x90U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                        vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_low = 1U;
                                    }
                                }
                                if ((0x90U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((0x94U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_high = 1U;
                                        }
                                    }
                                    if ((0x94U != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((0x98U 
                                             == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    (((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                                      | (1U 
                                                         > vlSelf->control_tb__DOT__dut__DOT__request_data)) 
                                                     | (3U 
                                                        < vlSelf->control_tb__DOT__dut__DOT__request_data))))) {
                                                vlSelf->control_tb__DOT__dut__DOT__write_reference_profile = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x84U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                      | (0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                                >> 1U)))))) {
                            vlSelf->control_tb__DOT__dut__DOT__write_reference_valid = 1U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((1U & (~ ((0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                          >> 3U)) | 
                                  ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                   & (((1U & vlSelf->control_tb__DOT__dut__DOT__request_data) 
                                       != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_mode)) 
                                      | (0U == (3U 
                                                & (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                                   >> 1U))))))))) {
                        vlSelf->control_tb__DOT__dut__DOT__write_mode 
                            = (1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy)));
                        vlSelf->control_tb__DOT__dut__DOT__take_snapshot 
                            = (1U & (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                     >> 1U));
                        vlSelf->control_tb__DOT__dut__DOT__clear_counters 
                            = (1U & (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                     >> 2U));
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_write)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                    = vlSelf->control_tb__DOT__dut__DOT__reference_profile;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                = (IData)(
                                                                          (vlSelf->control_tb__DOT__dut__DOT__reference_tokens 
                                                                           >> 0x20U));
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(vlSelf->control_tb__DOT__dut__DOT__reference_tokens);
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                = (IData)(
                                                                          (vlSelf->control_tb__DOT__dut__DOT__reference_cycles 
                                                                           >> 0x20U));
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(vlSelf->control_tb__DOT__dut__DOT__reference_cycles);
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = vlSelf->control_tb__DOT__dut__DOT__reference_valid;
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = vlSelf->control_tb__DOT__dut__DOT__snapshot_sequence;
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x40U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                                = (IData)(
                                                                          (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                           [0xcU] 
                                                                           >> 0x20U));
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                                >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                      [0xcU]);
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [0xbU] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [0xbU]);
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [0xaU] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [0xaU]);
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [9U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [9U]);
                                            }
                                        }
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [8U] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [8U]);
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [7U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [7U]);
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = vlSelf->control_tb__DOT__dut__DOT__snapshot_arithmetic_errors;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = vlSelf->control_tb__DOT__dut__DOT__snapshot_max_score;
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                               [6U] 
                                                               >> 0x20U));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = (IData)(
                                                          vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                          [6U]);
                                        }
                                    }
                                } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                        vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                            = (IData)(
                                                                      (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                       [5U] 
                                                                       >> 0x20U));
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                            >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                  [5U]);
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [4U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [4U]);
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [3U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [3U]);
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                               [2U] 
                                                               >> 0x20U));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = (IData)(
                                                          vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                          [2U]);
                                        }
                                    }
                                } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                    vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                        = (IData)(
                                                                  (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                                   [1U] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                              [1U]);
                                            }
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = (IData)(
                                                              (vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                               [0U] 
                                                               >> 0x20U));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = (IData)(
                                                          vlSelf->control_tb__DOT__dut__DOT__snapshot
                                                          [0U]);
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                                vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                    = 
                                                    (((IData)(vlSelf->control_tb__DOT__dut__DOT__sticky_error) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->control_tb__DOT__think_active) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->control_tb__DOT__busy)));
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value 
                                                = vlSelf->control_tb__DOT__dut__DOT__desired_mode;
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                            vlSelf->control_tb__DOT__dut__DOT__read_value = 3U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr) 
                                                   >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr)))) {
                                        vlSelf->control_tb__DOT__dut__DOT__read_value = 0x1000001U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0U != (3U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) 
             | ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_write) 
                & (0xfU != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_strobes))))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if (vlSelf->control_tb__DOT__dut__DOT__request_write) {
            if ((8U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (((0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                             >> 3U)) | ((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                                        & (((1U & vlSelf->control_tb__DOT__dut__DOT__request_data) 
                                            != (IData)(vlSelf->control_tb__DOT__dut__DOT__request_mode)) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelf->control_tb__DOT__dut__DOT__request_data 
                                                >> 1U))))))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x84U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                     | (0U != (vlSelf->control_tb__DOT__dut__DOT__request_data 
                               >> 1U)))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x88U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x8cU == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x90U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x94U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if (vlSelf->control_tb__DOT__dut__DOT__request_busy) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x98U == (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((((IData)(vlSelf->control_tb__DOT__dut__DOT__request_busy) 
                      | (1U > vlSelf->control_tb__DOT__dut__DOT__request_data)) 
                     | (3U < vlSelf->control_tb__DOT__dut__DOT__request_data))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x800U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x400U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x200U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x100U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((0x80U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((0x40U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x40U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                        vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((8U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                    vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
                vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
            }
        } else if ((2U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        } else if ((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__request_addr))) {
            vlSelf->control_tb__DOT__dut__DOT__access_error = 1U;
        }
    }
}

void Vcontrol_tb___024root___nba_sequent__TOP__1(Vcontrol_tb___024root* vlSelf);

void Vcontrol_tb___024root___eval_nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vcontrol_tb___024root___timing_resume(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9e28a70d__0.resume("@(negedge control_tb.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9e28a54c__0.resume("@(posedge control_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcontrol_tb___024root___timing_commit(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9e28a70d__0.commit("@(negedge control_tb.clk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9e28a54c__0.commit("@(posedge control_tb.clk)");
    }
}

void Vcontrol_tb___024root___eval_triggers__act(Vcontrol_tb___024root* vlSelf);

bool Vcontrol_tb___024root___eval_phase__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontrol_tb___024root___eval_triggers__act(vlSelf);
    Vcontrol_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcontrol_tb___024root___timing_resume(vlSelf);
        Vcontrol_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontrol_tb___024root___eval_phase__nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontrol_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__nba(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_tb___024root___eval(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcontrol_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcontrol_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcontrol_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcontrol_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontrol_tb___024root___eval_debug_assertions(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
