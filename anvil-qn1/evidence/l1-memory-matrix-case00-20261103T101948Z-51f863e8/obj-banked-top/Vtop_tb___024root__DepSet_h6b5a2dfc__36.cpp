// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__37(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__37\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2809__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2809__part 
                            = vlSelf->__Vfunc_leading_zero32__2809__value;
                        vlSelf->__Vfunc_leading_zero32__2809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2809__count)));
                            vlSelf->__Vfunc_leading_zero32__2809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2809__count)));
                            vlSelf->__Vfunc_leading_zero32__2809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2809__count)));
                            vlSelf->__Vfunc_leading_zero32__2809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2809__count)));
                            vlSelf->__Vfunc_leading_zero32__2809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2809__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2821__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2821__part 
                            = vlSelf->__Vfunc_leading_zero32__2821__value;
                        vlSelf->__Vfunc_leading_zero32__2821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2821__count)));
                            vlSelf->__Vfunc_leading_zero32__2821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2821__count)));
                            vlSelf->__Vfunc_leading_zero32__2821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2821__count)));
                            vlSelf->__Vfunc_leading_zero32__2821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2821__count)));
                            vlSelf->__Vfunc_leading_zero32__2821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2821__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2833__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2833__part 
                            = vlSelf->__Vfunc_leading_zero32__2833__value;
                        vlSelf->__Vfunc_leading_zero32__2833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2833__count)));
                            vlSelf->__Vfunc_leading_zero32__2833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2833__count)));
                            vlSelf->__Vfunc_leading_zero32__2833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2833__count)));
                            vlSelf->__Vfunc_leading_zero32__2833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2833__count)));
                            vlSelf->__Vfunc_leading_zero32__2833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2833__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2845__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2845__part 
                            = vlSelf->__Vfunc_leading_zero32__2845__value;
                        vlSelf->__Vfunc_leading_zero32__2845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2845__count)));
                            vlSelf->__Vfunc_leading_zero32__2845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2845__count)));
                            vlSelf->__Vfunc_leading_zero32__2845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2845__count)));
                            vlSelf->__Vfunc_leading_zero32__2845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2845__count)));
                            vlSelf->__Vfunc_leading_zero32__2845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2845__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2857__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2857__part 
                            = vlSelf->__Vfunc_leading_zero32__2857__value;
                        vlSelf->__Vfunc_leading_zero32__2857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2857__count)));
                            vlSelf->__Vfunc_leading_zero32__2857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2857__count)));
                            vlSelf->__Vfunc_leading_zero32__2857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2857__count)));
                            vlSelf->__Vfunc_leading_zero32__2857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2857__count)));
                            vlSelf->__Vfunc_leading_zero32__2857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2857__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2869__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2869__part 
                            = vlSelf->__Vfunc_leading_zero32__2869__value;
                        vlSelf->__Vfunc_leading_zero32__2869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2869__count)));
                            vlSelf->__Vfunc_leading_zero32__2869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2869__count)));
                            vlSelf->__Vfunc_leading_zero32__2869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2869__count)));
                            vlSelf->__Vfunc_leading_zero32__2869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2869__count)));
                            vlSelf->__Vfunc_leading_zero32__2869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2869__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2881__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2881__part 
                            = vlSelf->__Vfunc_leading_zero32__2881__value;
                        vlSelf->__Vfunc_leading_zero32__2881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2881__count)));
                            vlSelf->__Vfunc_leading_zero32__2881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2881__count)));
                            vlSelf->__Vfunc_leading_zero32__2881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2881__count)));
                            vlSelf->__Vfunc_leading_zero32__2881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2881__count)));
                            vlSelf->__Vfunc_leading_zero32__2881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2881__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2893__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2893__part 
                            = vlSelf->__Vfunc_leading_zero32__2893__value;
                        vlSelf->__Vfunc_leading_zero32__2893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2893__count)));
                            vlSelf->__Vfunc_leading_zero32__2893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2893__count)));
                            vlSelf->__Vfunc_leading_zero32__2893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2893__count)));
                            vlSelf->__Vfunc_leading_zero32__2893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2893__count)));
                            vlSelf->__Vfunc_leading_zero32__2893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2893__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2905__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2905__part 
                            = vlSelf->__Vfunc_leading_zero32__2905__value;
                        vlSelf->__Vfunc_leading_zero32__2905__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2905__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2905__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2905__count)));
                            vlSelf->__Vfunc_leading_zero32__2905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2905__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2905__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2905__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2905__count)));
                            vlSelf->__Vfunc_leading_zero32__2905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2905__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2905__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2905__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2905__count)));
                            vlSelf->__Vfunc_leading_zero32__2905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2905__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2905__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2905__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2905__count)));
                            vlSelf->__Vfunc_leading_zero32__2905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2905__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2905__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2905__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2905__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2905__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2905__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2905__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2905__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2917__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2917__part 
                            = vlSelf->__Vfunc_leading_zero32__2917__value;
                        vlSelf->__Vfunc_leading_zero32__2917__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2917__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2917__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2917__count)));
                            vlSelf->__Vfunc_leading_zero32__2917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2917__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2917__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2917__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2917__count)));
                            vlSelf->__Vfunc_leading_zero32__2917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2917__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2917__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2917__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2917__count)));
                            vlSelf->__Vfunc_leading_zero32__2917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2917__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2917__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2917__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2917__count)));
                            vlSelf->__Vfunc_leading_zero32__2917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2917__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2917__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2917__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2917__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2917__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2917__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2917__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2917__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2929__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2929__part 
                            = vlSelf->__Vfunc_leading_zero32__2929__value;
                        vlSelf->__Vfunc_leading_zero32__2929__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2929__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2929__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2929__count)));
                            vlSelf->__Vfunc_leading_zero32__2929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2929__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2929__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2929__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2929__count)));
                            vlSelf->__Vfunc_leading_zero32__2929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2929__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2929__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2929__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2929__count)));
                            vlSelf->__Vfunc_leading_zero32__2929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2929__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2929__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2929__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2929__count)));
                            vlSelf->__Vfunc_leading_zero32__2929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2929__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2929__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2929__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2929__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2929__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2929__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2929__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2929__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2941__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2941__part 
                            = vlSelf->__Vfunc_leading_zero32__2941__value;
                        vlSelf->__Vfunc_leading_zero32__2941__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2941__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2941__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2941__count)));
                            vlSelf->__Vfunc_leading_zero32__2941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2941__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2941__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2941__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2941__count)));
                            vlSelf->__Vfunc_leading_zero32__2941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2941__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2941__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2941__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2941__count)));
                            vlSelf->__Vfunc_leading_zero32__2941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2941__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2941__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2941__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2941__count)));
                            vlSelf->__Vfunc_leading_zero32__2941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2941__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2941__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2941__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2941__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2941__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2941__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2941__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2941__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2953__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2953__part 
                            = vlSelf->__Vfunc_leading_zero32__2953__value;
                        vlSelf->__Vfunc_leading_zero32__2953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2953__count)));
                            vlSelf->__Vfunc_leading_zero32__2953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2953__count)));
                            vlSelf->__Vfunc_leading_zero32__2953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2953__count)));
                            vlSelf->__Vfunc_leading_zero32__2953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2953__count)));
                            vlSelf->__Vfunc_leading_zero32__2953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2953__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2965__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2965__part 
                            = vlSelf->__Vfunc_leading_zero32__2965__value;
                        vlSelf->__Vfunc_leading_zero32__2965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2965__count)));
                            vlSelf->__Vfunc_leading_zero32__2965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2965__count)));
                            vlSelf->__Vfunc_leading_zero32__2965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2965__count)));
                            vlSelf->__Vfunc_leading_zero32__2965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2965__count)));
                            vlSelf->__Vfunc_leading_zero32__2965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2965__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2977__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2977__part 
                            = vlSelf->__Vfunc_leading_zero32__2977__value;
                        vlSelf->__Vfunc_leading_zero32__2977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2977__count)));
                            vlSelf->__Vfunc_leading_zero32__2977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2977__count)));
                            vlSelf->__Vfunc_leading_zero32__2977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2977__count)));
                            vlSelf->__Vfunc_leading_zero32__2977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2977__count)));
                            vlSelf->__Vfunc_leading_zero32__2977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2977__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2989__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2989__part 
                            = vlSelf->__Vfunc_leading_zero32__2989__value;
                        vlSelf->__Vfunc_leading_zero32__2989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2989__count)));
                            vlSelf->__Vfunc_leading_zero32__2989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2989__count)));
                            vlSelf->__Vfunc_leading_zero32__2989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2989__count)));
                            vlSelf->__Vfunc_leading_zero32__2989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2989__count)));
                            vlSelf->__Vfunc_leading_zero32__2989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2989__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3001__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3001__part 
                            = vlSelf->__Vfunc_leading_zero32__3001__value;
                        vlSelf->__Vfunc_leading_zero32__3001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3001__count)));
                            vlSelf->__Vfunc_leading_zero32__3001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3001__count)));
                            vlSelf->__Vfunc_leading_zero32__3001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3001__count)));
                            vlSelf->__Vfunc_leading_zero32__3001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3001__count)));
                            vlSelf->__Vfunc_leading_zero32__3001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3001__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3013__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3013__part 
                            = vlSelf->__Vfunc_leading_zero32__3013__value;
                        vlSelf->__Vfunc_leading_zero32__3013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3013__count)));
                            vlSelf->__Vfunc_leading_zero32__3013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3013__count)));
                            vlSelf->__Vfunc_leading_zero32__3013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3013__count)));
                            vlSelf->__Vfunc_leading_zero32__3013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3013__count)));
                            vlSelf->__Vfunc_leading_zero32__3013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3013__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3025__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3025__part 
                            = vlSelf->__Vfunc_leading_zero32__3025__value;
                        vlSelf->__Vfunc_leading_zero32__3025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3025__count)));
                            vlSelf->__Vfunc_leading_zero32__3025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3025__count)));
                            vlSelf->__Vfunc_leading_zero32__3025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3025__count)));
                            vlSelf->__Vfunc_leading_zero32__3025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3025__count)));
                            vlSelf->__Vfunc_leading_zero32__3025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3025__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3037__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3037__part 
                            = vlSelf->__Vfunc_leading_zero32__3037__value;
                        vlSelf->__Vfunc_leading_zero32__3037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3037__count)));
                            vlSelf->__Vfunc_leading_zero32__3037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3037__count)));
                            vlSelf->__Vfunc_leading_zero32__3037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3037__count)));
                            vlSelf->__Vfunc_leading_zero32__3037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3037__count)));
                            vlSelf->__Vfunc_leading_zero32__3037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3037__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3049__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3049__part 
                            = vlSelf->__Vfunc_leading_zero32__3049__value;
                        vlSelf->__Vfunc_leading_zero32__3049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3049__count)));
                            vlSelf->__Vfunc_leading_zero32__3049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3049__count)));
                            vlSelf->__Vfunc_leading_zero32__3049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3049__count)));
                            vlSelf->__Vfunc_leading_zero32__3049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3049__count)));
                            vlSelf->__Vfunc_leading_zero32__3049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3049__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3061__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3061__part 
                            = vlSelf->__Vfunc_leading_zero32__3061__value;
                        vlSelf->__Vfunc_leading_zero32__3061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3061__count)));
                            vlSelf->__Vfunc_leading_zero32__3061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3061__count)));
                            vlSelf->__Vfunc_leading_zero32__3061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3061__count)));
                            vlSelf->__Vfunc_leading_zero32__3061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3061__count)));
                            vlSelf->__Vfunc_leading_zero32__3061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3061__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3073__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3073__part 
                            = vlSelf->__Vfunc_leading_zero32__3073__value;
                        vlSelf->__Vfunc_leading_zero32__3073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3073__count)));
                            vlSelf->__Vfunc_leading_zero32__3073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3073__count)));
                            vlSelf->__Vfunc_leading_zero32__3073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3073__count)));
                            vlSelf->__Vfunc_leading_zero32__3073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3073__count)));
                            vlSelf->__Vfunc_leading_zero32__3073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3073__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3085__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3085__part 
                            = vlSelf->__Vfunc_leading_zero32__3085__value;
                        vlSelf->__Vfunc_leading_zero32__3085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3085__count)));
                            vlSelf->__Vfunc_leading_zero32__3085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3085__count)));
                            vlSelf->__Vfunc_leading_zero32__3085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3085__count)));
                            vlSelf->__Vfunc_leading_zero32__3085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3085__count)));
                            vlSelf->__Vfunc_leading_zero32__3085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3085__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3097__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3097__part 
                            = vlSelf->__Vfunc_leading_zero32__3097__value;
                        vlSelf->__Vfunc_leading_zero32__3097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3097__count)));
                            vlSelf->__Vfunc_leading_zero32__3097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3097__count)));
                            vlSelf->__Vfunc_leading_zero32__3097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3097__count)));
                            vlSelf->__Vfunc_leading_zero32__3097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3097__count)));
                            vlSelf->__Vfunc_leading_zero32__3097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3097__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3109__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3109__part 
                            = vlSelf->__Vfunc_leading_zero32__3109__value;
                        vlSelf->__Vfunc_leading_zero32__3109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3109__count)));
                            vlSelf->__Vfunc_leading_zero32__3109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3109__count)));
                            vlSelf->__Vfunc_leading_zero32__3109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3109__count)));
                            vlSelf->__Vfunc_leading_zero32__3109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3109__count)));
                            vlSelf->__Vfunc_leading_zero32__3109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3109__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3121__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3121__part 
                            = vlSelf->__Vfunc_leading_zero32__3121__value;
                        vlSelf->__Vfunc_leading_zero32__3121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3121__count)));
                            vlSelf->__Vfunc_leading_zero32__3121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3121__count)));
                            vlSelf->__Vfunc_leading_zero32__3121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3121__count)));
                            vlSelf->__Vfunc_leading_zero32__3121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3121__count)));
                            vlSelf->__Vfunc_leading_zero32__3121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3121__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3133__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3133__part 
                            = vlSelf->__Vfunc_leading_zero32__3133__value;
                        vlSelf->__Vfunc_leading_zero32__3133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3133__count)));
                            vlSelf->__Vfunc_leading_zero32__3133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3133__count)));
                            vlSelf->__Vfunc_leading_zero32__3133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3133__count)));
                            vlSelf->__Vfunc_leading_zero32__3133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3133__count)));
                            vlSelf->__Vfunc_leading_zero32__3133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3133__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3145__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3145__part 
                            = vlSelf->__Vfunc_leading_zero32__3145__value;
                        vlSelf->__Vfunc_leading_zero32__3145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3145__count)));
                            vlSelf->__Vfunc_leading_zero32__3145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3145__count)));
                            vlSelf->__Vfunc_leading_zero32__3145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3145__count)));
                            vlSelf->__Vfunc_leading_zero32__3145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3145__count)));
                            vlSelf->__Vfunc_leading_zero32__3145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3145__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3157__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3157__part 
                            = vlSelf->__Vfunc_leading_zero32__3157__value;
                        vlSelf->__Vfunc_leading_zero32__3157__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3157__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3157__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3157__count)));
                            vlSelf->__Vfunc_leading_zero32__3157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3157__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3157__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3157__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3157__count)));
                            vlSelf->__Vfunc_leading_zero32__3157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3157__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3157__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3157__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3157__count)));
                            vlSelf->__Vfunc_leading_zero32__3157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3157__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3157__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3157__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3157__count)));
                            vlSelf->__Vfunc_leading_zero32__3157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3157__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3157__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3157__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3157__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3157__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3157__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3157__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3157__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3169__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3169__part 
                            = vlSelf->__Vfunc_leading_zero32__3169__value;
                        vlSelf->__Vfunc_leading_zero32__3169__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3169__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3169__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3169__count)));
                            vlSelf->__Vfunc_leading_zero32__3169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3169__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3169__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3169__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3169__count)));
                            vlSelf->__Vfunc_leading_zero32__3169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3169__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3169__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3169__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3169__count)));
                            vlSelf->__Vfunc_leading_zero32__3169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3169__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3169__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3169__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3169__count)));
                            vlSelf->__Vfunc_leading_zero32__3169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3169__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3169__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3169__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3169__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3169__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3169__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3169__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3169__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3181__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3181__part 
                            = vlSelf->__Vfunc_leading_zero32__3181__value;
                        vlSelf->__Vfunc_leading_zero32__3181__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3181__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3181__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3181__count)));
                            vlSelf->__Vfunc_leading_zero32__3181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3181__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3181__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3181__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3181__count)));
                            vlSelf->__Vfunc_leading_zero32__3181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3181__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3181__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3181__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3181__count)));
                            vlSelf->__Vfunc_leading_zero32__3181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3181__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3181__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3181__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3181__count)));
                            vlSelf->__Vfunc_leading_zero32__3181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3181__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3181__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3181__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3181__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3181__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3181__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3181__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3181__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3193__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3193__part 
                            = vlSelf->__Vfunc_leading_zero32__3193__value;
                        vlSelf->__Vfunc_leading_zero32__3193__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3193__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3193__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3193__count)));
                            vlSelf->__Vfunc_leading_zero32__3193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3193__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3193__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3193__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3193__count)));
                            vlSelf->__Vfunc_leading_zero32__3193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3193__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3193__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3193__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3193__count)));
                            vlSelf->__Vfunc_leading_zero32__3193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3193__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3193__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3193__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3193__count)));
                            vlSelf->__Vfunc_leading_zero32__3193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3193__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3193__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3193__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3193__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3193__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3193__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3193__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3193__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3205__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3205__part 
                            = vlSelf->__Vfunc_leading_zero32__3205__value;
                        vlSelf->__Vfunc_leading_zero32__3205__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3205__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3205__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3205__count)));
                            vlSelf->__Vfunc_leading_zero32__3205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3205__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3205__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3205__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3205__count)));
                            vlSelf->__Vfunc_leading_zero32__3205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3205__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3205__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3205__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3205__count)));
                            vlSelf->__Vfunc_leading_zero32__3205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3205__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3205__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3205__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3205__count)));
                            vlSelf->__Vfunc_leading_zero32__3205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3205__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3205__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3205__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3205__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3205__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3205__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3205__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3205__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3217__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3217__part 
                            = vlSelf->__Vfunc_leading_zero32__3217__value;
                        vlSelf->__Vfunc_leading_zero32__3217__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3217__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3217__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3217__count)));
                            vlSelf->__Vfunc_leading_zero32__3217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3217__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3217__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3217__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3217__count)));
                            vlSelf->__Vfunc_leading_zero32__3217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3217__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3217__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3217__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3217__count)));
                            vlSelf->__Vfunc_leading_zero32__3217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3217__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3217__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3217__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3217__count)));
                            vlSelf->__Vfunc_leading_zero32__3217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3217__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3217__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3217__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3217__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3217__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3217__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3217__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3217__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3229__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3229__part 
                            = vlSelf->__Vfunc_leading_zero32__3229__value;
                        vlSelf->__Vfunc_leading_zero32__3229__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3229__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3229__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3229__count)));
                            vlSelf->__Vfunc_leading_zero32__3229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3229__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3229__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3229__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3229__count)));
                            vlSelf->__Vfunc_leading_zero32__3229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3229__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3229__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3229__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3229__count)));
                            vlSelf->__Vfunc_leading_zero32__3229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3229__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3229__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3229__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3229__count)));
                            vlSelf->__Vfunc_leading_zero32__3229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3229__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3229__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3229__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3229__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3229__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3229__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3229__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3229__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3241__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3241__part 
                            = vlSelf->__Vfunc_leading_zero32__3241__value;
                        vlSelf->__Vfunc_leading_zero32__3241__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3241__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3241__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3241__count)));
                            vlSelf->__Vfunc_leading_zero32__3241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3241__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3241__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3241__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3241__count)));
                            vlSelf->__Vfunc_leading_zero32__3241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3241__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3241__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3241__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3241__count)));
                            vlSelf->__Vfunc_leading_zero32__3241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3241__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3241__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3241__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3241__count)));
                            vlSelf->__Vfunc_leading_zero32__3241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3241__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3241__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3241__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3241__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3241__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3241__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3241__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3241__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3253__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3253__part 
                            = vlSelf->__Vfunc_leading_zero32__3253__value;
                        vlSelf->__Vfunc_leading_zero32__3253__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3253__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3253__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3253__count)));
                            vlSelf->__Vfunc_leading_zero32__3253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3253__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3253__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3253__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3253__count)));
                            vlSelf->__Vfunc_leading_zero32__3253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3253__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3253__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3253__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3253__count)));
                            vlSelf->__Vfunc_leading_zero32__3253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3253__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3253__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3253__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3253__count)));
                            vlSelf->__Vfunc_leading_zero32__3253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3253__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3253__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3253__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3253__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3253__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3253__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3253__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3253__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3265__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3265__part 
                            = vlSelf->__Vfunc_leading_zero32__3265__value;
                        vlSelf->__Vfunc_leading_zero32__3265__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3265__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3265__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3265__count)));
                            vlSelf->__Vfunc_leading_zero32__3265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3265__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3265__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3265__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3265__count)));
                            vlSelf->__Vfunc_leading_zero32__3265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3265__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3265__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3265__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3265__count)));
                            vlSelf->__Vfunc_leading_zero32__3265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3265__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3265__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3265__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3265__count)));
                            vlSelf->__Vfunc_leading_zero32__3265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3265__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3265__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3265__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3265__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3265__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3265__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3265__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3265__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3277__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3277__part 
                            = vlSelf->__Vfunc_leading_zero32__3277__value;
                        vlSelf->__Vfunc_leading_zero32__3277__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3277__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3277__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3277__count)));
                            vlSelf->__Vfunc_leading_zero32__3277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3277__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3277__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3277__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3277__count)));
                            vlSelf->__Vfunc_leading_zero32__3277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3277__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3277__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3277__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3277__count)));
                            vlSelf->__Vfunc_leading_zero32__3277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3277__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3277__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3277__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3277__count)));
                            vlSelf->__Vfunc_leading_zero32__3277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3277__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3277__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3277__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3277__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3277__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3277__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3277__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3277__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3289__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3289__part 
                            = vlSelf->__Vfunc_leading_zero32__3289__value;
                        vlSelf->__Vfunc_leading_zero32__3289__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3289__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3289__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3289__count)));
                            vlSelf->__Vfunc_leading_zero32__3289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3289__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3289__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3289__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3289__count)));
                            vlSelf->__Vfunc_leading_zero32__3289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3289__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3289__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3289__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3289__count)));
                            vlSelf->__Vfunc_leading_zero32__3289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3289__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3289__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3289__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3289__count)));
                            vlSelf->__Vfunc_leading_zero32__3289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3289__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3289__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3289__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3289__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3289__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3289__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3289__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3289__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3301__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3301__part 
                            = vlSelf->__Vfunc_leading_zero32__3301__value;
                        vlSelf->__Vfunc_leading_zero32__3301__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3301__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3301__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3301__count)));
                            vlSelf->__Vfunc_leading_zero32__3301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3301__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3301__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3301__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3301__count)));
                            vlSelf->__Vfunc_leading_zero32__3301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3301__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3301__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3301__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3301__count)));
                            vlSelf->__Vfunc_leading_zero32__3301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3301__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3301__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3301__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3301__count)));
                            vlSelf->__Vfunc_leading_zero32__3301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3301__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3301__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3301__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3301__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3301__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3301__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3301__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3301__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3313__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3313__part 
                            = vlSelf->__Vfunc_leading_zero32__3313__value;
                        vlSelf->__Vfunc_leading_zero32__3313__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3313__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3313__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3313__count)));
                            vlSelf->__Vfunc_leading_zero32__3313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3313__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3313__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3313__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3313__count)));
                            vlSelf->__Vfunc_leading_zero32__3313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3313__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3313__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3313__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3313__count)));
                            vlSelf->__Vfunc_leading_zero32__3313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3313__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3313__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3313__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3313__count)));
                            vlSelf->__Vfunc_leading_zero32__3313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3313__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3313__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3313__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3313__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3313__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3313__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3313__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3313__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3325__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3325__part 
                            = vlSelf->__Vfunc_leading_zero32__3325__value;
                        vlSelf->__Vfunc_leading_zero32__3325__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3325__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3325__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3325__count)));
                            vlSelf->__Vfunc_leading_zero32__3325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3325__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3325__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3325__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3325__count)));
                            vlSelf->__Vfunc_leading_zero32__3325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3325__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3325__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3325__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3325__count)));
                            vlSelf->__Vfunc_leading_zero32__3325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3325__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3325__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3325__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3325__count)));
                            vlSelf->__Vfunc_leading_zero32__3325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3325__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3325__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3325__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3325__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3325__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3325__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3325__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3325__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3337__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3337__part 
                            = vlSelf->__Vfunc_leading_zero32__3337__value;
                        vlSelf->__Vfunc_leading_zero32__3337__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3337__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3337__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3337__count)));
                            vlSelf->__Vfunc_leading_zero32__3337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3337__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3337__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3337__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3337__count)));
                            vlSelf->__Vfunc_leading_zero32__3337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3337__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3337__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3337__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3337__count)));
                            vlSelf->__Vfunc_leading_zero32__3337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3337__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3337__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3337__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3337__count)));
                            vlSelf->__Vfunc_leading_zero32__3337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3337__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3337__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3337__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3337__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3337__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3337__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3337__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3337__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3349__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3349__part 
                            = vlSelf->__Vfunc_leading_zero32__3349__value;
                        vlSelf->__Vfunc_leading_zero32__3349__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3349__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3349__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3349__count)));
                            vlSelf->__Vfunc_leading_zero32__3349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3349__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3349__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3349__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3349__count)));
                            vlSelf->__Vfunc_leading_zero32__3349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3349__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3349__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3349__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3349__count)));
                            vlSelf->__Vfunc_leading_zero32__3349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3349__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3349__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3349__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3349__count)));
                            vlSelf->__Vfunc_leading_zero32__3349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3349__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3349__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3349__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3349__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3349__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3349__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3349__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3349__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3361__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3361__part 
                            = vlSelf->__Vfunc_leading_zero32__3361__value;
                        vlSelf->__Vfunc_leading_zero32__3361__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3361__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3361__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3361__count)));
                            vlSelf->__Vfunc_leading_zero32__3361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3361__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3361__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3361__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3361__count)));
                            vlSelf->__Vfunc_leading_zero32__3361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3361__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3361__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3361__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3361__count)));
                            vlSelf->__Vfunc_leading_zero32__3361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3361__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3361__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3361__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3361__count)));
                            vlSelf->__Vfunc_leading_zero32__3361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3361__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3361__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3361__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3361__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3361__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3361__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3361__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3361__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3373__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3373__part 
                            = vlSelf->__Vfunc_leading_zero32__3373__value;
                        vlSelf->__Vfunc_leading_zero32__3373__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3373__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3373__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3373__count)));
                            vlSelf->__Vfunc_leading_zero32__3373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3373__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3373__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3373__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3373__count)));
                            vlSelf->__Vfunc_leading_zero32__3373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3373__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3373__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3373__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3373__count)));
                            vlSelf->__Vfunc_leading_zero32__3373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3373__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3373__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3373__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3373__count)));
                            vlSelf->__Vfunc_leading_zero32__3373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3373__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3373__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3373__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3373__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3373__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3373__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3373__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3373__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3385__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3385__part 
                            = vlSelf->__Vfunc_leading_zero32__3385__value;
                        vlSelf->__Vfunc_leading_zero32__3385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3385__count)));
                            vlSelf->__Vfunc_leading_zero32__3385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3385__count)));
                            vlSelf->__Vfunc_leading_zero32__3385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3385__count)));
                            vlSelf->__Vfunc_leading_zero32__3385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3385__count)));
                            vlSelf->__Vfunc_leading_zero32__3385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3385__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3397__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3397__part 
                            = vlSelf->__Vfunc_leading_zero32__3397__value;
                        vlSelf->__Vfunc_leading_zero32__3397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3397__count)));
                            vlSelf->__Vfunc_leading_zero32__3397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3397__count)));
                            vlSelf->__Vfunc_leading_zero32__3397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3397__count)));
                            vlSelf->__Vfunc_leading_zero32__3397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3397__count)));
                            vlSelf->__Vfunc_leading_zero32__3397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3397__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3409__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3409__part 
                            = vlSelf->__Vfunc_leading_zero32__3409__value;
                        vlSelf->__Vfunc_leading_zero32__3409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3409__count)));
                            vlSelf->__Vfunc_leading_zero32__3409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3409__count)));
                            vlSelf->__Vfunc_leading_zero32__3409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3409__count)));
                            vlSelf->__Vfunc_leading_zero32__3409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3409__count)));
                            vlSelf->__Vfunc_leading_zero32__3409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3409__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3421__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3421__part 
                            = vlSelf->__Vfunc_leading_zero32__3421__value;
                        vlSelf->__Vfunc_leading_zero32__3421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3421__count)));
                            vlSelf->__Vfunc_leading_zero32__3421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3421__count)));
                            vlSelf->__Vfunc_leading_zero32__3421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3421__count)));
                            vlSelf->__Vfunc_leading_zero32__3421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3421__count)));
                            vlSelf->__Vfunc_leading_zero32__3421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3421__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3433__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3433__part 
                            = vlSelf->__Vfunc_leading_zero32__3433__value;
                        vlSelf->__Vfunc_leading_zero32__3433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3433__count)));
                            vlSelf->__Vfunc_leading_zero32__3433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3433__count)));
                            vlSelf->__Vfunc_leading_zero32__3433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3433__count)));
                            vlSelf->__Vfunc_leading_zero32__3433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3433__count)));
                            vlSelf->__Vfunc_leading_zero32__3433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3433__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3445__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3445__part 
                            = vlSelf->__Vfunc_leading_zero32__3445__value;
                        vlSelf->__Vfunc_leading_zero32__3445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3445__count)));
                            vlSelf->__Vfunc_leading_zero32__3445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3445__count)));
                            vlSelf->__Vfunc_leading_zero32__3445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3445__count)));
                            vlSelf->__Vfunc_leading_zero32__3445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3445__count)));
                            vlSelf->__Vfunc_leading_zero32__3445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3445__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3457__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3457__part 
                            = vlSelf->__Vfunc_leading_zero32__3457__value;
                        vlSelf->__Vfunc_leading_zero32__3457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3457__count)));
                            vlSelf->__Vfunc_leading_zero32__3457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3457__count)));
                            vlSelf->__Vfunc_leading_zero32__3457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3457__count)));
                            vlSelf->__Vfunc_leading_zero32__3457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3457__count)));
                            vlSelf->__Vfunc_leading_zero32__3457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3457__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3469__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3469__part 
                            = vlSelf->__Vfunc_leading_zero32__3469__value;
                        vlSelf->__Vfunc_leading_zero32__3469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3469__count)));
                            vlSelf->__Vfunc_leading_zero32__3469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3469__count)));
                            vlSelf->__Vfunc_leading_zero32__3469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3469__count)));
                            vlSelf->__Vfunc_leading_zero32__3469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3469__count)));
                            vlSelf->__Vfunc_leading_zero32__3469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3469__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3481__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3481__part 
                            = vlSelf->__Vfunc_leading_zero32__3481__value;
                        vlSelf->__Vfunc_leading_zero32__3481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3481__count)));
                            vlSelf->__Vfunc_leading_zero32__3481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3481__count)));
                            vlSelf->__Vfunc_leading_zero32__3481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3481__count)));
                            vlSelf->__Vfunc_leading_zero32__3481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3481__count)));
                            vlSelf->__Vfunc_leading_zero32__3481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3481__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3493__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3493__part 
                            = vlSelf->__Vfunc_leading_zero32__3493__value;
                        vlSelf->__Vfunc_leading_zero32__3493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3493__count)));
                            vlSelf->__Vfunc_leading_zero32__3493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3493__count)));
                            vlSelf->__Vfunc_leading_zero32__3493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3493__count)));
                            vlSelf->__Vfunc_leading_zero32__3493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3493__count)));
                            vlSelf->__Vfunc_leading_zero32__3493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3493__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3505__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3505__part 
                            = vlSelf->__Vfunc_leading_zero32__3505__value;
                        vlSelf->__Vfunc_leading_zero32__3505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3505__count)));
                            vlSelf->__Vfunc_leading_zero32__3505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3505__count)));
                            vlSelf->__Vfunc_leading_zero32__3505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3505__count)));
                            vlSelf->__Vfunc_leading_zero32__3505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3505__count)));
                            vlSelf->__Vfunc_leading_zero32__3505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3505__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3517__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3517__part 
                            = vlSelf->__Vfunc_leading_zero32__3517__value;
                        vlSelf->__Vfunc_leading_zero32__3517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3517__count)));
                            vlSelf->__Vfunc_leading_zero32__3517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3517__count)));
                            vlSelf->__Vfunc_leading_zero32__3517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3517__count)));
                            vlSelf->__Vfunc_leading_zero32__3517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3517__count)));
                            vlSelf->__Vfunc_leading_zero32__3517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3517__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3529__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3529__part 
                            = vlSelf->__Vfunc_leading_zero32__3529__value;
                        vlSelf->__Vfunc_leading_zero32__3529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3529__count)));
                            vlSelf->__Vfunc_leading_zero32__3529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3529__count)));
                            vlSelf->__Vfunc_leading_zero32__3529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3529__count)));
                            vlSelf->__Vfunc_leading_zero32__3529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3529__count)));
                            vlSelf->__Vfunc_leading_zero32__3529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3529__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3541__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3541__part 
                            = vlSelf->__Vfunc_leading_zero32__3541__value;
                        vlSelf->__Vfunc_leading_zero32__3541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3541__count)));
                            vlSelf->__Vfunc_leading_zero32__3541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3541__count)));
                            vlSelf->__Vfunc_leading_zero32__3541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3541__count)));
                            vlSelf->__Vfunc_leading_zero32__3541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3541__count)));
                            vlSelf->__Vfunc_leading_zero32__3541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3541__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3553__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3553__part 
                            = vlSelf->__Vfunc_leading_zero32__3553__value;
                        vlSelf->__Vfunc_leading_zero32__3553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3553__count)));
                            vlSelf->__Vfunc_leading_zero32__3553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3553__count)));
                            vlSelf->__Vfunc_leading_zero32__3553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3553__count)));
                            vlSelf->__Vfunc_leading_zero32__3553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3553__count)));
                            vlSelf->__Vfunc_leading_zero32__3553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3553__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3565__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3565__part 
                            = vlSelf->__Vfunc_leading_zero32__3565__value;
                        vlSelf->__Vfunc_leading_zero32__3565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3565__count)));
                            vlSelf->__Vfunc_leading_zero32__3565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3565__count)));
                            vlSelf->__Vfunc_leading_zero32__3565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3565__count)));
                            vlSelf->__Vfunc_leading_zero32__3565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3565__count)));
                            vlSelf->__Vfunc_leading_zero32__3565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3565__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3577__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3577__part 
                            = vlSelf->__Vfunc_leading_zero32__3577__value;
                        vlSelf->__Vfunc_leading_zero32__3577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3577__count)));
                            vlSelf->__Vfunc_leading_zero32__3577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3577__count)));
                            vlSelf->__Vfunc_leading_zero32__3577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3577__count)));
                            vlSelf->__Vfunc_leading_zero32__3577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3577__count)));
                            vlSelf->__Vfunc_leading_zero32__3577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3577__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3589__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3589__part 
                            = vlSelf->__Vfunc_leading_zero32__3589__value;
                        vlSelf->__Vfunc_leading_zero32__3589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3589__count)));
                            vlSelf->__Vfunc_leading_zero32__3589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3589__count)));
                            vlSelf->__Vfunc_leading_zero32__3589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3589__count)));
                            vlSelf->__Vfunc_leading_zero32__3589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3589__count)));
                            vlSelf->__Vfunc_leading_zero32__3589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3589__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3601__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3601__part 
                            = vlSelf->__Vfunc_leading_zero32__3601__value;
                        vlSelf->__Vfunc_leading_zero32__3601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3601__count)));
                            vlSelf->__Vfunc_leading_zero32__3601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3601__count)));
                            vlSelf->__Vfunc_leading_zero32__3601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3601__count)));
                            vlSelf->__Vfunc_leading_zero32__3601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3601__count)));
                            vlSelf->__Vfunc_leading_zero32__3601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3613__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3613__part 
                            = vlSelf->__Vfunc_leading_zero32__3613__value;
                        vlSelf->__Vfunc_leading_zero32__3613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3613__count)));
                            vlSelf->__Vfunc_leading_zero32__3613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3613__count)));
                            vlSelf->__Vfunc_leading_zero32__3613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3613__count)));
                            vlSelf->__Vfunc_leading_zero32__3613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3613__count)));
                            vlSelf->__Vfunc_leading_zero32__3613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3613__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3625__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3625__part 
                            = vlSelf->__Vfunc_leading_zero32__3625__value;
                        vlSelf->__Vfunc_leading_zero32__3625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3625__count)));
                            vlSelf->__Vfunc_leading_zero32__3625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3625__count)));
                            vlSelf->__Vfunc_leading_zero32__3625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3625__count)));
                            vlSelf->__Vfunc_leading_zero32__3625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3625__count)));
                            vlSelf->__Vfunc_leading_zero32__3625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3625__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3637__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3637__part 
                            = vlSelf->__Vfunc_leading_zero32__3637__value;
                        vlSelf->__Vfunc_leading_zero32__3637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3637__count)));
                            vlSelf->__Vfunc_leading_zero32__3637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3637__count)));
                            vlSelf->__Vfunc_leading_zero32__3637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3637__count)));
                            vlSelf->__Vfunc_leading_zero32__3637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3637__count)));
                            vlSelf->__Vfunc_leading_zero32__3637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3649__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3649__part 
                            = vlSelf->__Vfunc_leading_zero32__3649__value;
                        vlSelf->__Vfunc_leading_zero32__3649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3649__count)));
                            vlSelf->__Vfunc_leading_zero32__3649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3649__count)));
                            vlSelf->__Vfunc_leading_zero32__3649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3649__count)));
                            vlSelf->__Vfunc_leading_zero32__3649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3649__count)));
                            vlSelf->__Vfunc_leading_zero32__3649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3649__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3661__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3661__part 
                            = vlSelf->__Vfunc_leading_zero32__3661__value;
                        vlSelf->__Vfunc_leading_zero32__3661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3661__count)));
                            vlSelf->__Vfunc_leading_zero32__3661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3661__count)));
                            vlSelf->__Vfunc_leading_zero32__3661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3661__count)));
                            vlSelf->__Vfunc_leading_zero32__3661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3661__count)));
                            vlSelf->__Vfunc_leading_zero32__3661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3661__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3673__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3673__part 
                            = vlSelf->__Vfunc_leading_zero32__3673__value;
                        vlSelf->__Vfunc_leading_zero32__3673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3673__count)));
                            vlSelf->__Vfunc_leading_zero32__3673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3673__count)));
                            vlSelf->__Vfunc_leading_zero32__3673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3673__count)));
                            vlSelf->__Vfunc_leading_zero32__3673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3673__count)));
                            vlSelf->__Vfunc_leading_zero32__3673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3685__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3685__part 
                            = vlSelf->__Vfunc_leading_zero32__3685__value;
                        vlSelf->__Vfunc_leading_zero32__3685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3685__count)));
                            vlSelf->__Vfunc_leading_zero32__3685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3685__count)));
                            vlSelf->__Vfunc_leading_zero32__3685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3685__count)));
                            vlSelf->__Vfunc_leading_zero32__3685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3685__count)));
                            vlSelf->__Vfunc_leading_zero32__3685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3685__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3697__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3697__part 
                            = vlSelf->__Vfunc_leading_zero32__3697__value;
                        vlSelf->__Vfunc_leading_zero32__3697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3697__count)));
                            vlSelf->__Vfunc_leading_zero32__3697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3697__count)));
                            vlSelf->__Vfunc_leading_zero32__3697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3697__count)));
                            vlSelf->__Vfunc_leading_zero32__3697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3697__count)));
                            vlSelf->__Vfunc_leading_zero32__3697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3697__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3709__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3709__part 
                            = vlSelf->__Vfunc_leading_zero32__3709__value;
                        vlSelf->__Vfunc_leading_zero32__3709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3709__count)));
                            vlSelf->__Vfunc_leading_zero32__3709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3709__count)));
                            vlSelf->__Vfunc_leading_zero32__3709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3709__count)));
                            vlSelf->__Vfunc_leading_zero32__3709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3709__count)));
                            vlSelf->__Vfunc_leading_zero32__3709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3721__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3721__part 
                            = vlSelf->__Vfunc_leading_zero32__3721__value;
                        vlSelf->__Vfunc_leading_zero32__3721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3721__count)));
                            vlSelf->__Vfunc_leading_zero32__3721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3721__count)));
                            vlSelf->__Vfunc_leading_zero32__3721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3721__count)));
                            vlSelf->__Vfunc_leading_zero32__3721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3721__count)));
                            vlSelf->__Vfunc_leading_zero32__3721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3721__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3733__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3733__part 
                            = vlSelf->__Vfunc_leading_zero32__3733__value;
                        vlSelf->__Vfunc_leading_zero32__3733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3733__count)));
                            vlSelf->__Vfunc_leading_zero32__3733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3733__count)));
                            vlSelf->__Vfunc_leading_zero32__3733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3733__count)));
                            vlSelf->__Vfunc_leading_zero32__3733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3733__count)));
                            vlSelf->__Vfunc_leading_zero32__3733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3733__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3745__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3745__part 
                            = vlSelf->__Vfunc_leading_zero32__3745__value;
                        vlSelf->__Vfunc_leading_zero32__3745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3745__count)));
                            vlSelf->__Vfunc_leading_zero32__3745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3745__count)));
                            vlSelf->__Vfunc_leading_zero32__3745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3745__count)));
                            vlSelf->__Vfunc_leading_zero32__3745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3745__count)));
                            vlSelf->__Vfunc_leading_zero32__3745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3757__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3757__part 
                            = vlSelf->__Vfunc_leading_zero32__3757__value;
                        vlSelf->__Vfunc_leading_zero32__3757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3757__count)));
                            vlSelf->__Vfunc_leading_zero32__3757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3757__count)));
                            vlSelf->__Vfunc_leading_zero32__3757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3757__count)));
                            vlSelf->__Vfunc_leading_zero32__3757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3757__count)));
                            vlSelf->__Vfunc_leading_zero32__3757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3757__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3769__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3769__part 
                            = vlSelf->__Vfunc_leading_zero32__3769__value;
                        vlSelf->__Vfunc_leading_zero32__3769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3769__count)));
                            vlSelf->__Vfunc_leading_zero32__3769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3769__count)));
                            vlSelf->__Vfunc_leading_zero32__3769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3769__count)));
                            vlSelf->__Vfunc_leading_zero32__3769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3769__count)));
                            vlSelf->__Vfunc_leading_zero32__3769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3769__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3781__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3781__part 
                            = vlSelf->__Vfunc_leading_zero32__3781__value;
                        vlSelf->__Vfunc_leading_zero32__3781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3781__count)));
                            vlSelf->__Vfunc_leading_zero32__3781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3781__count)));
                            vlSelf->__Vfunc_leading_zero32__3781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3781__count)));
                            vlSelf->__Vfunc_leading_zero32__3781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3781__count)));
                            vlSelf->__Vfunc_leading_zero32__3781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3793__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3793__part 
                            = vlSelf->__Vfunc_leading_zero32__3793__value;
                        vlSelf->__Vfunc_leading_zero32__3793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3793__count)));
                            vlSelf->__Vfunc_leading_zero32__3793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3793__count)));
                            vlSelf->__Vfunc_leading_zero32__3793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3793__count)));
                            vlSelf->__Vfunc_leading_zero32__3793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3793__count)));
                            vlSelf->__Vfunc_leading_zero32__3793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3793__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3805__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3805__part 
                            = vlSelf->__Vfunc_leading_zero32__3805__value;
                        vlSelf->__Vfunc_leading_zero32__3805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3805__count)));
                            vlSelf->__Vfunc_leading_zero32__3805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3805__count)));
                            vlSelf->__Vfunc_leading_zero32__3805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3805__count)));
                            vlSelf->__Vfunc_leading_zero32__3805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3805__count)));
                            vlSelf->__Vfunc_leading_zero32__3805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3805__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3817__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3817__part 
                            = vlSelf->__Vfunc_leading_zero32__3817__value;
                        vlSelf->__Vfunc_leading_zero32__3817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3817__count)));
                            vlSelf->__Vfunc_leading_zero32__3817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3817__count)));
                            vlSelf->__Vfunc_leading_zero32__3817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3817__count)));
                            vlSelf->__Vfunc_leading_zero32__3817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3817__count)));
                            vlSelf->__Vfunc_leading_zero32__3817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3817__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3829__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3829__part 
                            = vlSelf->__Vfunc_leading_zero32__3829__value;
                        vlSelf->__Vfunc_leading_zero32__3829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3829__count)));
                            vlSelf->__Vfunc_leading_zero32__3829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3829__count)));
                            vlSelf->__Vfunc_leading_zero32__3829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3829__count)));
                            vlSelf->__Vfunc_leading_zero32__3829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3829__count)));
                            vlSelf->__Vfunc_leading_zero32__3829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3829__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3841__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3841__part 
                            = vlSelf->__Vfunc_leading_zero32__3841__value;
                        vlSelf->__Vfunc_leading_zero32__3841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3841__count)));
                            vlSelf->__Vfunc_leading_zero32__3841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3841__count)));
                            vlSelf->__Vfunc_leading_zero32__3841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3841__count)));
                            vlSelf->__Vfunc_leading_zero32__3841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3841__count)));
                            vlSelf->__Vfunc_leading_zero32__3841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3841__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3853__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3853__part 
                            = vlSelf->__Vfunc_leading_zero32__3853__value;
                        vlSelf->__Vfunc_leading_zero32__3853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3853__count)));
                            vlSelf->__Vfunc_leading_zero32__3853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3853__count)));
                            vlSelf->__Vfunc_leading_zero32__3853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3853__count)));
                            vlSelf->__Vfunc_leading_zero32__3853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3853__count)));
                            vlSelf->__Vfunc_leading_zero32__3853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3865__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3865__part 
                            = vlSelf->__Vfunc_leading_zero32__3865__value;
                        vlSelf->__Vfunc_leading_zero32__3865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3865__count)));
                            vlSelf->__Vfunc_leading_zero32__3865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3865__count)));
                            vlSelf->__Vfunc_leading_zero32__3865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3865__count)));
                            vlSelf->__Vfunc_leading_zero32__3865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3865__count)));
                            vlSelf->__Vfunc_leading_zero32__3865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3865__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3877__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3877__part 
                            = vlSelf->__Vfunc_leading_zero32__3877__value;
                        vlSelf->__Vfunc_leading_zero32__3877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3877__count)));
                            vlSelf->__Vfunc_leading_zero32__3877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3877__count)));
                            vlSelf->__Vfunc_leading_zero32__3877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3877__count)));
                            vlSelf->__Vfunc_leading_zero32__3877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3877__count)));
                            vlSelf->__Vfunc_leading_zero32__3877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3877__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3889__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3889__part 
                            = vlSelf->__Vfunc_leading_zero32__3889__value;
                        vlSelf->__Vfunc_leading_zero32__3889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3889__count)));
                            vlSelf->__Vfunc_leading_zero32__3889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3889__count)));
                            vlSelf->__Vfunc_leading_zero32__3889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3889__count)));
                            vlSelf->__Vfunc_leading_zero32__3889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3889__count)));
                            vlSelf->__Vfunc_leading_zero32__3889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3901__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3901__part 
                            = vlSelf->__Vfunc_leading_zero32__3901__value;
                        vlSelf->__Vfunc_leading_zero32__3901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3901__count)));
                            vlSelf->__Vfunc_leading_zero32__3901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3901__count)));
                            vlSelf->__Vfunc_leading_zero32__3901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3901__count)));
                            vlSelf->__Vfunc_leading_zero32__3901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3901__count)));
                            vlSelf->__Vfunc_leading_zero32__3901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3901__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3913__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3913__part 
                            = vlSelf->__Vfunc_leading_zero32__3913__value;
                        vlSelf->__Vfunc_leading_zero32__3913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3913__count)));
                            vlSelf->__Vfunc_leading_zero32__3913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3913__count)));
                            vlSelf->__Vfunc_leading_zero32__3913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3913__count)));
                            vlSelf->__Vfunc_leading_zero32__3913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3913__count)));
                            vlSelf->__Vfunc_leading_zero32__3913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3913__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3925__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3925__part 
                            = vlSelf->__Vfunc_leading_zero32__3925__value;
                        vlSelf->__Vfunc_leading_zero32__3925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3925__count)));
                            vlSelf->__Vfunc_leading_zero32__3925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3925__count)));
                            vlSelf->__Vfunc_leading_zero32__3925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3925__count)));
                            vlSelf->__Vfunc_leading_zero32__3925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3925__count)));
                            vlSelf->__Vfunc_leading_zero32__3925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3937__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3937__part 
                            = vlSelf->__Vfunc_leading_zero32__3937__value;
                        vlSelf->__Vfunc_leading_zero32__3937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3937__count)));
                            vlSelf->__Vfunc_leading_zero32__3937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3937__count)));
                            vlSelf->__Vfunc_leading_zero32__3937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3937__count)));
                            vlSelf->__Vfunc_leading_zero32__3937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3937__count)));
                            vlSelf->__Vfunc_leading_zero32__3937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3937__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3949__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3949__part 
                            = vlSelf->__Vfunc_leading_zero32__3949__value;
                        vlSelf->__Vfunc_leading_zero32__3949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3949__count)));
                            vlSelf->__Vfunc_leading_zero32__3949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3949__count)));
                            vlSelf->__Vfunc_leading_zero32__3949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3949__count)));
                            vlSelf->__Vfunc_leading_zero32__3949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3949__count)));
                            vlSelf->__Vfunc_leading_zero32__3949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3949__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3961__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3961__part 
                            = vlSelf->__Vfunc_leading_zero32__3961__value;
                        vlSelf->__Vfunc_leading_zero32__3961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3961__count)));
                            vlSelf->__Vfunc_leading_zero32__3961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3961__count)));
                            vlSelf->__Vfunc_leading_zero32__3961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3961__count)));
                            vlSelf->__Vfunc_leading_zero32__3961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3961__count)));
                            vlSelf->__Vfunc_leading_zero32__3961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3973__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3973__part 
                            = vlSelf->__Vfunc_leading_zero32__3973__value;
                        vlSelf->__Vfunc_leading_zero32__3973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3973__count)));
                            vlSelf->__Vfunc_leading_zero32__3973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3973__count)));
                            vlSelf->__Vfunc_leading_zero32__3973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3973__count)));
                            vlSelf->__Vfunc_leading_zero32__3973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3973__count)));
                            vlSelf->__Vfunc_leading_zero32__3973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3973__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3985__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3985__part 
                            = vlSelf->__Vfunc_leading_zero32__3985__value;
                        vlSelf->__Vfunc_leading_zero32__3985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3985__count)));
                            vlSelf->__Vfunc_leading_zero32__3985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3985__count)));
                            vlSelf->__Vfunc_leading_zero32__3985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3985__count)));
                            vlSelf->__Vfunc_leading_zero32__3985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3985__count)));
                            vlSelf->__Vfunc_leading_zero32__3985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3985__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3997__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3997__part 
                            = vlSelf->__Vfunc_leading_zero32__3997__value;
                        vlSelf->__Vfunc_leading_zero32__3997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3997__count)));
                            vlSelf->__Vfunc_leading_zero32__3997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3997__count)));
                            vlSelf->__Vfunc_leading_zero32__3997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3997__count)));
                            vlSelf->__Vfunc_leading_zero32__3997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3997__count)));
                            vlSelf->__Vfunc_leading_zero32__3997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4009__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4009__part 
                            = vlSelf->__Vfunc_leading_zero32__4009__value;
                        vlSelf->__Vfunc_leading_zero32__4009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4009__count)));
                            vlSelf->__Vfunc_leading_zero32__4009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4009__count)));
                            vlSelf->__Vfunc_leading_zero32__4009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4009__count)));
                            vlSelf->__Vfunc_leading_zero32__4009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4009__count)));
                            vlSelf->__Vfunc_leading_zero32__4009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4009__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4021__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4021__part 
                            = vlSelf->__Vfunc_leading_zero32__4021__value;
                        vlSelf->__Vfunc_leading_zero32__4021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4021__count)));
                            vlSelf->__Vfunc_leading_zero32__4021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4021__count)));
                            vlSelf->__Vfunc_leading_zero32__4021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4021__count)));
                            vlSelf->__Vfunc_leading_zero32__4021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4021__count)));
                            vlSelf->__Vfunc_leading_zero32__4021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4021__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4033__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4033__part 
                            = vlSelf->__Vfunc_leading_zero32__4033__value;
                        vlSelf->__Vfunc_leading_zero32__4033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4033__count)));
                            vlSelf->__Vfunc_leading_zero32__4033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4033__count)));
                            vlSelf->__Vfunc_leading_zero32__4033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4033__count)));
                            vlSelf->__Vfunc_leading_zero32__4033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4033__count)));
                            vlSelf->__Vfunc_leading_zero32__4033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4045__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4045__part 
                            = vlSelf->__Vfunc_leading_zero32__4045__value;
                        vlSelf->__Vfunc_leading_zero32__4045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4045__count)));
                            vlSelf->__Vfunc_leading_zero32__4045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4045__count)));
                            vlSelf->__Vfunc_leading_zero32__4045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4045__count)));
                            vlSelf->__Vfunc_leading_zero32__4045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4045__count)));
                            vlSelf->__Vfunc_leading_zero32__4045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4045__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4057__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4057__part 
                            = vlSelf->__Vfunc_leading_zero32__4057__value;
                        vlSelf->__Vfunc_leading_zero32__4057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4057__count)));
                            vlSelf->__Vfunc_leading_zero32__4057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4057__count)));
                            vlSelf->__Vfunc_leading_zero32__4057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4057__count)));
                            vlSelf->__Vfunc_leading_zero32__4057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4057__count)));
                            vlSelf->__Vfunc_leading_zero32__4057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4057__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4069__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4069__part 
                            = vlSelf->__Vfunc_leading_zero32__4069__value;
                        vlSelf->__Vfunc_leading_zero32__4069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4069__count)));
                            vlSelf->__Vfunc_leading_zero32__4069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4069__count)));
                            vlSelf->__Vfunc_leading_zero32__4069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4069__count)));
                            vlSelf->__Vfunc_leading_zero32__4069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4069__count)));
                            vlSelf->__Vfunc_leading_zero32__4069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4081__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4081__part 
                            = vlSelf->__Vfunc_leading_zero32__4081__value;
                        vlSelf->__Vfunc_leading_zero32__4081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4081__count)));
                            vlSelf->__Vfunc_leading_zero32__4081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4081__count)));
                            vlSelf->__Vfunc_leading_zero32__4081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4081__count)));
                            vlSelf->__Vfunc_leading_zero32__4081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4081__count)));
                            vlSelf->__Vfunc_leading_zero32__4081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4081__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4093__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4093__part 
                            = vlSelf->__Vfunc_leading_zero32__4093__value;
                        vlSelf->__Vfunc_leading_zero32__4093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4093__count)));
                            vlSelf->__Vfunc_leading_zero32__4093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4093__count)));
                            vlSelf->__Vfunc_leading_zero32__4093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4093__count)));
                            vlSelf->__Vfunc_leading_zero32__4093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4093__count)));
                            vlSelf->__Vfunc_leading_zero32__4093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4093__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4105__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4105__part 
                            = vlSelf->__Vfunc_leading_zero32__4105__value;
                        vlSelf->__Vfunc_leading_zero32__4105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4105__count)));
                            vlSelf->__Vfunc_leading_zero32__4105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4105__count)));
                            vlSelf->__Vfunc_leading_zero32__4105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4105__count)));
                            vlSelf->__Vfunc_leading_zero32__4105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4105__count)));
                            vlSelf->__Vfunc_leading_zero32__4105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4117__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4117__part 
                            = vlSelf->__Vfunc_leading_zero32__4117__value;
                        vlSelf->__Vfunc_leading_zero32__4117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4117__count)));
                            vlSelf->__Vfunc_leading_zero32__4117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4117__count)));
                            vlSelf->__Vfunc_leading_zero32__4117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4117__count)));
                            vlSelf->__Vfunc_leading_zero32__4117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4117__count)));
                            vlSelf->__Vfunc_leading_zero32__4117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4117__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4129__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4129__part 
                            = vlSelf->__Vfunc_leading_zero32__4129__value;
                        vlSelf->__Vfunc_leading_zero32__4129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4129__count)));
                            vlSelf->__Vfunc_leading_zero32__4129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4129__count)));
                            vlSelf->__Vfunc_leading_zero32__4129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4129__count)));
                            vlSelf->__Vfunc_leading_zero32__4129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4129__count)));
                            vlSelf->__Vfunc_leading_zero32__4129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4129__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4141__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4141__part 
                            = vlSelf->__Vfunc_leading_zero32__4141__value;
                        vlSelf->__Vfunc_leading_zero32__4141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4141__count)));
                            vlSelf->__Vfunc_leading_zero32__4141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4141__count)));
                            vlSelf->__Vfunc_leading_zero32__4141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4141__count)));
                            vlSelf->__Vfunc_leading_zero32__4141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4141__count)));
                            vlSelf->__Vfunc_leading_zero32__4141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4153__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4153__part 
                            = vlSelf->__Vfunc_leading_zero32__4153__value;
                        vlSelf->__Vfunc_leading_zero32__4153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4153__count)));
                            vlSelf->__Vfunc_leading_zero32__4153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4153__count)));
                            vlSelf->__Vfunc_leading_zero32__4153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4153__count)));
                            vlSelf->__Vfunc_leading_zero32__4153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4153__count)));
                            vlSelf->__Vfunc_leading_zero32__4153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4153__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4165__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4165__part 
                            = vlSelf->__Vfunc_leading_zero32__4165__value;
                        vlSelf->__Vfunc_leading_zero32__4165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4165__count)));
                            vlSelf->__Vfunc_leading_zero32__4165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4165__count)));
                            vlSelf->__Vfunc_leading_zero32__4165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4165__count)));
                            vlSelf->__Vfunc_leading_zero32__4165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4165__count)));
                            vlSelf->__Vfunc_leading_zero32__4165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4165__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4177__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4177__part 
                            = vlSelf->__Vfunc_leading_zero32__4177__value;
                        vlSelf->__Vfunc_leading_zero32__4177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4177__count)));
                            vlSelf->__Vfunc_leading_zero32__4177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4177__count)));
                            vlSelf->__Vfunc_leading_zero32__4177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4177__count)));
                            vlSelf->__Vfunc_leading_zero32__4177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4177__count)));
                            vlSelf->__Vfunc_leading_zero32__4177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4189__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4189__part 
                            = vlSelf->__Vfunc_leading_zero32__4189__value;
                        vlSelf->__Vfunc_leading_zero32__4189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4189__count)));
                            vlSelf->__Vfunc_leading_zero32__4189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4189__count)));
                            vlSelf->__Vfunc_leading_zero32__4189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4189__count)));
                            vlSelf->__Vfunc_leading_zero32__4189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4189__count)));
                            vlSelf->__Vfunc_leading_zero32__4189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4189__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4201__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4201__part 
                            = vlSelf->__Vfunc_leading_zero32__4201__value;
                        vlSelf->__Vfunc_leading_zero32__4201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4201__count)));
                            vlSelf->__Vfunc_leading_zero32__4201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4201__count)));
                            vlSelf->__Vfunc_leading_zero32__4201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4201__count)));
                            vlSelf->__Vfunc_leading_zero32__4201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4201__count)));
                            vlSelf->__Vfunc_leading_zero32__4201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4201__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4213__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4213__part 
                            = vlSelf->__Vfunc_leading_zero32__4213__value;
                        vlSelf->__Vfunc_leading_zero32__4213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4213__count)));
                            vlSelf->__Vfunc_leading_zero32__4213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4213__count)));
                            vlSelf->__Vfunc_leading_zero32__4213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4213__count)));
                            vlSelf->__Vfunc_leading_zero32__4213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4213__count)));
                            vlSelf->__Vfunc_leading_zero32__4213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4225__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4225__part 
                            = vlSelf->__Vfunc_leading_zero32__4225__value;
                        vlSelf->__Vfunc_leading_zero32__4225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4225__count)));
                            vlSelf->__Vfunc_leading_zero32__4225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4225__count)));
                            vlSelf->__Vfunc_leading_zero32__4225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4225__count)));
                            vlSelf->__Vfunc_leading_zero32__4225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4225__count)));
                            vlSelf->__Vfunc_leading_zero32__4225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4225__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4237__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4237__part 
                            = vlSelf->__Vfunc_leading_zero32__4237__value;
                        vlSelf->__Vfunc_leading_zero32__4237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4237__count)));
                            vlSelf->__Vfunc_leading_zero32__4237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4237__count)));
                            vlSelf->__Vfunc_leading_zero32__4237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4237__count)));
                            vlSelf->__Vfunc_leading_zero32__4237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4237__count)));
                            vlSelf->__Vfunc_leading_zero32__4237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4237__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4249__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4249__part 
                            = vlSelf->__Vfunc_leading_zero32__4249__value;
                        vlSelf->__Vfunc_leading_zero32__4249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4249__count)));
                            vlSelf->__Vfunc_leading_zero32__4249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4249__count)));
                            vlSelf->__Vfunc_leading_zero32__4249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4249__count)));
                            vlSelf->__Vfunc_leading_zero32__4249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4249__count)));
                            vlSelf->__Vfunc_leading_zero32__4249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4249__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4261__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4261__part 
                            = vlSelf->__Vfunc_leading_zero32__4261__value;
                        vlSelf->__Vfunc_leading_zero32__4261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4261__count)));
                            vlSelf->__Vfunc_leading_zero32__4261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4261__count)));
                            vlSelf->__Vfunc_leading_zero32__4261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4261__count)));
                            vlSelf->__Vfunc_leading_zero32__4261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4261__count)));
                            vlSelf->__Vfunc_leading_zero32__4261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4261__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4273__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4273__part 
                            = vlSelf->__Vfunc_leading_zero32__4273__value;
                        vlSelf->__Vfunc_leading_zero32__4273__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4273__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4273__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4273__count)));
                            vlSelf->__Vfunc_leading_zero32__4273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4273__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4273__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4273__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4273__count)));
                            vlSelf->__Vfunc_leading_zero32__4273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4273__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4273__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4273__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4273__count)));
                            vlSelf->__Vfunc_leading_zero32__4273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4273__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4273__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4273__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4273__count)));
                            vlSelf->__Vfunc_leading_zero32__4273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4273__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4273__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4273__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4273__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4273__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4273__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4273__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4273__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4285__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4285__part 
                            = vlSelf->__Vfunc_leading_zero32__4285__value;
                        vlSelf->__Vfunc_leading_zero32__4285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4285__count)));
                            vlSelf->__Vfunc_leading_zero32__4285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4285__count)));
                            vlSelf->__Vfunc_leading_zero32__4285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4285__count)));
                            vlSelf->__Vfunc_leading_zero32__4285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4285__count)));
                            vlSelf->__Vfunc_leading_zero32__4285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4285__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4297__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4297__part 
                            = vlSelf->__Vfunc_leading_zero32__4297__value;
                        vlSelf->__Vfunc_leading_zero32__4297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4297__count)));
                            vlSelf->__Vfunc_leading_zero32__4297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4297__count)));
                            vlSelf->__Vfunc_leading_zero32__4297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4297__count)));
                            vlSelf->__Vfunc_leading_zero32__4297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4297__count)));
                            vlSelf->__Vfunc_leading_zero32__4297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4297__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4309__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4309__part 
                            = vlSelf->__Vfunc_leading_zero32__4309__value;
                        vlSelf->__Vfunc_leading_zero32__4309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4309__count)));
                            vlSelf->__Vfunc_leading_zero32__4309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4309__count)));
                            vlSelf->__Vfunc_leading_zero32__4309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4309__count)));
                            vlSelf->__Vfunc_leading_zero32__4309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4309__count)));
                            vlSelf->__Vfunc_leading_zero32__4309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4309__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4321__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4321__part 
                            = vlSelf->__Vfunc_leading_zero32__4321__value;
                        vlSelf->__Vfunc_leading_zero32__4321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4321__count)));
                            vlSelf->__Vfunc_leading_zero32__4321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4321__count)));
                            vlSelf->__Vfunc_leading_zero32__4321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4321__count)));
                            vlSelf->__Vfunc_leading_zero32__4321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4321__count)));
                            vlSelf->__Vfunc_leading_zero32__4321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4321__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4333__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4333__part 
                            = vlSelf->__Vfunc_leading_zero32__4333__value;
                        vlSelf->__Vfunc_leading_zero32__4333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4333__count)));
                            vlSelf->__Vfunc_leading_zero32__4333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4333__count)));
                            vlSelf->__Vfunc_leading_zero32__4333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4333__count)));
                            vlSelf->__Vfunc_leading_zero32__4333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4333__count)));
                            vlSelf->__Vfunc_leading_zero32__4333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4333__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4345__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4345__part 
                            = vlSelf->__Vfunc_leading_zero32__4345__value;
                        vlSelf->__Vfunc_leading_zero32__4345__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4345__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4345__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4345__count)));
                            vlSelf->__Vfunc_leading_zero32__4345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4345__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4345__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4345__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4345__count)));
                            vlSelf->__Vfunc_leading_zero32__4345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4345__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4345__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4345__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4345__count)));
                            vlSelf->__Vfunc_leading_zero32__4345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4345__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4345__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4345__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4345__count)));
                            vlSelf->__Vfunc_leading_zero32__4345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4345__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4345__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4345__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4345__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4345__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4345__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4345__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4345__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4357__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4357__part 
                            = vlSelf->__Vfunc_leading_zero32__4357__value;
                        vlSelf->__Vfunc_leading_zero32__4357__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4357__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4357__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4357__count)));
                            vlSelf->__Vfunc_leading_zero32__4357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4357__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4357__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4357__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4357__count)));
                            vlSelf->__Vfunc_leading_zero32__4357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4357__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4357__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4357__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4357__count)));
                            vlSelf->__Vfunc_leading_zero32__4357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4357__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4357__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4357__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4357__count)));
                            vlSelf->__Vfunc_leading_zero32__4357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4357__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4357__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4357__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4357__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4357__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4357__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4357__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4357__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4369__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4369__part 
                            = vlSelf->__Vfunc_leading_zero32__4369__value;
                        vlSelf->__Vfunc_leading_zero32__4369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4369__count)));
                            vlSelf->__Vfunc_leading_zero32__4369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4369__count)));
                            vlSelf->__Vfunc_leading_zero32__4369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4369__count)));
                            vlSelf->__Vfunc_leading_zero32__4369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4369__count)));
                            vlSelf->__Vfunc_leading_zero32__4369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4369__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4381__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4381__part 
                            = vlSelf->__Vfunc_leading_zero32__4381__value;
                        vlSelf->__Vfunc_leading_zero32__4381__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4381__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4381__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4381__count)));
                            vlSelf->__Vfunc_leading_zero32__4381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4381__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4381__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4381__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4381__count)));
                            vlSelf->__Vfunc_leading_zero32__4381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4381__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4381__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4381__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4381__count)));
                            vlSelf->__Vfunc_leading_zero32__4381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4381__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4381__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4381__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4381__count)));
                            vlSelf->__Vfunc_leading_zero32__4381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4381__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4381__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4381__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4381__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4381__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4381__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4381__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4381__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4393__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4393__part 
                            = vlSelf->__Vfunc_leading_zero32__4393__value;
                        vlSelf->__Vfunc_leading_zero32__4393__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4393__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4393__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4393__count)));
                            vlSelf->__Vfunc_leading_zero32__4393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4393__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4393__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4393__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4393__count)));
                            vlSelf->__Vfunc_leading_zero32__4393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4393__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4393__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4393__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4393__count)));
                            vlSelf->__Vfunc_leading_zero32__4393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4393__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4393__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4393__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4393__count)));
                            vlSelf->__Vfunc_leading_zero32__4393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4393__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4393__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4393__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4393__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4393__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4393__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4393__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4393__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4405__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4405__part 
                            = vlSelf->__Vfunc_leading_zero32__4405__value;
                        vlSelf->__Vfunc_leading_zero32__4405__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4405__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4405__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4405__count)));
                            vlSelf->__Vfunc_leading_zero32__4405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4405__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4405__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4405__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4405__count)));
                            vlSelf->__Vfunc_leading_zero32__4405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4405__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4405__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4405__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4405__count)));
                            vlSelf->__Vfunc_leading_zero32__4405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4405__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4405__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4405__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4405__count)));
                            vlSelf->__Vfunc_leading_zero32__4405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4405__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4405__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4405__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4405__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4405__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4405__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4405__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4405__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4417__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4417__part 
                            = vlSelf->__Vfunc_leading_zero32__4417__value;
                        vlSelf->__Vfunc_leading_zero32__4417__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4417__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4417__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4417__count)));
                            vlSelf->__Vfunc_leading_zero32__4417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4417__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4417__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4417__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4417__count)));
                            vlSelf->__Vfunc_leading_zero32__4417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4417__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4417__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4417__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4417__count)));
                            vlSelf->__Vfunc_leading_zero32__4417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4417__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4417__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4417__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4417__count)));
                            vlSelf->__Vfunc_leading_zero32__4417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4417__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4417__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4417__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4417__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4417__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4417__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4417__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4417__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4429__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4429__part 
                            = vlSelf->__Vfunc_leading_zero32__4429__value;
                        vlSelf->__Vfunc_leading_zero32__4429__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4429__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4429__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4429__count)));
                            vlSelf->__Vfunc_leading_zero32__4429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4429__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4429__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4429__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4429__count)));
                            vlSelf->__Vfunc_leading_zero32__4429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4429__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4429__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4429__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4429__count)));
                            vlSelf->__Vfunc_leading_zero32__4429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4429__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4429__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4429__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4429__count)));
                            vlSelf->__Vfunc_leading_zero32__4429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4429__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4429__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4429__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4429__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4429__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4429__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4429__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4429__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4441__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4441__part 
                            = vlSelf->__Vfunc_leading_zero32__4441__value;
                        vlSelf->__Vfunc_leading_zero32__4441__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4441__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4441__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4441__count)));
                            vlSelf->__Vfunc_leading_zero32__4441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4441__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4441__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4441__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4441__count)));
                            vlSelf->__Vfunc_leading_zero32__4441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4441__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4441__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4441__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4441__count)));
                            vlSelf->__Vfunc_leading_zero32__4441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4441__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4441__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4441__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4441__count)));
                            vlSelf->__Vfunc_leading_zero32__4441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4441__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4441__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4441__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4441__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4441__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4441__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4441__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4441__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4453__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4453__part 
                            = vlSelf->__Vfunc_leading_zero32__4453__value;
                        vlSelf->__Vfunc_leading_zero32__4453__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4453__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4453__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4453__count)));
                            vlSelf->__Vfunc_leading_zero32__4453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4453__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4453__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4453__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4453__count)));
                            vlSelf->__Vfunc_leading_zero32__4453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4453__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4453__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4453__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4453__count)));
                            vlSelf->__Vfunc_leading_zero32__4453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4453__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4453__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4453__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4453__count)));
                            vlSelf->__Vfunc_leading_zero32__4453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4453__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4453__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4453__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4453__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4453__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4453__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4453__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4453__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4465__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4465__part 
                            = vlSelf->__Vfunc_leading_zero32__4465__value;
                        vlSelf->__Vfunc_leading_zero32__4465__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4465__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4465__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4465__count)));
                            vlSelf->__Vfunc_leading_zero32__4465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4465__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4465__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4465__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4465__count)));
                            vlSelf->__Vfunc_leading_zero32__4465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4465__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4465__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4465__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4465__count)));
                            vlSelf->__Vfunc_leading_zero32__4465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4465__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4465__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4465__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4465__count)));
                            vlSelf->__Vfunc_leading_zero32__4465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4465__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4465__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4465__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4465__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4465__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4465__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4465__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4465__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4477__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4477__part 
                            = vlSelf->__Vfunc_leading_zero32__4477__value;
                        vlSelf->__Vfunc_leading_zero32__4477__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4477__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4477__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4477__count)));
                            vlSelf->__Vfunc_leading_zero32__4477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4477__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4477__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4477__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4477__count)));
                            vlSelf->__Vfunc_leading_zero32__4477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4477__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4477__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4477__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4477__count)));
                            vlSelf->__Vfunc_leading_zero32__4477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4477__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4477__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4477__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4477__count)));
                            vlSelf->__Vfunc_leading_zero32__4477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4477__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4477__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4477__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4477__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4477__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4477__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4477__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4477__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4489__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4489__part 
                            = vlSelf->__Vfunc_leading_zero32__4489__value;
                        vlSelf->__Vfunc_leading_zero32__4489__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4489__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4489__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4489__count)));
                            vlSelf->__Vfunc_leading_zero32__4489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4489__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4489__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4489__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4489__count)));
                            vlSelf->__Vfunc_leading_zero32__4489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4489__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4489__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4489__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4489__count)));
                            vlSelf->__Vfunc_leading_zero32__4489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4489__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4489__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4489__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4489__count)));
                            vlSelf->__Vfunc_leading_zero32__4489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4489__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4489__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4489__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4489__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4489__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4489__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4489__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4489__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4501__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4501__part 
                            = vlSelf->__Vfunc_leading_zero32__4501__value;
                        vlSelf->__Vfunc_leading_zero32__4501__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4501__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4501__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4501__count)));
                            vlSelf->__Vfunc_leading_zero32__4501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4501__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4501__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4501__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4501__count)));
                            vlSelf->__Vfunc_leading_zero32__4501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4501__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4501__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4501__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4501__count)));
                            vlSelf->__Vfunc_leading_zero32__4501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4501__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4501__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4501__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4501__count)));
                            vlSelf->__Vfunc_leading_zero32__4501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4501__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4501__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4501__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4501__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4501__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4501__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4501__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4501__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4513__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4513__part 
                            = vlSelf->__Vfunc_leading_zero32__4513__value;
                        vlSelf->__Vfunc_leading_zero32__4513__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4513__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4513__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4513__count)));
                            vlSelf->__Vfunc_leading_zero32__4513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4513__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4513__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4513__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4513__count)));
                            vlSelf->__Vfunc_leading_zero32__4513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4513__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4513__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4513__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4513__count)));
                            vlSelf->__Vfunc_leading_zero32__4513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4513__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4513__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4513__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4513__count)));
                            vlSelf->__Vfunc_leading_zero32__4513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4513__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4513__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4513__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4513__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4513__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4513__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4513__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4513__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4525__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4525__part 
                            = vlSelf->__Vfunc_leading_zero32__4525__value;
                        vlSelf->__Vfunc_leading_zero32__4525__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4525__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4525__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4525__count)));
                            vlSelf->__Vfunc_leading_zero32__4525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4525__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4525__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4525__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4525__count)));
                            vlSelf->__Vfunc_leading_zero32__4525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4525__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4525__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4525__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4525__count)));
                            vlSelf->__Vfunc_leading_zero32__4525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4525__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4525__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4525__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4525__count)));
                            vlSelf->__Vfunc_leading_zero32__4525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4525__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4525__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4525__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4525__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4525__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4525__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4525__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4525__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4537__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4537__part 
                            = vlSelf->__Vfunc_leading_zero32__4537__value;
                        vlSelf->__Vfunc_leading_zero32__4537__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4537__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4537__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4537__count)));
                            vlSelf->__Vfunc_leading_zero32__4537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4537__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4537__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4537__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4537__count)));
                            vlSelf->__Vfunc_leading_zero32__4537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4537__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4537__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4537__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4537__count)));
                            vlSelf->__Vfunc_leading_zero32__4537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4537__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4537__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4537__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4537__count)));
                            vlSelf->__Vfunc_leading_zero32__4537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4537__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4537__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4537__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4537__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4537__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4537__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4537__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4537__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4549__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4549__part 
                            = vlSelf->__Vfunc_leading_zero32__4549__value;
                        vlSelf->__Vfunc_leading_zero32__4549__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4549__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4549__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4549__count)));
                            vlSelf->__Vfunc_leading_zero32__4549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4549__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4549__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4549__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4549__count)));
                            vlSelf->__Vfunc_leading_zero32__4549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4549__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4549__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4549__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4549__count)));
                            vlSelf->__Vfunc_leading_zero32__4549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4549__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4549__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4549__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4549__count)));
                            vlSelf->__Vfunc_leading_zero32__4549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4549__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4549__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4549__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4549__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4549__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4549__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4549__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4549__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4561__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4561__part 
                            = vlSelf->__Vfunc_leading_zero32__4561__value;
                        vlSelf->__Vfunc_leading_zero32__4561__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4561__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4561__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4561__count)));
                            vlSelf->__Vfunc_leading_zero32__4561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4561__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4561__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4561__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4561__count)));
                            vlSelf->__Vfunc_leading_zero32__4561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4561__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4561__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4561__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4561__count)));
                            vlSelf->__Vfunc_leading_zero32__4561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4561__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4561__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4561__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4561__count)));
                            vlSelf->__Vfunc_leading_zero32__4561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4561__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4561__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4561__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4561__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4561__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4561__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4561__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4561__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4573__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4573__part 
                            = vlSelf->__Vfunc_leading_zero32__4573__value;
                        vlSelf->__Vfunc_leading_zero32__4573__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4573__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4573__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4573__count)));
                            vlSelf->__Vfunc_leading_zero32__4573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4573__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4573__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4573__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4573__count)));
                            vlSelf->__Vfunc_leading_zero32__4573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4573__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4573__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4573__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4573__count)));
                            vlSelf->__Vfunc_leading_zero32__4573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4573__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4573__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4573__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4573__count)));
                            vlSelf->__Vfunc_leading_zero32__4573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4573__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4573__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4573__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4573__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4573__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4573__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4573__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4573__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4585__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4585__part 
                            = vlSelf->__Vfunc_leading_zero32__4585__value;
                        vlSelf->__Vfunc_leading_zero32__4585__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4585__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4585__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4585__count)));
                            vlSelf->__Vfunc_leading_zero32__4585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4585__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4585__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4585__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4585__count)));
                            vlSelf->__Vfunc_leading_zero32__4585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4585__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4585__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4585__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4585__count)));
                            vlSelf->__Vfunc_leading_zero32__4585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4585__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4585__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4585__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4585__count)));
                            vlSelf->__Vfunc_leading_zero32__4585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4585__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4585__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4585__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4585__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4585__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4585__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4585__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4585__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4597__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4597__part 
                            = vlSelf->__Vfunc_leading_zero32__4597__value;
                        vlSelf->__Vfunc_leading_zero32__4597__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4597__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4597__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4597__count)));
                            vlSelf->__Vfunc_leading_zero32__4597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4597__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4597__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4597__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4597__count)));
                            vlSelf->__Vfunc_leading_zero32__4597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4597__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4597__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4597__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4597__count)));
                            vlSelf->__Vfunc_leading_zero32__4597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4597__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4597__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4597__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4597__count)));
                            vlSelf->__Vfunc_leading_zero32__4597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4597__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4597__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4597__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4597__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4597__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4597__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4597__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4597__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4609__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4609__part 
                            = vlSelf->__Vfunc_leading_zero32__4609__value;
                        vlSelf->__Vfunc_leading_zero32__4609__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4609__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4609__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4609__count)));
                            vlSelf->__Vfunc_leading_zero32__4609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4609__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4609__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4609__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4609__count)));
                            vlSelf->__Vfunc_leading_zero32__4609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4609__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4609__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4609__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4609__count)));
                            vlSelf->__Vfunc_leading_zero32__4609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4609__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4609__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4609__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4609__count)));
                            vlSelf->__Vfunc_leading_zero32__4609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4609__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4609__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4609__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4609__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4609__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4609__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4609__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4609__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4621__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4621__part 
                            = vlSelf->__Vfunc_leading_zero32__4621__value;
                        vlSelf->__Vfunc_leading_zero32__4621__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4621__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4621__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4621__count)));
                            vlSelf->__Vfunc_leading_zero32__4621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4621__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4621__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4621__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4621__count)));
                            vlSelf->__Vfunc_leading_zero32__4621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4621__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4621__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4621__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4621__count)));
                            vlSelf->__Vfunc_leading_zero32__4621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4621__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4621__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4621__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4621__count)));
                            vlSelf->__Vfunc_leading_zero32__4621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4621__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4621__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4621__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4621__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4621__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4621__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4621__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4621__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4633__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4633__part 
                            = vlSelf->__Vfunc_leading_zero32__4633__value;
                        vlSelf->__Vfunc_leading_zero32__4633__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4633__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4633__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4633__count)));
                            vlSelf->__Vfunc_leading_zero32__4633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4633__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4633__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4633__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4633__count)));
                            vlSelf->__Vfunc_leading_zero32__4633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4633__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4633__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4633__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4633__count)));
                            vlSelf->__Vfunc_leading_zero32__4633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4633__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4633__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4633__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4633__count)));
                            vlSelf->__Vfunc_leading_zero32__4633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4633__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4633__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4633__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4633__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4633__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4633__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4633__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4633__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4645__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4645__part 
                            = vlSelf->__Vfunc_leading_zero32__4645__value;
                        vlSelf->__Vfunc_leading_zero32__4645__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4645__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4645__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4645__count)));
                            vlSelf->__Vfunc_leading_zero32__4645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4645__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4645__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4645__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4645__count)));
                            vlSelf->__Vfunc_leading_zero32__4645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4645__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4645__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4645__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4645__count)));
                            vlSelf->__Vfunc_leading_zero32__4645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4645__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4645__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4645__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4645__count)));
                            vlSelf->__Vfunc_leading_zero32__4645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4645__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4645__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4645__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4645__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4645__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4645__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4645__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4645__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4657__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4657__part 
                            = vlSelf->__Vfunc_leading_zero32__4657__value;
                        vlSelf->__Vfunc_leading_zero32__4657__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4657__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4657__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4657__count)));
                            vlSelf->__Vfunc_leading_zero32__4657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4657__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4657__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4657__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4657__count)));
                            vlSelf->__Vfunc_leading_zero32__4657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4657__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4657__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4657__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4657__count)));
                            vlSelf->__Vfunc_leading_zero32__4657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4657__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4657__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4657__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4657__count)));
                            vlSelf->__Vfunc_leading_zero32__4657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4657__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4657__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4657__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4657__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4657__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4657__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4657__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4657__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4669__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4669__part 
                            = vlSelf->__Vfunc_leading_zero32__4669__value;
                        vlSelf->__Vfunc_leading_zero32__4669__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4669__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4669__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4669__count)));
                            vlSelf->__Vfunc_leading_zero32__4669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4669__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4669__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4669__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4669__count)));
                            vlSelf->__Vfunc_leading_zero32__4669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4669__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4669__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4669__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4669__count)));
                            vlSelf->__Vfunc_leading_zero32__4669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4669__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4669__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4669__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4669__count)));
                            vlSelf->__Vfunc_leading_zero32__4669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4669__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4669__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4669__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4669__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4669__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4669__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4669__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4669__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4681__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4681__part 
                            = vlSelf->__Vfunc_leading_zero32__4681__value;
                        vlSelf->__Vfunc_leading_zero32__4681__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4681__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4681__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4681__count)));
                            vlSelf->__Vfunc_leading_zero32__4681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4681__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4681__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4681__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4681__count)));
                            vlSelf->__Vfunc_leading_zero32__4681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4681__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4681__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4681__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4681__count)));
                            vlSelf->__Vfunc_leading_zero32__4681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4681__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4681__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4681__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4681__count)));
                            vlSelf->__Vfunc_leading_zero32__4681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4681__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4681__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4681__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4681__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4681__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4681__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4681__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4681__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4693__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4693__part 
                            = vlSelf->__Vfunc_leading_zero32__4693__value;
                        vlSelf->__Vfunc_leading_zero32__4693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4693__count)));
                            vlSelf->__Vfunc_leading_zero32__4693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4693__count)));
                            vlSelf->__Vfunc_leading_zero32__4693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4693__count)));
                            vlSelf->__Vfunc_leading_zero32__4693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4693__count)));
                            vlSelf->__Vfunc_leading_zero32__4693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4693__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4705__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4705__part 
                            = vlSelf->__Vfunc_leading_zero32__4705__value;
                        vlSelf->__Vfunc_leading_zero32__4705__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4705__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4705__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4705__count)));
                            vlSelf->__Vfunc_leading_zero32__4705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4705__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4705__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4705__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4705__count)));
                            vlSelf->__Vfunc_leading_zero32__4705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4705__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4705__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4705__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4705__count)));
                            vlSelf->__Vfunc_leading_zero32__4705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4705__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4705__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4705__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4705__count)));
                            vlSelf->__Vfunc_leading_zero32__4705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4705__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4705__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4705__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4705__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4705__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4705__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4705__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4705__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4717__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4717__part 
                            = vlSelf->__Vfunc_leading_zero32__4717__value;
                        vlSelf->__Vfunc_leading_zero32__4717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4717__count)));
                            vlSelf->__Vfunc_leading_zero32__4717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4717__count)));
                            vlSelf->__Vfunc_leading_zero32__4717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4717__count)));
                            vlSelf->__Vfunc_leading_zero32__4717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4717__count)));
                            vlSelf->__Vfunc_leading_zero32__4717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4729__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4729__part 
                            = vlSelf->__Vfunc_leading_zero32__4729__value;
                        vlSelf->__Vfunc_leading_zero32__4729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4729__count)));
                            vlSelf->__Vfunc_leading_zero32__4729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4729__count)));
                            vlSelf->__Vfunc_leading_zero32__4729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4729__count)));
                            vlSelf->__Vfunc_leading_zero32__4729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4729__count)));
                            vlSelf->__Vfunc_leading_zero32__4729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4741__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4741__part 
                            = vlSelf->__Vfunc_leading_zero32__4741__value;
                        vlSelf->__Vfunc_leading_zero32__4741__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4741__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4741__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4741__count)));
                            vlSelf->__Vfunc_leading_zero32__4741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4741__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4741__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4741__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4741__count)));
                            vlSelf->__Vfunc_leading_zero32__4741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4741__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4741__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4741__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4741__count)));
                            vlSelf->__Vfunc_leading_zero32__4741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4741__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4741__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4741__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4741__count)));
                            vlSelf->__Vfunc_leading_zero32__4741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4741__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4741__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4741__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4741__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4741__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4741__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4741__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4741__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4753__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4753__part 
                            = vlSelf->__Vfunc_leading_zero32__4753__value;
                        vlSelf->__Vfunc_leading_zero32__4753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4753__count)));
                            vlSelf->__Vfunc_leading_zero32__4753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4753__count)));
                            vlSelf->__Vfunc_leading_zero32__4753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4753__count)));
                            vlSelf->__Vfunc_leading_zero32__4753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4753__count)));
                            vlSelf->__Vfunc_leading_zero32__4753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4753__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1686__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1686__part 
                            = vlSelf->__Vfunc_leading_zero32__1686__value;
                        vlSelf->__Vfunc_leading_zero32__1686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                            vlSelf->__Vfunc_leading_zero32__1686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1698__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1698__part 
                            = vlSelf->__Vfunc_leading_zero32__1698__value;
                        vlSelf->__Vfunc_leading_zero32__1698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                            vlSelf->__Vfunc_leading_zero32__1698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1710__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1710__part 
                            = vlSelf->__Vfunc_leading_zero32__1710__value;
                        vlSelf->__Vfunc_leading_zero32__1710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                            vlSelf->__Vfunc_leading_zero32__1710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1722__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1722__part 
                            = vlSelf->__Vfunc_leading_zero32__1722__value;
                        vlSelf->__Vfunc_leading_zero32__1722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                            vlSelf->__Vfunc_leading_zero32__1722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1734__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1734__part 
                            = vlSelf->__Vfunc_leading_zero32__1734__value;
                        vlSelf->__Vfunc_leading_zero32__1734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                            vlSelf->__Vfunc_leading_zero32__1734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1746__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1746__part 
                            = vlSelf->__Vfunc_leading_zero32__1746__value;
                        vlSelf->__Vfunc_leading_zero32__1746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                            vlSelf->__Vfunc_leading_zero32__1746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1758__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1758__part 
                            = vlSelf->__Vfunc_leading_zero32__1758__value;
                        vlSelf->__Vfunc_leading_zero32__1758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                            vlSelf->__Vfunc_leading_zero32__1758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1770__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1770__part 
                            = vlSelf->__Vfunc_leading_zero32__1770__value;
                        vlSelf->__Vfunc_leading_zero32__1770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                            vlSelf->__Vfunc_leading_zero32__1770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1782__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1782__part 
                            = vlSelf->__Vfunc_leading_zero32__1782__value;
                        vlSelf->__Vfunc_leading_zero32__1782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                            vlSelf->__Vfunc_leading_zero32__1782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1794__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1794__part 
                            = vlSelf->__Vfunc_leading_zero32__1794__value;
                        vlSelf->__Vfunc_leading_zero32__1794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                            vlSelf->__Vfunc_leading_zero32__1794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1806__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1806__part 
                            = vlSelf->__Vfunc_leading_zero32__1806__value;
                        vlSelf->__Vfunc_leading_zero32__1806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                            vlSelf->__Vfunc_leading_zero32__1806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1818__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1818__part 
                            = vlSelf->__Vfunc_leading_zero32__1818__value;
                        vlSelf->__Vfunc_leading_zero32__1818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                            vlSelf->__Vfunc_leading_zero32__1818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1830__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1830__part 
                            = vlSelf->__Vfunc_leading_zero32__1830__value;
                        vlSelf->__Vfunc_leading_zero32__1830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                            vlSelf->__Vfunc_leading_zero32__1830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1842__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1842__part 
                            = vlSelf->__Vfunc_leading_zero32__1842__value;
                        vlSelf->__Vfunc_leading_zero32__1842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                            vlSelf->__Vfunc_leading_zero32__1842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1854__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1854__part 
                            = vlSelf->__Vfunc_leading_zero32__1854__value;
                        vlSelf->__Vfunc_leading_zero32__1854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                            vlSelf->__Vfunc_leading_zero32__1854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1866__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1866__part 
                            = vlSelf->__Vfunc_leading_zero32__1866__value;
                        vlSelf->__Vfunc_leading_zero32__1866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                            vlSelf->__Vfunc_leading_zero32__1866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1878__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1878__part 
                            = vlSelf->__Vfunc_leading_zero32__1878__value;
                        vlSelf->__Vfunc_leading_zero32__1878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                            vlSelf->__Vfunc_leading_zero32__1878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1890__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1890__part 
                            = vlSelf->__Vfunc_leading_zero32__1890__value;
                        vlSelf->__Vfunc_leading_zero32__1890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                            vlSelf->__Vfunc_leading_zero32__1890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1902__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1902__part 
                            = vlSelf->__Vfunc_leading_zero32__1902__value;
                        vlSelf->__Vfunc_leading_zero32__1902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                            vlSelf->__Vfunc_leading_zero32__1902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1914__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1914__part 
                            = vlSelf->__Vfunc_leading_zero32__1914__value;
                        vlSelf->__Vfunc_leading_zero32__1914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                            vlSelf->__Vfunc_leading_zero32__1914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1926__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1926__part 
                            = vlSelf->__Vfunc_leading_zero32__1926__value;
                        vlSelf->__Vfunc_leading_zero32__1926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                            vlSelf->__Vfunc_leading_zero32__1926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1926__Vfuncout)) 
                             - (IData)(8U))));
}
