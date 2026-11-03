// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__30(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__30\n"); );
    // Init
    QData/*32:0*/ __Vfunc_round_pack32__1160__Vfuncout;
    __Vfunc_round_pack32__1160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__1160__negative;
    __Vfunc_round_pack32__1160__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1160__exponent;
    __Vfunc_round_pack32__1160__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1160__significand;
    __Vfunc_round_pack32__1160__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1160__shifted;
    __Vfunc_round_pack32__1160__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__1160__rounded;
    __Vfunc_round_pack32__1160__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1160__adjusted;
    __Vfunc_round_pack32__1160__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__1160__biased;
    __Vfunc_round_pack32__1160__biased = 0;
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3731__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3731__part 
                            = vlSelf->__Vfunc_leading_zero32__3731__value;
                        vlSelf->__Vfunc_leading_zero32__3731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3743__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3743__part 
                            = vlSelf->__Vfunc_leading_zero32__3743__value;
                        vlSelf->__Vfunc_leading_zero32__3743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3743__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3755__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3755__part 
                            = vlSelf->__Vfunc_leading_zero32__3755__value;
                        vlSelf->__Vfunc_leading_zero32__3755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3767__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3767__part 
                            = vlSelf->__Vfunc_leading_zero32__3767__value;
                        vlSelf->__Vfunc_leading_zero32__3767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3779__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3779__part 
                            = vlSelf->__Vfunc_leading_zero32__3779__value;
                        vlSelf->__Vfunc_leading_zero32__3779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3779__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3791__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3791__part 
                            = vlSelf->__Vfunc_leading_zero32__3791__value;
                        vlSelf->__Vfunc_leading_zero32__3791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3803__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3803__part 
                            = vlSelf->__Vfunc_leading_zero32__3803__value;
                        vlSelf->__Vfunc_leading_zero32__3803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3803__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3815__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3815__part 
                            = vlSelf->__Vfunc_leading_zero32__3815__value;
                        vlSelf->__Vfunc_leading_zero32__3815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3815__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3827__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3827__part 
                            = vlSelf->__Vfunc_leading_zero32__3827__value;
                        vlSelf->__Vfunc_leading_zero32__3827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3827__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3839__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3839__part 
                            = vlSelf->__Vfunc_leading_zero32__3839__value;
                        vlSelf->__Vfunc_leading_zero32__3839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3839__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3851__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3851__part 
                            = vlSelf->__Vfunc_leading_zero32__3851__value;
                        vlSelf->__Vfunc_leading_zero32__3851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3851__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3863__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3863__part 
                            = vlSelf->__Vfunc_leading_zero32__3863__value;
                        vlSelf->__Vfunc_leading_zero32__3863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3863__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3875__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3875__part 
                            = vlSelf->__Vfunc_leading_zero32__3875__value;
                        vlSelf->__Vfunc_leading_zero32__3875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3875__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3887__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3887__part 
                            = vlSelf->__Vfunc_leading_zero32__3887__value;
                        vlSelf->__Vfunc_leading_zero32__3887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3887__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3899__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3899__part 
                            = vlSelf->__Vfunc_leading_zero32__3899__value;
                        vlSelf->__Vfunc_leading_zero32__3899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3899__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3911__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3911__part 
                            = vlSelf->__Vfunc_leading_zero32__3911__value;
                        vlSelf->__Vfunc_leading_zero32__3911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3923__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3923__part 
                            = vlSelf->__Vfunc_leading_zero32__3923__value;
                        vlSelf->__Vfunc_leading_zero32__3923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3923__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3935__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3935__part 
                            = vlSelf->__Vfunc_leading_zero32__3935__value;
                        vlSelf->__Vfunc_leading_zero32__3935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3947__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3947__part 
                            = vlSelf->__Vfunc_leading_zero32__3947__value;
                        vlSelf->__Vfunc_leading_zero32__3947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3959__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3959__part 
                            = vlSelf->__Vfunc_leading_zero32__3959__value;
                        vlSelf->__Vfunc_leading_zero32__3959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3959__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3971__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3971__part 
                            = vlSelf->__Vfunc_leading_zero32__3971__value;
                        vlSelf->__Vfunc_leading_zero32__3971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3983__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3983__part 
                            = vlSelf->__Vfunc_leading_zero32__3983__value;
                        vlSelf->__Vfunc_leading_zero32__3983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3995__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3995__part 
                            = vlSelf->__Vfunc_leading_zero32__3995__value;
                        vlSelf->__Vfunc_leading_zero32__3995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3995__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4007__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4007__part 
                            = vlSelf->__Vfunc_leading_zero32__4007__value;
                        vlSelf->__Vfunc_leading_zero32__4007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4019__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4019__part 
                            = vlSelf->__Vfunc_leading_zero32__4019__value;
                        vlSelf->__Vfunc_leading_zero32__4019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4031__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4031__part 
                            = vlSelf->__Vfunc_leading_zero32__4031__value;
                        vlSelf->__Vfunc_leading_zero32__4031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4031__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4043__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4043__part 
                            = vlSelf->__Vfunc_leading_zero32__4043__value;
                        vlSelf->__Vfunc_leading_zero32__4043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4055__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4055__part 
                            = vlSelf->__Vfunc_leading_zero32__4055__value;
                        vlSelf->__Vfunc_leading_zero32__4055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4067__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4067__part 
                            = vlSelf->__Vfunc_leading_zero32__4067__value;
                        vlSelf->__Vfunc_leading_zero32__4067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4067__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4079__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4079__part 
                            = vlSelf->__Vfunc_leading_zero32__4079__value;
                        vlSelf->__Vfunc_leading_zero32__4079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4091__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4091__part 
                            = vlSelf->__Vfunc_leading_zero32__4091__value;
                        vlSelf->__Vfunc_leading_zero32__4091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4103__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4103__part 
                            = vlSelf->__Vfunc_leading_zero32__4103__value;
                        vlSelf->__Vfunc_leading_zero32__4103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4103__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4115__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4115__part 
                            = vlSelf->__Vfunc_leading_zero32__4115__value;
                        vlSelf->__Vfunc_leading_zero32__4115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4127__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4127__part 
                            = vlSelf->__Vfunc_leading_zero32__4127__value;
                        vlSelf->__Vfunc_leading_zero32__4127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4139__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4139__part 
                            = vlSelf->__Vfunc_leading_zero32__4139__value;
                        vlSelf->__Vfunc_leading_zero32__4139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4139__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4151__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4151__part 
                            = vlSelf->__Vfunc_leading_zero32__4151__value;
                        vlSelf->__Vfunc_leading_zero32__4151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4163__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4163__part 
                            = vlSelf->__Vfunc_leading_zero32__4163__value;
                        vlSelf->__Vfunc_leading_zero32__4163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4175__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4175__part 
                            = vlSelf->__Vfunc_leading_zero32__4175__value;
                        vlSelf->__Vfunc_leading_zero32__4175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4187__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4187__part 
                            = vlSelf->__Vfunc_leading_zero32__4187__value;
                        vlSelf->__Vfunc_leading_zero32__4187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4199__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4199__part 
                            = vlSelf->__Vfunc_leading_zero32__4199__value;
                        vlSelf->__Vfunc_leading_zero32__4199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4211__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4211__part 
                            = vlSelf->__Vfunc_leading_zero32__4211__value;
                        vlSelf->__Vfunc_leading_zero32__4211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4223__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4223__part 
                            = vlSelf->__Vfunc_leading_zero32__4223__value;
                        vlSelf->__Vfunc_leading_zero32__4223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4235__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4235__part 
                            = vlSelf->__Vfunc_leading_zero32__4235__value;
                        vlSelf->__Vfunc_leading_zero32__4235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__next_remainder 
        = (0x7fffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__take_bit)
                           ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
                              - (1U | (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__root 
                                       << 2U))) : vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1159__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1159__part 
                            = vlSelf->__Vfunc_leading_zero32__1159__value;
                        vlSelf->__Vfunc_leading_zero32__1159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1159__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__1160__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__significand4;
    __Vfunc_round_pack32__1160__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent4;
    __Vfunc_round_pack32__1160__negative = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative4;
    __Vfunc_round_pack32__1160__adjusted = __Vfunc_round_pack32__1160__exponent;
    __Vfunc_round_pack32__1160__shifted = __Vfunc_round_pack32__1160__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__1160__exponent))) {
        vlSelf->__Vfunc_shift_jam27__1161__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__1160__exponent)));
        vlSelf->__Vfunc_shift_jam27__1161__value = __Vfunc_round_pack32__1160__significand;
        __Vfunc_round_pack32__1160__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__1161__distance))) {
            vlSelf->__Vfunc_shift_jam27__1161__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__1161__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__1161__distance))) {
            vlSelf->__Vfunc_shift_jam27__1161__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__1161__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__1161__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__1161__value, (IData)(vlSelf->__Vfunc_shift_jam27__1161__distance)));
            vlSelf->__Vfunc_shift_jam27__1161__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__1161__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__1161__distance)))));
            vlSelf->__Vfunc_shift_jam27__1161__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__1161__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__1161__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__1161__discarded))));
        }
        __Vfunc_round_pack32__1160__shifted = vlSelf->__Vfunc_shift_jam27__1161__Vfuncout;
    }
    __Vfunc_round_pack32__1160__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__1160__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__1160__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__1160__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__1160__rounded)) {
        __Vfunc_round_pack32__1160__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__1160__rounded, 1U));
        __Vfunc_round_pack32__1160__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__1160__adjusted)));
    }
    __Vfunc_round_pack32__1160__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__1160__rounded)) {
        __Vfunc_round_pack32__1160__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__1160__adjusted)));
    }
    __Vfunc_round_pack32__1160__Vfuncout = (((0U == __Vfunc_round_pack32__1160__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__1160__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__1160__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__1160__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__1160__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__1160__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__1160__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__packed5 
        = __Vfunc_round_pack32__1160__Vfuncout;
    vlSelf->__VdfgTmp_hf4eab645__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd4053547__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h85e0c953__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h922851d8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h981f814b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7abc3068__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd8c0af3e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc0559376__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7a507b03__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5f2d3dce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h68de4455__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h247b2b44__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd79189ce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h880c700e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5fb6d79b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h886907dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8cb730ec__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3e066138__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h32a5e267__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2ff3cac6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb573f6d0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5f687479__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h11786b1a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hec4db751__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h28a44474__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h430d38f6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hea4c22a7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h601ea6ae__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5ddcd699__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc4ef5efa__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h13bbfc45__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hedfa9609__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2ee59946__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2edefea1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h76f3d4ea__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd12a0cab__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h25971c93__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7efff09e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h816224f9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf6cf27b5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4da4248a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1e404ffd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h60bd99a6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2530967f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6f2de519__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h598890bb__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcf0cc6f3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40329486__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbfe27bec__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9a6232b7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h436f54f9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0c4b91ca__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7130744e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h324dcc8e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbe09f3d8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h36194999__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3de20bd4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h12e48d91__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h563b1129__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h66f75808__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3bbcedbd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h83a6b049__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h33f6d3c1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf44755ab__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU]));
    vlSelf->__VdfgTmp_h9cae445e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha96271f0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb3169a5e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he4d8cc52__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h89cb6941__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h49315833__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h164b37d7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h30f0d8db__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb323fa59__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2de74cc7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3b53c06f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc324e0e5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd8375777__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h20d4f84e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h25f46121__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h39192405__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4f97a210__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4406c766__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hda86cc06__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc31e1784__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he3d06b83__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf12a9271__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3a024a3b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h18491dd7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1a07cac0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf6bc6507__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h380ea269__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3b4ff34b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h78f0fc9b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3fb2f1b4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9a686063__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h541488f2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0d069e7e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdf74c868__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc4fbc23e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd1d2a555__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4a96adf2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h479fbaca__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf280a01e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3f9d3627__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40ae0d3d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h484227ac__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha16e1ef0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8ffa5a86__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd16fb46e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h974140db__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h330c5c22__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h677fa228__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h09303461__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hba60878d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6d0d5d1e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4aabe340__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h48bb092a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h462f6fb6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hccf85aa2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he58a4bc6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc624b4a1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb698f069__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb8e55088__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h58ec20f6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h42b08632__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1ebf7930__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h078cac1a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd0d5d094__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU]));
    vlSelf->__VdfgTmp_h45e627dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h199d5006__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdcfe23de__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc53311ed__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he7e1c4f5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb9fdfdf2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb63c1596__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h02aaa12f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf157bcc7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h52c2a9b4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5a759a1d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hef7fb168__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hed2d9fd6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h43b15443__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hba05e26a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd7b32533__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5a9b23d5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h64f1224e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcdfceece__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3d5e1e9b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hea0a3b7d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_haf21ca5a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h294c191c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h88132c01__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb384eb02__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hadba17d3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0d732baa__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd4af4551__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h49dc1c03__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0f9db724__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h42d2f5fc__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbdb887a1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2610196f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he38da782__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0513c3f6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6cc115c3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2322b9dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h720f1220__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8c9c477e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h76482409__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc4ec060b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb8425786__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfc423fb3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he9413068__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h777444ee__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h257835a9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5d8da6b6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h28222199__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he8f8ae7d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hceefd11c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hac2ca728__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h222b9b37__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfa076fcf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7d721446__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb589ad3a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5443e14d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3003894a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1eddd8a9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9b27437c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd1c7c535__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h39dc2f2f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf69ed806__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3ea387c7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h04b5e3ce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbfd05aac__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h65624cf1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h81d8596d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb399c408__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5023a094__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbe8ef6cd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h48a28907__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h96f95ed8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8aec2bfe__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3b10b2f7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h52f6e2a6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6d824d59__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf95a92cf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha7bc620c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h546530c3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h91c86028__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h69489174__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb77f6951__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf5840f59__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1e5cdbfe__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h99c7934c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0258d4fd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1240043__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h84b38828__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbb98ede3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hda5fb14c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h79ad4db5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h83e4fe90__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha9be69c2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h017bbd37__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h152da7d1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb9f38882__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd3c9da28__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1162c63__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h80ba9c4b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8b1bc888__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1ea247ec__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h64dc9207__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6a363a09__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1af1a58__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdca4c897__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40acd462__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha9990b0e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1ffb8caf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he1e6ad15__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h13e2c344__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc8f01dc1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9231f654__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf05f1afc__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb417905b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hef86f958__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc2cc3da7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2f3287b8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9083bb0f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h87a1d905__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h259b4ef4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfb11a759__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6db86ad4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h90ba55c8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7d732bb9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9887c683__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5dc56af2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf8bcb846__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he9af3245__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4242__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4242__part 
                            = vlSelf->__Vfunc_leading_zero32__4242__value;
                        vlSelf->__Vfunc_leading_zero32__4242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4260__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4260__part 
                            = vlSelf->__Vfunc_leading_zero32__4260__value;
                        vlSelf->__Vfunc_leading_zero32__4260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4260__count)));
                            vlSelf->__Vfunc_leading_zero32__4260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4260__count)));
                            vlSelf->__Vfunc_leading_zero32__4260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4260__count)));
                            vlSelf->__Vfunc_leading_zero32__4260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4260__count)));
                            vlSelf->__Vfunc_leading_zero32__4260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4260__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4278__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4278__part 
                            = vlSelf->__Vfunc_leading_zero32__4278__value;
                        vlSelf->__Vfunc_leading_zero32__4278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4296__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4296__part 
                            = vlSelf->__Vfunc_leading_zero32__4296__value;
                        vlSelf->__Vfunc_leading_zero32__4296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4296__count)));
                            vlSelf->__Vfunc_leading_zero32__4296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4296__count)));
                            vlSelf->__Vfunc_leading_zero32__4296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4296__count)));
                            vlSelf->__Vfunc_leading_zero32__4296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4296__count)));
                            vlSelf->__Vfunc_leading_zero32__4296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4296__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4314__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4314__part 
                            = vlSelf->__Vfunc_leading_zero32__4314__value;
                        vlSelf->__Vfunc_leading_zero32__4314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4332__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4332__part 
                            = vlSelf->__Vfunc_leading_zero32__4332__value;
                        vlSelf->__Vfunc_leading_zero32__4332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4332__count)));
                            vlSelf->__Vfunc_leading_zero32__4332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4332__count)));
                            vlSelf->__Vfunc_leading_zero32__4332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4332__count)));
                            vlSelf->__Vfunc_leading_zero32__4332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4332__count)));
                            vlSelf->__Vfunc_leading_zero32__4332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4332__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4350__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4350__part 
                            = vlSelf->__Vfunc_leading_zero32__4350__value;
                        vlSelf->__Vfunc_leading_zero32__4350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4368__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4368__part 
                            = vlSelf->__Vfunc_leading_zero32__4368__value;
                        vlSelf->__Vfunc_leading_zero32__4368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4368__count)));
                            vlSelf->__Vfunc_leading_zero32__4368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4368__count)));
                            vlSelf->__Vfunc_leading_zero32__4368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4368__count)));
                            vlSelf->__Vfunc_leading_zero32__4368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4368__count)));
                            vlSelf->__Vfunc_leading_zero32__4368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4368__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4386__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4386__part 
                            = vlSelf->__Vfunc_leading_zero32__4386__value;
                        vlSelf->__Vfunc_leading_zero32__4386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4404__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4404__part 
                            = vlSelf->__Vfunc_leading_zero32__4404__value;
                        vlSelf->__Vfunc_leading_zero32__4404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4404__count)));
                            vlSelf->__Vfunc_leading_zero32__4404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4404__count)));
                            vlSelf->__Vfunc_leading_zero32__4404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4404__count)));
                            vlSelf->__Vfunc_leading_zero32__4404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4404__count)));
                            vlSelf->__Vfunc_leading_zero32__4404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4404__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4422__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4422__part 
                            = vlSelf->__Vfunc_leading_zero32__4422__value;
                        vlSelf->__Vfunc_leading_zero32__4422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4440__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4440__part 
                            = vlSelf->__Vfunc_leading_zero32__4440__value;
                        vlSelf->__Vfunc_leading_zero32__4440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4440__count)));
                            vlSelf->__Vfunc_leading_zero32__4440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4440__count)));
                            vlSelf->__Vfunc_leading_zero32__4440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4440__count)));
                            vlSelf->__Vfunc_leading_zero32__4440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4440__count)));
                            vlSelf->__Vfunc_leading_zero32__4440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4458__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4458__part 
                            = vlSelf->__Vfunc_leading_zero32__4458__value;
                        vlSelf->__Vfunc_leading_zero32__4458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4476__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4476__part 
                            = vlSelf->__Vfunc_leading_zero32__4476__value;
                        vlSelf->__Vfunc_leading_zero32__4476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4476__count)));
                            vlSelf->__Vfunc_leading_zero32__4476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4476__count)));
                            vlSelf->__Vfunc_leading_zero32__4476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4476__count)));
                            vlSelf->__Vfunc_leading_zero32__4476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4476__count)));
                            vlSelf->__Vfunc_leading_zero32__4476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4494__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4494__part 
                            = vlSelf->__Vfunc_leading_zero32__4494__value;
                        vlSelf->__Vfunc_leading_zero32__4494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4512__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4512__part 
                            = vlSelf->__Vfunc_leading_zero32__4512__value;
                        vlSelf->__Vfunc_leading_zero32__4512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4512__count)));
                            vlSelf->__Vfunc_leading_zero32__4512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4512__count)));
                            vlSelf->__Vfunc_leading_zero32__4512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4512__count)));
                            vlSelf->__Vfunc_leading_zero32__4512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4512__count)));
                            vlSelf->__Vfunc_leading_zero32__4512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4530__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4530__part 
                            = vlSelf->__Vfunc_leading_zero32__4530__value;
                        vlSelf->__Vfunc_leading_zero32__4530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4548__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4548__part 
                            = vlSelf->__Vfunc_leading_zero32__4548__value;
                        vlSelf->__Vfunc_leading_zero32__4548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4548__count)));
                            vlSelf->__Vfunc_leading_zero32__4548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4548__count)));
                            vlSelf->__Vfunc_leading_zero32__4548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4548__count)));
                            vlSelf->__Vfunc_leading_zero32__4548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4548__count)));
                            vlSelf->__Vfunc_leading_zero32__4548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4566__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4566__part 
                            = vlSelf->__Vfunc_leading_zero32__4566__value;
                        vlSelf->__Vfunc_leading_zero32__4566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4584__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4584__part 
                            = vlSelf->__Vfunc_leading_zero32__4584__value;
                        vlSelf->__Vfunc_leading_zero32__4584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4584__count)));
                            vlSelf->__Vfunc_leading_zero32__4584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4584__count)));
                            vlSelf->__Vfunc_leading_zero32__4584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4584__count)));
                            vlSelf->__Vfunc_leading_zero32__4584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4584__count)));
                            vlSelf->__Vfunc_leading_zero32__4584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4602__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4602__part 
                            = vlSelf->__Vfunc_leading_zero32__4602__value;
                        vlSelf->__Vfunc_leading_zero32__4602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4620__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4620__part 
                            = vlSelf->__Vfunc_leading_zero32__4620__value;
                        vlSelf->__Vfunc_leading_zero32__4620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4620__count)));
                            vlSelf->__Vfunc_leading_zero32__4620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4620__count)));
                            vlSelf->__Vfunc_leading_zero32__4620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4620__count)));
                            vlSelf->__Vfunc_leading_zero32__4620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4620__count)));
                            vlSelf->__Vfunc_leading_zero32__4620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4638__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4638__part 
                            = vlSelf->__Vfunc_leading_zero32__4638__value;
                        vlSelf->__Vfunc_leading_zero32__4638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4656__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4656__part 
                            = vlSelf->__Vfunc_leading_zero32__4656__value;
                        vlSelf->__Vfunc_leading_zero32__4656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4656__count)));
                            vlSelf->__Vfunc_leading_zero32__4656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4656__count)));
                            vlSelf->__Vfunc_leading_zero32__4656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4656__count)));
                            vlSelf->__Vfunc_leading_zero32__4656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4656__count)));
                            vlSelf->__Vfunc_leading_zero32__4656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4674__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4674__part 
                            = vlSelf->__Vfunc_leading_zero32__4674__value;
                        vlSelf->__Vfunc_leading_zero32__4674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4692__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4692__part 
                            = vlSelf->__Vfunc_leading_zero32__4692__value;
                        vlSelf->__Vfunc_leading_zero32__4692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4692__count)));
                            vlSelf->__Vfunc_leading_zero32__4692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4692__count)));
                            vlSelf->__Vfunc_leading_zero32__4692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4692__count)));
                            vlSelf->__Vfunc_leading_zero32__4692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4692__count)));
                            vlSelf->__Vfunc_leading_zero32__4692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4710__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4710__part 
                            = vlSelf->__Vfunc_leading_zero32__4710__value;
                        vlSelf->__Vfunc_leading_zero32__4710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4728__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4728__part 
                            = vlSelf->__Vfunc_leading_zero32__4728__value;
                        vlSelf->__Vfunc_leading_zero32__4728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4728__count)));
                            vlSelf->__Vfunc_leading_zero32__4728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4728__count)));
                            vlSelf->__Vfunc_leading_zero32__4728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4728__count)));
                            vlSelf->__Vfunc_leading_zero32__4728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4728__count)));
                            vlSelf->__Vfunc_leading_zero32__4728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4746__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4746__part 
                            = vlSelf->__Vfunc_leading_zero32__4746__value;
                        vlSelf->__Vfunc_leading_zero32__4746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4764__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4764__part 
                            = vlSelf->__Vfunc_leading_zero32__4764__value;
                        vlSelf->__Vfunc_leading_zero32__4764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4782__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4782__part 
                            = vlSelf->__Vfunc_leading_zero32__4782__value;
                        vlSelf->__Vfunc_leading_zero32__4782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4800__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4800__part 
                            = vlSelf->__Vfunc_leading_zero32__4800__value;
                        vlSelf->__Vfunc_leading_zero32__4800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4818__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4818__part 
                            = vlSelf->__Vfunc_leading_zero32__4818__value;
                        vlSelf->__Vfunc_leading_zero32__4818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4836__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4836__part 
                            = vlSelf->__Vfunc_leading_zero32__4836__value;
                        vlSelf->__Vfunc_leading_zero32__4836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4854__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4854__part 
                            = vlSelf->__Vfunc_leading_zero32__4854__value;
                        vlSelf->__Vfunc_leading_zero32__4854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4872__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4872__part 
                            = vlSelf->__Vfunc_leading_zero32__4872__value;
                        vlSelf->__Vfunc_leading_zero32__4872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4890__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4890__part 
                            = vlSelf->__Vfunc_leading_zero32__4890__value;
                        vlSelf->__Vfunc_leading_zero32__4890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4908__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4908__part 
                            = vlSelf->__Vfunc_leading_zero32__4908__value;
                        vlSelf->__Vfunc_leading_zero32__4908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4926__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4926__part 
                            = vlSelf->__Vfunc_leading_zero32__4926__value;
                        vlSelf->__Vfunc_leading_zero32__4926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4944__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4944__part 
                            = vlSelf->__Vfunc_leading_zero32__4944__value;
                        vlSelf->__Vfunc_leading_zero32__4944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4944__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4962__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4962__part 
                            = vlSelf->__Vfunc_leading_zero32__4962__value;
                        vlSelf->__Vfunc_leading_zero32__4962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4980__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4980__part 
                            = vlSelf->__Vfunc_leading_zero32__4980__value;
                        vlSelf->__Vfunc_leading_zero32__4980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4980__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4998__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4998__part 
                            = vlSelf->__Vfunc_leading_zero32__4998__value;
                        vlSelf->__Vfunc_leading_zero32__4998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5016__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5016__part 
                            = vlSelf->__Vfunc_leading_zero32__5016__value;
                        vlSelf->__Vfunc_leading_zero32__5016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5016__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5034__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5034__part 
                            = vlSelf->__Vfunc_leading_zero32__5034__value;
                        vlSelf->__Vfunc_leading_zero32__5034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5052__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5052__part 
                            = vlSelf->__Vfunc_leading_zero32__5052__value;
                        vlSelf->__Vfunc_leading_zero32__5052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5052__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5070__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5070__part 
                            = vlSelf->__Vfunc_leading_zero32__5070__value;
                        vlSelf->__Vfunc_leading_zero32__5070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5088__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5088__part 
                            = vlSelf->__Vfunc_leading_zero32__5088__value;
                        vlSelf->__Vfunc_leading_zero32__5088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5088__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5106__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5106__part 
                            = vlSelf->__Vfunc_leading_zero32__5106__value;
                        vlSelf->__Vfunc_leading_zero32__5106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5124__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5124__part 
                            = vlSelf->__Vfunc_leading_zero32__5124__value;
                        vlSelf->__Vfunc_leading_zero32__5124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5142__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5142__part 
                            = vlSelf->__Vfunc_leading_zero32__5142__value;
                        vlSelf->__Vfunc_leading_zero32__5142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5160__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5160__part 
                            = vlSelf->__Vfunc_leading_zero32__5160__value;
                        vlSelf->__Vfunc_leading_zero32__5160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5178__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5178__part 
                            = vlSelf->__Vfunc_leading_zero32__5178__value;
                        vlSelf->__Vfunc_leading_zero32__5178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5196__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5196__part 
                            = vlSelf->__Vfunc_leading_zero32__5196__value;
                        vlSelf->__Vfunc_leading_zero32__5196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5214__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5214__part 
                            = vlSelf->__Vfunc_leading_zero32__5214__value;
                        vlSelf->__Vfunc_leading_zero32__5214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5232__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5232__part 
                            = vlSelf->__Vfunc_leading_zero32__5232__value;
                        vlSelf->__Vfunc_leading_zero32__5232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5250__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5250__part 
                            = vlSelf->__Vfunc_leading_zero32__5250__value;
                        vlSelf->__Vfunc_leading_zero32__5250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5268__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5268__part 
                            = vlSelf->__Vfunc_leading_zero32__5268__value;
                        vlSelf->__Vfunc_leading_zero32__5268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5286__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5286__part 
                            = vlSelf->__Vfunc_leading_zero32__5286__value;
                        vlSelf->__Vfunc_leading_zero32__5286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5304__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5304__part 
                            = vlSelf->__Vfunc_leading_zero32__5304__value;
                        vlSelf->__Vfunc_leading_zero32__5304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5322__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5322__part 
                            = vlSelf->__Vfunc_leading_zero32__5322__value;
                        vlSelf->__Vfunc_leading_zero32__5322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5340__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5340__part 
                            = vlSelf->__Vfunc_leading_zero32__5340__value;
                        vlSelf->__Vfunc_leading_zero32__5340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5358__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5358__part 
                            = vlSelf->__Vfunc_leading_zero32__5358__value;
                        vlSelf->__Vfunc_leading_zero32__5358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5358__Vfuncout)) 
                             - (IData)(8U))));
}
