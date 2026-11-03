// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb__Syms.h"
#include "Vstartup_tb___024root.h"

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__41(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__41\n"); );
    // Init
    IData/*16:0*/ __Vfunc_round_bf16__50__Vfuncout;
    __Vfunc_round_bf16__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__50__value;
    __Vfunc_round_bf16__50__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__50__rounded;
    __Vfunc_round_bf16__50__rounded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__52__Vfuncout;
    __Vfunc_bf16_invalid__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__52__value;
    __Vfunc_bf16_invalid__52__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__53__Vfuncout;
    __Vfunc_bf16_invalid__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__53__value;
    __Vfunc_bf16_invalid__53__value = 0;
    // Body
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result = 0U;
        } else {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 0U;
            if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic_state) 
                  & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting))) 
                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 1U;
            }
            if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__completed) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                }
                if (((((((((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                           | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                          | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                         | (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                        | (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                       | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                      | (0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                     | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
                    if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent = 7U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 5U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        if ((1U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent)) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum 
                                = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 7U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent 
                                = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent 
                                   - (IData)(1U));
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 8U;
                    } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 9U;
                    } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xaU;
                    } else if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xbU;
                    } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xdU;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xfU;
                    }
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0x11U;
                }
            } else if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                              | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                             | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                            | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                           | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                          | (0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                         | (0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
                        | (0xfU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
                if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if (((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_start_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 1U;
                    }
                } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__capture) {
                        if ((([&]() {
                                        __Vfunc_bf16_invalid__52__value 
                                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_data;
                                        __Vfunc_bf16_invalid__52__Vfuncout 
                                            = (0xffU 
                                               == (0xffU 
                                                   & ((IData)(__Vfunc_bf16_invalid__52__value) 
                                                      >> 7U)));
                                    }(), (IData)(__Vfunc_bf16_invalid__52__Vfuncout)) 
                             | ([&]() {
                                        __Vfunc_bf16_invalid__53__value 
                                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_gamma;
                                        __Vfunc_bf16_invalid__53__Vfuncout 
                                            = (0xffU 
                                               == (0xffU 
                                                   & ((IData)(__Vfunc_bf16_invalid__53__value) 
                                                      >> 7U)));
                                    }(), (IData)(__Vfunc_bf16_invalid__53__Vfuncout)))) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                        }
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 3U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                        }
                    }
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 3U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                            = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                    }
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 4U;
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 6U;
                } else if ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xcU;
                } else if ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                    if ((0x10000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded)) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u 
                            = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded);
                    }
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xeU;
                } else {
                    if ((0x10000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded)) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 1U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result 
                            = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded);
                    }
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0x10U;
                }
            } else if ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0x11U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
                            = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0xbU;
                    }
                }
            } else if ((0x11U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 1U;
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__failed = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__result = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__parent;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__cursor;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state;
    __Vfunc_round_bf16__50__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product;
    __Vfunc_round_bf16__50__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__50__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__50__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__50__value)))))));
    __Vfunc_round_bf16__50__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__51__value 
                        = __Vfunc_round_bf16__50__value;
                    vlSelf->__Vfunc_fp32_invalid__51__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__51__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__51__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__50__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__50__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__50__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__op = 0U;
    if (((((((((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
               | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
              | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
             | (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
            | (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
           | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
          | (0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
         | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__op 
            = ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                ? 2U : ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                         ? 0U : ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                  ? 3U : ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                           ? 0U : (
                                                   (9U 
                                                    == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                                    ? 4U
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                                     ? 3U
                                                     : 2U))))));
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic_state 
        = ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
           | ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
              | ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                 | ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                    | ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                       | ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                          | ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                             | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))))))));
}

extern const VlWide<16>/*511:0*/ Vstartup_tb__ConstPool__CONST_h8016e4ec_0;

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__42(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__42\n"); );
    // Init
    VlWide<13>/*415:0*/ __Vtemp_13;
    VlWide<13>/*415:0*/ __Vtemp_14;
    VlWide<14>/*447:0*/ __Vtemp_17;
    VlWide<16>/*511:0*/ __Vtemp_24;
    // Body
    if ((1U & (~ (IData)(vlSelf->startup_tb__DOT__rst_n)))) {
        __Vtemp_13[0xaU] = ((((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                               ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                   ? ((2U >= (3U & 
                                              vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                              [0U]))
                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                      [(3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [0U])] : 0U)
                                   : 0U) : 0U) >> 0x16U) 
                            | ((IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                           ? 
                                                          ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                            ? 
                                                           ((2U 
                                                             >= 
                                                             (3U 
                                                              & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [0U]))
                                                             ? 
                                                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                            [
                                                            (3U 
                                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [0U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                            ? 
                                                           ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                             ? 
                                                            ((2U 
                                                              >= 
                                                              (3U 
                                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U]))
                                                              ? 
                                                             vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                             [
                                                             (3U 
                                                              & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [0U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))))) 
                               << 0xaU));
        __Vtemp_13[0xbU] = (((IData)((((QData)((IData)(
                                                       ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                         ? 
                                                        ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                          ? 
                                                         ((2U 
                                                           >= 
                                                           (3U 
                                                            & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [0U]))
                                                           ? 
                                                          vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                          [
                                                          (3U 
                                                           & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [0U])]
                                                           : 0U)
                                                          : 0U)
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                                      ? 
                                                                     ((2U 
                                                                       >= 
                                                                       (3U 
                                                                        & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                        [0U]))
                                                                       ? 
                                                                      vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                                      [
                                                                      (3U 
                                                                       & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                       [0U])]
                                                                       : 0U)
                                                                      : 0U)
                                                                     : 0U))))) 
                             >> 0x16U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                                       ? 
                                                                      ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                                        ? 
                                                                       ((2U 
                                                                         >= 
                                                                         (3U 
                                                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                          [0U]))
                                                                         ? 
                                                                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                                        [
                                                                        (3U 
                                                                         & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [0U])]
                                                                         : 0U)
                                                                        : 0U)
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                                        ? 
                                                                       ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                                         ? 
                                                                        ((2U 
                                                                          >= 
                                                                          (3U 
                                                                           & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                           [0U]))
                                                                          ? 
                                                                         vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                                         [
                                                                         (3U 
                                                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                          [0U])]
                                                                          : 0U)
                                                                         : 0U)
                                                                        : 0U)))) 
                                                   >> 0x20U)) 
                                          << 0xaU));
        __Vtemp_14[0xcU] = ((((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                               ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                   ? ((2U >= (3U & 
                                              vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                              [0U]))
                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                      [(3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [0U])] : 0U)
                                   : 0U) : 0U) << 0xaU) 
                            | ((IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                            ? 
                                                           ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                             ? 
                                                            ((2U 
                                                              >= 
                                                              (3U 
                                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U]))
                                                              ? 
                                                             vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                             [
                                                             (3U 
                                                              & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [0U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                             ? 
                                                            ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                              ? 
                                                             ((2U 
                                                               >= 
                                                               (3U 
                                                                & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [0U]))
                                                               ? 
                                                              vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                              [
                                                              (3U 
                                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U)))) 
                                        >> 0x20U)) 
                               >> 0x16U));
        __Vtemp_17[0xdU] = ((((IData)(vlSelf->startup_tb__DOT__mem_req_valid) 
                              & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid) 
                                 & ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                            [0U])) 
                                    && (1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing) 
                                              >> (3U 
                                                  & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [0U])))))) 
                             << 0x11U) | ((((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                             ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                 ? 
                                                ((2U 
                                                  >= 
                                                  (3U 
                                                   & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [0U]))
                                                  ? 
                                                 vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                 [(3U 
                                                   & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [0U])]
                                                  : 0U)
                                                 : 0U)
                                             : 0U) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                               ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                   ? 
                                                  ((2U 
                                                    >= 
                                                    (3U 
                                                     & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                     [0U]))
                                                    ? 
                                                   vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                   [
                                                   (3U 
                                                    & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [0U])]
                                                    : 0U)
                                                   : 0U)
                                               : 0U) 
                                             >> 0x13U)));
        __Vtemp_24[0xfU] = ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                              & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_fault)) 
                                 & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_error)) 
                                    & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_error)) 
                                       & ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                                          & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg)) 
                                             & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__error_reg)) 
                                                & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_done_reg)) 
                                                   & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid) 
                                                           | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__mode_valid))) 
                                                         & (IData)(vlSelf->startup_tb__DOT__csr_ready))))))))))) 
                             << 0x17U) | (((IData)(vlSelf->startup_tb__DOT__logit_valid) 
                                           << 0x16U) 
                                          | (((((~ (IData)(vlSelf->startup_tb__DOT__cancel)) 
                                                & (IData)(vlSelf->startup_tb__DOT__rst_n)) 
                                               & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg)) 
                                              << 0x15U) 
                                             | (((((~ (IData)(vlSelf->startup_tb__DOT__cancel)) 
                                                   & (IData)(vlSelf->startup_tb__DOT__rst_n)) 
                                                  & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__error_reg)) 
                                                 << 0x14U) 
                                                | ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_done_reg) 
                                                     & (IData)(vlSelf->startup_tb__DOT__rst_n)) 
                                                    << 0x13U) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                                 ? 
                                                                                ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                                 ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_index
                                                                                 : 0U)
                                                                                 : 0U))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                                 ? 
                                                                                ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                                 ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_fp32
                                                                                 : 0U)
                                                                                 : 0U)))) 
                                                               >> 0x20U)) 
                                                      >> 0xdU))))));
        if (VL_UNLIKELY((0U != ((((((((((((((((Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0U] 
                                               ^ (IData)(
                                                         (((QData)((IData)(vlSelf->startup_tb__DOT__think_active)) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(vlSelf->startup_tb__DOT__csr_ready)) 
                                                              << 0x22U) 
                                                             | (((QData)((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid)) 
                                                                 << 0x21U) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid)
                                                                                 ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_data
                                                                                 : 0U))) 
                                                                    << 1U) 
                                                                   | (QData)((IData)(
                                                                                ((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid) 
                                                                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_error)))))))))) 
                                              | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[1U] 
                                                 ^ 
                                                 ((((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                     ? 
                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position)
                                                      : 0U)
                                                     : 0U) 
                                                   << 4U) 
                                                  | (IData)(
                                                            ((((QData)((IData)(vlSelf->startup_tb__DOT__think_active)) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(vlSelf->startup_tb__DOT__csr_ready)) 
                                                                  << 0x22U) 
                                                                 | (((QData)((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid)) 
                                                                     << 0x21U) 
                                                                    | (((QData)((IData)(
                                                                                ((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid)
                                                                                 ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_data
                                                                                 : 0U))) 
                                                                        << 1U) 
                                                                       | (QData)((IData)(
                                                                                ((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid) 
                                                                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_error)))))))) 
                                                             >> 0x20U))))) 
                                             | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[2U] 
                                                ^ (
                                                   (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                      ? 
                                                     ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position)
                                                       : 0U)
                                                      : 0U) 
                                                    >> 0x1cU) 
                                                   | (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                        ? 
                                                       ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                         ? 
                                                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U]
                                                         : 0U)
                                                        : 0U) 
                                                      << 4U)))) 
                                            | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[3U] 
                                               ^ ((
                                                   ((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                     ? 
                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                      ? 
                                                     vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U]
                                                      : 0U)
                                                     : 0U) 
                                                   >> 0x1cU) 
                                                  | (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                       ? 
                                                      ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                        ? 
                                                       vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U]
                                                        : 0U)
                                                       : 0U) 
                                                     << 4U)))) 
                                           | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[4U] 
                                              ^ ((((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                    ? 
                                                   ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                     ? 
                                                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U]
                                                     : 0U)
                                                    : 0U) 
                                                  >> 0x1cU) 
                                                 | (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                      ? 
                                                     ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                       ? 
                                                      vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U]
                                                       : 0U)
                                                      : 0U) 
                                                    << 4U)))) 
                                          | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[5U] 
                                             ^ ((((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                   ? 
                                                  ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                    ? 
                                                   vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U]
                                                    : 0U)
                                                   : 0U) 
                                                 >> 0x1cU) 
                                                | (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                     ? 
                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                      ? 
                                                     vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U]
                                                      : 0U)
                                                     : 0U) 
                                                   << 4U)))) 
                                         | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[6U] 
                                            ^ ((((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                  ? 
                                                 ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                   ? 
                                                  vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U]
                                                   : 0U)
                                                  : 0U) 
                                                >> 0x1cU) 
                                               | (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                    ? 
                                                   ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                     ? 
                                                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U]
                                                     : 0U)
                                                    : 0U) 
                                                  << 4U)))) 
                                        | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[7U] 
                                           ^ (((IData)(
                                                       ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                         ? 
                                                        ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                          ? 
                                                         ((2U 
                                                           >= 
                                                           (3U 
                                                            & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [0U]))
                                                           ? 
                                                          vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                          [
                                                          (3U 
                                                           & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [0U])]
                                                           : 0ULL)
                                                          : 0ULL)
                                                         : 0ULL)) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->startup_tb__DOT__rst_n) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->startup_tb__DOT__draft_ready) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->startup_tb__DOT__commit_valid) 
                                                        << 7U) 
                                                       | ((((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                             ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)
                                                             : 0U) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->startup_tb__DOT__commit_valid)
                                                               ? 
                                                              ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                                                ? 
                                                               vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U]
                                                                : 0U)
                                                               : 0U) 
                                                             >> 0x1cU)))))))) 
                                       | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[8U] 
                                          ^ (((IData)(
                                                      ((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                        ? 
                                                       ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                         ? 
                                                        ((2U 
                                                          >= 
                                                          (3U 
                                                           & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [0U]))
                                                          ? 
                                                         vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                         [
                                                         (3U 
                                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                          [0U])]
                                                          : 0ULL)
                                                         : 0ULL)
                                                        : 0ULL)) 
                                              >> 0x16U) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                           ? 
                                                          ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                            ? 
                                                           ((2U 
                                                             >= 
                                                             (3U 
                                                              & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [0U]))
                                                             ? 
                                                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                            [
                                                            (3U 
                                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [0U])]
                                                             : 0ULL)
                                                            : 0ULL)
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                << 0xaU)))) 
                                      | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[9U] 
                                         ^ (((IData)(
                                                     (((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                        ? 
                                                       ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                         ? 
                                                        ((2U 
                                                          >= 
                                                          (3U 
                                                           & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [0U]))
                                                          ? 
                                                         vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                         [
                                                         (3U 
                                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                          [0U])]
                                                          : 0ULL)
                                                         : 0ULL)
                                                        : 0ULL) 
                                                      >> 0x20U)) 
                                             >> 0x16U) 
                                            | (((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                                 ? 
                                                ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                  ? 
                                                 ((2U 
                                                   >= 
                                                   (3U 
                                                    & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [0U]))
                                                   ? 
                                                  vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                  [
                                                  (3U 
                                                   & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [0U])]
                                                   : 0U)
                                                  : 0U)
                                                 : 0U) 
                                               << 0xaU)))) 
                                     | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0xaU] 
                                        ^ __Vtemp_13[0xaU])) 
                                    | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0xbU] 
                                       ^ __Vtemp_13[0xbU])) 
                                   | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0xcU] 
                                      ^ ((((IData)(vlSelf->startup_tb__DOT__mem_req_valid)
                                            ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid)
                                                ? (
                                                   (2U 
                                                    >= 
                                                    (3U 
                                                     & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                     [0U]))
                                                    ? 
                                                   vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                   [
                                                   (3U 
                                                    & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [0U])]
                                                    : 0U)
                                                : 0U)
                                            : 0U) << 0xdU) 
                                         | __Vtemp_14[0xcU]))) 
                                  | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0xdU] 
                                     ^ (((IData)((((QData)((IData)(
                                                                   ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                      ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_index
                                                                      : 0U)
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                      ? 
                                                                     ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_fp32
                                                                       : 0U)
                                                                      : 0U))))) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->startup_tb__DOT__mem_req_valid) 
                                            << 0x12U) 
                                           | __Vtemp_17[0xdU])))) 
                                 | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0xeU] 
                                    ^ (((IData)((((QData)((IData)(
                                                                  ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                    ? 
                                                                   ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                     ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_index
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                      ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_fp32
                                                                      : 0U)
                                                                     : 0U))))) 
                                        >> 0xdU) | 
                                       ((IData)(((((QData)((IData)(
                                                                   ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                      ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_index
                                                                      : 0U)
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(vlSelf->startup_tb__DOT__logit_valid)
                                                                      ? 
                                                                     ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid)
                                                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_fp32
                                                                       : 0U)
                                                                      : 0U)))) 
                                                 >> 0x20U)) 
                                        << 0x13U)))) 
                                | (Vstartup_tb__ConstPool__CONST_h8016e4ec_0[0xfU] 
                                   ^ __Vtemp_24[0xfU]))))) {
            VL_WRITEF("[%0t] %%Fatal: startup-verilator-b1-q3-d8-g2-v1-m1.sv:54: Assertion failed in %Nstartup_tb.reset_outputs: STARTUP_RESET_XZ_OR_NONZERO\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-startup-compiled-20261103T062503Z-5e89f025/startup-verilator-b1-q3-d8-g2-v1-m1.sv", 54, "");
        }
    }
}

