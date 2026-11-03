// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__14(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2532__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2532__part 
                            = vlSelf->__Vfunc_leading_zero32__2532__value;
                        vlSelf->__Vfunc_leading_zero32__2532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2532__count)));
                            vlSelf->__Vfunc_leading_zero32__2532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2532__count)));
                            vlSelf->__Vfunc_leading_zero32__2532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2532__count)));
                            vlSelf->__Vfunc_leading_zero32__2532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2532__count)));
                            vlSelf->__Vfunc_leading_zero32__2532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2532__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2544__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2544__part 
                            = vlSelf->__Vfunc_leading_zero32__2544__value;
                        vlSelf->__Vfunc_leading_zero32__2544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2544__count)));
                            vlSelf->__Vfunc_leading_zero32__2544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2544__count)));
                            vlSelf->__Vfunc_leading_zero32__2544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2544__count)));
                            vlSelf->__Vfunc_leading_zero32__2544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2544__count)));
                            vlSelf->__Vfunc_leading_zero32__2544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2544__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2556__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2556__part 
                            = vlSelf->__Vfunc_leading_zero32__2556__value;
                        vlSelf->__Vfunc_leading_zero32__2556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2556__count)));
                            vlSelf->__Vfunc_leading_zero32__2556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2556__count)));
                            vlSelf->__Vfunc_leading_zero32__2556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2556__count)));
                            vlSelf->__Vfunc_leading_zero32__2556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2556__count)));
                            vlSelf->__Vfunc_leading_zero32__2556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2556__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2568__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2568__part 
                            = vlSelf->__Vfunc_leading_zero32__2568__value;
                        vlSelf->__Vfunc_leading_zero32__2568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2568__count)));
                            vlSelf->__Vfunc_leading_zero32__2568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2568__count)));
                            vlSelf->__Vfunc_leading_zero32__2568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2568__count)));
                            vlSelf->__Vfunc_leading_zero32__2568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2568__count)));
                            vlSelf->__Vfunc_leading_zero32__2568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2568__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2580__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2580__part 
                            = vlSelf->__Vfunc_leading_zero32__2580__value;
                        vlSelf->__Vfunc_leading_zero32__2580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2580__count)));
                            vlSelf->__Vfunc_leading_zero32__2580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2580__count)));
                            vlSelf->__Vfunc_leading_zero32__2580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2580__count)));
                            vlSelf->__Vfunc_leading_zero32__2580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2580__count)));
                            vlSelf->__Vfunc_leading_zero32__2580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2580__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2592__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2592__part 
                            = vlSelf->__Vfunc_leading_zero32__2592__value;
                        vlSelf->__Vfunc_leading_zero32__2592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2592__count)));
                            vlSelf->__Vfunc_leading_zero32__2592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2592__count)));
                            vlSelf->__Vfunc_leading_zero32__2592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2592__count)));
                            vlSelf->__Vfunc_leading_zero32__2592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2592__count)));
                            vlSelf->__Vfunc_leading_zero32__2592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2592__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2604__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2604__part 
                            = vlSelf->__Vfunc_leading_zero32__2604__value;
                        vlSelf->__Vfunc_leading_zero32__2604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2604__count)));
                            vlSelf->__Vfunc_leading_zero32__2604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2604__count)));
                            vlSelf->__Vfunc_leading_zero32__2604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2604__count)));
                            vlSelf->__Vfunc_leading_zero32__2604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2604__count)));
                            vlSelf->__Vfunc_leading_zero32__2604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2604__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2616__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2616__part 
                            = vlSelf->__Vfunc_leading_zero32__2616__value;
                        vlSelf->__Vfunc_leading_zero32__2616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2616__count)));
                            vlSelf->__Vfunc_leading_zero32__2616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2616__count)));
                            vlSelf->__Vfunc_leading_zero32__2616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2616__count)));
                            vlSelf->__Vfunc_leading_zero32__2616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2616__count)));
                            vlSelf->__Vfunc_leading_zero32__2616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2616__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2628__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2628__part 
                            = vlSelf->__Vfunc_leading_zero32__2628__value;
                        vlSelf->__Vfunc_leading_zero32__2628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2628__count)));
                            vlSelf->__Vfunc_leading_zero32__2628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2628__count)));
                            vlSelf->__Vfunc_leading_zero32__2628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2628__count)));
                            vlSelf->__Vfunc_leading_zero32__2628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2628__count)));
                            vlSelf->__Vfunc_leading_zero32__2628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2628__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2640__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2640__part 
                            = vlSelf->__Vfunc_leading_zero32__2640__value;
                        vlSelf->__Vfunc_leading_zero32__2640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2640__count)));
                            vlSelf->__Vfunc_leading_zero32__2640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2640__count)));
                            vlSelf->__Vfunc_leading_zero32__2640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2640__count)));
                            vlSelf->__Vfunc_leading_zero32__2640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2640__count)));
                            vlSelf->__Vfunc_leading_zero32__2640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2640__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2652__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2652__part 
                            = vlSelf->__Vfunc_leading_zero32__2652__value;
                        vlSelf->__Vfunc_leading_zero32__2652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2652__count)));
                            vlSelf->__Vfunc_leading_zero32__2652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2652__count)));
                            vlSelf->__Vfunc_leading_zero32__2652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2652__count)));
                            vlSelf->__Vfunc_leading_zero32__2652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2652__count)));
                            vlSelf->__Vfunc_leading_zero32__2652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2652__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2664__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2664__part 
                            = vlSelf->__Vfunc_leading_zero32__2664__value;
                        vlSelf->__Vfunc_leading_zero32__2664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2664__count)));
                            vlSelf->__Vfunc_leading_zero32__2664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2664__count)));
                            vlSelf->__Vfunc_leading_zero32__2664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2664__count)));
                            vlSelf->__Vfunc_leading_zero32__2664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2664__count)));
                            vlSelf->__Vfunc_leading_zero32__2664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2664__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2676__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2676__part 
                            = vlSelf->__Vfunc_leading_zero32__2676__value;
                        vlSelf->__Vfunc_leading_zero32__2676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2676__count)));
                            vlSelf->__Vfunc_leading_zero32__2676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2676__count)));
                            vlSelf->__Vfunc_leading_zero32__2676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2676__count)));
                            vlSelf->__Vfunc_leading_zero32__2676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2676__count)));
                            vlSelf->__Vfunc_leading_zero32__2676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2676__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2688__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2688__part 
                            = vlSelf->__Vfunc_leading_zero32__2688__value;
                        vlSelf->__Vfunc_leading_zero32__2688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2688__count)));
                            vlSelf->__Vfunc_leading_zero32__2688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2688__count)));
                            vlSelf->__Vfunc_leading_zero32__2688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2688__count)));
                            vlSelf->__Vfunc_leading_zero32__2688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2688__count)));
                            vlSelf->__Vfunc_leading_zero32__2688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2688__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2700__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2700__part 
                            = vlSelf->__Vfunc_leading_zero32__2700__value;
                        vlSelf->__Vfunc_leading_zero32__2700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2700__count)));
                            vlSelf->__Vfunc_leading_zero32__2700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2700__count)));
                            vlSelf->__Vfunc_leading_zero32__2700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2700__count)));
                            vlSelf->__Vfunc_leading_zero32__2700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2700__count)));
                            vlSelf->__Vfunc_leading_zero32__2700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2700__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2712__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2712__part 
                            = vlSelf->__Vfunc_leading_zero32__2712__value;
                        vlSelf->__Vfunc_leading_zero32__2712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                            vlSelf->__Vfunc_leading_zero32__2712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2712__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2724__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2724__part 
                            = vlSelf->__Vfunc_leading_zero32__2724__value;
                        vlSelf->__Vfunc_leading_zero32__2724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                            vlSelf->__Vfunc_leading_zero32__2724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2724__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2736__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2736__part 
                            = vlSelf->__Vfunc_leading_zero32__2736__value;
                        vlSelf->__Vfunc_leading_zero32__2736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                            vlSelf->__Vfunc_leading_zero32__2736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2736__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2748__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2748__part 
                            = vlSelf->__Vfunc_leading_zero32__2748__value;
                        vlSelf->__Vfunc_leading_zero32__2748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                            vlSelf->__Vfunc_leading_zero32__2748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2748__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2760__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2760__part 
                            = vlSelf->__Vfunc_leading_zero32__2760__value;
                        vlSelf->__Vfunc_leading_zero32__2760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                            vlSelf->__Vfunc_leading_zero32__2760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2760__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2772__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2772__part 
                            = vlSelf->__Vfunc_leading_zero32__2772__value;
                        vlSelf->__Vfunc_leading_zero32__2772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                            vlSelf->__Vfunc_leading_zero32__2772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2772__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2784__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2784__part 
                            = vlSelf->__Vfunc_leading_zero32__2784__value;
                        vlSelf->__Vfunc_leading_zero32__2784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                            vlSelf->__Vfunc_leading_zero32__2784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2784__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2796__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2796__part 
                            = vlSelf->__Vfunc_leading_zero32__2796__value;
                        vlSelf->__Vfunc_leading_zero32__2796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                            vlSelf->__Vfunc_leading_zero32__2796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2796__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2808__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2808__part 
                            = vlSelf->__Vfunc_leading_zero32__2808__value;
                        vlSelf->__Vfunc_leading_zero32__2808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                            vlSelf->__Vfunc_leading_zero32__2808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2808__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2820__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2820__part 
                            = vlSelf->__Vfunc_leading_zero32__2820__value;
                        vlSelf->__Vfunc_leading_zero32__2820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                            vlSelf->__Vfunc_leading_zero32__2820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2820__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2832__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2832__part 
                            = vlSelf->__Vfunc_leading_zero32__2832__value;
                        vlSelf->__Vfunc_leading_zero32__2832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                            vlSelf->__Vfunc_leading_zero32__2832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2832__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2844__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2844__part 
                            = vlSelf->__Vfunc_leading_zero32__2844__value;
                        vlSelf->__Vfunc_leading_zero32__2844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                            vlSelf->__Vfunc_leading_zero32__2844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2844__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2856__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2856__part 
                            = vlSelf->__Vfunc_leading_zero32__2856__value;
                        vlSelf->__Vfunc_leading_zero32__2856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                            vlSelf->__Vfunc_leading_zero32__2856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2856__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2868__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2868__part 
                            = vlSelf->__Vfunc_leading_zero32__2868__value;
                        vlSelf->__Vfunc_leading_zero32__2868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                            vlSelf->__Vfunc_leading_zero32__2868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2868__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2880__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2880__part 
                            = vlSelf->__Vfunc_leading_zero32__2880__value;
                        vlSelf->__Vfunc_leading_zero32__2880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                            vlSelf->__Vfunc_leading_zero32__2880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2880__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2892__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2892__part 
                            = vlSelf->__Vfunc_leading_zero32__2892__value;
                        vlSelf->__Vfunc_leading_zero32__2892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                            vlSelf->__Vfunc_leading_zero32__2892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2892__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2904__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2904__part 
                            = vlSelf->__Vfunc_leading_zero32__2904__value;
                        vlSelf->__Vfunc_leading_zero32__2904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                            vlSelf->__Vfunc_leading_zero32__2904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2916__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2916__part 
                            = vlSelf->__Vfunc_leading_zero32__2916__value;
                        vlSelf->__Vfunc_leading_zero32__2916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                            vlSelf->__Vfunc_leading_zero32__2916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2928__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2928__part 
                            = vlSelf->__Vfunc_leading_zero32__2928__value;
                        vlSelf->__Vfunc_leading_zero32__2928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                            vlSelf->__Vfunc_leading_zero32__2928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2940__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2940__part 
                            = vlSelf->__Vfunc_leading_zero32__2940__value;
                        vlSelf->__Vfunc_leading_zero32__2940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                            vlSelf->__Vfunc_leading_zero32__2940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2952__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2952__part 
                            = vlSelf->__Vfunc_leading_zero32__2952__value;
                        vlSelf->__Vfunc_leading_zero32__2952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                            vlSelf->__Vfunc_leading_zero32__2952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2964__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2964__part 
                            = vlSelf->__Vfunc_leading_zero32__2964__value;
                        vlSelf->__Vfunc_leading_zero32__2964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                            vlSelf->__Vfunc_leading_zero32__2964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2976__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2976__part 
                            = vlSelf->__Vfunc_leading_zero32__2976__value;
                        vlSelf->__Vfunc_leading_zero32__2976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                            vlSelf->__Vfunc_leading_zero32__2976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2976__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2988__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2988__part 
                            = vlSelf->__Vfunc_leading_zero32__2988__value;
                        vlSelf->__Vfunc_leading_zero32__2988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                            vlSelf->__Vfunc_leading_zero32__2988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2988__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3000__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3000__part 
                            = vlSelf->__Vfunc_leading_zero32__3000__value;
                        vlSelf->__Vfunc_leading_zero32__3000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                            vlSelf->__Vfunc_leading_zero32__3000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3000__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3012__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3012__part 
                            = vlSelf->__Vfunc_leading_zero32__3012__value;
                        vlSelf->__Vfunc_leading_zero32__3012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                            vlSelf->__Vfunc_leading_zero32__3012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3012__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3024__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3024__part 
                            = vlSelf->__Vfunc_leading_zero32__3024__value;
                        vlSelf->__Vfunc_leading_zero32__3024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                            vlSelf->__Vfunc_leading_zero32__3024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3024__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3036__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3036__part 
                            = vlSelf->__Vfunc_leading_zero32__3036__value;
                        vlSelf->__Vfunc_leading_zero32__3036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                            vlSelf->__Vfunc_leading_zero32__3036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3036__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3048__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3048__part 
                            = vlSelf->__Vfunc_leading_zero32__3048__value;
                        vlSelf->__Vfunc_leading_zero32__3048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                            vlSelf->__Vfunc_leading_zero32__3048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3048__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3060__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3060__part 
                            = vlSelf->__Vfunc_leading_zero32__3060__value;
                        vlSelf->__Vfunc_leading_zero32__3060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3060__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3072__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3072__part 
                            = vlSelf->__Vfunc_leading_zero32__3072__value;
                        vlSelf->__Vfunc_leading_zero32__3072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3072__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3084__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3084__part 
                            = vlSelf->__Vfunc_leading_zero32__3084__value;
                        vlSelf->__Vfunc_leading_zero32__3084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3084__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3096__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3096__part 
                            = vlSelf->__Vfunc_leading_zero32__3096__value;
                        vlSelf->__Vfunc_leading_zero32__3096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3096__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3108__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3108__part 
                            = vlSelf->__Vfunc_leading_zero32__3108__value;
                        vlSelf->__Vfunc_leading_zero32__3108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3120__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3120__part 
                            = vlSelf->__Vfunc_leading_zero32__3120__value;
                        vlSelf->__Vfunc_leading_zero32__3120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3132__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3132__part 
                            = vlSelf->__Vfunc_leading_zero32__3132__value;
                        vlSelf->__Vfunc_leading_zero32__3132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3144__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3144__part 
                            = vlSelf->__Vfunc_leading_zero32__3144__value;
                        vlSelf->__Vfunc_leading_zero32__3144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3156__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3156__part 
                            = vlSelf->__Vfunc_leading_zero32__3156__value;
                        vlSelf->__Vfunc_leading_zero32__3156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3168__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3168__part 
                            = vlSelf->__Vfunc_leading_zero32__3168__value;
                        vlSelf->__Vfunc_leading_zero32__3168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3168__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3180__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3180__part 
                            = vlSelf->__Vfunc_leading_zero32__3180__value;
                        vlSelf->__Vfunc_leading_zero32__3180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3192__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3192__part 
                            = vlSelf->__Vfunc_leading_zero32__3192__value;
                        vlSelf->__Vfunc_leading_zero32__3192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3204__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3204__part 
                            = vlSelf->__Vfunc_leading_zero32__3204__value;
                        vlSelf->__Vfunc_leading_zero32__3204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3216__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3216__part 
                            = vlSelf->__Vfunc_leading_zero32__3216__value;
                        vlSelf->__Vfunc_leading_zero32__3216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3228__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3228__part 
                            = vlSelf->__Vfunc_leading_zero32__3228__value;
                        vlSelf->__Vfunc_leading_zero32__3228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3240__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3240__part 
                            = vlSelf->__Vfunc_leading_zero32__3240__value;
                        vlSelf->__Vfunc_leading_zero32__3240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3252__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3252__part 
                            = vlSelf->__Vfunc_leading_zero32__3252__value;
                        vlSelf->__Vfunc_leading_zero32__3252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3264__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3264__part 
                            = vlSelf->__Vfunc_leading_zero32__3264__value;
                        vlSelf->__Vfunc_leading_zero32__3264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3276__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3276__part 
                            = vlSelf->__Vfunc_leading_zero32__3276__value;
                        vlSelf->__Vfunc_leading_zero32__3276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3288__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3288__part 
                            = vlSelf->__Vfunc_leading_zero32__3288__value;
                        vlSelf->__Vfunc_leading_zero32__3288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3300__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3300__part 
                            = vlSelf->__Vfunc_leading_zero32__3300__value;
                        vlSelf->__Vfunc_leading_zero32__3300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3312__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3312__part 
                            = vlSelf->__Vfunc_leading_zero32__3312__value;
                        vlSelf->__Vfunc_leading_zero32__3312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3324__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3324__part 
                            = vlSelf->__Vfunc_leading_zero32__3324__value;
                        vlSelf->__Vfunc_leading_zero32__3324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3336__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3336__part 
                            = vlSelf->__Vfunc_leading_zero32__3336__value;
                        vlSelf->__Vfunc_leading_zero32__3336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3348__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3348__part 
                            = vlSelf->__Vfunc_leading_zero32__3348__value;
                        vlSelf->__Vfunc_leading_zero32__3348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3360__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3360__part 
                            = vlSelf->__Vfunc_leading_zero32__3360__value;
                        vlSelf->__Vfunc_leading_zero32__3360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3372__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3372__part 
                            = vlSelf->__Vfunc_leading_zero32__3372__value;
                        vlSelf->__Vfunc_leading_zero32__3372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3384__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3384__part 
                            = vlSelf->__Vfunc_leading_zero32__3384__value;
                        vlSelf->__Vfunc_leading_zero32__3384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3396__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3396__part 
                            = vlSelf->__Vfunc_leading_zero32__3396__value;
                        vlSelf->__Vfunc_leading_zero32__3396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3408__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3408__part 
                            = vlSelf->__Vfunc_leading_zero32__3408__value;
                        vlSelf->__Vfunc_leading_zero32__3408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3420__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3420__part 
                            = vlSelf->__Vfunc_leading_zero32__3420__value;
                        vlSelf->__Vfunc_leading_zero32__3420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3432__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3432__part 
                            = vlSelf->__Vfunc_leading_zero32__3432__value;
                        vlSelf->__Vfunc_leading_zero32__3432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3444__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3444__part 
                            = vlSelf->__Vfunc_leading_zero32__3444__value;
                        vlSelf->__Vfunc_leading_zero32__3444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3456__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3456__part 
                            = vlSelf->__Vfunc_leading_zero32__3456__value;
                        vlSelf->__Vfunc_leading_zero32__3456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3468__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3468__part 
                            = vlSelf->__Vfunc_leading_zero32__3468__value;
                        vlSelf->__Vfunc_leading_zero32__3468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3480__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3480__part 
                            = vlSelf->__Vfunc_leading_zero32__3480__value;
                        vlSelf->__Vfunc_leading_zero32__3480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3492__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3492__part 
                            = vlSelf->__Vfunc_leading_zero32__3492__value;
                        vlSelf->__Vfunc_leading_zero32__3492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3504__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3504__part 
                            = vlSelf->__Vfunc_leading_zero32__3504__value;
                        vlSelf->__Vfunc_leading_zero32__3504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3516__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3516__part 
                            = vlSelf->__Vfunc_leading_zero32__3516__value;
                        vlSelf->__Vfunc_leading_zero32__3516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3528__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3528__part 
                            = vlSelf->__Vfunc_leading_zero32__3528__value;
                        vlSelf->__Vfunc_leading_zero32__3528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3540__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3540__part 
                            = vlSelf->__Vfunc_leading_zero32__3540__value;
                        vlSelf->__Vfunc_leading_zero32__3540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3552__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3552__part 
                            = vlSelf->__Vfunc_leading_zero32__3552__value;
                        vlSelf->__Vfunc_leading_zero32__3552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3564__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3564__part 
                            = vlSelf->__Vfunc_leading_zero32__3564__value;
                        vlSelf->__Vfunc_leading_zero32__3564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3576__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3576__part 
                            = vlSelf->__Vfunc_leading_zero32__3576__value;
                        vlSelf->__Vfunc_leading_zero32__3576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3588__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3588__part 
                            = vlSelf->__Vfunc_leading_zero32__3588__value;
                        vlSelf->__Vfunc_leading_zero32__3588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3600__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3600__part 
                            = vlSelf->__Vfunc_leading_zero32__3600__value;
                        vlSelf->__Vfunc_leading_zero32__3600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3612__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3612__part 
                            = vlSelf->__Vfunc_leading_zero32__3612__value;
                        vlSelf->__Vfunc_leading_zero32__3612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3624__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3624__part 
                            = vlSelf->__Vfunc_leading_zero32__3624__value;
                        vlSelf->__Vfunc_leading_zero32__3624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3636__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3636__part 
                            = vlSelf->__Vfunc_leading_zero32__3636__value;
                        vlSelf->__Vfunc_leading_zero32__3636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3648__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3648__part 
                            = vlSelf->__Vfunc_leading_zero32__3648__value;
                        vlSelf->__Vfunc_leading_zero32__3648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3660__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3660__part 
                            = vlSelf->__Vfunc_leading_zero32__3660__value;
                        vlSelf->__Vfunc_leading_zero32__3660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3672__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3672__part 
                            = vlSelf->__Vfunc_leading_zero32__3672__value;
                        vlSelf->__Vfunc_leading_zero32__3672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3684__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3684__part 
                            = vlSelf->__Vfunc_leading_zero32__3684__value;
                        vlSelf->__Vfunc_leading_zero32__3684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3696__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3696__part 
                            = vlSelf->__Vfunc_leading_zero32__3696__value;
                        vlSelf->__Vfunc_leading_zero32__3696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3708__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3708__part 
                            = vlSelf->__Vfunc_leading_zero32__3708__value;
                        vlSelf->__Vfunc_leading_zero32__3708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3720__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3720__part 
                            = vlSelf->__Vfunc_leading_zero32__3720__value;
                        vlSelf->__Vfunc_leading_zero32__3720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3732__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3732__part 
                            = vlSelf->__Vfunc_leading_zero32__3732__value;
                        vlSelf->__Vfunc_leading_zero32__3732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3744__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3744__part 
                            = vlSelf->__Vfunc_leading_zero32__3744__value;
                        vlSelf->__Vfunc_leading_zero32__3744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3756__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3756__part 
                            = vlSelf->__Vfunc_leading_zero32__3756__value;
                        vlSelf->__Vfunc_leading_zero32__3756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3768__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3768__part 
                            = vlSelf->__Vfunc_leading_zero32__3768__value;
                        vlSelf->__Vfunc_leading_zero32__3768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3780__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3780__part 
                            = vlSelf->__Vfunc_leading_zero32__3780__value;
                        vlSelf->__Vfunc_leading_zero32__3780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3792__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3792__part 
                            = vlSelf->__Vfunc_leading_zero32__3792__value;
                        vlSelf->__Vfunc_leading_zero32__3792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3804__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3804__part 
                            = vlSelf->__Vfunc_leading_zero32__3804__value;
                        vlSelf->__Vfunc_leading_zero32__3804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3804__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3816__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3816__part 
                            = vlSelf->__Vfunc_leading_zero32__3816__value;
                        vlSelf->__Vfunc_leading_zero32__3816__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3816__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3816__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3816__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3816__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3816__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3828__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3828__part 
                            = vlSelf->__Vfunc_leading_zero32__3828__value;
                        vlSelf->__Vfunc_leading_zero32__3828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3828__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3840__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3840__part 
                            = vlSelf->__Vfunc_leading_zero32__3840__value;
                        vlSelf->__Vfunc_leading_zero32__3840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3840__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3852__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3852__part 
                            = vlSelf->__Vfunc_leading_zero32__3852__value;
                        vlSelf->__Vfunc_leading_zero32__3852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3852__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3864__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3864__part 
                            = vlSelf->__Vfunc_leading_zero32__3864__value;
                        vlSelf->__Vfunc_leading_zero32__3864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3864__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3876__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3876__part 
                            = vlSelf->__Vfunc_leading_zero32__3876__value;
                        vlSelf->__Vfunc_leading_zero32__3876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3876__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3888__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3888__part 
                            = vlSelf->__Vfunc_leading_zero32__3888__value;
                        vlSelf->__Vfunc_leading_zero32__3888__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3888__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3888__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3888__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3888__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3888__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3900__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3900__part 
                            = vlSelf->__Vfunc_leading_zero32__3900__value;
                        vlSelf->__Vfunc_leading_zero32__3900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3900__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3912__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3912__part 
                            = vlSelf->__Vfunc_leading_zero32__3912__value;
                        vlSelf->__Vfunc_leading_zero32__3912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3924__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3924__part 
                            = vlSelf->__Vfunc_leading_zero32__3924__value;
                        vlSelf->__Vfunc_leading_zero32__3924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3924__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3936__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3936__part 
                            = vlSelf->__Vfunc_leading_zero32__3936__value;
                        vlSelf->__Vfunc_leading_zero32__3936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3948__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3948__part 
                            = vlSelf->__Vfunc_leading_zero32__3948__value;
                        vlSelf->__Vfunc_leading_zero32__3948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3960__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3960__part 
                            = vlSelf->__Vfunc_leading_zero32__3960__value;
                        vlSelf->__Vfunc_leading_zero32__3960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3960__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3972__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3972__part 
                            = vlSelf->__Vfunc_leading_zero32__3972__value;
                        vlSelf->__Vfunc_leading_zero32__3972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3984__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3984__part 
                            = vlSelf->__Vfunc_leading_zero32__3984__value;
                        vlSelf->__Vfunc_leading_zero32__3984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3996__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3996__part 
                            = vlSelf->__Vfunc_leading_zero32__3996__value;
                        vlSelf->__Vfunc_leading_zero32__3996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3996__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4008__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4008__part 
                            = vlSelf->__Vfunc_leading_zero32__4008__value;
                        vlSelf->__Vfunc_leading_zero32__4008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4020__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4020__part 
                            = vlSelf->__Vfunc_leading_zero32__4020__value;
                        vlSelf->__Vfunc_leading_zero32__4020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4032__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4032__part 
                            = vlSelf->__Vfunc_leading_zero32__4032__value;
                        vlSelf->__Vfunc_leading_zero32__4032__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4032__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4032__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4032__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4032__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4032__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4044__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4044__part 
                            = vlSelf->__Vfunc_leading_zero32__4044__value;
                        vlSelf->__Vfunc_leading_zero32__4044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4056__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4056__part 
                            = vlSelf->__Vfunc_leading_zero32__4056__value;
                        vlSelf->__Vfunc_leading_zero32__4056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4068__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4068__part 
                            = vlSelf->__Vfunc_leading_zero32__4068__value;
                        vlSelf->__Vfunc_leading_zero32__4068__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4068__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4068__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4068__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4068__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4068__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4080__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4080__part 
                            = vlSelf->__Vfunc_leading_zero32__4080__value;
                        vlSelf->__Vfunc_leading_zero32__4080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4092__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4092__part 
                            = vlSelf->__Vfunc_leading_zero32__4092__value;
                        vlSelf->__Vfunc_leading_zero32__4092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4104__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4104__part 
                            = vlSelf->__Vfunc_leading_zero32__4104__value;
                        vlSelf->__Vfunc_leading_zero32__4104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4104__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4116__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4116__part 
                            = vlSelf->__Vfunc_leading_zero32__4116__value;
                        vlSelf->__Vfunc_leading_zero32__4116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4128__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4128__part 
                            = vlSelf->__Vfunc_leading_zero32__4128__value;
                        vlSelf->__Vfunc_leading_zero32__4128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4140__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4140__part 
                            = vlSelf->__Vfunc_leading_zero32__4140__value;
                        vlSelf->__Vfunc_leading_zero32__4140__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4140__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4140__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4140__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4140__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4140__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4152__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4152__part 
                            = vlSelf->__Vfunc_leading_zero32__4152__value;
                        vlSelf->__Vfunc_leading_zero32__4152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4152__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4164__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4164__part 
                            = vlSelf->__Vfunc_leading_zero32__4164__value;
                        vlSelf->__Vfunc_leading_zero32__4164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4164__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4176__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4176__part 
                            = vlSelf->__Vfunc_leading_zero32__4176__value;
                        vlSelf->__Vfunc_leading_zero32__4176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4176__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4188__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4188__part 
                            = vlSelf->__Vfunc_leading_zero32__4188__value;
                        vlSelf->__Vfunc_leading_zero32__4188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4200__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4200__part 
                            = vlSelf->__Vfunc_leading_zero32__4200__value;
                        vlSelf->__Vfunc_leading_zero32__4200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4212__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4212__part 
                            = vlSelf->__Vfunc_leading_zero32__4212__value;
                        vlSelf->__Vfunc_leading_zero32__4212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4212__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4224__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4224__part 
                            = vlSelf->__Vfunc_leading_zero32__4224__value;
                        vlSelf->__Vfunc_leading_zero32__4224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4236__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4236__part 
                            = vlSelf->__Vfunc_leading_zero32__4236__value;
                        vlSelf->__Vfunc_leading_zero32__4236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4248__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4248__part 
                            = vlSelf->__Vfunc_leading_zero32__4248__value;
                        vlSelf->__Vfunc_leading_zero32__4248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4248__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4260__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4272__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4272__part 
                            = vlSelf->__Vfunc_leading_zero32__4272__value;
                        vlSelf->__Vfunc_leading_zero32__4272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4272__count)));
                            vlSelf->__Vfunc_leading_zero32__4272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4272__count)));
                            vlSelf->__Vfunc_leading_zero32__4272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4272__count)));
                            vlSelf->__Vfunc_leading_zero32__4272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4272__count)));
                            vlSelf->__Vfunc_leading_zero32__4272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4272__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4284__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4284__part 
                            = vlSelf->__Vfunc_leading_zero32__4284__value;
                        vlSelf->__Vfunc_leading_zero32__4284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4284__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4296__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4308__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4308__part 
                            = vlSelf->__Vfunc_leading_zero32__4308__value;
                        vlSelf->__Vfunc_leading_zero32__4308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4308__count)));
                            vlSelf->__Vfunc_leading_zero32__4308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4308__count)));
                            vlSelf->__Vfunc_leading_zero32__4308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4308__count)));
                            vlSelf->__Vfunc_leading_zero32__4308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4308__count)));
                            vlSelf->__Vfunc_leading_zero32__4308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4308__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4320__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4320__part 
                            = vlSelf->__Vfunc_leading_zero32__4320__value;
                        vlSelf->__Vfunc_leading_zero32__4320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4320__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4332__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4344__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4344__part 
                            = vlSelf->__Vfunc_leading_zero32__4344__value;
                        vlSelf->__Vfunc_leading_zero32__4344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4344__count)));
                            vlSelf->__Vfunc_leading_zero32__4344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4344__count)));
                            vlSelf->__Vfunc_leading_zero32__4344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4344__count)));
                            vlSelf->__Vfunc_leading_zero32__4344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4344__count)));
                            vlSelf->__Vfunc_leading_zero32__4344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4344__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4356__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4356__part 
                            = vlSelf->__Vfunc_leading_zero32__4356__value;
                        vlSelf->__Vfunc_leading_zero32__4356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4356__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4368__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4380__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4380__part 
                            = vlSelf->__Vfunc_leading_zero32__4380__value;
                        vlSelf->__Vfunc_leading_zero32__4380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4380__count)));
                            vlSelf->__Vfunc_leading_zero32__4380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4380__count)));
                            vlSelf->__Vfunc_leading_zero32__4380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4380__count)));
                            vlSelf->__Vfunc_leading_zero32__4380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4380__count)));
                            vlSelf->__Vfunc_leading_zero32__4380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4380__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4392__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4392__part 
                            = vlSelf->__Vfunc_leading_zero32__4392__value;
                        vlSelf->__Vfunc_leading_zero32__4392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4392__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4404__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4416__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4416__part 
                            = vlSelf->__Vfunc_leading_zero32__4416__value;
                        vlSelf->__Vfunc_leading_zero32__4416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4416__count)));
                            vlSelf->__Vfunc_leading_zero32__4416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4416__count)));
                            vlSelf->__Vfunc_leading_zero32__4416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4416__count)));
                            vlSelf->__Vfunc_leading_zero32__4416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4416__count)));
                            vlSelf->__Vfunc_leading_zero32__4416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4416__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4428__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4428__part 
                            = vlSelf->__Vfunc_leading_zero32__4428__value;
                        vlSelf->__Vfunc_leading_zero32__4428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4440__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4452__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4452__part 
                            = vlSelf->__Vfunc_leading_zero32__4452__value;
                        vlSelf->__Vfunc_leading_zero32__4452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4452__count)));
                            vlSelf->__Vfunc_leading_zero32__4452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4452__count)));
                            vlSelf->__Vfunc_leading_zero32__4452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4452__count)));
                            vlSelf->__Vfunc_leading_zero32__4452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4452__count)));
                            vlSelf->__Vfunc_leading_zero32__4452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4464__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4464__part 
                            = vlSelf->__Vfunc_leading_zero32__4464__value;
                        vlSelf->__Vfunc_leading_zero32__4464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4476__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4488__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4488__part 
                            = vlSelf->__Vfunc_leading_zero32__4488__value;
                        vlSelf->__Vfunc_leading_zero32__4488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4488__count)));
                            vlSelf->__Vfunc_leading_zero32__4488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4488__count)));
                            vlSelf->__Vfunc_leading_zero32__4488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4488__count)));
                            vlSelf->__Vfunc_leading_zero32__4488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4488__count)));
                            vlSelf->__Vfunc_leading_zero32__4488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4500__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4500__part 
                            = vlSelf->__Vfunc_leading_zero32__4500__value;
                        vlSelf->__Vfunc_leading_zero32__4500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4512__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4524__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4524__part 
                            = vlSelf->__Vfunc_leading_zero32__4524__value;
                        vlSelf->__Vfunc_leading_zero32__4524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4524__count)));
                            vlSelf->__Vfunc_leading_zero32__4524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4524__count)));
                            vlSelf->__Vfunc_leading_zero32__4524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4524__count)));
                            vlSelf->__Vfunc_leading_zero32__4524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4524__count)));
                            vlSelf->__Vfunc_leading_zero32__4524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4536__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4536__part 
                            = vlSelf->__Vfunc_leading_zero32__4536__value;
                        vlSelf->__Vfunc_leading_zero32__4536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4548__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4560__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4560__part 
                            = vlSelf->__Vfunc_leading_zero32__4560__value;
                        vlSelf->__Vfunc_leading_zero32__4560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4560__count)));
                            vlSelf->__Vfunc_leading_zero32__4560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4560__count)));
                            vlSelf->__Vfunc_leading_zero32__4560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4560__count)));
                            vlSelf->__Vfunc_leading_zero32__4560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4560__count)));
                            vlSelf->__Vfunc_leading_zero32__4560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4572__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4572__part 
                            = vlSelf->__Vfunc_leading_zero32__4572__value;
                        vlSelf->__Vfunc_leading_zero32__4572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4584__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4596__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4596__part 
                            = vlSelf->__Vfunc_leading_zero32__4596__value;
                        vlSelf->__Vfunc_leading_zero32__4596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4596__count)));
                            vlSelf->__Vfunc_leading_zero32__4596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4596__count)));
                            vlSelf->__Vfunc_leading_zero32__4596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4596__count)));
                            vlSelf->__Vfunc_leading_zero32__4596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4596__count)));
                            vlSelf->__Vfunc_leading_zero32__4596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4608__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4608__part 
                            = vlSelf->__Vfunc_leading_zero32__4608__value;
                        vlSelf->__Vfunc_leading_zero32__4608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4620__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4632__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4632__part 
                            = vlSelf->__Vfunc_leading_zero32__4632__value;
                        vlSelf->__Vfunc_leading_zero32__4632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4632__count)));
                            vlSelf->__Vfunc_leading_zero32__4632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4632__count)));
                            vlSelf->__Vfunc_leading_zero32__4632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4632__count)));
                            vlSelf->__Vfunc_leading_zero32__4632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4632__count)));
                            vlSelf->__Vfunc_leading_zero32__4632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4632__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4644__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4644__part 
                            = vlSelf->__Vfunc_leading_zero32__4644__value;
                        vlSelf->__Vfunc_leading_zero32__4644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4656__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4668__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4668__part 
                            = vlSelf->__Vfunc_leading_zero32__4668__value;
                        vlSelf->__Vfunc_leading_zero32__4668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4668__count)));
                            vlSelf->__Vfunc_leading_zero32__4668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4668__count)));
                            vlSelf->__Vfunc_leading_zero32__4668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4668__count)));
                            vlSelf->__Vfunc_leading_zero32__4668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4668__count)));
                            vlSelf->__Vfunc_leading_zero32__4668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4680__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4680__part 
                            = vlSelf->__Vfunc_leading_zero32__4680__value;
                        vlSelf->__Vfunc_leading_zero32__4680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4692__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a;
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
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4704__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4704__part 
                            = vlSelf->__Vfunc_leading_zero32__4704__value;
                        vlSelf->__Vfunc_leading_zero32__4704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4704__count)));
                            vlSelf->__Vfunc_leading_zero32__4704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4704__count)));
                            vlSelf->__Vfunc_leading_zero32__4704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4704__count)));
                            vlSelf->__Vfunc_leading_zero32__4704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4704__count)));
                            vlSelf->__Vfunc_leading_zero32__4704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4716__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4716__part 
                            = vlSelf->__Vfunc_leading_zero32__4716__value;
                        vlSelf->__Vfunc_leading_zero32__4716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4728__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a;
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
}