extern const VlWide<32>/*1023:0*/ Vstartup_tb__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<128>/*4095:0*/ Vstartup_tb__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<40>/*1279:0*/ Vstartup_tb__ConstPool__CONST_had224c38_0;

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__43(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__43\n"); );
    // Init
    IData/*31:0*/ startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate = 0;
    IData/*31:0*/ __Vilp;
    IData/*16:0*/ __Vfunc_round_bf16__55__Vfuncout;
    __Vfunc_round_bf16__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__55__value;
    __Vfunc_round_bf16__55__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__55__rounded;
    __Vfunc_round_bf16__55__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__58__Vfuncout;
    __Vfunc_round_bf16__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__58__value;
    __Vfunc_round_bf16__58__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__58__rounded;
    __Vfunc_round_bf16__58__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__60__Vfuncout;
    __Vfunc_round_bf16__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__60__value;
    __Vfunc_round_bf16__60__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__60__rounded;
    __Vfunc_round_bf16__60__rounded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__62__Vfuncout;
    __Vfunc_bf16_invalid__62__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__62__value;
    __Vfunc_bf16_invalid__62__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__80__Vfuncout;
    __Vfunc_round_bf16__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__80__value;
    __Vfunc_round_bf16__80__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__80__rounded;
    __Vfunc_round_bf16__80__rounded = 0;
    CData/*0:0*/ __Vfunc_fp32_greater__82__Vfuncout;
    __Vfunc_fp32_greater__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_greater__82__a;
    __Vfunc_fp32_greater__82__a = 0;
    IData/*31:0*/ __Vfunc_fp32_greater__82__b;
    __Vfunc_fp32_greater__82__b = 0;
    QData/*32:0*/ __Vfunc_round_pack32__168__Vfuncout;
    __Vfunc_round_pack32__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__168__negative;
    __Vfunc_round_pack32__168__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__168__exponent;
    __Vfunc_round_pack32__168__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__168__significand;
    __Vfunc_round_pack32__168__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__168__shifted;
    __Vfunc_round_pack32__168__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__168__rounded;
    __Vfunc_round_pack32__168__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__168__adjusted;
    __Vfunc_round_pack32__168__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__168__biased;
    __Vfunc_round_pack32__168__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__170__Vfuncout;
    __Vfunc_fp32_invalid__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__170__value;
    __Vfunc_fp32_invalid__170__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__171__Vfuncout;
    __Vfunc_fp32_invalid__171__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__171__value;
    __Vfunc_fp32_invalid__171__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__172__Vfuncout;
    __Vfunc_shift_jam27__172__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__172__value;
    __Vfunc_shift_jam27__172__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__172__distance;
    __Vfunc_shift_jam27__172__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__172__shifted;
    __Vfunc_shift_jam27__172__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__172__discarded;
    __Vfunc_shift_jam27__172__discarded = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__173__Vfuncout;
    __Vfunc_unsigned32_to_fp32__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__173__value;
    __Vfunc_unsigned32_to_fp32__173__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__173__shift;
    __Vfunc_unsigned32_to_fp32__173__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__173__normalized;
    __Vfunc_unsigned32_to_fp32__173__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__173__packed_value;
    __Vfunc_unsigned32_to_fp32__173__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__174__Vfuncout;
    __Vfunc_leading_zero32__174__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__174__value;
    __Vfunc_leading_zero32__174__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__174__part;
    __Vfunc_leading_zero32__174__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__174__count;
    __Vfunc_leading_zero32__174__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__175__Vfuncout;
    __Vfunc_round_pack32__175__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__175__exponent;
    __Vfunc_round_pack32__175__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__175__significand;
    __Vfunc_round_pack32__175__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__175__shifted;
    __Vfunc_round_pack32__175__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__175__rounded;
    __Vfunc_round_pack32__175__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__175__adjusted;
    __Vfunc_round_pack32__175__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__175__biased;
    __Vfunc_round_pack32__175__biased = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__177__Vfuncout;
    __Vfunc_unsigned32_to_fp32__177__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__177__value;
    __Vfunc_unsigned32_to_fp32__177__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__177__shift;
    __Vfunc_unsigned32_to_fp32__177__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__177__normalized;
    __Vfunc_unsigned32_to_fp32__177__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__177__packed_value;
    __Vfunc_unsigned32_to_fp32__177__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__178__Vfuncout;
    __Vfunc_leading_zero32__178__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__178__value;
    __Vfunc_leading_zero32__178__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__178__part;
    __Vfunc_leading_zero32__178__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__178__count;
    __Vfunc_leading_zero32__178__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__179__Vfuncout;
    __Vfunc_round_pack32__179__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__179__exponent;
    __Vfunc_round_pack32__179__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__179__significand;
    __Vfunc_round_pack32__179__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__179__shifted;
    __Vfunc_round_pack32__179__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__179__rounded;
    __Vfunc_round_pack32__179__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__179__adjusted;
    __Vfunc_round_pack32__179__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__179__biased;
    __Vfunc_round_pack32__179__biased = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__194__Vfuncout;
    __Vfunc_awq_lane_shift__194__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__194__lane;
    __Vfunc_awq_lane_shift__194__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__195__Vfuncout;
    __Vfunc_awq_lane_shift__195__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__195__lane;
    __Vfunc_awq_lane_shift__195__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__196__Vfuncout;
    __Vfunc_awq_lane_shift__196__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__196__lane;
    __Vfunc_awq_lane_shift__196__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__197__Vfuncout;
    __Vfunc_awq_lane_shift__197__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__197__lane;
    __Vfunc_awq_lane_shift__197__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__198__Vfuncout;
    __Vfunc_awq_lane_shift__198__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__198__lane;
    __Vfunc_awq_lane_shift__198__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__199__Vfuncout;
    __Vfunc_awq_lane_shift__199__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__199__lane;
    __Vfunc_awq_lane_shift__199__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__200__Vfuncout;
    __Vfunc_awq_lane_shift__200__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__200__lane;
    __Vfunc_awq_lane_shift__200__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__201__Vfuncout;
    __Vfunc_awq_lane_shift__201__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__201__lane;
    __Vfunc_awq_lane_shift__201__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__202__Vfuncout;
    __Vfunc_awq_lane_shift__202__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__202__lane;
    __Vfunc_awq_lane_shift__202__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__203__Vfuncout;
    __Vfunc_awq_lane_shift__203__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__203__lane;
    __Vfunc_awq_lane_shift__203__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__204__Vfuncout;
    __Vfunc_awq_lane_shift__204__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__204__lane;
    __Vfunc_awq_lane_shift__204__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__205__Vfuncout;
    __Vfunc_awq_lane_shift__205__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__205__lane;
    __Vfunc_awq_lane_shift__205__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__206__Vfuncout;
    __Vfunc_awq_lane_shift__206__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__206__lane;
    __Vfunc_awq_lane_shift__206__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__207__Vfuncout;
    __Vfunc_awq_lane_shift__207__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__207__lane;
    __Vfunc_awq_lane_shift__207__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__208__Vfuncout;
    __Vfunc_awq_lane_shift__208__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__208__lane;
    __Vfunc_awq_lane_shift__208__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__209__Vfuncout;
    __Vfunc_awq_lane_shift__209__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__209__lane;
    __Vfunc_awq_lane_shift__209__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__210__Vfuncout;
    __Vfunc_awq_lane_shift__210__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__210__lane;
    __Vfunc_awq_lane_shift__210__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__211__Vfuncout;
    __Vfunc_awq_lane_shift__211__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__211__lane;
    __Vfunc_awq_lane_shift__211__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__212__Vfuncout;
    __Vfunc_awq_lane_shift__212__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__212__lane;
    __Vfunc_awq_lane_shift__212__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__213__Vfuncout;
    __Vfunc_awq_lane_shift__213__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__213__lane;
    __Vfunc_awq_lane_shift__213__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__214__Vfuncout;
    __Vfunc_awq_lane_shift__214__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__214__lane;
    __Vfunc_awq_lane_shift__214__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__215__Vfuncout;
    __Vfunc_awq_lane_shift__215__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__215__lane;
    __Vfunc_awq_lane_shift__215__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__216__Vfuncout;
    __Vfunc_awq_lane_shift__216__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__216__lane;
    __Vfunc_awq_lane_shift__216__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__217__Vfuncout;
    __Vfunc_awq_lane_shift__217__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__217__lane;
    __Vfunc_awq_lane_shift__217__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__218__Vfuncout;
    __Vfunc_awq_lane_shift__218__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__218__lane;
    __Vfunc_awq_lane_shift__218__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__219__Vfuncout;
    __Vfunc_awq_lane_shift__219__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__219__lane;
    __Vfunc_awq_lane_shift__219__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__220__Vfuncout;
    __Vfunc_awq_lane_shift__220__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__220__lane;
    __Vfunc_awq_lane_shift__220__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__221__Vfuncout;
    __Vfunc_awq_lane_shift__221__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__221__lane;
    __Vfunc_awq_lane_shift__221__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__222__Vfuncout;
    __Vfunc_awq_lane_shift__222__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__222__lane;
    __Vfunc_awq_lane_shift__222__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__223__Vfuncout;
    __Vfunc_awq_lane_shift__223__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__223__lane;
    __Vfunc_awq_lane_shift__223__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__224__Vfuncout;
    __Vfunc_awq_lane_shift__224__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__224__lane;
    __Vfunc_awq_lane_shift__224__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__225__Vfuncout;
    __Vfunc_awq_lane_shift__225__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__225__lane;
    __Vfunc_awq_lane_shift__225__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__226__Vfuncout;
    __Vfunc_awq_lane_shift__226__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__226__lane;
    __Vfunc_awq_lane_shift__226__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__227__Vfuncout;
    __Vfunc_awq_lane_shift__227__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__227__lane;
    __Vfunc_awq_lane_shift__227__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__228__Vfuncout;
    __Vfunc_awq_lane_shift__228__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__228__lane;
    __Vfunc_awq_lane_shift__228__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__229__Vfuncout;
    __Vfunc_awq_lane_shift__229__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__229__lane;
    __Vfunc_awq_lane_shift__229__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__230__Vfuncout;
    __Vfunc_awq_lane_shift__230__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__230__lane;
    __Vfunc_awq_lane_shift__230__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__231__Vfuncout;
    __Vfunc_awq_lane_shift__231__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__231__lane;
    __Vfunc_awq_lane_shift__231__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__232__Vfuncout;
    __Vfunc_awq_lane_shift__232__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__232__lane;
    __Vfunc_awq_lane_shift__232__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__233__Vfuncout;
    __Vfunc_awq_lane_shift__233__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__233__lane;
    __Vfunc_awq_lane_shift__233__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__234__Vfuncout;
    __Vfunc_awq_lane_shift__234__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__234__lane;
    __Vfunc_awq_lane_shift__234__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__235__Vfuncout;
    __Vfunc_awq_lane_shift__235__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__235__lane;
    __Vfunc_awq_lane_shift__235__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__236__Vfuncout;
    __Vfunc_awq_lane_shift__236__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__236__lane;
    __Vfunc_awq_lane_shift__236__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__237__Vfuncout;
    __Vfunc_awq_lane_shift__237__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__237__lane;
    __Vfunc_awq_lane_shift__237__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__238__Vfuncout;
    __Vfunc_awq_lane_shift__238__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__238__lane;
    __Vfunc_awq_lane_shift__238__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__239__Vfuncout;
    __Vfunc_awq_lane_shift__239__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__239__lane;
    __Vfunc_awq_lane_shift__239__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__240__Vfuncout;
    __Vfunc_awq_lane_shift__240__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__240__lane;
    __Vfunc_awq_lane_shift__240__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__241__Vfuncout;
    __Vfunc_awq_lane_shift__241__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__241__lane;
    __Vfunc_awq_lane_shift__241__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__242__Vfuncout;
    __Vfunc_awq_lane_shift__242__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__242__lane;
    __Vfunc_awq_lane_shift__242__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__243__Vfuncout;
    __Vfunc_awq_lane_shift__243__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__243__lane;
    __Vfunc_awq_lane_shift__243__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__244__Vfuncout;
    __Vfunc_awq_lane_shift__244__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__244__lane;
    __Vfunc_awq_lane_shift__244__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__245__Vfuncout;
    __Vfunc_awq_lane_shift__245__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__245__lane;
    __Vfunc_awq_lane_shift__245__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__246__Vfuncout;
    __Vfunc_awq_lane_shift__246__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__246__lane;
    __Vfunc_awq_lane_shift__246__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__247__Vfuncout;
    __Vfunc_awq_lane_shift__247__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__247__lane;
    __Vfunc_awq_lane_shift__247__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__248__Vfuncout;
    __Vfunc_awq_lane_shift__248__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__248__lane;
    __Vfunc_awq_lane_shift__248__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__249__Vfuncout;
    __Vfunc_awq_lane_shift__249__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__249__lane;
    __Vfunc_awq_lane_shift__249__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__250__Vfuncout;
    __Vfunc_awq_lane_shift__250__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__250__lane;
    __Vfunc_awq_lane_shift__250__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__251__Vfuncout;
    __Vfunc_awq_lane_shift__251__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__251__lane;
    __Vfunc_awq_lane_shift__251__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__252__Vfuncout;
    __Vfunc_awq_lane_shift__252__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__252__lane;
    __Vfunc_awq_lane_shift__252__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__253__Vfuncout;
    __Vfunc_awq_lane_shift__253__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__253__lane;
    __Vfunc_awq_lane_shift__253__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__254__Vfuncout;
    __Vfunc_awq_lane_shift__254__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__254__lane;
    __Vfunc_awq_lane_shift__254__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__255__Vfuncout;
    __Vfunc_awq_lane_shift__255__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__255__lane;
    __Vfunc_awq_lane_shift__255__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__256__Vfuncout;
    __Vfunc_awq_lane_shift__256__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__256__lane;
    __Vfunc_awq_lane_shift__256__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__257__Vfuncout;
    __Vfunc_awq_lane_shift__257__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__257__lane;
    __Vfunc_awq_lane_shift__257__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__258__Vfuncout;
    __Vfunc_awq_lane_shift__258__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__258__lane;
    __Vfunc_awq_lane_shift__258__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__259__Vfuncout;
    __Vfunc_awq_lane_shift__259__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__259__lane;
    __Vfunc_awq_lane_shift__259__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__260__Vfuncout;
    __Vfunc_awq_lane_shift__260__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__260__lane;
    __Vfunc_awq_lane_shift__260__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__261__Vfuncout;
    __Vfunc_awq_lane_shift__261__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__261__lane;
    __Vfunc_awq_lane_shift__261__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__262__Vfuncout;
    __Vfunc_awq_lane_shift__262__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__262__lane;
    __Vfunc_awq_lane_shift__262__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__263__Vfuncout;
    __Vfunc_awq_lane_shift__263__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__263__lane;
    __Vfunc_awq_lane_shift__263__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__264__Vfuncout;
    __Vfunc_awq_lane_shift__264__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__264__lane;
    __Vfunc_awq_lane_shift__264__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__265__Vfuncout;
    __Vfunc_awq_lane_shift__265__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__265__lane;
    __Vfunc_awq_lane_shift__265__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__266__Vfuncout;
    __Vfunc_awq_lane_shift__266__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__266__lane;
    __Vfunc_awq_lane_shift__266__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__267__Vfuncout;
    __Vfunc_awq_lane_shift__267__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__267__lane;
    __Vfunc_awq_lane_shift__267__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__268__Vfuncout;
    __Vfunc_awq_lane_shift__268__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__268__lane;
    __Vfunc_awq_lane_shift__268__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__269__Vfuncout;
    __Vfunc_awq_lane_shift__269__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__269__lane;
    __Vfunc_awq_lane_shift__269__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__270__Vfuncout;
    __Vfunc_awq_lane_shift__270__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__270__lane;
    __Vfunc_awq_lane_shift__270__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__271__Vfuncout;
    __Vfunc_awq_lane_shift__271__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__271__lane;
    __Vfunc_awq_lane_shift__271__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__272__Vfuncout;
    __Vfunc_awq_lane_shift__272__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__272__lane;
    __Vfunc_awq_lane_shift__272__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__273__Vfuncout;
    __Vfunc_awq_lane_shift__273__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__273__lane;
    __Vfunc_awq_lane_shift__273__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__274__Vfuncout;
    __Vfunc_awq_lane_shift__274__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__274__lane;
    __Vfunc_awq_lane_shift__274__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__275__Vfuncout;
    __Vfunc_awq_lane_shift__275__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__275__lane;
    __Vfunc_awq_lane_shift__275__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__276__Vfuncout;
    __Vfunc_awq_lane_shift__276__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__276__lane;
    __Vfunc_awq_lane_shift__276__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__277__Vfuncout;
    __Vfunc_awq_lane_shift__277__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__277__lane;
    __Vfunc_awq_lane_shift__277__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__278__Vfuncout;
    __Vfunc_awq_lane_shift__278__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__278__lane;
    __Vfunc_awq_lane_shift__278__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__279__Vfuncout;
    __Vfunc_awq_lane_shift__279__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__279__lane;
    __Vfunc_awq_lane_shift__279__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__280__Vfuncout;
    __Vfunc_awq_lane_shift__280__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__280__lane;
    __Vfunc_awq_lane_shift__280__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__281__Vfuncout;
    __Vfunc_awq_lane_shift__281__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__281__lane;
    __Vfunc_awq_lane_shift__281__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__282__Vfuncout;
    __Vfunc_awq_lane_shift__282__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__282__lane;
    __Vfunc_awq_lane_shift__282__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__283__Vfuncout;
    __Vfunc_awq_lane_shift__283__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__283__lane;
    __Vfunc_awq_lane_shift__283__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__284__Vfuncout;
    __Vfunc_awq_lane_shift__284__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__284__lane;
    __Vfunc_awq_lane_shift__284__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__285__Vfuncout;
    __Vfunc_awq_lane_shift__285__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__285__lane;
    __Vfunc_awq_lane_shift__285__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__286__Vfuncout;
    __Vfunc_awq_lane_shift__286__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__286__lane;
    __Vfunc_awq_lane_shift__286__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__287__Vfuncout;
    __Vfunc_awq_lane_shift__287__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__287__lane;
    __Vfunc_awq_lane_shift__287__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__288__Vfuncout;
    __Vfunc_awq_lane_shift__288__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__288__lane;
    __Vfunc_awq_lane_shift__288__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__289__Vfuncout;
    __Vfunc_awq_lane_shift__289__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__289__lane;
    __Vfunc_awq_lane_shift__289__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__290__Vfuncout;
    __Vfunc_awq_lane_shift__290__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__290__lane;
    __Vfunc_awq_lane_shift__290__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__291__Vfuncout;
    __Vfunc_awq_lane_shift__291__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__291__lane;
    __Vfunc_awq_lane_shift__291__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__292__Vfuncout;
    __Vfunc_awq_lane_shift__292__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__292__lane;
    __Vfunc_awq_lane_shift__292__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__293__Vfuncout;
    __Vfunc_awq_lane_shift__293__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__293__lane;
    __Vfunc_awq_lane_shift__293__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__294__Vfuncout;
    __Vfunc_awq_lane_shift__294__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__294__lane;
    __Vfunc_awq_lane_shift__294__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__295__Vfuncout;
    __Vfunc_awq_lane_shift__295__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__295__lane;
    __Vfunc_awq_lane_shift__295__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__296__Vfuncout;
    __Vfunc_awq_lane_shift__296__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__296__lane;
    __Vfunc_awq_lane_shift__296__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__297__Vfuncout;
    __Vfunc_awq_lane_shift__297__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__297__lane;
    __Vfunc_awq_lane_shift__297__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__298__Vfuncout;
    __Vfunc_awq_lane_shift__298__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__298__lane;
    __Vfunc_awq_lane_shift__298__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__299__Vfuncout;
    __Vfunc_awq_lane_shift__299__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__299__lane;
    __Vfunc_awq_lane_shift__299__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__300__Vfuncout;
    __Vfunc_awq_lane_shift__300__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__300__lane;
    __Vfunc_awq_lane_shift__300__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__301__Vfuncout;
    __Vfunc_awq_lane_shift__301__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__301__lane;
    __Vfunc_awq_lane_shift__301__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__302__Vfuncout;
    __Vfunc_awq_lane_shift__302__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__302__lane;
    __Vfunc_awq_lane_shift__302__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__303__Vfuncout;
    __Vfunc_awq_lane_shift__303__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__303__lane;
    __Vfunc_awq_lane_shift__303__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__304__Vfuncout;
    __Vfunc_awq_lane_shift__304__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__304__lane;
    __Vfunc_awq_lane_shift__304__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__305__Vfuncout;
    __Vfunc_awq_lane_shift__305__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__305__lane;
    __Vfunc_awq_lane_shift__305__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__306__Vfuncout;
    __Vfunc_awq_lane_shift__306__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__306__lane;
    __Vfunc_awq_lane_shift__306__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__307__Vfuncout;
    __Vfunc_awq_lane_shift__307__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__307__lane;
    __Vfunc_awq_lane_shift__307__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__308__Vfuncout;
    __Vfunc_awq_lane_shift__308__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__308__lane;
    __Vfunc_awq_lane_shift__308__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__309__Vfuncout;
    __Vfunc_awq_lane_shift__309__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__309__lane;
    __Vfunc_awq_lane_shift__309__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__310__Vfuncout;
    __Vfunc_awq_lane_shift__310__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__310__lane;
    __Vfunc_awq_lane_shift__310__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__311__Vfuncout;
    __Vfunc_awq_lane_shift__311__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__311__lane;
    __Vfunc_awq_lane_shift__311__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__312__Vfuncout;
    __Vfunc_awq_lane_shift__312__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__312__lane;
    __Vfunc_awq_lane_shift__312__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__313__Vfuncout;
    __Vfunc_awq_lane_shift__313__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__313__lane;
    __Vfunc_awq_lane_shift__313__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__314__Vfuncout;
    __Vfunc_awq_lane_shift__314__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__314__lane;
    __Vfunc_awq_lane_shift__314__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__315__Vfuncout;
    __Vfunc_awq_lane_shift__315__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__315__lane;
    __Vfunc_awq_lane_shift__315__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__316__Vfuncout;
    __Vfunc_awq_lane_shift__316__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__316__lane;
    __Vfunc_awq_lane_shift__316__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__317__Vfuncout;
    __Vfunc_awq_lane_shift__317__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__317__lane;
    __Vfunc_awq_lane_shift__317__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__318__Vfuncout;
    __Vfunc_awq_lane_shift__318__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__318__lane;
    __Vfunc_awq_lane_shift__318__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__319__Vfuncout;
    __Vfunc_awq_lane_shift__319__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__319__lane;
    __Vfunc_awq_lane_shift__319__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__320__Vfuncout;
    __Vfunc_awq_lane_shift__320__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__320__lane;
    __Vfunc_awq_lane_shift__320__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__321__Vfuncout;
    __Vfunc_awq_lane_shift__321__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__321__lane;
    __Vfunc_awq_lane_shift__321__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__322__Vfuncout;
    __Vfunc_awq_lane_shift__322__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__322__lane;
    __Vfunc_awq_lane_shift__322__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__323__Vfuncout;
    __Vfunc_awq_lane_shift__323__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__323__lane;
    __Vfunc_awq_lane_shift__323__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__324__Vfuncout;
    __Vfunc_awq_lane_shift__324__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__324__lane;
    __Vfunc_awq_lane_shift__324__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__325__Vfuncout;
    __Vfunc_awq_lane_shift__325__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__325__lane;
    __Vfunc_awq_lane_shift__325__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__326__Vfuncout;
    __Vfunc_awq_lane_shift__326__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__326__lane;
    __Vfunc_awq_lane_shift__326__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__327__Vfuncout;
    __Vfunc_awq_lane_shift__327__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__327__lane;
    __Vfunc_awq_lane_shift__327__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__328__Vfuncout;
    __Vfunc_awq_lane_shift__328__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__328__lane;
    __Vfunc_awq_lane_shift__328__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__329__Vfuncout;
    __Vfunc_awq_lane_shift__329__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__329__lane;
    __Vfunc_awq_lane_shift__329__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__330__Vfuncout;
    __Vfunc_awq_lane_shift__330__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__330__lane;
    __Vfunc_awq_lane_shift__330__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__331__Vfuncout;
    __Vfunc_awq_lane_shift__331__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__331__lane;
    __Vfunc_awq_lane_shift__331__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__332__Vfuncout;
    __Vfunc_awq_lane_shift__332__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__332__lane;
    __Vfunc_awq_lane_shift__332__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__333__Vfuncout;
    __Vfunc_awq_lane_shift__333__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__333__lane;
    __Vfunc_awq_lane_shift__333__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__334__Vfuncout;
    __Vfunc_awq_lane_shift__334__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__334__lane;
    __Vfunc_awq_lane_shift__334__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__335__Vfuncout;
    __Vfunc_awq_lane_shift__335__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__335__lane;
    __Vfunc_awq_lane_shift__335__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__336__Vfuncout;
    __Vfunc_awq_lane_shift__336__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__336__lane;
    __Vfunc_awq_lane_shift__336__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__337__Vfuncout;
    __Vfunc_awq_lane_shift__337__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__337__lane;
    __Vfunc_awq_lane_shift__337__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__338__Vfuncout;
    __Vfunc_awq_lane_shift__338__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__338__lane;
    __Vfunc_awq_lane_shift__338__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__339__Vfuncout;
    __Vfunc_awq_lane_shift__339__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__339__lane;
    __Vfunc_awq_lane_shift__339__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__340__Vfuncout;
    __Vfunc_awq_lane_shift__340__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__340__lane;
    __Vfunc_awq_lane_shift__340__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__341__Vfuncout;
    __Vfunc_awq_lane_shift__341__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__341__lane;
    __Vfunc_awq_lane_shift__341__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__342__Vfuncout;
    __Vfunc_awq_lane_shift__342__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__342__lane;
    __Vfunc_awq_lane_shift__342__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__343__Vfuncout;
    __Vfunc_awq_lane_shift__343__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__343__lane;
    __Vfunc_awq_lane_shift__343__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__344__Vfuncout;
    __Vfunc_awq_lane_shift__344__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__344__lane;
    __Vfunc_awq_lane_shift__344__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__345__Vfuncout;
    __Vfunc_awq_lane_shift__345__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__345__lane;
    __Vfunc_awq_lane_shift__345__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__346__Vfuncout;
    __Vfunc_awq_lane_shift__346__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__346__lane;
    __Vfunc_awq_lane_shift__346__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__347__Vfuncout;
    __Vfunc_awq_lane_shift__347__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__347__lane;
    __Vfunc_awq_lane_shift__347__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__348__Vfuncout;
    __Vfunc_awq_lane_shift__348__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__348__lane;
    __Vfunc_awq_lane_shift__348__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__349__Vfuncout;
    __Vfunc_awq_lane_shift__349__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__349__lane;
    __Vfunc_awq_lane_shift__349__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__350__Vfuncout;
    __Vfunc_awq_lane_shift__350__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__350__lane;
    __Vfunc_awq_lane_shift__350__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__351__Vfuncout;
    __Vfunc_awq_lane_shift__351__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__351__lane;
    __Vfunc_awq_lane_shift__351__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__352__Vfuncout;
    __Vfunc_awq_lane_shift__352__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__352__lane;
    __Vfunc_awq_lane_shift__352__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__353__Vfuncout;
    __Vfunc_awq_lane_shift__353__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__353__lane;
    __Vfunc_awq_lane_shift__353__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__354__Vfuncout;
    __Vfunc_awq_lane_shift__354__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__354__lane;
    __Vfunc_awq_lane_shift__354__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__355__Vfuncout;
    __Vfunc_awq_lane_shift__355__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__355__lane;
    __Vfunc_awq_lane_shift__355__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__356__Vfuncout;
    __Vfunc_awq_lane_shift__356__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__356__lane;
    __Vfunc_awq_lane_shift__356__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__357__Vfuncout;
    __Vfunc_awq_lane_shift__357__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__357__lane;
    __Vfunc_awq_lane_shift__357__lane = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__358__lane;
    __Vfunc_awq_lane_shift__358__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__450__Vfuncout;
    __Vfunc_awq_lane_shift__450__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__450__lane;
    __Vfunc_awq_lane_shift__450__lane = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7488__Vfuncout;
    __Vfunc_fp32_invalid__7488__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7488__value;
    __Vfunc_fp32_invalid__7488__value = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3 = 0;
    CData/*1:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4 = 0;
    CData/*1:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0 = 0;
    CData/*3:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0 = 0;
    CData/*2:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0 = 0;
    IData/*31:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0 = 0;
    IData/*31:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0 = 0;
    IData/*31:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0 = 0;
    IData/*31:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0 = 0;
    IData/*31:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0 = 0;
    QData/*63:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5 = 0;
    CData/*1:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5 = 0;
    CData/*6:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6 = 0;
    CData/*1:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7 = 0;
    CData/*1:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7 = 0;
    CData/*1:0*/ __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0;
    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0 = 0;
    IData/*31:0*/ __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0;
    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<8>/*255:0*/ __Vtemp_17;
    // Body
    if (vlSelf->startup_tb__DOT__rst_n) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__mode_pulse = 0U;
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__pending) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__pending = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_valid = 1U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_error 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_data 
                = (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_write) 
                    | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error))
                    ? 0U : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__read_value);
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__take_snapshot) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_sequence 
                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_sequence);
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_max_score 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_arithmetic_errors 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__arithmetic_errors;
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_valid) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_valid 
                = (1U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data);
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_cycles_low) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_cycles 
                = ((0xffffffff00000000ULL & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_cycles) 
                   | (IData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data)));
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_tokens_low) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_tokens 
                = ((0xffffffff00000000ULL & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_tokens) 
                   | (IData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data)));
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_profile) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_profile 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data;
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_mode) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__desired_mode 
                = (1U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data);
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__mode_pulse = 1U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__mode_bit 
                = (1U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data);
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_cycles_high) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_cycles 
                = ((0xffffffffULL & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_cycles) 
                   | ((QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data)) 
                      << 0x20U));
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_tokens_high) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_tokens 
                = ((0xffffffffULL & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_tokens) 
                   | ((QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data)) 
                      << 0x20U));
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__clear_counters) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__arithmetic_errors = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__sticky_error = 0U;
        } else {
            if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_score_valid) 
                  & (~ ([&]() {
                                    __Vfunc_fp32_invalid__7488__value 
                                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_score;
                                    __Vfunc_fp32_invalid__7488__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_fp32_invalid__7488__value 
                                             >> 0x17U)));
                                }(), (IData)(__Vfunc_fp32_invalid__7488__Vfuncout)))) 
                 & ((0x7fffffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_score) 
                    > (0x7fffffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score)))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score 
                    = (0x7fffffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_score);
            }
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__arithmetic_errors 
                = (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented_errors);
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__csr_perf__arith_error) 
                 | (IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__csr_perf__mem_error))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__sticky_error = 1U;
            }
        }
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__pending = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_sequence = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_valid = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_error = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__response_data = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_write = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_mode = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_strobes = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__mode_pulse = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__mode_bit = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__desired_mode = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__sticky_error = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_max_score = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__arithmetic_errors = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__snapshot_arithmetic_errors = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_valid = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_cycles = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_tokens = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__reference_profile = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__max_score;
    if (vlSelf->startup_tb__DOT__rst_n) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_done_reg = 0U;
        if (((IData)(vlSelf->startup_tb__DOT__cancel) 
             & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_seen)))) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 7U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned = 0U;
        } else if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draining)) 
                    & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__detected_fault))) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 8U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned = 0U;
        } else {
            if (vlSelf->startup_tb__DOT__draft_ready) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned = 1U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[0U] = 0U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[1U] = 0U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[2U] = 0U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[3U] = 0U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_draft_count = 1U;
            }
            if ((((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                  & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid)) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 1U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_root 
                    = (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent));
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_position 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position;
            }
            if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__result_transfer) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 0U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent 
                    = ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))
                        ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position
                        : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_position);
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__root_publication) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid = 1U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__committed_extent 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__next_position 
                        = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position);
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_phase) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decode_started = 1U;
                    }
                }
            }
            if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                       | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                      | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                     | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                    | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                   | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                  | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                 | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)))) {
                if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__token_transfer) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_request_invalid) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 8U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned = 0U;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_token = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__host_position = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_phase = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__input_precommitted 
                                = ((~ (IData)(vlSelf->startup_tb__DOT__new_sequence)) 
                                   & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__pending_final));
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_draft_count = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 2U;
                            if (vlSelf->startup_tb__DOT__new_sequence) {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid = 0U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted = 0U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decode_started = 0U;
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final = 0U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__committed_extent = 0U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent = 0U;
                            }
                        }
                    }
                } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 4U;
                    }
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__result_transfer) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted 
                            = (0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 5U;
                    }
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_ready))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg = 1U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 6U;
                    }
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    if ((((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                            & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__done_reg)) 
                           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained)) 
                          & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned))) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_ready))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg = 1U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 0U;
                } else if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_done_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 6U;
                }
            } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__error_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 6U;
                }
            } else {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 8U;
            }
        }
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__pending_final 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_position 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_position;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned;
        if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush) 
              | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)) 
             | ((IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid) 
                & (0xffffffffffffffffULL == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial)))) {
            if ((2U != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                 [0U])) {
                vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v0 = 1U;
            }
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining = 1U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned = 0U;
            if ((2U != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                 [1U])) {
                vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v1 = 1U;
            }
            if ((2U != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                 [2U])) {
                vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v2 = 1U;
            }
        } else if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid = 0U;
            if ((1U & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned)))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining = 0U;
            }
        } else {
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid = 0U;
            }
            if ((((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid)) 
                  | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_ready)) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hf6870855__0 = 0U;
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid = 1U;
                if ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_data 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata
                        [(3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot)];
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag
                        [(3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot)];
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hf6870855__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot);
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_data = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag = 0U;
                }
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_error 
                    = ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot)) 
                       && (1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__failed) 
                                 >> (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot))));
            }
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_req_ready))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h138e8dee__0 = 1U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hd64235f2__0 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_write;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7c531468__0 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_kind;
                __Vtemp_6[0U] = (((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                                  & (2U > (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient)))
                                  ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer
                                  : 0U);
                __Vtemp_6[1U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h8061c70e__0)
                                  ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer
                                  : 0U);
                __Vtemp_6[2U] = (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid) 
                                  & ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                                     & (7U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__gamma_kind))))
                                  ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__layer
                                  : 0U);
                __Vtemp_6[3U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__req_valid)
                                  ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__layer
                                  : 0U);
                __Vtemp_6[4U] = 0U;
                __Vtemp_6[5U] = 0U;
                __Vtemp_6[6U] = (IData)((((QData)((IData)(
                                                          ((3U 
                                                            == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))
                                                            ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((4U 
                                                             == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))
                                                             ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_layer
                                                             : 0U)))));
                __Vtemp_6[7U] = (IData)(((((QData)((IData)(
                                                           ((3U 
                                                             == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))
                                                             ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_layer
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))
                                                              ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_layer
                                                              : 0U)))) 
                                         >> 0x20U));
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_ha023c141__0 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_row;
                __Vtemp_12[0U] = ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                   ? (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head), 3U) 
                                      + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor)
                                   : ((0x14U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__context_index
                                       : (((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                                           & (2U <= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient)))
                                           ? (VL_SHIFTL_III(32,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient)))
                                           : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor)));
                __Vtemp_12[1U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__projections__req_valid)
                                   ? (((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type)) 
                                       | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type)))
                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h103a2f0a__0
                                       : ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                                           ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row
                                           : VL_SHIFTR_III(32,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row, 3U)))
                                   : 0U);
                __Vtemp_12[2U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid)
                                   ? ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))
                                       ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor
                                       : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor)
                                   : 0U);
                __Vtemp_12[3U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__req_valid)
                                   ? ((0xfffffff8U 
                                       & VL_SHIFTL_III(32,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__head), 2U)) 
                                      + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued))
                                   : 0U);
                __Vtemp_12[4U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid)
                                   ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor
                                   : 0U);
                __Vtemp_12[5U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid)
                                   ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor
                                   : 0U);
                __Vtemp_12[6U] = (IData)((((QData)((IData)(
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_head), 3U) 
                                                            + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_index))));
                __Vtemp_12[7U] = (IData)(((((QData)((IData)(
                                                            (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_head), 3U) 
                                                             + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_index))) 
                                          >> 0x20U));
                __Vtemp_17[0U] = (IData)((QData)((IData)(
                                                         ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_write)
                                                           ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_data)
                                                           : 0U))));
                __Vtemp_17[1U] = (IData)(((QData)((IData)(
                                                          ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_write)
                                                            ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_data)
                                                            : 0U))) 
                                          >> 0x20U));
                __Vtemp_17[2U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_write)
                                   ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data)
                                   : 0U);
                __Vtemp_17[3U] = 0U;
                __Vtemp_17[4U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_write)
                                   ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__result)
                                   : 0U);
                __Vtemp_17[5U] = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_write)
                                   ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__result)
                                   : 0U);
                __Vtemp_17[6U] = (IData)((((QData)((IData)(
                                                           (0xffffU 
                                                            & (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U)))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[
                                                                 (((IData)(0xfU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U))))) 
                                                               | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[
                                                                  (3U 
                                                                   & (VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_value))));
                __Vtemp_17[7U] = (IData)(((((QData)((IData)(
                                                            (0xffffU 
                                                             & (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U)))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[
                                                                  (((IData)(0xfU) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U))))) 
                                                                | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[
                                                                   (3U 
                                                                    & (VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U) 
                                                                       >> 5U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & VL_SHIFTL_III(7,7,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor, 4U))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_value))) 
                                          >> 0x20U));
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h75037aaa__0 
                        = ((0x17U >= (0x1fU & ((IData)(3U) 
                                               * (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected))))
                            ? (7U & ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h8061c70e__0)
                                        ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__projection)
                                        : 0U) << 3U) 
                                     >> (0x1fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)))))
                            : 0U);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h54039ba7__0 
                        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U)))
                             ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))) 
                                                >> 5U)] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))))) 
                           | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U) 
                                               >> 5U))] 
                              >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))));
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h3b0e3cdd__0 
                        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U)))
                             ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))) 
                                                 >> 5U)] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))))) 
                           | (__Vtemp_12[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U) 
                                                >> 5U))] 
                              >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))));
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h14e64bca__0 
                        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U)))
                             ? 0U : (__Vtemp_17[(((IData)(0x1fU) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))) 
                                                 >> 5U)] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))))) 
                           | (__Vtemp_17[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U) 
                                                >> 5U))] 
                              >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))));
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h8c3405a6__0 
                        = (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected) 
                            << 0x1cU) | (0xfffffffU 
                                         & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U)))
                                              ? 0U : 
                                             (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__ct[
                                              (((IData)(0x1bU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))))) 
                                            | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__ct[
                                               (7U 
                                                & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))))));
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h75037aaa__0 = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h54039ba7__0 = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h3b0e3cdd__0 = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h14e64bca__0 = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h8c3405a6__0 = 0U;
                }
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hd62ef8b1__0 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank 
                    = ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank))
                        ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank))));
                if ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot))) {
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h138e8dee__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                        = (((~ ((IData)(1U) << (3U 
                                                & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot))) 
                            & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing)) 
                           | (7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hd64235f2__0) 
                                    << (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot))));
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7c531468__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h75037aaa__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h54039ba7__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_ha023c141__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h3b0e3cdd__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h14e64bca__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h8c3405a6__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hd62ef8b1__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot);
                }
            }
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hfb8d6a8a__0 = 2U;
                if ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                            [0U]))) {
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hfb8d6a8a__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [0U]);
                }
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned = 0U;
            } else if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned)) 
                        & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hd0373d23__0 
                    = (0x7fU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot
                       [0U]);
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned = 1U;
                __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v0 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hd0373d23__0;
                vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v0 = 1U;
            }
        }
        if (((IData)(vlSelf->startup_tb__DOT__mem_rsp_valid) 
             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match))) {
            if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush) 
                  | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                 | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hbcc94cbe__0 = 0U;
                if ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                            [0U]))) {
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hbcc94cbe__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                           [0U]);
                }
            } else {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hbcc94cbe__1 = 3U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h147e6508__0 
                    = vlSelf->startup_tb__DOT__mem_rsp_rdata;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_he71eacca__0 
                    = vlSelf->startup_tb__DOT__mem_rsp_error;
                if ((2U >= (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                            [0U]))) {
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_hbcc94cbe__1;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                           [0U]);
                    __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h147e6508__0;
                    vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0 = 1U;
                    __Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0 
                        = (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                           [0U]);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__failed 
                        = (((~ ((IData)(1U) << (3U 
                                                & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                                                [0U]))) 
                            & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__failed)) 
                           | (7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_he71eacca__0) 
                                    << (3U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched
                                        [0U]))));
                }
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decode_started = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__input_precommitted = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__next_position = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_token = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__host_position = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__committed_extent = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_phase = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_root = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_position = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_draft_count = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__pending_final 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__pending_final;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_position 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_position;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__backend_owned;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_error = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_data = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__failed = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned = 0U;
        vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v1 = 1U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid;
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot[0U] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag__v0;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v0) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v1) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v2) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v3;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v4;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v5;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v6;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[__Vdlyvdim0__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7] 
            = __Vdlyvval__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state__v7;
    }
    if (vlSelf->__Vdlyvset__startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot__v1) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__rdata[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__client_tag[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag[0U] = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag[1U] = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag[2U] = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state[2U] = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_seen 
        = ((IData)(vlSelf->startup_tb__DOT__rst_n) 
           && (IData)(vlSelf->startup_tb__DOT__cancel));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 0U;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0U;
    if ((3U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0U;
    }
    if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [1U]))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 1U;
    }
    if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [2U]))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 2U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request = 0U;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 0U;
    if ((1U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request = 1U;
    }
    if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request)) 
         & (1U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [1U]))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request = 1U;
    }
    if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request)) 
         & (1U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [2U]))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 2U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request = 1U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 0U;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot = 0U;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank;
    if (VL_LTES_III(32, 1U, startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(1U));
    }
    if ((0U == ((2U >= (3U & VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                 ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                [(3U & VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                 : 0U))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(3U & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((2U >= (3U & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(3U & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 0U;
    if ((0U != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [1U])) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [2U])) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (((IData)(vlSelf->startup_tb__DOT__cancel) 
             | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draining))) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__error_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__draft_event = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__verified_event = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_event = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__rejected_event = 0U;
        } else {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_event = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__rejected_event = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__error_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__draft_event = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__verified_event = 0U;
            if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0xbU;
            } else if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_transfer) 
                        & (1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_argmax))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0xbU;
            } else if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)) 
                              | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) 
                             | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) 
                            | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) 
                           | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) 
                          | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) 
                         | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) 
                        | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)))) {
                if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                          & (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_ready))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_position 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_parent = 4U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent = 4U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U] = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0xbU;
                    }
                } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 2U;
                    }
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_transfer) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_argmax;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state 
                        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__thinking)
                            ? 4U : 5U);
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__draft_ready) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_draft_ready))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__draft_event = 1U;
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__malformed) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0xbU;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[0U] = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[1U] = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[2U] = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[3U] = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents = 4U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count = 1U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active = 1U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 5U;
                        }
                    }
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    if (((5U <= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count)) 
                         | (1ULL <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_position))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0xbU;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____Vlvbound_hc7327f26__0 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target;
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count)));
                        }
                        if ((0x9fU >= (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count), 5U)))) {
                            VL_ASSIGNSEL_WI(160,32,
                                            (0xffU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count), 5U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____Vlvbound_hc7327f26__0);
                        }
                        if ((1U & (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found)) 
                                    | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target_marker)) 
                                   | (0ULL == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_position)))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 8U;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_parent 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_position 
                                = (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_position);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 6U;
                        }
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count)));
                    }
                } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 7U;
                    }
                } else if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_transfer) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_argmax;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__verified_event = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 5U;
                }
            } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_ready) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 9U;
                }
            } else if ((9U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__done_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0U;
                } else if ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__error_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U] = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U] = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U] = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U] = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U] = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active = 0U;
                } else {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0xbU;
                }
            }
        }
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__thinking 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__thinking;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__host_position;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state;
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__error_reg = 0U;
        } else {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 0U;
            if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__response_bad) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
            } else {
                if ((((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                      & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting))) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.in_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 1U;
                }
                if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                           | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                          | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                         | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                        | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                       | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                      | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) 
                     | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)))) {
                    if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if ((((0x19U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                              | (0x1fU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residual_ready))) {
                            if ((0x19U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot = 0U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot = 6U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot = 7U;
                            } else {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot = 7U;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot = 0xcU;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot = 0U;
                            }
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 1U;
                        }
                    } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 2U;
                        }
                    } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 4U;
                        }
                    } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.out_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
                            if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.out_valid) 
                                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.__PVT__result_failed))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
                            } else {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum 
                                    = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.out_valid)
                                        ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.__PVT__data
                                        : 0U);
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 6U;
                            }
                        }
                    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                        if ((0x10000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__result 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 7U;
                        }
                    } else if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) 
                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 8U;
                    }
                } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 9U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 1U;
                        }
                    }
                } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
                } else if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
                } else {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0xaU;
                }
            }
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__error_reg = 0U;
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__response_bad) 
                 | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_out_valid) 
                    & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_error)))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0xcU;
            } else if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                              | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) 
                             | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) 
                            | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) 
                           | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) 
                          | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) 
                         | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) 
                        | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)))) {
                if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if ((((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                          | ((0x1bU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                             | (0x21U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)))) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_ready))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__layer 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer;
                        if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__source_slot = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__target_slot = 1U;
                        } else if ((0x1bU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__source_slot = 7U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__target_slot = 8U;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__source_slot = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__target_slot = 0xeU;
                        }
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__gamma_kind 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__start_gamma_kind;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state 
                            = ((((5U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__start_gamma_kind)) 
                                 & (6U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__start_gamma_kind))) 
                                & (7U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__start_gamma_kind)))
                                ? 0xcU : 1U);
                    }
                } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_start_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 2U;
                    }
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_data 
                            = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 5U;
                    }
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_gamma 
                            = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_in_ready) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 7U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 2U;
                        }
                    }
                } else if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_out_valid) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_index;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_data;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 8U;
                } else if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT____VdfgTmp_h0890133b__0) 
                            & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0xbU;
                }
            } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 9U;
                }
            } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0xaU;
                }
            } else if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state 
                    = ((1U & (((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_out_valid)) 
                               | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_index 
                                  != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor)) 
                              | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm_data) 
                                 != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data))))
                        ? 0xcU : 7U);
            } else if ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__done_reg = 1U;
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0U;
            } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__error_reg = 1U;
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0U;
            } else {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0xcU;
            }
        }
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state;
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__error_reg = 0U;
        } else {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__error_reg = 0U;
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__any_error) 
                 | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_bad))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x26U;
            } else if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                              | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                             | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                            | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                           | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                          | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                         | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                        | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)))) {
                if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_ready))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__token 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_token;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__position 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_pos;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state 
                            = (((1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_token) 
                                | (1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_pos))
                                ? 0x26U : 1U);
                    }
                } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                               & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 2U;
                    }
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_data 
                            = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rd[0U]);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                               & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 5U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 1U;
                        }
                    }
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_done) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 7U;
                    }
                } else if ((1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                                  & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 8U;
                }
            } else if (((((((((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                              | (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                             | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                            | (0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                           | (0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                          | (0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                         | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                        | (0xfU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)))) {
                if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                        if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient))) {
                            VL_ASSIGNSEL_WI(128,16,
                                            (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__q_gamma, 
                                            (0xffffU 
                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rd[0U]));
                        } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient))) {
                            VL_ASSIGNSEL_WI(128,16,
                                            (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__k_gamma, 
                                            (0xffffU 
                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rd[0U]));
                        } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient))) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cosine 
                                = (((~ (0xffffULL << 
                                        (0x3fU & VL_SHIFTL_III(6,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U)))) 
                                    & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cosine) 
                                   | ((QData)((IData)(
                                                      (0xffffU 
                                                       & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rd[0U]))) 
                                      << (0x3fU & VL_SHIFTL_III(6,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U))));
                        } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient))) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__sine 
                                = (((~ (0xffffULL << 
                                        (0x3fU & VL_SHIFTL_III(6,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U)))) 
                                    & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__sine) 
                                   | ((QData)((IData)(
                                                      (0xffffU 
                                                       & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rd[0U]))) 
                                      << (0x3fU & VL_SHIFTL_III(6,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U))));
                        }
                        if ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor 
                             == ((2U > (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient))
                                  ? 7U : 3U))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor = 0U;
                            if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 9U;
                            } else {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient 
                                    = (3U & ((IData)(1U) 
                                             + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient)));
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 7U;
                            }
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 7U;
                        }
                    }
                } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0xaU;
                    }
                } else if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0xbU;
                    }
                } else if ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0xcU;
                    }
                } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0xdU;
                    }
                } else if ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0xeU;
                    }
                } else if ((0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0xfU;
                    }
                } else if (((((3U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count) 
                              & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_owned))) 
                             & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_valid))) 
                            & (0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x10U;
                }
            } else if (((((((((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                              | (0x11U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                             | (0x12U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                            | (0x13U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                           | (0x14U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                          | (0x15U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                         | (0x16U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                        | (0x17U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)))) {
                if ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                               & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x11U;
                    }
                } else if ((0x11U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                        VL_ASSIGNSEL_WI(128,16,(0x7fU 
                                                & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor, 4U)), vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query, 
                                        (0xffffU & 
                                         vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rd[0U]));
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x12U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x10U;
                        }
                    }
                } else if ((0x12U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x13U;
                    }
                } else if ((0x13U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_out_valid) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_out_valid) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_data 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__result;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__context_index 
                                = (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__head), 3U) 
                                   + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor);
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_data = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__context_index = 0U;
                        }
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x14U;
                    } else if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__done_reg))) {
                        if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x17U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head)));
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x10U;
                        }
                    }
                } else if ((0x14U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                               & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x15U;
                    }
                } else if ((0x15U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if ((1U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x16U;
                    }
                } else if ((0x16U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_out_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_out_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x13U;
                    }
                } else if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x18U;
                }
            } else if (((((((((0x18U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                              | (0x19U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                             | (0x1aU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                            | (0x1bU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                           | (0x1cU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                          | (0x1dU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                         | (0x1eU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) 
                        | (0x1fU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)))) {
                if ((0x18U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x19U;
                    }
                } else if ((0x19U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residual_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x1aU;
                    }
                } else if ((0x1aU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residual_done) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x1bU;
                    }
                } else if ((0x1bU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x1cU;
                    }
                } else if ((0x1cU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_done) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x1dU;
                    }
                } else if ((0x1dU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp_ready) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x1eU;
                    }
                } else if ((0x1eU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__done_reg))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x1fU;
                    }
                } else if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residual_ready) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x20U;
                }
            } else if ((0x20U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residual_done) {
                    if ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x21U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer 
                            = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 5U;
                    }
                }
            } else if ((0x21U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_ready) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x22U;
                }
            } else if ((0x22U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_done) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x23U;
                }
            } else if ((0x23U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x24U;
                }
            } else if ((0x24U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
                     & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x25U;
                }
            } else if ((0x25U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_result_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_result_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0U;
                }
            } else if ((0x26U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__error_reg = 1U;
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0U;
            } else {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0x26U;
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_position = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_parent = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent = 4U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__draft_event = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__verified_event = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_event = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__rejected_event = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__accepted_count;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__thinking 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__thinking;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__host_position;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__state;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__result = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__waiting;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__layer = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__source_slot = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__target_slot = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__gamma_kind = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_data = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__captured_gamma = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_data;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__done_reg;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__token = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__position = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_data = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__context_index = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__q_gamma[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__q_gamma[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__q_gamma[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__q_gamma[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__k_gamma[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__k_gamma[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__k_gamma[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__k_gamma[3U] = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U] = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U] = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U] = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cosine = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__sine = 0ULL;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__error_reg = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cursor;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__coefficient;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target_marker 
        = ((0x25073U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target) 
           | (0x25074U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 0U;
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (0U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents)) 
             == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[0U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 0U;
    }
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (1U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 3U)) == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[1U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 1U;
    }
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (2U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 6U)) == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[2U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 2U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 0U;
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (0U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents)) 
             == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[0U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (1U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 3U)) == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[1U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (2U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 6U)) == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[2U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (3U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 9U)) == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[3U] 
            == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 3U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__malformed = 0U;
    if ((1ULL <= (0x1ffffffffULL & ((QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position)) 
                                    + (QData)((IData)(
                                                      vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__depths
                                                      [0U])))))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__malformed = 1U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_position 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position)) 
                                     + (QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_expected 
        = ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)) 
           | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[0U] 
        = (0U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__evaluating_position 
        = ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))
            ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position
            : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_position);
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draining 
        = ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
           | (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)));
    __Vfunc_round_bf16__55__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum;
    __Vfunc_round_bf16__55__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__55__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__55__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__55__value)))))));
    __Vfunc_round_bf16__55__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__56__value 
                        = __Vfunc_round_bf16__55__value;
                    vlSelf->__Vfunc_fp32_invalid__56__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__56__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__56__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__55__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__55__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__55__Vfuncout;
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__error_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score_event = 0U;
        } else {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__error_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score_event = 0U;
            if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__response_bad) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x14U;
            } else {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__req_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued)));
                }
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__load_state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received)));
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen 
                        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen) 
                           | (0xffU & ((IData)(1U) 
                                       << (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag))));
                    if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        VL_ASSIGNSEL_WI(128,16,(0x7fU 
                                                & VL_SHIFTL_III(7,32,32, 
                                                                (0xffU 
                                                                 & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag), 4U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key, 
                                        (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data));
                    } else {
                        VL_ASSIGNSEL_WI(128,16,(0x7fU 
                                                & VL_SHIFTL_III(7,32,32, 
                                                                (0xffU 
                                                                 & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag), 4U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value, 
                                        (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data));
                    }
                }
                if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic_state) 
                      & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting))) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.in_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting = 1U;
                }
                if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting = 0U;
                    if (vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_error) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x14U;
                    } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score_event = 1U;
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 6U;
                        } else {
                            if (((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position) 
                                 | ([&]() {
                                            __Vfunc_fp32_greater__82__b 
                                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__maximum;
                                            __Vfunc_fp32_greater__82__a 
                                                = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                                            __Vfunc_fp32_greater__82__Vfuncout 
                                                = (1U 
                                                   & ((~ 
                                                       ((0U 
                                                         == 
                                                         (0x7fffffffU 
                                                          & __Vfunc_fp32_greater__82__a)) 
                                                        & (0U 
                                                           == 
                                                           (0x7fffffffU 
                                                            & __Vfunc_fp32_greater__82__b)))) 
                                                      & (((__Vfunc_fp32_greater__82__a 
                                                           >> 0x1fU) 
                                                          != 
                                                          (__Vfunc_fp32_greater__82__b 
                                                           >> 0x1fU))
                                                          ? 
                                                         (~ 
                                                          (__Vfunc_fp32_greater__82__a 
                                                           >> 0x1fU))
                                                          : 
                                                         ((__Vfunc_fp32_greater__82__a 
                                                           >> 0x1fU)
                                                           ? 
                                                          ((0x7fffffffU 
                                                            & __Vfunc_fp32_greater__82__a) 
                                                           < 
                                                           (0x7fffffffU 
                                                            & __Vfunc_fp32_greater__82__b))
                                                           : 
                                                          ((0x7fffffffU 
                                                            & __Vfunc_fp32_greater__82__a) 
                                                           > 
                                                           (0x7fffffffU 
                                                            & __Vfunc_fp32_greater__82__b))))));
                                        }(), (IData)(__Vfunc_fp32_greater__82__Vfuncout)))) {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__maximum 
                                    = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                            }
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xeU;
                        }
                    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 7U;
                    } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xaU;
                    } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xdU;
                    } else if ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xeU;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xbU;
                        }
                    } else if ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient 
                            = vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.out_data;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x11U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x14U;
                    }
                } else if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                                  | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) 
                                 | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) 
                                | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) 
                               | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) 
                              | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) 
                             | (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) 
                            | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)))) {
                    if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if (((0x12U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__layer 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__last_position 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__position;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__head 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U];
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U];
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U];
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U];
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__maximum = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued = 0U;
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state 
                                = ((((1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__position) 
                                     | (2U <= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head))) 
                                    | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad))
                                    ? 0x14U : 1U);
                        }
                    } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 2U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor);
                        }
                    } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if (((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued)) 
                             & (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received)))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 4U;
                    } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if ((0x13U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed))) {
                            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0) 
                                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__error5))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x14U;
                            } else {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product 
                                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__tree
                                    [0U];
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 5U;
                            }
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed)));
                        }
                    } else if ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exp_ready) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 8U;
                        }
                    } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exp_valid) {
                            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exp_valid) 
                                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x14U;
                            } else {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential 
                                    = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exp_valid)
                                        ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result
                                        : 0U);
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 9U;
                            }
                        }
                    } else if (((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued)) 
                                & (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received)))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xbU;
                    }
                } else if ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xcU;
                } else if ((0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen = 0U;
                    if ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position 
                         == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__last_position)) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xfU;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass = 1U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 2U;
                        }
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position 
                            = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 2U;
                    }
                } else if ((0xfU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x10U;
                } else if ((0x11U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    if ((0x10000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x14U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__result 
                            = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x12U;
                    }
                } else if ((0x12U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_out_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_out_ready))) {
                        if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0x13U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0xfU;
                        }
                    }
                } else if ((0x13U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__done_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0U;
                } else if ((0x14U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__error_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score_event = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__layer = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__last_position = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__head = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__maximum = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__result = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__received;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__last_position 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__last_position;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__second_pass;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__elapsed;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__waiting;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention_head;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U] 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U];
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U] 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U];
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U] 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U];
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U] 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U];
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__position 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__position;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued;
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_owned = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__error_reg = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm = 0U;
        } else {
            if (((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__norm_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count = 0U;
            }
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_ready))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_owned = 1U;
            }
            if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_valid) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_valid) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__key_vector;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_head 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_layer 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__layer;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_position 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__position;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[0U] 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[0U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[1U] 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[1U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[2U] 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[2U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[3U] 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[3U];
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_head = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_layer = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_position = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[0U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[1U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[2U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[3U] = 0U;
                    }
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 1U;
                }
            } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))) {
                if ((0x80U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 2U;
                }
            } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))) {
                if ((0x80U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 3U;
                    } else if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 5U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor 
                            = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 1U;
                    }
                }
            } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))) {
                if ((0x80U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 4U;
                }
            } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))) {
                if ((0x80U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                    if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 5U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor 
                            = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 1U;
                    }
                }
            } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count 
                        = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_owned = 0U;
                }
            } else {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 0U;
            }
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__error_reg = 0U;
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__response_bad) 
                 | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done) 
                    & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__projection_wait))))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x12U;
            } else {
                if ((((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                      & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting))) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.in_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting = 1U;
                }
                if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                           | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                          | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                         | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                        | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                       | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                      | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                     | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)))) {
                    if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (((0x1dU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp_ready))) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__layer 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 1U;
                        }
                    } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 2U;
                        }
                    } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 4U;
                        }
                    } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 6U;
                        }
                    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 7U;
                        }
                    } else if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid) 
                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 8U;
                    }
                } else if (((((((((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                                  | (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                                 | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                                | (0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                               | (0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                              | (0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                             | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) 
                            | (0xfU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)))) {
                    if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__up 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 9U;
                        }
                    } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_ready) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0xaU;
                        }
                    } else if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_valid) {
                            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_valid) 
                                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x12U;
                            } else {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__activated 
                                    = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_valid)
                                        ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result)
                                        : 0U);
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0xbU;
                            }
                        }
                    } else if ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.out_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting = 0U;
                            if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.out_valid) 
                                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.__PVT__result_failed))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x12U;
                            } else {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product 
                                    = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.out_valid)
                                        ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.__PVT__data
                                        : 0U);
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0xcU;
                            }
                        }
                    } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if ((0x10000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded)) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x12U;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__result 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0xdU;
                        }
                    } else if ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0xeU;
                        }
                    } else if ((0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) {
                            if ((7U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor)) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0xfU;
                            } else {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor 
                                    = ((IData)(1U) 
                                       + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor);
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 5U;
                            }
                        }
                    } else if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand) 
                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand_ready))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x10U;
                    }
                } else if ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x11U;
                    }
                } else if ((0x11U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__done_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0U;
                } else if ((0x12U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__error_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0U;
                } else {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0x12U;
                }
            }
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done = 0U;
            if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_id 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_proj;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm 
                        = (0x23U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state));
                    if ((0x1eU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_target 
                            = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand)
                                ? ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                                    ? 9U : ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                                             ? 0xaU
                                             : 0xcU))
                                : 0U);
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_layer 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlayer;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp = 1U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_target 
                            = ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                ? 4U : ((0x17U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                         ? 6U : 0U));
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_layer 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp = 0U;
                    }
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection 
                        = ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                            ? 1U : ((0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                     ? 2U : 0U));
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 1U;
                }
            } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done = 1U;
                } else if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_valid) 
                             & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm))) 
                            & (0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection)))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_index 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_index;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_value 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_bf16;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 2U;
                }
            } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if ((0x40U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 3U;
                }
            } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if ((0x40U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate 
                        = ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_id))
                            ? 4U : 6U);
                }
            } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if ((0x40U & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cv) 
                              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr)))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 5U;
                }
            } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if ((0x40U & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__rv))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 6U;
                }
            } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate))) {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 1U;
                }
            } else {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 0U;
            }
        }
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor;
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_owned = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_head = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_layer = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_position = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_data[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_count;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_cursor;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fusion_key;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fstate;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__waiting = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__error_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__layer = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__up = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__activated = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__result = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor 
            = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_id = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_target = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_layer = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_index = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__saved_value = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_id 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_id;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 0U;
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U]);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U]);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U]);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U]);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__79__value 
                    = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__79__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__79__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__79__Vfuncout))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    __Vfunc_round_bf16__80__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient;
    __Vfunc_round_bf16__80__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__80__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__80__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__80__value)))))));
    __Vfunc_round_bf16__80__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__81__value 
                        = __Vfunc_round_bf16__80__value;
                    vlSelf->__Vfunc_fp32_invalid__81__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__81__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__81__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__80__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__80__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__80__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U]));
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__error5 = 0U;
        } else {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT____Vcellout__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__out_error) 
                                          | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT____Vcellout__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__out_error)) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__170__value 
                                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT____Vcellinp__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__170__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__170__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__170__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__171__value 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT____Vcellinp__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__171__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__171__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__171__Vfuncout))));
            __Vfunc_shift_jam27__172__distance = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__172__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small1;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__172__distance))) {
                __Vfunc_shift_jam27__172__Vfuncout 
                    = __Vfunc_shift_jam27__172__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__172__distance))) {
                __Vfunc_shift_jam27__172__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__172__value);
            } else {
                __Vfunc_shift_jam27__172__shifted = 
                    (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__172__value, (IData)(__Vfunc_shift_jam27__172__distance)));
                __Vfunc_shift_jam27__172__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__172__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__172__distance)))));
                __Vfunc_shift_jam27__172__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__172__shifted) 
                       | (1U & (__Vfunc_shift_jam27__172__shifted 
                                | (0U != __Vfunc_shift_jam27__172__discarded))));
            }
            if ((0x8000000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3))));
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift)));
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative4 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative3;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__172__Vfuncout;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent2 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative2 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent1 
                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative1 
                = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT____Vcellinp__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__a 
                    ^ vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT____Vcellinp__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
        } else {
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__alu_valid) 
                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 1U;
            }
            if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 3U;
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__r 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term = 0x3f800000U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum = 0x3f800000U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 4U;
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 5U;
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 6U;
                } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 7U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order)));
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 4U;
                    }
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                }
            } else if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if (((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exp_ready))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__x 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
                    if ((([&]() {
                                    vlSelf->__Vfunc_fp32_invalid__187__value 
                                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference;
                                    vlSelf->__Vfunc_fp32_invalid__187__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (vlSelf->__Vfunc_fp32_invalid__187__value 
                                             >> 0x17U)));
                                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__187__Vfuncout)) 
                         | ((~ (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
                                >> 0x1fU)) & (0U != 
                                              (0x7fffffffU 
                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0U == (0x7fffffffU 
                                       & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0x3f800000U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0x41800000U < (0x7fffffffU 
                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
                            = ((0x3f317218U > (0x7fffffffU 
                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))
                                ? 0U : (0x1fffffffU 
                                        & VL_SHIFTL_III(29,29,8, 
                                                        (0x800000U 
                                                         | (0x7fffffU 
                                                            & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference)), 
                                                        (0xffU 
                                                         & ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
                                                             >> 0x17U) 
                                                            - (IData)(0x7eU))))));
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if ((0xb17218U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder)) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
                        = (0x1fffffffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
                                          - (IData)(0xb17218U)));
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent)));
                } else {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 2U;
                }
            } else if ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if ((1U & (IData)((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__scaled 
                                   >> 0x20U)))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result 
                        = (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__scaled);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
                }
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
            } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__x = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__r = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order = 0U;
    }
    __Vfunc_round_bf16__58__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product;
    __Vfunc_round_bf16__58__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__58__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__58__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__58__value)))))));
    if (vlSelf->startup_tb__DOT__rst_n) {
        if ((1U & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort)))) {
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_ready))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__key_vector 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_key;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_head;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__layer 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_layer;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__position 
                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_pos;
            }
        }
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[0U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[1U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[2U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[3U] = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_failed = 0U;
        } else {
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
            }
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned) 
                 & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid)))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age)));
                if ((0x27U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean 
                        = ((1U & (IData)((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
                                          >> 0x20U)))
                            ? 0U : (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed));
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_failed 
                        = (1U & ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__tree_failed[0U] 
                                  | (IData)((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
                                             >> 0x20U))) 
                                 | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed)));
                }
                if ((0x84U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 1U;
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed) 
                         | (0U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__rotated_failed)))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 1U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[0U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[1U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[2U] = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[3U] = 0U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[0U] 
                            = ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_x 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_x));
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[1U] 
                            = ((0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_x) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x)))))) 
                                  << 0x10U));
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[2U] 
                            = (((IData)((((QData)((IData)(
                                                          ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x)))))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                                           << 0x10U) 
                                                                          | (0xffffU 
                                                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x))))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[3U] 
                            = ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_y 
                                << 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__final_y 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__final_y)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__final_y 
                                                                           << 0x10U) 
                                                                          | (0xffffU 
                                                                             & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__final_x))))) 
                                                      >> 0x20U)) 
                                             >> 0x10U));
                    }
                }
            }
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 0U;
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
            }
        }
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__key_vector = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__layer = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__position = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[1U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[2U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[3U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_failed = 0U;
    }
    __Vfunc_round_bf16__58__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__59__value 
                        = __Vfunc_round_bf16__58__value;
                    vlSelf->__Vfunc_fp32_invalid__59__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__59__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__59__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__58__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__58__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__58__Vfuncout;
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
        } else {
            if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic_state) 
                  & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting))) 
                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 1U;
            }
            if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__denominator 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__data
                            : 0U);
                    if ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
                         >> 0x1fU)) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 4U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 5U;
                    }
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 5U;
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 6U;
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                }
            } else if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if (((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
                        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate) 
                           << 0x10U);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
                    if (([&]() {
                                __Vfunc_bf16_invalid__62__value 
                                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate;
                                __Vfunc_bf16_invalid__62__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & ((IData)(__Vfunc_bf16_invalid__62__value) 
                                                    >> 7U)));
                            }(), (IData)(__Vfunc_bf16_invalid__62__Vfuncout))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_ready) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 1U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential 
                            = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid)
                                ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result
                                : 0U);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 3U;
                    }
                }
            } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result 
                    = ((0x10000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded)
                        ? 0U : (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded));
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed 
                    = (1U & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
                             >> 0x10U));
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 7U;
            } else if ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__failed = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__denominator = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__numerator = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__result = 0U;
    }
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 0U;
        } else {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 0U;
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_bad) 
                 | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__tensor_bad))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
            } else {
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__projections__req_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued)));
                }
                if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__load_state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____Vlvbound_h0c516f12__0 = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received)));
                    if ((0x4ffU >= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                                                                >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)))) 
                                & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[
                                ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                 >> 5U)]) | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____Vlvbound_h0c516f12__0) 
                                             << (0x1fU 
                                                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))));
                    }
                    if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                        VL_ASSIGNSEL_WI(4096,16,(0xfffU 
                                                 & VL_SHIFTL_III(12,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index), 4U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__activations, 
                                        (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data));
                    } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                        VL_ASSIGNSEL_WI(1024,4,(0x3ffU 
                                                & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index), 2U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized, 
                                        (0xfU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data 
                                                 >> (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__nibble_shift))));
                    } else if ((2U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                        if ((3U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                            if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                                VL_ASSIGNSEL_WI(4096,16,
                                                (0xfffU 
                                                 & VL_SHIFTL_III(12,32,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index), 4U)), vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__weights, 
                                                (0xffffU 
                                                 & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data));
                            }
                        }
                    }
                }
                if ((((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                      & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting))) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.in_ready))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 1U;
                }
                if (((((((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                           | (1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                          | (2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                         | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                        | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                       | (5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                      | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                     | (7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)))) {
                    if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_valid) 
                              & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done)) 
                                 & (0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate)))) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_start_ready))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_input;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_output;
                            if ((0x1eU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))) {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer 
                                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlayer;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot 
                                    = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand)
                                        ? ((0xfU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                                            ? 0xbU : 8U)
                                        : 0U);
                            } else {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer 
                                    = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer;
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot 
                                    = ((0x17U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                        ? 5U : ((0x23U 
                                                 == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                                                 ? 0xeU
                                                 : 1U));
                            }
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__projection 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_proj;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4 
                                = (0x23U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state));
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state 
                                = ((((((1U > vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_input) 
                                       | (0x10U < vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_input)) 
                                      | (1U > vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_output)) 
                                     | (0x10U < vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_output)) 
                                    | ((0x23U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
                                       & ((0U != (7U 
                                                  & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_input)) 
                                          | (6U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__command_proj)))))
                                    ? 0xaU : 1U);
                        }
                    } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received = 0U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[1U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[1U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[2U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[2U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[3U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[3U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[4U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[4U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[5U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[5U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[6U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[6U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[7U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[7U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[8U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[8U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[9U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[9U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xaU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xaU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xbU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xbU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xcU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xcU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xdU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xdU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xeU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xeU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xfU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xfU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x10U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x10U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x11U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x11U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x12U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x12U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x13U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x13U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x14U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x14U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x15U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x15U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x16U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x16U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x17U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x17U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x18U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x18U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x19U] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x19U];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1aU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1bU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1cU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1dU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1eU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1fU] 
                            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1fU];
                        VL_ASSIGN_W(4096,vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__activations, Vstartup_tb__ConstPool__CONST_h6e0f3f36_0);
                        VL_ASSIGN_W(4096,vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__weights, Vstartup_tb__ConstPool__CONST_h6e0f3f36_0);
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued = 0U;
                        __Vilp = 0U;
                        while ((__Vilp <= 0x27U)) {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[__Vilp] 
                                = Vstartup_tb__ConstPool__CONST_had224c38_0[__Vilp];
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state 
                            = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                ? 2U : 3U);
                    } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received) 
                              == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)) 
                             & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                                == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued = 0U;
                            __Vilp = 0U;
                            while ((__Vilp <= 0x27U)) {
                                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[__Vilp] 
                                    = Vstartup_tb__ConstPool__CONST_had224c38_0[__Vilp];
                                __Vilp = ((IData)(1U) 
                                          + __Vilp);
                            }
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received) 
                              == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)) 
                             & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                                == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 4U;
                        }
                    } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tv) 
                             & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce)))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tor))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial 
                                = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tsum;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 6U;
                        }
                    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.out_valid) 
                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
                            if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.out_valid) 
                                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.__PVT__result_failed))) {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
                            } else {
                                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator 
                                    = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.out_valid)
                                        ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.__PVT__data
                                        : 0U);
                                if (((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
                                      + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes)) 
                                     == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent)) {
                                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 7U;
                                } else {
                                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
                                        = ((IData)(0x100U) 
                                           + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base);
                                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__result 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
                        if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4) 
                             & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded 
                                >> 0x10U))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
                        } else {
                            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded_result 
                                = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                    ? (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded)
                                    : 0U);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 8U;
                        }
                    }
                } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                    if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_valid) 
                         & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_ready))) {
                        if ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row 
                             == (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent 
                                 - (IData)(1U)))) {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 9U;
                        } else {
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row 
                                = ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator = 0U;
                            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 1U;
                        }
                    }
                } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
                } else if ((0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
                } else {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
                }
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4 = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__projection = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x27U)) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[__Vilp] 
                = Vstartup_tb__ConstPool__CONST_had224c38_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[1U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[2U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[3U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[4U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[5U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[6U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[7U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[8U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[9U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xaU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xbU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xcU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xdU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xeU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xfU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x10U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x11U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x12U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x13U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x14U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x15U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x16U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x17U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x18U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x19U] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1aU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1bU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1cU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1dU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1eU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1fU] 
            = Vstartup_tb__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        VL_ASSIGN_W(4096,vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__activations, Vstartup_tb__ConstPool__CONST_h6e0f3f36_0);
        VL_ASSIGN_W(4096,vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__weights, Vstartup_tb__ConstPool__CONST_h6e0f3f36_0);
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__result = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded_result = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__84__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__84__part 
                            = vlSelf->__Vfunc_leading_zero32__84__value;
                        vlSelf->__Vfunc_leading_zero32__84__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__84__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__84__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__84__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__84__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__84__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__90__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__90__part 
                            = vlSelf->__Vfunc_leading_zero32__90__value;
                        vlSelf->__Vfunc_leading_zero32__90__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__90__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__90__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__90__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__90__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__90__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__96__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__96__part 
                            = vlSelf->__Vfunc_leading_zero32__96__value;
                        vlSelf->__Vfunc_leading_zero32__96__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__96__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__96__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__96__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__96__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__96__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__102__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__102__part 
                            = vlSelf->__Vfunc_leading_zero32__102__value;
                        vlSelf->__Vfunc_leading_zero32__102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__108__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__108__part 
                            = vlSelf->__Vfunc_leading_zero32__108__value;
                        vlSelf->__Vfunc_leading_zero32__108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__114__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__114__part 
                            = vlSelf->__Vfunc_leading_zero32__114__value;
                        vlSelf->__Vfunc_leading_zero32__114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__120__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__120__part 
                            = vlSelf->__Vfunc_leading_zero32__120__value;
                        vlSelf->__Vfunc_leading_zero32__120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__126__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__126__part 
                            = vlSelf->__Vfunc_leading_zero32__126__value;
                        vlSelf->__Vfunc_leading_zero32__126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__83__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__83__part 
                            = vlSelf->__Vfunc_leading_zero32__83__value;
                        vlSelf->__Vfunc_leading_zero32__83__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__83__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__83__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__83__count)));
                            vlSelf->__Vfunc_leading_zero32__83__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__83__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__83__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__83__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__83__count)));
                            vlSelf->__Vfunc_leading_zero32__83__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__83__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__83__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__83__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__83__count)));
                            vlSelf->__Vfunc_leading_zero32__83__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__83__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__83__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__83__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__83__count)));
                            vlSelf->__Vfunc_leading_zero32__83__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__83__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__83__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__83__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__83__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__83__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__83__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__83__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__83__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__89__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__89__part 
                            = vlSelf->__Vfunc_leading_zero32__89__value;
                        vlSelf->__Vfunc_leading_zero32__89__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__89__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__89__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__89__count)));
                            vlSelf->__Vfunc_leading_zero32__89__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__89__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__89__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__89__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__89__count)));
                            vlSelf->__Vfunc_leading_zero32__89__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__89__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__89__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__89__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__89__count)));
                            vlSelf->__Vfunc_leading_zero32__89__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__89__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__89__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__89__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__89__count)));
                            vlSelf->__Vfunc_leading_zero32__89__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__89__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__89__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__89__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__89__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__89__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__89__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__89__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__89__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__95__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__95__part 
                            = vlSelf->__Vfunc_leading_zero32__95__value;
                        vlSelf->__Vfunc_leading_zero32__95__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__95__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__95__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__95__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__95__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__95__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__101__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__101__part 
                            = vlSelf->__Vfunc_leading_zero32__101__value;
                        vlSelf->__Vfunc_leading_zero32__101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__107__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__107__part 
                            = vlSelf->__Vfunc_leading_zero32__107__value;
                        vlSelf->__Vfunc_leading_zero32__107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__113__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__113__part 
                            = vlSelf->__Vfunc_leading_zero32__113__value;
                        vlSelf->__Vfunc_leading_zero32__113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__119__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__119__part 
                            = vlSelf->__Vfunc_leading_zero32__119__value;
                        vlSelf->__Vfunc_leading_zero32__119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__125__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__125__part 
                            = vlSelf->__Vfunc_leading_zero32__125__value;
                        vlSelf->__Vfunc_leading_zero32__125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large1;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small1;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__distance1;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent1;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent2;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent3;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative1;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative2;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative3;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract1;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__failed;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__gate;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__waiting;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__layer;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row 
        = vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__167__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__167__part 
                            = vlSelf->__Vfunc_leading_zero32__167__value;
                        vlSelf->__Vfunc_leading_zero32__167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__167__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__168__significand = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__significand4;
    __Vfunc_round_pack32__168__exponent = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__168__negative = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__negative4;
    __Vfunc_round_pack32__168__adjusted = __Vfunc_round_pack32__168__exponent;
    __Vfunc_round_pack32__168__shifted = __Vfunc_round_pack32__168__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__168__exponent))) {
        vlSelf->__Vfunc_shift_jam27__169__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__168__exponent)));
        vlSelf->__Vfunc_shift_jam27__169__value = __Vfunc_round_pack32__168__significand;
        __Vfunc_round_pack32__168__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__169__distance))) {
            vlSelf->__Vfunc_shift_jam27__169__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__169__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__169__distance))) {
            vlSelf->__Vfunc_shift_jam27__169__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__169__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__169__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__169__value, (IData)(vlSelf->__Vfunc_shift_jam27__169__distance)));
            vlSelf->__Vfunc_shift_jam27__169__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__169__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__169__distance)))));
            vlSelf->__Vfunc_shift_jam27__169__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__169__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__169__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__169__discarded))));
        }
        __Vfunc_round_pack32__168__shifted = vlSelf->__Vfunc_shift_jam27__169__Vfuncout;
    }
    __Vfunc_round_pack32__168__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__168__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__168__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__168__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__168__rounded)) {
        __Vfunc_round_pack32__168__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__168__rounded, 1U));
        __Vfunc_round_pack32__168__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__168__adjusted)));
    }
    __Vfunc_round_pack32__168__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__168__rounded)) {
        __Vfunc_round_pack32__168__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__168__adjusted)));
    }
    __Vfunc_round_pack32__168__Vfuncout = (((0U == __Vfunc_round_pack32__168__significand) 
                                            | (0U == __Vfunc_round_pack32__168__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__168__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__168__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__168__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__168__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__168__rounded)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__168__Vfuncout;
    __Vfunc_unsigned32_to_fp32__177__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order;
    __Vfunc_leading_zero32__178__value = __Vfunc_unsigned32_to_fp32__177__value;
    __Vfunc_leading_zero32__178__part = __Vfunc_leading_zero32__178__value;
    __Vfunc_leading_zero32__178__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__178__part >> 0x10U))) {
        __Vfunc_leading_zero32__178__count = (0x3fU 
                                              & ((IData)(0x10U) 
                                                 + (IData)(__Vfunc_leading_zero32__178__count)));
        __Vfunc_leading_zero32__178__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__178__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__178__part >> 0x18U))) {
        __Vfunc_leading_zero32__178__count = (0x3fU 
                                              & ((IData)(8U) 
                                                 + (IData)(__Vfunc_leading_zero32__178__count)));
        __Vfunc_leading_zero32__178__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__178__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__178__part >> 0x1cU))) {
        __Vfunc_leading_zero32__178__count = (0x3fU 
                                              & ((IData)(4U) 
                                                 + (IData)(__Vfunc_leading_zero32__178__count)));
        __Vfunc_leading_zero32__178__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__178__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__178__part >> 0x1eU))) {
        __Vfunc_leading_zero32__178__count = (0x3fU 
                                              & ((IData)(2U) 
                                                 + (IData)(__Vfunc_leading_zero32__178__count)));
        __Vfunc_leading_zero32__178__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__178__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__178__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__178__count = (0x3fU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_leading_zero32__178__count)));
    }
    __Vfunc_leading_zero32__178__Vfuncout = ((0U == __Vfunc_leading_zero32__178__value)
                                              ? 0x20U
                                              : (IData)(__Vfunc_leading_zero32__178__count));
    __Vfunc_unsigned32_to_fp32__177__shift = __Vfunc_leading_zero32__178__Vfuncout;
    __Vfunc_unsigned32_to_fp32__177__normalized = VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__177__value, (IData)(__Vfunc_unsigned32_to_fp32__177__shift));
    __Vfunc_round_pack32__179__significand = ((0x7fffffeU 
                                               & (__Vfunc_unsigned32_to_fp32__177__normalized 
                                                  >> 5U)) 
                                              | (0U 
                                                 != 
                                                 (0x3fU 
                                                  & __Vfunc_unsigned32_to_fp32__177__normalized)));
    __Vfunc_round_pack32__179__exponent = (0xfffU & 
                                           ((IData)(0x1fU) 
                                            - (IData)(__Vfunc_unsigned32_to_fp32__177__shift)));
    __Vfunc_round_pack32__179__adjusted = __Vfunc_round_pack32__179__exponent;
    __Vfunc_round_pack32__179__shifted = __Vfunc_round_pack32__179__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__179__exponent))) {
        vlSelf->__Vfunc_shift_jam27__180__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__179__exponent)));
        vlSelf->__Vfunc_shift_jam27__180__value = __Vfunc_round_pack32__179__significand;
        __Vfunc_round_pack32__179__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__180__distance))) {
            vlSelf->__Vfunc_shift_jam27__180__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__180__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__180__distance))) {
            vlSelf->__Vfunc_shift_jam27__180__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__180__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__180__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__180__value, (IData)(vlSelf->__Vfunc_shift_jam27__180__distance)));
            vlSelf->__Vfunc_shift_jam27__180__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__180__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__180__distance)))));
            vlSelf->__Vfunc_shift_jam27__180__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__180__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__180__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__180__discarded))));
        }
        __Vfunc_round_pack32__179__shifted = vlSelf->__Vfunc_shift_jam27__180__Vfuncout;
    }
    __Vfunc_round_pack32__179__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__179__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__179__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__179__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__179__rounded)) {
        __Vfunc_round_pack32__179__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__179__rounded, 1U));
        __Vfunc_round_pack32__179__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__179__adjusted)));
    }
    __Vfunc_round_pack32__179__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__179__rounded)) {
        __Vfunc_round_pack32__179__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__179__adjusted)));
    }
    __Vfunc_round_pack32__179__Vfuncout = (((0U == __Vfunc_round_pack32__179__significand) 
                                            | (0U == __Vfunc_round_pack32__179__rounded))
                                            ? 0ULL : 
                                           (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__179__adjusted))
                                             ? 0x100000000ULL
                                             : (QData)((IData)(
                                                               (((IData)(__Vfunc_round_pack32__179__biased) 
                                                                 << 0x17U) 
                                                                | (0x7fffffU 
                                                                   & __Vfunc_round_pack32__179__rounded))))));
    __Vfunc_unsigned32_to_fp32__177__packed_value = __Vfunc_round_pack32__179__Vfuncout;
    __Vfunc_unsigned32_to_fp32__177__Vfuncout = ((0U 
                                                  == __Vfunc_unsigned32_to_fp32__177__value)
                                                  ? 0U
                                                  : (IData)(__Vfunc_unsigned32_to_fp32__177__packed_value));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order32 
        = __Vfunc_unsigned32_to_fp32__177__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__clamped 
        = ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum 
            >> 0x1fU) ? 0U : (([&]() {
                    vlSelf->__Vfunc_fp32_greater__181__a 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum;
                    vlSelf->__Vfunc_fp32_greater__181__Vfuncout 
                        = (1U & ((vlSelf->__Vfunc_fp32_greater__181__a 
                                  >> 0x1fU) ? (~ (vlSelf->__Vfunc_fp32_greater__181__a 
                                                  >> 0x1fU))
                                  : ((vlSelf->__Vfunc_fp32_greater__181__a 
                                      >> 0x1fU) ? (0x3f800000U 
                                                   > 
                                                   (0x7fffffffU 
                                                    & vlSelf->__Vfunc_fp32_greater__181__a))
                                      : (0x3f800000U 
                                         < (0x7fffffffU 
                                            & vlSelf->__Vfunc_fp32_greater__181__a)))));
                }(), (IData)(vlSelf->__Vfunc_fp32_greater__181__Vfuncout))
                               ? 0x3f800000U : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum));
    __Vfunc_unsigned32_to_fp32__173__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent;
    __Vfunc_leading_zero32__174__value = __Vfunc_unsigned32_to_fp32__173__value;
    __Vfunc_leading_zero32__174__part = __Vfunc_leading_zero32__174__value;
    __Vfunc_leading_zero32__174__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__174__part >> 0x10U))) {
        __Vfunc_leading_zero32__174__count = (0x3fU 
                                              & ((IData)(0x10U) 
                                                 + (IData)(__Vfunc_leading_zero32__174__count)));
        __Vfunc_leading_zero32__174__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__174__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__174__part >> 0x18U))) {
        __Vfunc_leading_zero32__174__count = (0x3fU 
                                              & ((IData)(8U) 
                                                 + (IData)(__Vfunc_leading_zero32__174__count)));
        __Vfunc_leading_zero32__174__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__174__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__174__part >> 0x1cU))) {
        __Vfunc_leading_zero32__174__count = (0x3fU 
                                              & ((IData)(4U) 
                                                 + (IData)(__Vfunc_leading_zero32__174__count)));
        __Vfunc_leading_zero32__174__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__174__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__174__part >> 0x1eU))) {
        __Vfunc_leading_zero32__174__count = (0x3fU 
                                              & ((IData)(2U) 
                                                 + (IData)(__Vfunc_leading_zero32__174__count)));
        __Vfunc_leading_zero32__174__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__174__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__174__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__174__count = (0x3fU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_leading_zero32__174__count)));
    }
    __Vfunc_leading_zero32__174__Vfuncout = ((0U == __Vfunc_leading_zero32__174__value)
                                              ? 0x20U
                                              : (IData)(__Vfunc_leading_zero32__174__count));
    __Vfunc_unsigned32_to_fp32__173__shift = __Vfunc_leading_zero32__174__Vfuncout;
    __Vfunc_unsigned32_to_fp32__173__normalized = VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__173__value, (IData)(__Vfunc_unsigned32_to_fp32__173__shift));
    __Vfunc_round_pack32__175__significand = ((0x7fffffeU 
                                               & (__Vfunc_unsigned32_to_fp32__173__normalized 
                                                  >> 5U)) 
                                              | (0U 
                                                 != 
                                                 (0x3fU 
                                                  & __Vfunc_unsigned32_to_fp32__173__normalized)));
    __Vfunc_round_pack32__175__exponent = (0xfffU & 
                                           ((IData)(0x1fU) 
                                            - (IData)(__Vfunc_unsigned32_to_fp32__173__shift)));
    __Vfunc_round_pack32__175__adjusted = __Vfunc_round_pack32__175__exponent;
    __Vfunc_round_pack32__175__shifted = __Vfunc_round_pack32__175__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__175__exponent))) {
        vlSelf->__Vfunc_shift_jam27__176__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__175__exponent)));
        vlSelf->__Vfunc_shift_jam27__176__value = __Vfunc_round_pack32__175__significand;
        __Vfunc_round_pack32__175__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__176__distance))) {
            vlSelf->__Vfunc_shift_jam27__176__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__176__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__176__distance))) {
            vlSelf->__Vfunc_shift_jam27__176__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__176__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__176__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__176__value, (IData)(vlSelf->__Vfunc_shift_jam27__176__distance)));
            vlSelf->__Vfunc_shift_jam27__176__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__176__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__176__distance)))));
            vlSelf->__Vfunc_shift_jam27__176__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__176__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__176__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__176__discarded))));
        }
        __Vfunc_round_pack32__175__shifted = vlSelf->__Vfunc_shift_jam27__176__Vfuncout;
    }
    __Vfunc_round_pack32__175__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__175__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__175__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__175__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__175__rounded)) {
        __Vfunc_round_pack32__175__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__175__rounded, 1U));
        __Vfunc_round_pack32__175__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__175__adjusted)));
    }
    __Vfunc_round_pack32__175__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__175__rounded)) {
        __Vfunc_round_pack32__175__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__175__adjusted)));
    }
    __Vfunc_round_pack32__175__Vfuncout = (((0U == __Vfunc_round_pack32__175__significand) 
                                            | (0U == __Vfunc_round_pack32__175__rounded))
                                            ? 0ULL : 
                                           (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__175__adjusted))
                                             ? 0x100000000ULL
                                             : (QData)((IData)(
                                                               (((IData)(__Vfunc_round_pack32__175__biased) 
                                                                 << 0x17U) 
                                                                | (0x7fffffU 
                                                                   & __Vfunc_round_pack32__175__rounded))))));
    __Vfunc_unsigned32_to_fp32__173__packed_value = __Vfunc_round_pack32__175__Vfuncout;
    __Vfunc_unsigned32_to_fp32__173__Vfuncout = ((0U 
                                                  == __Vfunc_unsigned32_to_fp32__173__value)
                                                  ? 0U
                                                  : (IData)(__Vfunc_unsigned32_to_fp32__173__packed_value));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent32 
        = __Vfunc_unsigned32_to_fp32__173__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 0U;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic_state 
        = ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
           | ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
              | ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                 | ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                    | ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                       | (0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b = 0U;
    if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 2U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b = 0x3eb504f3U;
    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__maximum;
    } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential;
    } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 2U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential;
    } else if ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product;
    } else if ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 3U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__load_state 
        = ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
           | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)));
    if ((0x358637bdU <= (0x7fffffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small_value = 0x358637bdU;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 = 0x6bU;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 
            = (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean 
                        >> 0x17U));
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large_value = 0x358637bdU;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 
            = (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean 
                        >> 0x17U));
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 = 0x6bU;
    }
    __Vfunc_round_bf16__60__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient;
    __Vfunc_round_bf16__60__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__60__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__60__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__60__value)))))));
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned = 0U;
        } else {
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_ready))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed 
                    = ((0U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element)) 
                       | ((0U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient)) 
                          | ((1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_layer) 
                             | ((1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_pos) 
                                | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_key)
                                    ? (1U <= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_head))
                                    : (2U <= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_head)))))));
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned = 1U;
            }
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__fused_ready))) {
                vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned = 0U;
            }
        }
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned = 0U;
    }
    __Vfunc_round_bf16__60__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__61__value 
                        = __Vfunc_round_bf16__60__value;
                    vlSelf->__Vfunc_fp32_invalid__61__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__61__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__61__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__60__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__60__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
        = __Vfunc_round_bf16__60__Vfuncout;
    if (vlSelf->startup_tb__DOT__rst_n) {
        if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 0U;
            vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
            vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
        } else {
            if (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__alu_valid) 
                 & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 1U;
            }
            if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting))) {
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                } else if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 3U;
                } else if ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__r 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term = 0x3f800000U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum = 0x3f800000U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order = 1U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 4U;
                } else if ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 5U;
                } else if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 6U;
                } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum 
                        = ((IData)(vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order))) {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 7U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order)));
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 4U;
                    }
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                }
            } else if ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if (((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
                     & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_ready))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__x 
                        = (0x80000000U | (0x7fffffffU 
                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x));
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
                    if (([&]() {
                                vlSelf->__Vfunc_fp32_invalid__77__value 
                                    = (0x80000000U 
                                       | (0x7fffffffU 
                                          & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x));
                                vlSelf->__Vfunc_fp32_invalid__77__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (vlSelf->__Vfunc_fp32_invalid__77__value 
                                                    >> 0x17U)));
                            }(), (IData)(vlSelf->__Vfunc_fp32_invalid__77__Vfuncout))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0U == (0x7fffffffU 
                                       & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0x3f800000U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0x41800000U < (0x7fffffffU 
                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x))) {
                        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
                    } else {
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
                            = ((0x3f317218U > (0x7fffffffU 
                                               & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x))
                                ? 0U : (0x1fffffffU 
                                        & VL_SHIFTL_III(29,29,8, 
                                                        (0x800000U 
                                                         | (0x7fffffU 
                                                            & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x)), 
                                                        (0xffU 
                                                         & ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__x 
                                                             >> 0x17U) 
                                                            - (IData)(0x7eU))))));
                        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if ((0xb17218U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder)) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
                        = (0x1fffffffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder 
                                          - (IData)(0xb17218U)));
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent)));
                } else {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 2U;
                }
            } else if ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if ((1U & (IData)((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__scaled 
                                   >> 0x20U)))) {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 1U;
                } else {
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result 
                        = (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__scaled);
                    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
                }
                vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 8U;
            } else if ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
                if ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))) {
                    vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__failed = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__x = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__r = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__result = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__remainder = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent = 0U;
        vlSelf->__Vdly__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h103a2f0a__0 
        = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
           + (0xffU & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                       >> 1U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__remaining 
        = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent 
           - vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base);
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__start_gamma_kind 
        = ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
            ? 5U : ((0x1bU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                     ? 6U : 7U));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__configuring_head 
        = ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
           | (0xbU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__io_write 
        = ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
           | (0x14U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)));
    __Vfunc_awq_lane_shift__450__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__450__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__450__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__nibble_shift 
        = __Vfunc_awq_lane_shift__450__Vfuncout;
    __Vfunc_awq_lane_shift__194__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__194__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__194__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__0__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__194__Vfuncout;
    __Vfunc_awq_lane_shift__195__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__195__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__195__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__1__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__195__Vfuncout;
    __Vfunc_awq_lane_shift__196__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__196__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__196__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__2__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__196__Vfuncout;
    __Vfunc_awq_lane_shift__197__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__197__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__197__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__3__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__197__Vfuncout;
    __Vfunc_awq_lane_shift__198__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__198__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__198__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__4__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__198__Vfuncout;
    __Vfunc_awq_lane_shift__199__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__199__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__199__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__5__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__199__Vfuncout;
    __Vfunc_awq_lane_shift__200__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__200__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__200__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__6__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__200__Vfuncout;
    __Vfunc_awq_lane_shift__201__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__201__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__201__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__7__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__201__Vfuncout;
    __Vfunc_awq_lane_shift__202__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__202__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__202__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__8__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__202__Vfuncout;
    __Vfunc_awq_lane_shift__203__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__203__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__203__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__9__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__203__Vfuncout;
    __Vfunc_awq_lane_shift__204__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__204__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__204__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__10__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__204__Vfuncout;
    __Vfunc_awq_lane_shift__205__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__205__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__205__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__11__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__205__Vfuncout;
    __Vfunc_awq_lane_shift__206__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__206__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__206__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__12__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__206__Vfuncout;
    __Vfunc_awq_lane_shift__207__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__207__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__207__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__13__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__207__Vfuncout;
    __Vfunc_awq_lane_shift__208__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__208__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__208__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__14__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__208__Vfuncout;
    __Vfunc_awq_lane_shift__209__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__209__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__209__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__15__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__209__Vfuncout;
    __Vfunc_awq_lane_shift__210__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__210__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__210__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__16__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__210__Vfuncout;
    __Vfunc_awq_lane_shift__211__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__211__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__211__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__17__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__211__Vfuncout;
    __Vfunc_awq_lane_shift__212__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__212__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__212__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__18__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__212__Vfuncout;
    __Vfunc_awq_lane_shift__213__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__213__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__213__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__19__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__213__Vfuncout;
    __Vfunc_awq_lane_shift__214__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__214__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__214__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__20__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__214__Vfuncout;
    __Vfunc_awq_lane_shift__215__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__215__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__215__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__21__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__215__Vfuncout;
    __Vfunc_awq_lane_shift__216__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__216__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__216__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__22__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__216__Vfuncout;
    __Vfunc_awq_lane_shift__217__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__217__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__217__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__23__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__217__Vfuncout;
    __Vfunc_awq_lane_shift__218__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__218__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__218__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__24__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__218__Vfuncout;
    __Vfunc_awq_lane_shift__219__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__219__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__219__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__25__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__219__Vfuncout;
    __Vfunc_awq_lane_shift__220__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__220__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__220__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__26__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__220__Vfuncout;
    __Vfunc_awq_lane_shift__221__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__221__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__221__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__27__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__221__Vfuncout;
    __Vfunc_awq_lane_shift__222__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__222__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__222__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__28__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__222__Vfuncout;
    __Vfunc_awq_lane_shift__223__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__223__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__223__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__29__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__223__Vfuncout;
    __Vfunc_awq_lane_shift__224__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__224__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__224__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__30__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__224__Vfuncout;
    __Vfunc_awq_lane_shift__225__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__225__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__225__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__31__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__225__Vfuncout;
    __Vfunc_awq_lane_shift__226__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__226__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__226__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__32__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__226__Vfuncout;
    __Vfunc_awq_lane_shift__227__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__227__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__227__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__33__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__227__Vfuncout;
    __Vfunc_awq_lane_shift__228__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__228__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__228__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__34__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__228__Vfuncout;
    __Vfunc_awq_lane_shift__229__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__229__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__229__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__35__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__229__Vfuncout;
    __Vfunc_awq_lane_shift__230__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__230__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__230__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__36__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__230__Vfuncout;
    __Vfunc_awq_lane_shift__231__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__231__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__231__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__37__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__231__Vfuncout;
    __Vfunc_awq_lane_shift__232__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__232__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__232__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__38__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__232__Vfuncout;
    __Vfunc_awq_lane_shift__233__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__233__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__233__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__39__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__233__Vfuncout;
    __Vfunc_awq_lane_shift__234__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__234__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__234__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__40__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__234__Vfuncout;
    __Vfunc_awq_lane_shift__235__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__235__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__235__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__41__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__235__Vfuncout;
    __Vfunc_awq_lane_shift__236__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__236__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__236__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__42__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__236__Vfuncout;
    __Vfunc_awq_lane_shift__237__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__237__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__237__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__43__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__237__Vfuncout;
    __Vfunc_awq_lane_shift__238__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__238__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__238__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__44__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__238__Vfuncout;
    __Vfunc_awq_lane_shift__239__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__239__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__239__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__45__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__239__Vfuncout;
    __Vfunc_awq_lane_shift__240__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__240__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__240__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__46__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__240__Vfuncout;
    __Vfunc_awq_lane_shift__241__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__241__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__241__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__47__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__241__Vfuncout;
    __Vfunc_awq_lane_shift__242__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__242__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__242__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__48__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__242__Vfuncout;
    __Vfunc_awq_lane_shift__243__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__243__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__243__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__49__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__243__Vfuncout;
    __Vfunc_awq_lane_shift__244__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__244__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__244__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__50__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__244__Vfuncout;
    __Vfunc_awq_lane_shift__245__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__245__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__245__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__51__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__245__Vfuncout;
    __Vfunc_awq_lane_shift__246__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__246__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__246__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__52__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__246__Vfuncout;
    __Vfunc_awq_lane_shift__247__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__247__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__247__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__53__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__247__Vfuncout;
    __Vfunc_awq_lane_shift__248__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__248__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__248__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__54__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__248__Vfuncout;
    __Vfunc_awq_lane_shift__249__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__249__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__249__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__55__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__249__Vfuncout;
    __Vfunc_awq_lane_shift__250__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__250__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__250__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__56__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__250__Vfuncout;
    __Vfunc_awq_lane_shift__251__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__251__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__251__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__57__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__251__Vfuncout;
    __Vfunc_awq_lane_shift__252__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__252__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__252__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__58__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__252__Vfuncout;
    __Vfunc_awq_lane_shift__253__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__253__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__253__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__59__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__253__Vfuncout;
    __Vfunc_awq_lane_shift__254__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__254__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__254__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__60__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__254__Vfuncout;
    __Vfunc_awq_lane_shift__255__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__255__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__255__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__61__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__255__Vfuncout;
    __Vfunc_awq_lane_shift__256__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__256__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__256__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__62__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__256__Vfuncout;
    __Vfunc_awq_lane_shift__257__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__257__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__257__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__63__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__257__Vfuncout;
    __Vfunc_awq_lane_shift__258__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__258__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__258__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__64__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__258__Vfuncout;
    __Vfunc_awq_lane_shift__259__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__259__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__259__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__65__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__259__Vfuncout;
    __Vfunc_awq_lane_shift__260__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__260__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__260__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__66__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__260__Vfuncout;
    __Vfunc_awq_lane_shift__261__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__261__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__261__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__67__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__261__Vfuncout;
    __Vfunc_awq_lane_shift__262__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__262__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__262__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__68__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__262__Vfuncout;
    __Vfunc_awq_lane_shift__263__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__263__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__263__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__69__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__263__Vfuncout;
    __Vfunc_awq_lane_shift__264__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__264__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__264__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__70__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__264__Vfuncout;
    __Vfunc_awq_lane_shift__265__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__265__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__265__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__71__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__265__Vfuncout;
    __Vfunc_awq_lane_shift__266__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__266__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__266__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__72__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__266__Vfuncout;
    __Vfunc_awq_lane_shift__267__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__267__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__267__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__73__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__267__Vfuncout;
    __Vfunc_awq_lane_shift__268__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__268__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__268__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__74__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__268__Vfuncout;
    __Vfunc_awq_lane_shift__269__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__269__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__269__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__75__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__269__Vfuncout;
    __Vfunc_awq_lane_shift__270__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__270__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__270__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__76__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__270__Vfuncout;
    __Vfunc_awq_lane_shift__271__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__271__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__271__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__77__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__271__Vfuncout;
    __Vfunc_awq_lane_shift__272__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__272__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__272__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__78__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__272__Vfuncout;
    __Vfunc_awq_lane_shift__273__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__273__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__273__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__79__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__273__Vfuncout;
    __Vfunc_awq_lane_shift__274__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__274__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__274__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__80__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__274__Vfuncout;
    __Vfunc_awq_lane_shift__275__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__275__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__275__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__81__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__275__Vfuncout;
    __Vfunc_awq_lane_shift__276__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__276__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__276__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__82__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__276__Vfuncout;
    __Vfunc_awq_lane_shift__277__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__277__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__277__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__83__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__277__Vfuncout;
    __Vfunc_awq_lane_shift__278__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__278__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__278__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__84__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__278__Vfuncout;
    __Vfunc_awq_lane_shift__279__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__279__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__279__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__85__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__279__Vfuncout;
    __Vfunc_awq_lane_shift__280__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__280__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__280__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__86__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__280__Vfuncout;
    __Vfunc_awq_lane_shift__281__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__281__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__281__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__87__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__281__Vfuncout;
    __Vfunc_awq_lane_shift__282__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__282__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__282__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__88__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__282__Vfuncout;
    __Vfunc_awq_lane_shift__283__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__283__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__283__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__89__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__283__Vfuncout;
    __Vfunc_awq_lane_shift__284__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__284__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__284__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__90__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__284__Vfuncout;
    __Vfunc_awq_lane_shift__285__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__285__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__285__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__91__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__285__Vfuncout;
    __Vfunc_awq_lane_shift__286__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__286__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__286__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__92__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__286__Vfuncout;
    __Vfunc_awq_lane_shift__287__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__287__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__287__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__93__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__287__Vfuncout;
    __Vfunc_awq_lane_shift__288__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__288__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__288__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__94__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__288__Vfuncout;
    __Vfunc_awq_lane_shift__289__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__289__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__289__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__95__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__289__Vfuncout;
    __Vfunc_awq_lane_shift__290__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__290__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__290__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__96__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__290__Vfuncout;
    __Vfunc_awq_lane_shift__291__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__291__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__291__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__97__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__291__Vfuncout;
    __Vfunc_awq_lane_shift__292__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__292__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__292__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__98__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__292__Vfuncout;
    __Vfunc_awq_lane_shift__293__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__293__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__293__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__99__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__293__Vfuncout;
    __Vfunc_awq_lane_shift__294__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__294__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__294__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__100__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__294__Vfuncout;
    __Vfunc_awq_lane_shift__295__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__295__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__295__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__101__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__295__Vfuncout;
    __Vfunc_awq_lane_shift__296__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__296__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__296__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__102__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__296__Vfuncout;
    __Vfunc_awq_lane_shift__297__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__297__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__297__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__103__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__297__Vfuncout;
    __Vfunc_awq_lane_shift__298__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__298__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__298__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__104__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__298__Vfuncout;
    __Vfunc_awq_lane_shift__299__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__299__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__299__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__105__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__299__Vfuncout;
    __Vfunc_awq_lane_shift__300__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__300__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__300__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__106__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__300__Vfuncout;
    __Vfunc_awq_lane_shift__301__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__301__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__301__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__107__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__301__Vfuncout;
    __Vfunc_awq_lane_shift__302__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__302__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__302__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__108__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__302__Vfuncout;
    __Vfunc_awq_lane_shift__303__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__303__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__303__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__109__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__303__Vfuncout;
    __Vfunc_awq_lane_shift__304__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__304__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__304__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__110__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__304__Vfuncout;
    __Vfunc_awq_lane_shift__305__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__305__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__305__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__111__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__305__Vfuncout;
    __Vfunc_awq_lane_shift__306__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__306__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__306__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__112__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__306__Vfuncout;
    __Vfunc_awq_lane_shift__307__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__307__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__307__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__113__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__307__Vfuncout;
    __Vfunc_awq_lane_shift__308__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__308__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__308__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__114__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__308__Vfuncout;
    __Vfunc_awq_lane_shift__309__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__309__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__309__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__115__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__309__Vfuncout;
    __Vfunc_awq_lane_shift__310__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__310__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__310__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__116__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__310__Vfuncout;
    __Vfunc_awq_lane_shift__311__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__311__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__311__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__117__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__311__Vfuncout;
    __Vfunc_awq_lane_shift__312__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__312__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__312__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__118__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__312__Vfuncout;
    __Vfunc_awq_lane_shift__313__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__313__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__313__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__119__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__313__Vfuncout;
    __Vfunc_awq_lane_shift__314__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__314__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__314__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__120__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__314__Vfuncout;
    __Vfunc_awq_lane_shift__315__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__315__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__315__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__121__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__315__Vfuncout;
    __Vfunc_awq_lane_shift__316__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__316__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__316__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__122__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__316__Vfuncout;
    __Vfunc_awq_lane_shift__317__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__317__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__317__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__123__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__317__Vfuncout;
    __Vfunc_awq_lane_shift__318__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__318__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__318__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__124__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__318__Vfuncout;
    __Vfunc_awq_lane_shift__319__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__319__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__319__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__125__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__319__Vfuncout;
    __Vfunc_awq_lane_shift__320__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__320__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__320__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__126__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__320__Vfuncout;
    __Vfunc_awq_lane_shift__321__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__321__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__321__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__127__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__321__Vfuncout;
    __Vfunc_awq_lane_shift__322__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__322__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__322__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__128__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__322__Vfuncout;
    __Vfunc_awq_lane_shift__323__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__323__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__323__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__129__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__323__Vfuncout;
    __Vfunc_awq_lane_shift__324__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__324__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__324__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__130__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__324__Vfuncout;
    __Vfunc_awq_lane_shift__325__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__325__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__325__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__131__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__325__Vfuncout;
    __Vfunc_awq_lane_shift__326__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__326__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__326__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__132__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__326__Vfuncout;
    __Vfunc_awq_lane_shift__327__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__327__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__327__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__133__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__327__Vfuncout;
    __Vfunc_awq_lane_shift__328__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__328__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__328__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__134__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__328__Vfuncout;
    __Vfunc_awq_lane_shift__329__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__329__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__329__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__135__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__329__Vfuncout;
    __Vfunc_awq_lane_shift__330__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__330__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__330__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__136__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__330__Vfuncout;
    __Vfunc_awq_lane_shift__331__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__331__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__331__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__137__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__331__Vfuncout;
    __Vfunc_awq_lane_shift__332__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__332__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__332__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__138__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__332__Vfuncout;
    __Vfunc_awq_lane_shift__333__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__333__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__333__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__139__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__333__Vfuncout;
    __Vfunc_awq_lane_shift__334__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__334__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__334__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__140__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__334__Vfuncout;
    __Vfunc_awq_lane_shift__335__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__335__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__335__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__141__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__335__Vfuncout;
    __Vfunc_awq_lane_shift__336__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__336__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__336__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__142__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__336__Vfuncout;
    __Vfunc_awq_lane_shift__337__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__337__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__337__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__143__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__337__Vfuncout;
    __Vfunc_awq_lane_shift__338__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__338__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__338__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__144__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__338__Vfuncout;
    __Vfunc_awq_lane_shift__339__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__339__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__339__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__145__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__339__Vfuncout;
    __Vfunc_awq_lane_shift__340__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__340__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__340__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__146__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__340__Vfuncout;
    __Vfunc_awq_lane_shift__341__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__341__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__341__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__147__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__341__Vfuncout;
    __Vfunc_awq_lane_shift__342__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__342__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__342__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__148__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__342__Vfuncout;
    __Vfunc_awq_lane_shift__343__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__343__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__343__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__149__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__343__Vfuncout;
    __Vfunc_awq_lane_shift__344__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__344__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__344__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__150__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__344__Vfuncout;
    __Vfunc_awq_lane_shift__345__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__345__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__345__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__151__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__345__Vfuncout;
    __Vfunc_awq_lane_shift__346__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__346__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__346__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__152__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__346__Vfuncout;
    __Vfunc_awq_lane_shift__347__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__347__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__347__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__153__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__347__Vfuncout;
    __Vfunc_awq_lane_shift__348__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__348__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__348__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__154__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__348__Vfuncout;
    __Vfunc_awq_lane_shift__349__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__349__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__349__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__155__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__349__Vfuncout;
    __Vfunc_awq_lane_shift__350__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__350__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__350__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__156__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__350__Vfuncout;
    __Vfunc_awq_lane_shift__351__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__351__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__351__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__157__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__351__Vfuncout;
    __Vfunc_awq_lane_shift__352__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__352__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__352__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__158__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__352__Vfuncout;
    __Vfunc_awq_lane_shift__353__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__353__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__353__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__159__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__353__Vfuncout;
    __Vfunc_awq_lane_shift__354__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__354__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__354__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__160__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__354__Vfuncout;
    __Vfunc_awq_lane_shift__355__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__355__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__355__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__161__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__355__Vfuncout;
    __Vfunc_awq_lane_shift__356__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__356__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__356__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__162__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__356__Vfuncout;
    __Vfunc_awq_lane_shift__357__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__357__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__357__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__163__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__357__Vfuncout;
    __Vfunc_awq_lane_shift__358__lane = (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    vlSelf->__Vfunc_awq_lane_shift__358__Vfuncout = 
        ((0U == (IData)(__Vfunc_awq_lane_shift__358__lane))
          ? 0U : ((1U == (IData)(__Vfunc_awq_lane_shift__358__lane))
                   ? 0x10U : ((2U == (IData)(__Vfunc_awq_lane_shift__358__lane))
                               ? 4U : ((3U == (IData)(__Vfunc_awq_lane_shift__358__lane))
                                        ? 0x14U : (
                                                   (4U 
                                                    == (IData)(__Vfunc_awq_lane_shift__358__lane))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(__Vfunc_awq_lane_shift__358__lane))
                                                     ? 0x18U
                                                     : 
                                                    ((6U 
                                                      == (IData)(__Vfunc_awq_lane_shift__358__lane))
                                                      ? 0xcU
                                                      : 0x1cU)))))));
}
